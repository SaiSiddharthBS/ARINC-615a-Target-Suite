// SPDX-License-Identifier: MPL-2.0
#ifndef ARINC615A_THA_C_H
#define ARINC615A_THA_C_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 * C interface to the ARINC 615A Target Host Application.
 *
 * Blocks in the caller's worker task until the THA stops.
 * Returns 0 on normal stop, nonzero on error.
 */
int arinc615a_tha_run_file(const char *json_filename);

/*
 * Requests the running ARINC 615A THA to stop.
 *
 * Returns:
 *   1 = stop request queued
 *   0 = THA is idle or request could not be queued
 */
int arinc615a_tha_request_stop(void);

#ifdef __cplusplus
}
#endif

#endif /* ARINC615A_THA_C_H */
