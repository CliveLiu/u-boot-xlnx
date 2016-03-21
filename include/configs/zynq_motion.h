/*
 * (C) Copyright 2013 Xilinx, Inc.
 *
 * Configuration for Zynq Motion Board
 * See zynq-common.h for Zynq common configs
 *
 * SPDX-License-Identifier:	GPL-2.0+
 *
 * 修改记录
 * 日期           修改人          描述
 * 20160306       刘旭升          feat: 支持zynq-motion项目
 */

#ifndef __CONFIG_ZYNQ_MOTION_H
#define __CONFIG_ZYNQ_MOTION_H

#define CONFIG_SYS_SDRAM_SIZE               (382 * 1024 *1024)

#define CONFIG_ZYNQ_SERIAL_UART1
#define CONFIG_ZYNQ_GEM0
#define CONFIG_ZYNQ_GEM_PHY_ADDR0           0

#define CONFIG_SYS_NO_FLASH

#define CONFIG_ZYNQ_SDHCI0

#define CONFIG_ZYNQ_BOOT_FREEBSD

#include <configs/zynq-common.h>

/* Environment Variables settings */
#undef  CONFIG_BOOTDELAY
#define CONFIG_BOOTDELAY                    1

/* Board initialization settings */
#define CONFIG_SYS_CONSOLE_INFO_QUIET

#undef  CONFIG_SYS_PROMPT
#define CONFIG_SYS_PROMPT                   "zynq-motion> "

#endif /* __CONFIG_ZYNQ_MOTION_H */
