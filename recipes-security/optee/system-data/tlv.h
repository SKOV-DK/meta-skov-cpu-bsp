/* SPDX-License-Identifier: GPL-2.0-only */
#ifndef TLV_H
#define TLV_H

#include <endian.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct tlv_header {
	uint32_t magic;
	uint32_t length_tlv;
	uint16_t reserved;
	uint16_t length_sig;
} __attribute__((packed));

struct tlv_entry {
	uint16_t tag;
	uint16_t length;
	uint8_t payload[];
} __attribute__((packed));

static inline int tlv_extract_u64(const void *blob, size_t blob_size,
				  uint16_t tag, uint64_t *val)
{
	const struct tlv_header *hdr = blob;

	if (blob_size < sizeof(*hdr)) {
		fprintf(stderr, "TLV blob too small for header\n");
		return -1;
	}

	uint32_t tlv_len = be32toh(hdr->length_tlv);

	if (blob_size < sizeof(*hdr) + tlv_len) {
		fprintf(stderr, "TLV blob truncated\n");
		return -1;
	}

	const uint8_t *pos = (const uint8_t *)blob + sizeof(*hdr);
	const uint8_t *end = pos + tlv_len;

	while (pos + sizeof(struct tlv_entry) <= end) {
		const struct tlv_entry *entry = (const struct tlv_entry *)pos;
		uint16_t etag = be16toh(entry->tag);
		uint16_t elen = be16toh(entry->length);

		if (pos + sizeof(struct tlv_entry) + elen > end) {
			fprintf(stderr, "TLV entry overflows blob\n");
			return -1;
		}

		if (etag == tag) {
			if (elen != 8) {
				fprintf(stderr,
					"Tag 0x%04x has length %u, expected 8\n",
					tag, elen);
				return -1;
			}

			uint64_t v = 0;
			for (uint16_t i = 0; i < 8; i++)
				v = (v << 8) | entry->payload[i];

			*val = v;
			return 0;
		}

		pos += sizeof(struct tlv_entry) + elen;
	}

	fprintf(stderr, "Tag 0x%04x not found in TLV blob\n", tag);
	return -1;
}

#endif /* TLV_H */
