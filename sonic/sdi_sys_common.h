/*
 * Copyright (c) 2016 Dell Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License. You may obtain
 * a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 * THIS CODE IS PROVIDED ON AN  *AS IS* BASIS, WITHOUT WARRANTIES OR
 * CONDITIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT
 *  LIMITATION ANY IMPLIED WARRANTIES OR CONDITIONS OF TITLE, FITNESS
 * FOR A PARTICULAR PURPOSE, MERCHANTABLITY OR NON-INFRINGEMENT.
 *
 * See the Apache Version 2.0 License for specific language governing
 * permissions and limitations under the License.
 */

/*
 * filename: sdi_sys_common.h
 */


/*******************************************************************************
 * @file sdi_sys_common.h
 *
 * @brief  Common header file used by SDI SYS
 ******************************************************************************/
#ifndef __SDI_SYS_COMMON
#define __SDI_SYS_COMMON
#include "std_error_codes.h"
#include "std_type_defs.h"
#include "event_log.h"

#define SDI_MOD   "SDI_SYS_MODULE"

#define SDI_MAX_NAME_LEN 64
#define SDI_MAX_PATH_LEN 64

#define SDI_ERRNO_LOG()                   EV_LOG_ERRNO(ev_log_t_BOARD, 3, SDI_MOD, errno)
#define SDI_ERRMSG_LOG(format, args...)   EV_LOG_ERR(ev_log_t_BOARD, 3, SDI_MOD, format, args)
#define SDI_TRACEMSG_LOG(format, args...) EV_LOG_TRACE(ev_log_t_BOARD, 3, SDI_MOD, format,args)
#define SDI_ERRNO                         STD_ERR_MK(e_std_err_BOARD, e_std_err_code_FAIL, errno)
#define SDI_ERRCODE(errcode)              STD_ERR_MK(e_std_err_BOARD, e_std_err_code_FAIL, errcode)
#define STD_ERR_UNIMPLEMENTED             STD_ERR_MK(e_std_err_BOARD, e_std_err_code_FAIL, ENOSYS)
#define verbose(format, args...)

/**
 * @def Attirbute used to get device config file path
 */
#define SDI_DEVICE_CONFIG_FILE "/etc/sonic/sdi/device.xml"

/**
 * @def Attirbute used to get entity config file path
 */
#define SDI_ENTITY_CONFIG_FILE "/etc/sonic/sdi/entity.xml"
#define NGOS_LIB_DIR           "/usr/lib/x86_64-linux-gnu/"
#define SDI_DRIVER_LIB         "libsonic_sdi_device_drivers.so"

/**
 * @brief Check whether the SDI is initialized.
 * @returns TRUE if it is initialized or FALSE if it is not initialized.
 */
bool is_sdi_inited(void);

#endif /* __SDI_SYS_COMMON */
