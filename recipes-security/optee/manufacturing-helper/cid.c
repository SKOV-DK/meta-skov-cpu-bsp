/*
 * Copyright (c) 2016, Linaro Limited
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "manufacturing_helper.h"
#define EMSG printf

/*
 * Read @n bytes from @fd, takes care of short reads and EINTR.
 * Adapted from “Advanced Programming In the UNIX Environment” by W. Richard
 * Stevens and Stephen A. Rago, 2013, 3rd Edition, Addison-Wesley
 * (EINTR handling was added)
 */
static ssize_t readn(int fd, void *ptr, size_t n)
{
	size_t nleft = n;
	ssize_t nread = 0;
	uint8_t *p = ptr;

	while (nleft > 0) {
		if ((nread = read(fd, p, nleft)) < 0) {
			if (errno == EINTR)
				continue;
			if (nleft == n)
				return -1; /* error, nothing read, return -1 */
			else
				break; /* error, return amount read so far */
		} else if (nread == 0) {
			break; /* EOF */
		}
		nleft -= nread;
		p += nread;
	}
	return n - nleft; /* return >= 0 */
}

/* Size of CID printed in hexadecimal */
#define CID_STR_SZ (2 * RPMB_CID_SZ)

static TEEC_Result read_cid_str(uint16_t dev_id, char cid[CID_STR_SZ + 1])
{
	TEEC_Result res = TEEC_ERROR_GENERIC;
	char path[48] = { 0 };
	int fd = 0;
	int st = 0;

	snprintf(path, sizeof(path), "/sys/class/mmc_host/mmc%u/mmc%u:0001/cid", dev_id, dev_id);
	fd = open(path, O_RDONLY);
	if (fd < 0)
		return TEEC_ERROR_ITEM_NOT_FOUND;
	st = readn(fd, cid, CID_STR_SZ);
	if (st != CID_STR_SZ) {
		EMSG("Read CID error");
		if (errno)
			EMSG("%s", strerror(errno));
		res = TEEC_ERROR_NO_DATA;
		goto out;
	}
	res = TEEC_SUCCESS;
out:
	close(fd);
	return res;
}

static int hexchar2int(char c)
{
	if (c >= '0' && c <= '9')
		return c - '0';
	if (c >= 'a' && c <= 'f')
		return c - 'a' + 10;
	if (c >= 'A' && c <= 'F')
		return c - 'A' + 10;
	return -1;
}

static int hexbyte2int(char *hex)
{
	int v1 = hexchar2int(hex[0]);
	int v2 = hexchar2int(hex[1]);

	if (v1 < 0 || v2 < 0)
		return -1;
	return 16 * v1 + v2;
}

/* Device Identification (CID) register is 16 bytes. It is read from sysfs. */
TEEC_Result read_cid(uint16_t dev_id, uint8_t *cid)
{
	TEEC_Result res = TEEC_ERROR_GENERIC;
	char cid_str[CID_STR_SZ + 1] = { 0 };
	int i = 0;
	int v = 0;

	res = read_cid_str(dev_id, cid_str);
	if (res)
		return res;

	for (i = 0; i < RPMB_CID_SZ; i++) {
		v = hexbyte2int(cid_str + 2 * i);
		if (v < 0) {
			EMSG("Invalid CID string: %s", cid_str);
			return TEEC_ERROR_NO_DATA;
		}
		cid[i] = v;
	}
	return TEEC_SUCCESS;
}
