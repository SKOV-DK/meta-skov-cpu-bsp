/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (c) 2026, Pengutronix e.K.
 */

#ifndef __PTA_MANUFACTURING_H
#define __PTA_MANUFACTURING_H

#define PTA_MANUFACTURING_UUID \
	{ 0x74cc7cc3, 0xe393, 0x4ed9, { 0xa0, 0xf2, 0x95, 0x72, 0xf5, 0x87, 0x83, 0xb2 } }

enum pta_manufacturing_state {
	PTA_MANUFACTURING_STATE_UNKNOWN = -1,
	PTA_MANUFACTURING_STATE_OPEN    = 0,
	PTA_MANUFACTURING_STATE_LOCKED  = 1,
};

/*
 * Query the state of manufacturing.
 *
 * [out]	value[0].a	one of PTA_MANUFACTURING_STATE_*
 *
 * Result:
 * TEE_SUCCESS - Invoke command success
 */
#define PTA_MANUFACTURING_QUERY_STATE	0x0

/*
 * Set the manufacturing state.
 *
 * Set the state of manufacturing. It is only allowed to increase, never to
 * decrease the manufacturing state.
 * Setting the same state as currently active will result in success.
 *
 * [in]		value[0].a	one of PTA_MANUFACTURING_STATE_*
 *
 * Result:
 * TEE_SUCCESS - Invoke command success
 * TEE_ERROR_BAD_PARAMETERS - Incorrect input param
 * TEE_ERROR_SECURITY - Input parameter is lower than current setting
 */
#define PTA_MANUFACTURING_SET_STATE	0x1

/*
 * Get the RPMB key for the specified CID
 *
 * [in]		memref[0]	CID
 * [out]	memref[1]	RPMB Key
 *
 * Result:
 * TEE_SUCCESS - Invoke command success
 * TEE_ERROR_BAD_PARAMETERS - Incorrect params or buffer sizes
 * TEE_ERROR_ACCESS_DENIED - Manufacturing state does not allow access to key
 */
#define PTA_MANUFACTURING_GET_RPMB_KEY	0x2

#endif /* __PTA_MANUFACTURING_H */
