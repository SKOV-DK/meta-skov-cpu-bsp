// SPDX-License-Identifier: GPL-2.0-only
#include <errno.h>
#include <getopt.h>
#include <inttypes.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tee_client_api.h>

#include "system_data_ta.h"
#include "tlv.h"

#define SYSTEM_DATA_HEADER_SZ	offsetof(struct system_data_object, data)

static TEEC_Context ctx;
static TEEC_Session sess;

static int tee_open(void)
{
	TEEC_UUID uuid = TA_SYSTEM_DATA_UUID;
	TEEC_Result res;
	uint32_t origin;

	res = TEEC_InitializeContext(NULL, &ctx);
	if (res != TEEC_SUCCESS) {
		fprintf(stderr, "TEEC_InitializeContext failed: 0x%x\n", res);
		return -1;
	}

	res = TEEC_OpenSession(&ctx, &sess, &uuid, TEEC_LOGIN_PUBLIC,
			       NULL, NULL, &origin);
	if (res != TEEC_SUCCESS) {
		fprintf(stderr, "TEEC_OpenSession failed: 0x%x origin 0x%x\n",
			res, origin);
		TEEC_FinalizeContext(&ctx);
		return -1;
	}

	return 0;
}

static void tee_close(void)
{
	TEEC_CloseSession(&sess);
	TEEC_FinalizeContext(&ctx);
}

static uint32_t parse_mode(const char *str)
{
	if (!strcmp(str, "unrestricted"))
		return TA_SYSTEM_DATA_MODE_UNRESTRICTED;
	if (!strcmp(str, "rollback-protect"))
		return TA_SYSTEM_DATA_MODE_ROLLBACK_PROTECT;
	if (!strcmp(str, "write-once"))
		return TA_SYSTEM_DATA_MODE_WRITE_ONCE;

	fprintf(stderr, "Unknown mode '%s'\n", str);
	exit(EXIT_FAILURE);
}

static const char *mode_name(uint32_t mode)
{
	switch (mode) {
	case TA_SYSTEM_DATA_MODE_UNRESTRICTED:
		return "unrestricted";
	case TA_SYSTEM_DATA_MODE_ROLLBACK_PROTECT:
		return "rollback-protect";
	case TA_SYSTEM_DATA_MODE_WRITE_ONCE:
		return "write-once";
	default:
		return "unknown";
	}
}

static void *read_file(const char *path, size_t *size)
{
	FILE *f = fopen(path, "rb");
	if (!f) {
		fprintf(stderr, "Failed to open '%s': %s\n", path, strerror(errno));
		return NULL;
	}

	fseek(f, 0, SEEK_END);
	long len = ftell(f);
	fseek(f, 0, SEEK_SET);

	if (len < 0) {
		fprintf(stderr, "Failed to determine size of '%s'\n", path);
		fclose(f);
		return NULL;
	}

	void *buf = malloc(len);
	if (!buf) {
		fprintf(stderr, "Out of memory\n");
		fclose(f);
		return NULL;
	}

	if (fread(buf, 1, len, f) != (size_t)len) {
		fprintf(stderr, "Failed to read '%s'\n", path);
		free(buf);
		fclose(f);
		return NULL;
	}

	fclose(f);
	*size = len;
	return buf;
}

static int write_file(const char *path, const void *data, size_t size)
{
	FILE *f = fopen(path, "wb");
	if (!f) {
		fprintf(stderr, "Failed to open '%s': %s\n", path, strerror(errno));
		return -1;
	}

	if (fwrite(data, 1, size, f) != size) {
		fprintf(stderr, "Failed to write '%s'\n", path);
		fclose(f);
		return -1;
	}

	fclose(f);
	return 0;
}

static void rollback_counter_to_data(uint64_t rollback, void *data)
{
	int i;
	uint8_t *buf = data;

	for (i = 0; i < sizeof(rollback); i++)
		buf[i] = rollback >> ((7 - i) * 8);
}

static int system_data_write(const char *id, uint32_t mode,
		     const void *data, size_t data_size)
{
	size_t obj_size = SYSTEM_DATA_HEADER_SZ + data_size;
	struct system_data_object *obj = malloc(obj_size);
	if (!obj) {
		fprintf(stderr, "Out of memory\n");
		return EXIT_FAILURE;
	}

	obj->mode = mode;
	memcpy(obj->data, data, data_size);

	if (tee_open()) {
		free(obj);
		return EXIT_FAILURE;
	}

	TEEC_Operation op = { 0 };
	op.paramTypes = TEEC_PARAM_TYPES(TEEC_MEMREF_TEMP_INPUT,
					 TEEC_MEMREF_TEMP_INPUT,
					 TEEC_NONE, TEEC_NONE);
	op.params[0].tmpref.buffer = (void *)id;
	op.params[0].tmpref.size = strlen(id);
	op.params[1].tmpref.buffer = obj;
	op.params[1].tmpref.size = obj_size;

	uint32_t origin;
	TEEC_Result res = TEEC_InvokeCommand(&sess, TA_SYSTEM_DATA_CMD_WRITE,
					     &op, &origin);
	free(obj);
	tee_close();

	if (res != TEEC_SUCCESS) {
		fprintf(stderr, "Write failed: 0x%x origin 0x%x\n",
			res, origin);
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}

static int system_data_write_rollback(const char *id, uint64_t rollback,
			      const void *file_data, size_t file_size)
{
	size_t data_size = sizeof(uint64_t) + file_size;
	void *data = malloc(data_size);
	if (!data) {
		fprintf(stderr, "Out of memory\n");
		return EXIT_FAILURE;
	}

	rollback_counter_to_data(rollback, data);
	memcpy((uint8_t *)data + sizeof(uint64_t), file_data, file_size);

	int ret = system_data_write(id, TA_SYSTEM_DATA_MODE_ROLLBACK_PROTECT,
			    data, data_size);
	free(data);
	return ret;
}

static void data_to_rollback_counter(const void *data, uint64_t *rollback)
{
	int i;
	uint64_t r = 0;
	const uint8_t *buf = data;

	for (i = 0; i < sizeof(uint64_t); i++)
		r = (r << 8) | buf[i];

	*rollback = r;
}

static int system_data_read(const char *id, uint32_t *mode,
			    void **out, size_t *out_size)
{
	if (tee_open())
		return -1;

	TEEC_Operation op = { 0 };
	op.paramTypes = TEEC_PARAM_TYPES(TEEC_MEMREF_TEMP_INPUT,
					 TEEC_MEMREF_TEMP_OUTPUT,
					 TEEC_NONE, TEEC_NONE);
	op.params[0].tmpref.buffer = (void *)id;
	op.params[0].tmpref.size = strlen(id);
	op.params[1].tmpref.buffer = NULL;
	op.params[1].tmpref.size = 0;

	uint32_t origin;
	TEEC_Result res = TEEC_InvokeCommand(&sess, TA_SYSTEM_DATA_CMD_READ,
					     &op, &origin);
	if (res != TEEC_ERROR_SHORT_BUFFER) {
		fprintf(stderr, "Read (size query) failed: 0x%x origin 0x%x\n",
			res, origin);
		tee_close();
		return -1;
	}

	size_t buf_size = op.params[1].tmpref.size;
	if (buf_size < SYSTEM_DATA_HEADER_SZ) {
		fprintf(stderr, "Returned size too small (%zu bytes)\n", buf_size);
		tee_close();
		return -1;
	}

	void *buf = malloc(buf_size);
	if (!buf) {
		fprintf(stderr, "Out of memory\n");
		tee_close();
		return -1;
	}

	op.params[1].tmpref.buffer = buf;
	op.params[1].tmpref.size = buf_size;

	res = TEEC_InvokeCommand(&sess, TA_SYSTEM_DATA_CMD_READ, &op, &origin);
	if (res != TEEC_SUCCESS) {
		fprintf(stderr, "Read failed: 0x%x origin 0x%x\n",
			res, origin);
		free(buf);
		tee_close();
		return -1;
	}

	struct system_data_object *obj = buf;
	size_t data_size = buf_size - SYSTEM_DATA_HEADER_SZ;
	void *data = malloc(data_size);
	if (!data) {
		fprintf(stderr, "Out of memory\n");
		free(buf);
		tee_close();
		return -1;
	}
	memcpy(data, obj->data, data_size);

	*mode = obj->mode;
	free(buf);
	tee_close();

	*out = data;
	*out_size = data_size;
	return 0;
}

static void usage(void)
{
	fprintf(stderr,
		"Usage:\n"
		"  system-data write --id <id> [--mode <mode>] [--rollback <n>] [--rollback-tag <0xNNNN>] <file>\n"
		"  system-data read  --id <id> [-v] [--rollback <n>] [--rollback-tag <0xNNNN>] <file>\n"
		"\n"
		"Modes: unrestricted, rollback-protect, write-once\n"
		"\n"
		"  --rollback-tag <tag>  Extract rollback counter from TLV tag in input file\n");
	exit(EXIT_FAILURE);
}

static int do_write(const char *id, uint32_t mode, int has_rollback,
		    int has_rollback_tag, uint16_t rollback_tag,
		    uint64_t rollback, const char *file)
{
	if (has_rollback || has_rollback_tag) {
		if (mode != UINT32_MAX && mode != TA_SYSTEM_DATA_MODE_ROLLBACK_PROTECT) {
			fprintf(stderr,
				"--mode cannot be combined with --rollback or --rollback-tag\n");
			return EXIT_FAILURE;
		}
		mode = TA_SYSTEM_DATA_MODE_ROLLBACK_PROTECT;
	} else if (mode == UINT32_MAX) {
		mode = TA_SYSTEM_DATA_MODE_UNRESTRICTED;
	}

	size_t file_size;
	void *blob = read_file(file, &file_size);
	if (!blob)
		return EXIT_FAILURE;
	if (has_rollback_tag) {
		if (tlv_extract_u64(blob, file_size,
				    rollback_tag, &rollback)) {
			free(blob);
			return EXIT_FAILURE;
		}
	}
	int ret;
	if (mode == TA_SYSTEM_DATA_MODE_ROLLBACK_PROTECT)
		ret = system_data_write_rollback(id, rollback, blob, file_size);
	else
		ret = system_data_write(id, mode, blob, file_size);
	free(blob);
	return ret;
}

static int do_read(const char *id, int verbose, int has_rollback,
		   int has_rollback_tag, uint16_t rollback_tag,
		   uint64_t rollback, const char *file)
{
	uint32_t mode;
	void *data;
	size_t data_size;

	if (system_data_read(id, &mode, &data, &data_size))
		return EXIT_FAILURE;

	uint8_t *payload = data;
	size_t payload_size = data_size;

	if (mode == TA_SYSTEM_DATA_MODE_ROLLBACK_PROTECT) {
		uint64_t actual_rollback;

		if (data_size < sizeof(uint64_t)) {
			fprintf(stderr, "Data too small for rollback counter\n");
			free(data);
			return EXIT_FAILURE;
		}
		data_to_rollback_counter(data, &actual_rollback);
		payload += sizeof(uint64_t);
		payload_size -= sizeof(uint64_t);

		if (verbose)
			fprintf(stderr, "rollback: %" PRIu64 "\n",
				actual_rollback);

		if (has_rollback_tag) {
			size_t file_size;
			void *blob = read_file(file, &file_size);
			if (!blob) {
				free(data);
				return EXIT_FAILURE;
			}
			if (tlv_extract_u64(blob, file_size, rollback_tag,
					    &rollback)) {
				free(blob);
				free(data);
				return EXIT_FAILURE;
			}
			free(blob);
			has_rollback = 1;
		}

		if (has_rollback && actual_rollback != rollback) {
			fprintf(stderr,
				"Rollback counter mismatch: expected %" PRIu64
				", got %" PRIu64 "\n",
				rollback, actual_rollback);
			free(data);
			return EXIT_FAILURE;
		}
	}

	int ret = write_file(file, payload, payload_size);
	free(data);
	return ret ? EXIT_FAILURE : EXIT_SUCCESS;
}

int main(int argc, char *argv[])
{
	if (argc < 2)
		usage();

	const char *subcmd = argv[1];
	argc--;
	argv++;

	static const struct option long_opts[] = {
		{ "id",           required_argument, NULL, 'i' },
		{ "mode",         required_argument, NULL, 'm' },
		{ "rollback",     required_argument, NULL, 'r' },
		{ "rollback-tag", required_argument, NULL, 'R' },
		{ "verbose",      no_argument,       NULL, 'v' },
		{ "help",         no_argument,       NULL, 'h' },
		{ NULL, 0, NULL, 0 },
	};

	const char *id = NULL;
	uint32_t mode = UINT32_MAX;
	uint64_t rollback = 0;
	int has_rollback = 0;
	uint16_t rollback_tag = 0;
	int has_rollback_tag = 0;
	int verbose = 0;
	int opt;

	optind = 1;
	while ((opt = getopt_long(argc, argv, "i:m:r:R:vh", long_opts, NULL)) != -1) {
		switch (opt) {
		case 'i':
			id = optarg;
			break;
		case 'm':
			mode = parse_mode(optarg);
			break;
		case 'r':
			rollback = strtoull(optarg, NULL, 0);
			has_rollback = 1;
			break;
		case 'R':
			rollback_tag = strtoul(optarg, NULL, 0);
			has_rollback_tag = 1;
			break;
		case 'v':
			verbose = 1;
			break;
		default:
			usage();
		}
	}

	if (!id) {
		fprintf(stderr, "Missing --id\n");
		usage();
	}

	if (optind >= argc) {
		fprintf(stderr, "Missing file argument\n");
		usage();
	}

	const char *file = argv[optind];

	if (!strcmp(subcmd, "write")) {
		return do_write(id, mode, has_rollback, has_rollback_tag,
				rollback_tag, rollback, file);
	} else if (!strcmp(subcmd, "read")) {
		return do_read(id, verbose, has_rollback, has_rollback_tag,
			       rollback_tag, rollback, file);
	} else {
		fprintf(stderr, "Unknown command '%s'\n", subcmd);
		usage();
	}

	return EXIT_FAILURE;
}
