/* SPDX-License-Identifier: BSD-2-Clause */
#ifndef TA_SYSTEM_DATA_H
#define TA_SYSTEM_DATA_H

#include <stdint.h>

#define TA_SYSTEM_DATA_UUID \
	{ 0x41beaf7a, 0x2665, 0x4011, \
		{ 0xbe, 0xf6, 0x93, 0xff, 0x66, 0x45, 0x3c, 0x1b} }

/*
 * TA_SYSTEM_DATA_CMD_READ - Read a stored object
 * param[0] (memref) ID used the identify the persistent object
 * param[1] (memref) system_data_object dumped from the persistent object
 * param[2] unused
 * param[3] unused
 */
#define TA_SYSTEM_DATA_CMD_READ			0

/*
 * TA_SYSTEM_DATA_CMD_WRITE - Persistently store an object, create if it doesn't exist
 * param[0] (memref) ID used the identify the persistent object
 * param[1] (memref) system_data_object to be written in the persistent object
 * param[2] unused
 * param[3] unused
 */
#define TA_SYSTEM_DATA_CMD_WRITE		1

/* Types of write limitation */

/* Unrestricted write access: */
#define TA_SYSTEM_DATA_MODE_UNRESTRICTED		1
/* Only allow writes that strictly increase the rollback counter: */
#define TA_SYSTEM_DATA_MODE_ROLLBACK_PROTECT	2
/* Immutable after initial creation: */
#define TA_SYSTEM_DATA_MODE_WRITE_ONCE		3

struct system_data_object {
	uint32_t mode;
	char data[];
};

#endif /*TA_SYSTEM_DATA_H*/
