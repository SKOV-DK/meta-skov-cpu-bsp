// SPDX-License-Identifier: MIT
// Copyright (C) 2026 Pengutronix e.K

#include <errno.h>
#include <fcntl.h>
#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tee_client_api.h>
#include <unistd.h>

#include "pta_manufacturing.h"
#include "manufacturing_helper.h"

static int verbose = 0;

static TEEC_Result query_state(TEEC_Session *sess, enum pta_manufacturing_state *state)
{
	TEEC_Operation op;
	uint32_t err_origin;
	TEEC_Result res;

	/* Prepare operation */
	memset(&op, 0, sizeof(op));
	op.paramTypes = TEEC_PARAM_TYPES(TEEC_VALUE_OUTPUT, TEEC_NONE, TEEC_NONE, TEEC_NONE);

	/* Invoke TA command */
	res = TEEC_InvokeCommand(sess, PTA_MANUFACTURING_QUERY_STATE, &op, &err_origin);
	if (res != TEEC_SUCCESS)
		fprintf(stderr, "TEEC_InvokeCommand failed: 0x%x origin: 0x%x\n", res, err_origin);
	else
		*state = (enum pta_manufacturing_state)op.params[0].value.a;
	return res;
}

static TEEC_Result print_state(TEEC_Session *sess)
{
	enum pta_manufacturing_state state;
	TEEC_Result res;

	res = query_state(sess, &state);
	if (res != TEEC_SUCCESS)
		return res;

	switch (state) {
	case PTA_MANUFACTURING_STATE_UNKNOWN:
		printf("State is UNKNOWN\n");
		break;
	case PTA_MANUFACTURING_STATE_OPEN:
		printf("State is OPEN\n");
		break;
	case PTA_MANUFACTURING_STATE_LOCKED:
		printf("State is LOCKED\n");
		break;
	default:
		printf("State %d is not known.\n", state);
		break;
	}
	return res;
}

static TEEC_Result lock_device(TEEC_Session *sess, bool dry_run)
{
	TEEC_Operation op;
	uint32_t err_origin;
	TEEC_Result res = TEEC_SUCCESS;

	/* Prepare operation */
	memset(&op, 0, sizeof(op));
	op.paramTypes = TEEC_PARAM_TYPES(TEEC_VALUE_INPUT, TEEC_NONE, TEEC_NONE, TEEC_NONE);

	op.params[0].value.a = PTA_MANUFACTURING_STATE_LOCKED;

	if (!dry_run) {
		/* Invoke TA command */
		res = TEEC_InvokeCommand(sess, PTA_MANUFACTURING_SET_STATE, &op, &err_origin);
		if (res != TEEC_SUCCESS)
			fprintf(stderr, "TEEC_InvokeCommand failed: 0x%x origin: 0x%x\n", res,
				err_origin);
	}
	return res;
}

static size_t fwriten(FILE *fp, void *ptr, size_t n)
{
	size_t nleft = n;
	ssize_t nwrite = 0;
	uint8_t *p = ptr;

	while (nleft > 0) {
		if ((nwrite = fwrite(p, 1, nleft, fp)) < 0) {
			if (errno == EINTR)
				continue;
			if (nleft == n)
				return -1; /* error, nothing written, return -1 */
			else
				break; /* error, return amount read so far */
		} else if (nwrite == 0) {
			break; /* EOF */
		}
		nleft -= nwrite;
		p += nwrite;
	}
	return n - nleft; /* return >= 0 */
}

static TEEC_Result generate_rpmb_key_for_cid(TEEC_Session *sess, uint8_t *cid, size_t cid_length,
					     uint8_t *key, size_t key_length)
{
	TEEC_Operation op;
	uint32_t err_origin;
	TEEC_Result res;

	/* Prepare operation */
	memset(&op, 0, sizeof(op));
	op.paramTypes = TEEC_PARAM_TYPES(TEEC_MEMREF_TEMP_INPUT, TEEC_MEMREF_TEMP_OUTPUT, TEEC_NONE,
					 TEEC_NONE);

	op.params[0].tmpref.buffer = cid;
	op.params[0].tmpref.size = cid_length;

	op.params[1].tmpref.buffer = key;
	op.params[1].tmpref.size = key_length;

	/* Invoke TA command */
	res = TEEC_InvokeCommand(sess, PTA_MANUFACTURING_GET_RPMB_KEY, &op, &err_origin);
	if (res == TEEC_ERROR_ACCESS_DENIED)
		fprintf(stderr, "Access denied. Is manufacturing already done?\n");
	else if (res != TEEC_SUCCESS)
		fprintf(stderr, "TEEC_InvokeCommand failed: 0x%x origin: 0x%x\n", res, err_origin);
	return res;
}

static void dump_hex(char *name, uint8_t *buffer, size_t length)
{
	int indent = printf("%s = ", name);
	size_t n;

	for (n = 0; n < length; n++) {
		if (n > 0 && n % 16 == 0)
			printf("\n%*s", indent, "");
		printf("0x%02x ", (unsigned int)buffer[n]);
	}

	printf("\n");
}

static int burn_rpmb_key(uint16_t dev_id, uint8_t *rpmb_key, size_t key_length, bool dry_run)
{
	char command[50] = { 0 };
	FILE *fp;
	char buffer[1024];
	int ret = 0;
	int status;

	snprintf(command, sizeof(command), "mmc rpmb write-key /dev/mmcblk%urpmb - 2>&1", dev_id);
	if (verbose >= 1)
		fprintf(stderr, "Start command '%s' and feed the binary key to its STDIN.\n",
			command);

	fp = popen(!dry_run ? command : "cat > /dev/null 2>&1", "w");
	if (fp == NULL) {
		perror("popen");
		return -EPIPE;
	}

	/* Write the key to stdin */
	if (fwriten(fp, rpmb_key, key_length) != key_length)
		ret = -EIO;

	/* Read and print the output of the command */
	while (fgets(buffer, sizeof(buffer), fp) != NULL)
		printf("%s", buffer);

	status = pclose(fp);
	if (status == -1) {
		perror("pclose");
		return -EIO;
	}

	/* check the exit code */
	if (WIFEXITED(status)) {
		ret = WEXITSTATUS(status);
		if (ret != 0)
			fprintf(stderr, "mmc command exited with %d.\n", ret);
	} else if (WIFSIGNALED(status)) {
		ret = WTERMSIG(status);
		fprintf(stderr, "mmc command killed by signal %d.\n", ret);
	} else {
		fprintf(stderr, "mmc command did not terminate normally.\n");
		ret = -EIO;
	}

	return ret;
}

static int write_rpmb_key(TEEC_Session *sess, uint16_t dev_id, bool dry_run)
{
	TEEC_Result res;
	uint8_t cid[RPMB_CID_SZ];
	uint8_t rpmb_key[RPMB_KEY_MAC_SIZE];

	res = read_cid(dev_id, cid);
	if (res != TEEC_SUCCESS) {
		fprintf(stderr, "Could not read CID.\n");
		return -EIO;
	}

	if (verbose >= 1)
		dump_hex("CID", cid, RPMB_CID_SZ);

	res = generate_rpmb_key_for_cid(sess, cid, RPMB_CID_SZ, rpmb_key, RPMB_KEY_MAC_SIZE);
	if (res != TEEC_SUCCESS) {
		fprintf(stderr, "Could not get key for CID.\n");
		return -EIO;
	}

	if (verbose >= 1)
		dump_hex("Key", rpmb_key, RPMB_KEY_MAC_SIZE);

	return burn_rpmb_key(dev_id, rpmb_key, RPMB_KEY_MAC_SIZE, dry_run);
}

static void print_help(char *name)
{
	printf("Usage: %s [OPTIONS]\n", name);
	printf("  -w/--write-key [eMMC] The number of the eMMC device to write [0,1,2,..]\n");
	printf("  -s/--status           Get the status of manufacturing\n");
	printf("  -l/--lock             Lock down device\n");
	printf("  -n/--dry-run          Perform a trial run without making any changes\n");
	printf("  -v/--verbose          Increase verbosity level\n");
	printf("  -h/--help             Print this help text\n");
	printf("\n");
}

int main(int argc, char *argv[])
{
	TEEC_Context ctx;
	TEEC_Session sess;
	TEEC_Result res;
	TEEC_UUID uuid = PTA_MANUFACTURING_UUID;
	uint32_t err_origin;
	int c;
	char *endptr;
	int option_index = 0;

	int dev_id = -1;
	bool dry_run = false;
	bool status = false;
	bool lock = false;

	static struct option long_options[] = { { "dry-run",   no_argument,       0, 'n' },
						{ "verbose",   no_argument,       0, 'v' },
						{ "status",    no_argument,       0, 's' },
						{ "lock",      no_argument,       0, 'l' },
						{ "help",      no_argument,       0, 'h' },
						{ "write-key", required_argument, 0, 'w' },
						{ 0, 0, 0, 0 } };

	/*
	 * getopt_long() shall not print error messages by itself
	 */
	opterr = 0;

	while ((c = getopt_long(argc, argv, ":w:nvslh", long_options, &option_index)) != -1) {
		switch (c) {
		case 'h':
			print_help(argv[0]);
			exit(EXIT_SUCCESS);
			break;

		case 'n':
			dry_run = true;
			fprintf(stderr, "Performing a trial run without making any changes.\n");
			break;

		case 'v':
			verbose++;
			break;

		case 'w':
			dev_id = (int)strtol(optarg, &endptr, 10);
			if (endptr == optarg || *endptr != '\0') {
				fprintf(stderr, "Could not parse '%s'.\n", optarg);
				exit(EXIT_FAILURE);
			}
			break;

		case 's':
			status = true;
			break;

		case 'l':
			lock = true;
			break;

		case ':':
			fprintf(stderr, "Option requires an argument: ");
			if (optopt)
				fprintf(stderr, "-%c.\n", optopt);
			else
				fprintf(stderr, "unknown.\n");
			exit(EXIT_FAILURE);
			break;

		case '?':
			if (optopt)
				fprintf(stderr, "Unknown option: -%c.\n", optopt);
			else if (optind > 0)
				fprintf(stderr, "Unknown option: %s.\n", argv[optind - 1]);
			else
				fprintf(stderr, "Unknown option.\n");
			exit(EXIT_FAILURE);
			break;

		default:
			/* Should never be reached! */
			fprintf(stderr, "Internal option parsing error: c=%d.\n", c);
			exit(EXIT_FAILURE);
			break;
		}
	}

	if (optind < argc) {
		fprintf(stderr, "Unexpected positional argument(s):");
		while (optind < argc)
			fprintf(stderr, " %s", argv[optind++]);
		fprintf(stderr, "\n");
		return -E2BIG;
	}

	if (lock == false && status == false && dev_id == -1) {
		print_help(argv[0]);
		exit(EXIT_FAILURE);
	}

	/* Initialize context */
	res = TEEC_InitializeContext(NULL, &ctx);
	if (res != TEEC_SUCCESS) {
		fprintf(stderr, "TEEC_InitializeContext failed: 0x%x\n", res);
		return 1;
	}

	/* Open session to TA */
	res = TEEC_OpenSession(&ctx, &sess, &uuid, TEEC_LOGIN_PUBLIC, NULL, NULL, &err_origin);
	if (res != TEEC_SUCCESS) {
		fprintf(stderr, "TEEC_OpenSession failed: 0x%x origin: 0x%x\n", res, err_origin);
		TEEC_FinalizeContext(&ctx);
		return 1;
	}

	if (dev_id != -1) {
		res = write_rpmb_key(&sess, dev_id, dry_run);
		if (res)
			return res;
	}

	if (status)
		res = print_state(&sess);

	if (lock) {
		res = lock_device(&sess, dry_run);
		print_state(&sess);
	}

	/* Cleanup */
	TEEC_CloseSession(&sess);
	TEEC_FinalizeContext(&ctx);

	return res;
}
