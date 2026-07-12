/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (c) 2026, Pengutronix e.K.
 */

#ifndef __MANUFACTURING_HELPER_H
#define __MANUFACTURING_HELPER_H

#include <tee_client_api.h>

TEEC_Result read_cid(uint16_t dev_id, uint8_t *cid);

#define RPMB_CID_SZ 16
#define RPMB_KEY_MAC_SIZE 32

#endif /* __MANUFACTURING_HELPER_H */
