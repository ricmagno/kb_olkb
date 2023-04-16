/*
 * Copyright 2017-2020 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _CLOCK_CONFIG_H_
#define _CLOCK_CONFIG_H_

#include "fsl_common.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define BOARD_XTAL0_CLK_HZ                         12000000U  /*!< Board xtal0 frequency in Hz */
#define BOARD_XTAL32K_CLK_HZ                          32768U  /*!< Board xtal32K frequency in Hz */

/*******************************************************************************
 ************************ BOARD_InitBootClocks function ************************
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/*!
 * @brief This function executes default configuration of clocks.
 *
 */
void BOARD_InitBootClocks(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

/*******************************************************************************
 ******************** Configuration BOARD_BootClockFRO18M **********************
 ******************************************************************************/
/*******************************************************************************
 * Definitions for BOARD_BootClockFRO18M configuration
 ******************************************************************************/
#define BOARD_BOOTCLOCKFRO18M_CORE_CLOCK            9000000U  /*!< Core clock frequency: 9000000Hz */


/*******************************************************************************
 * API for BOARD_BootClockFRO18M configuration
 ******************************************************************************/
#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/*!
 * @brief This function executes configuration of clocks.
 *
 */
void BOARD_BootClockFRO18M(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

/*******************************************************************************
 ******************** Configuration BOARD_BootClockFRO24M **********************
 ******************************************************************************/
/*******************************************************************************
 * Definitions for BOARD_BootClockFRO24M configuration
 ******************************************************************************/
#define BOARD_BOOTCLOCKFRO24M_CORE_CLOCK           12000000U  /*!< Core clock frequency: 12000000Hz */


/*******************************************************************************
 * API for BOARD_BootClockFRO24M configuration
 ******************************************************************************/
#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/*!
 * @brief This function executes configuration of clocks.
 *
 */
void BOARD_BootClockFRO24M(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

/*******************************************************************************
 ******************** Configuration BOARD_BootClockFRO30M **********************
 ******************************************************************************/
/*******************************************************************************
 * Definitions for BOARD_BootClockFRO30M configuration
 ******************************************************************************/
#define BOARD_BOOTCLOCKFRO30M_CORE_CLOCK           15000000U  /*!< Core clock frequency: 15000000Hz */


/*******************************************************************************
 * API for BOARD_BootClockFRO30M configuration
 ******************************************************************************/
#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/*!
 * @brief This function executes configuration of clocks.
 *
 */
void BOARD_BootClockFRO30M(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

#endif /* _CLOCK_CONFIG_H_ */

