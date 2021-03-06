/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Samsung Exynos SoC series dsp driver
 *
 * Copyright (c) 2019 Samsung Electronics Co., Ltd.
 *              http://www.samsung.com/
 */

#ifndef __HW_N3_DSP_HW_N3_CTRL_H__
#define __HW_N3_DSP_HW_N3_CTRL_H__

#include "hardware/dsp-ctrl.h"

#define ENABLE_DSP_N3_REG_SYSCTRL_DSPC
#define ENABLE_DSP_N3_REG_AAREG
#define ENABLE_DSP_N3_REG_WDT
#define ENABLE_DSP_N3_REG_SDMA_SS
#define ENABLE_DSP_N3_REG_PWM
#define ENABLE_DSP_N3_REG_CPU_SS
#define ENABLE_DSP_N3_REG_GIC
#define ENABLE_DSP_N3_REG_SYSCTRL_DSP0
#define ENABLE_DSP_N3_REG_SYSCTRL_DSP1

enum dsp_n3_reg_id {
#ifdef ENABLE_DSP_N3_REG_SYSCTRL_DSPC
	DSP_N3_DSPC_CA5_INTR_STATUS_NS,
	DSP_N3_DSPC_CA5_INTR_ENABLE_NS,
	DSP_N3_DSPC_CA5_SWI_SET_NS,
	DSP_N3_DSPC_CA5_SWI_CLEAR_NS,
	DSP_N3_DSPC_CA5_INTR_MASKED_STATUS_NS,
	DSP_N3_DSPC_IAC_INTR_STATUS_NS,
	DSP_N3_DSPC_IAC_INTR_ENABLE_NS,
	DSP_N3_DSPC_IAC_SWI_SET_NS,
	DSP_N3_DSPC_IAC_SWI_CLEAR_NS,
	DSP_N3_DSPC_IAC_INTR_MASKED_STATUS_NS,
	DSP_N3_DSPC_HOST_INTR_STATUS_NS,
	DSP_N3_DSPC_HOST_INTR_ENABLE_NS,
	DSP_N3_DSPC_HOST_SWI_SET_NS,
	DSP_N3_DSPC_HOST_SWI_CLEAR_NS,
	DSP_N3_DSPC_HOST_INTR_MASKED_STATUS_NS,
	DSP_N3_DSPC_ABOX_INTR_STATUS_NS,
	DSP_N3_DSPC_ABOX_INTR_ENABLE_NS,
	DSP_N3_DSPC_ABOX_SWI_SET_NS,
	DSP_N3_DSPC_ABOX_SWI_CLEAR_NS,
	DSP_N3_DSPC_ABOX_INTR_MASKED_STATUS_NS,
	DSP_N3_DSPC_IAC_WAKEUP_NS,
	DSP_N3_DSPC_IAC_SFR2AXI_SGMO,
	DSP_N3_STM_ENABLE,
	DSP_N3_STM_SEL,
	DSP_N3_STM_SFR0,
	DSP_N3_STM_SFR1,
	DSP_N3_DSPC_IAC_STACK_START_NS,
	DSP_N3_DSPC_IAC_STACK_END_NS,
	DSP_N3_DSPC_IAC_SWRESET,
	DSP_N3_DSPC_IVP0_TH0_MAILBOX_INTR_NS,
	DSP_N3_DSPC_IVP0_TH0_MAILBOX_NS,
	DSP_N3_DSPC_IVP0_TH1_MAILBOX_INTR_NS,
	DSP_N3_DSPC_IVP0_TH1_MAILBOX_NS,
	DSP_N3_DSPC_IVP1_TH0_MAILBOX_INTR_NS,
	DSP_N3_DSPC_IVP1_TH0_MAILBOX_NS,
	DSP_N3_DSPC_IVP1_TH1_MAILBOX_INTR_NS,
	DSP_N3_DSPC_IVP1_TH1_MAILBOX_NS,
	DSP_N3_DSPC_IAC_MAILBOX_INTR_NS,
	DSP_N3_DSPC_IAC_MAILBOX_NS,
	DSP_N3_DSPC_HOST_MAILBOX_INTR_NS,
	DSP_N3_DSPC_HOST_MAILBOX_NS,
	DSP_N3_DSPC_TO_HOST_MAILBOX_INTR_NS,
	DSP_N3_DSPC_TO_HOST_MAILBOX_NS,
	DSP_N3_DSPC_ABOX_MAILBOX_INTR_NS,
	DSP_N3_DSPC_ABOX_MAILBOX_NS,
	DSP_N3_DSPC_TO_ABOX_MAILBOX_INTR_NS,
	DSP_N3_DSPC_TO_ABOX_MAILBOX_NS,
	DSP_N3_DSPC_MCGEN,
	DSP_N3_DSPC_WDTEN,
	DSP_N3_DSPC_CA5_INTR_STATUS_S,
	DSP_N3_DSPC_CA5_INTR_ENABLE_S,
	DSP_N3_DSPC_CA5_SWI_SET_S,
	DSP_N3_DSPC_CA5_SWI_CLEAR_S,
	DSP_N3_DSPC_CA5_INTR_MASKED_STATUS_S,
	DSP_N3_DSPC_IAC_INTR_STATUS_S,
	DSP_N3_DSPC_IAC_INTR_ENABLE_S,
	DSP_N3_DSPC_IAC_SWI_SET_S,
	DSP_N3_DSPC_IAC_SWI_CLEAR_S,
	DSP_N3_DSPC_IAC_INTR_MASKED_STATUS_S,
	DSP_N3_DSPC_HOST_INTR_STATUS_S,
	DSP_N3_DSPC_HOST_INTR_ENABLE_S,
	DSP_N3_DSPC_HOST_SWI_SET_S,
	DSP_N3_DSPC_HOST_SWI_CLEAR_S,
	DSP_N3_DSPC_HOST_INTR_MASKED_STATUS_S,
	DSP_N3_DSPC_ABOX_INTR_STATUS_S,
	DSP_N3_DSPC_ABOX_INTR_ENABLE_S,
	DSP_N3_DSPC_ABOX_SWI_SET_S,
	DSP_N3_DSPC_ABOX_SWI_CLEAR_S,
	DSP_N3_DSPC_ABOX_INTR_MASKED_STATUS_S,
	DSP_N3_DSPC_IAC_WAKEUP_S,
	DSP_N3_DSPC_HOST_RRESP_MASK,
	DSP_N3_DSPC_HOST_BRESP_MASK,
	DSP_N3_DSPC_M2_AXUSER,
	DSP_N3_DSPC_M2_AXQOS,
	DSP_N3_DSPC_IAC_STACK_START_S,
	DSP_N3_DSPC_IAC_STACK_END_S,
	DSP_N3_DSPC_PERF_MON_ENABLE,
	DSP_N3_DSPC_PERF_MON_CLEAR,
	DSP_N3_DSPC_DBG_MON_ENABLE,
	DSP_N3_DSPC_DBG_INTR_STATUS,
	DSP_N3_DSPC_DBG_INTR_ENABLE,
	DSP_N3_DSPC_DBG_INTR_CLEAR,
	DSP_N3_DSPC_DBG_INTR_MSTATUS,
	DSP_N3_DSPC_DBG_IAC_PC,
	DSP_N3_DSPC_DBG_IAC_VALID_CNTL,
	DSP_N3_DSPC_DBG_IAC_VALID_CNTH,
	DSP_N3_DSPC_DBG_IAC_STALL_CNT,
	DSP_N3_DSPC_DBG_IAC_ADDR_PM,
	DSP_N3_DSPC_DBG_IAC_ADDR_DM,
	DSP_N3_DSPC_DBG_IAC_ERROR_INFO,
	DSP_N3_DSPC_DBG_IAC_INTR_CNT_NS,
	DSP_N3_DSPC_DBG_IAC_INTR_CNT_S,
	DSP_N3_DSPC_DBG_DINTR_STATUS,
	DSP_N3_DSPC_DBG_DINTR_ENABLE,
	DSP_N3_DSPC_DBG_DINTR_CLEAR,
	DSP_N3_DSPC_DBG_DINTR_MSTATUS,
	DSP_N3_DSPC_IVP0_TH0_MAILBOX_INTR_S,
	DSP_N3_DSPC_IVP0_TH0_MAILBOX_S,
	DSP_N3_DSPC_IVP0_TH1_MAILBOX_INTR_S,
	DSP_N3_DSPC_IVP0_TH1_MAILBOX_S,
	DSP_N3_DSPC_IVP1_TH0_MAILBOX_INTR_S,
	DSP_N3_DSPC_IVP1_TH0_MAILBOX_S,
	DSP_N3_DSPC_IVP1_TH1_MAILBOX_INTR_S,
	DSP_N3_DSPC_IVP1_TH1_MAILBOX_S,
	DSP_N3_DSPC_IAC_MAILBOX_INTR_S,
	DSP_N3_DSPC_IAC_MAILBOX_S,
	DSP_N3_DSPC_HOST_MAILBOX_INTR_S,
	DSP_N3_DSPC_HOST_MAILBOX_S,
	DSP_N3_DSPC_TO_HOST_MAILBOX_INTR_S,
	DSP_N3_DSPC_TO_HOST_MAILBOX_S,
	DSP_N3_DSPC_ABOX_MAILBOX_INTR_S,
	DSP_N3_DSPC_ABOX_MAILBOX_S,
	DSP_N3_DSPC_TO_ABOX_MAILBOX_INTR_S,
	DSP_N3_DSPC_TO_ABOX_MAILBOX_S,
#endif // ENABLE_DSP_N3_REG_SYSCTRL_DSPC
#ifdef ENABLE_DSP_N3_REG_AAREG
	DSP_N3_SEMAPHORE_REG,
	DSP_N3_CLEAR_EXCL,
#endif // ENABLE_DSP_N3_REG_AAREG
#ifdef ENABLE_DSP_N3_REG_WDT
	DSP_N3_DSPC_WTCON,
	DSP_N3_DSPC_WTDAT,
	DSP_N3_DSPC_WTCNT,
	DSP_N3_DSPC_WTCLRINT,
	DSP_N3_DSPC_WTMINCNT,
#endif // ENABLE_DSP_N3_REG_WDT
#ifdef ENABLE_DSP_N3_REG_SDMA_SS
	DSP_N3_VERSION,
	DSP_N3_SRESET,
	DSP_N3_CLOCK_GATE_EN,
	DSP_N3_CLOCK_GATE_SE_SET_0,
	DSP_N3_CLOCK_GATE_SE_SET_1,
	DSP_N3_MO_CTRL_EXT,
	DSP_N3_MO_CTRL_INT_RD,
	DSP_N3_MO_CTRL_INT_WR,
	DSP_N3_ARQOS_LUT,
	DSP_N3_AWQOS_LUT,
	DSP_N3_DESCRIPTOR_QUEUE_CFG_VC0,
	DSP_N3_DESCRIPTOR_QUEUE_CFG_VC1,
	DSP_N3_DESCRIPTOR_QUEUE_CFG_VC2,
	DSP_N3_DESCRIPTOR_QUEUE_CFG_VC3,
	DSP_N3_DESCRIPTOR_QUEUE_CFG_VC4,
	DSP_N3_DESCRIPTOR_QUEUE_CFG_VC5,
	DSP_N3_DESCRIPTOR_QUEUE_CFG_VC6,
	DSP_N3_DESCRIPTOR_QUEUE_CFG_VC7,
	DSP_N3_DESCRIPTOR_QUEUE_CFG_VC8,
	DSP_N3_DESCRIPTOR_QUEUE_CFG_VC9,
	DSP_N3_DESCRIPTOR_QUEUE_CFG_VC10,
	DSP_N3_DESCRIPTOR_QUEUE_CFG_VC11,
	DSP_N3_DESCRIPTOR_QUEUE_CFG_VC12,
	DSP_N3_DESCRIPTOR_QUEUE_CFG_VC13,
	DSP_N3_DESCRIPTOR_QUEUE_CFG_VC14,
	DSP_N3_DESCRIPTOR_QUEUE_CFG_VC15,
	DSP_N3_DESCRIPTOR_QUEUE_CFG_VC16,
	DSP_N3_DESCRIPTOR_QUEUE_CFG_VC17,
	DSP_N3_DESCRIPTOR_QUEUE_CFG_VC18,
	DSP_N3_DESCRIPTOR_QUEUE_CFG_VC19,
	DSP_N3_DESCRIPTOR_QUEUE_CFG_VC20,
	DSP_N3_DESCRIPTOR_QUEUE_CFG_VC21,
	DSP_N3_DESCRIPTOR_QUEUE_CFG_VC22,
	DSP_N3_DESCRIPTOR_QUEUE_CFG_VC23,
	DSP_N3_ERR_CODES,
	DSP_N3_ERR_MASK,
	DSP_N3_INTERRUPT_CM,
	DSP_N3_INTERRUPT_MASK_CM,
	DSP_N3_INTERRUPT_DONE_NS,
	DSP_N3_INTERRUPT_BLK_DONE_NS,
	DSP_N3_INTERRUPT_FORCE_NS,
	DSP_N3_INTERRUPT_GROUP_NS,
	DSP_N3_INTERRUPT_QUEUE_NS_VC0,
	DSP_N3_INTERRUPT_QUEUE_NS_VC1,
	DSP_N3_INTERRUPT_QUEUE_NS_VC2,
	DSP_N3_INTERRUPT_QUEUE_NS_VC3,
	DSP_N3_INTERRUPT_QUEUE_NS_VC4,
	DSP_N3_INTERRUPT_QUEUE_NS_VC5,
	DSP_N3_INTERRUPT_QUEUE_NS_VC6,
	DSP_N3_INTERRUPT_QUEUE_NS_VC7,
	DSP_N3_INTERRUPT_QUEUE_NS_VC8,
	DSP_N3_INTERRUPT_QUEUE_NS_VC9,
	DSP_N3_INTERRUPT_QUEUE_NS_VC10,
	DSP_N3_INTERRUPT_QUEUE_NS_VC11,
	DSP_N3_INTERRUPT_QUEUE_NS_VC12,
	DSP_N3_INTERRUPT_QUEUE_NS_VC13,
	DSP_N3_INTERRUPT_QUEUE_NS_VC14,
	DSP_N3_INTERRUPT_QUEUE_NS_VC15,
	DSP_N3_INTERRUPT_QUEUE_NS_VC16,
	DSP_N3_INTERRUPT_QUEUE_NS_VC17,
	DSP_N3_INTERRUPT_QUEUE_NS_VC18,
	DSP_N3_INTERRUPT_QUEUE_NS_VC19,
	DSP_N3_INTERRUPT_QUEUE_NS_VC20,
	DSP_N3_INTERRUPT_QUEUE_NS_VC21,
	DSP_N3_INTERRUPT_QUEUE_NS_VC22,
	DSP_N3_INTERRUPT_QUEUE_NS_VC23,
	DSP_N3_INTERRUPT_DONE_S,
	DSP_N3_INTERRUPT_BLK_DONE_S,
	DSP_N3_INTERRUPT_FORCE_S,
	DSP_N3_INTERRUPT_GROUP_S,
	DSP_N3_INTERRUPT_QUEUE_S_VC0,
	DSP_N3_INTERRUPT_QUEUE_S_VC1,
	DSP_N3_INTERRUPT_QUEUE_S_VC2,
	DSP_N3_INTERRUPT_QUEUE_S_VC3,
	DSP_N3_INTERRUPT_QUEUE_S_VC4,
	DSP_N3_INTERRUPT_QUEUE_S_VC5,
	DSP_N3_INTERRUPT_QUEUE_S_VC6,
	DSP_N3_INTERRUPT_QUEUE_S_VC7,
	DSP_N3_INTERRUPT_QUEUE_S_VC8,
	DSP_N3_INTERRUPT_QUEUE_S_VC9,
	DSP_N3_INTERRUPT_QUEUE_S_VC10,
	DSP_N3_INTERRUPT_QUEUE_S_VC11,
	DSP_N3_INTERRUPT_QUEUE_S_VC12,
	DSP_N3_INTERRUPT_QUEUE_S_VC13,
	DSP_N3_INTERRUPT_QUEUE_S_VC14,
	DSP_N3_INTERRUPT_QUEUE_S_VC15,
	DSP_N3_INTERRUPT_QUEUE_S_VC16,
	DSP_N3_INTERRUPT_QUEUE_S_VC17,
	DSP_N3_INTERRUPT_QUEUE_S_VC18,
	DSP_N3_INTERRUPT_QUEUE_S_VC19,
	DSP_N3_INTERRUPT_QUEUE_S_VC20,
	DSP_N3_INTERRUPT_QUEUE_S_VC21,
	DSP_N3_INTERRUPT_QUEUE_S_VC22,
	DSP_N3_INTERRUPT_QUEUE_S_VC23,
	DSP_N3_TCM0_TRANSFER_ON_VC0,
	DSP_N3_TCM1_TRANSFER_ON_VC0,
	DSP_N3_TCM0_TRANSFER_ON_VC1,
	DSP_N3_TCM1_TRANSFER_ON_VC1,
	DSP_N3_TCM0_TRANSFER_ON_VC2,
	DSP_N3_TCM1_TRANSFER_ON_VC2,
	DSP_N3_TCM0_TRANSFER_ON_VC3,
	DSP_N3_TCM1_TRANSFER_ON_VC3,
	DSP_N3_TCM0_TRANSFER_ON_VC4,
	DSP_N3_TCM1_TRANSFER_ON_VC4,
	DSP_N3_TCM0_TRANSFER_ON_VC5,
	DSP_N3_TCM1_TRANSFER_ON_VC5,
	DSP_N3_TCM0_TRANSFER_ON_VC6,
	DSP_N3_TCM1_TRANSFER_ON_VC6,
	DSP_N3_TCM0_TRANSFER_ON_VC7,
	DSP_N3_TCM1_TRANSFER_ON_VC7,
	DSP_N3_TCM0_TRANSFER_ON_VC8,
	DSP_N3_TCM1_TRANSFER_ON_VC8,
	DSP_N3_TCM0_TRANSFER_ON_VC9,
	DSP_N3_TCM1_TRANSFER_ON_VC9,
	DSP_N3_TCM0_TRANSFER_ON_VC10,
	DSP_N3_TCM1_TRANSFER_ON_VC10,
	DSP_N3_TCM0_TRANSFER_ON_VC11,
	DSP_N3_TCM1_TRANSFER_ON_VC11,
	DSP_N3_TCM0_TRANSFER_ON_VC12,
	DSP_N3_TCM1_TRANSFER_ON_VC12,
	DSP_N3_TCM0_TRANSFER_ON_VC13,
	DSP_N3_TCM1_TRANSFER_ON_VC13,
	DSP_N3_TCM0_TRANSFER_ON_VC14,
	DSP_N3_TCM1_TRANSFER_ON_VC14,
	DSP_N3_TCM0_TRANSFER_ON_VC15,
	DSP_N3_TCM1_TRANSFER_ON_VC15,
	DSP_N3_TCM0_TRANSFER_ON_VC16,
	DSP_N3_TCM1_TRANSFER_ON_VC16,
	DSP_N3_TCM0_TRANSFER_ON_VC17,
	DSP_N3_TCM1_TRANSFER_ON_VC17,
	DSP_N3_TCM0_TRANSFER_ON_VC18,
	DSP_N3_TCM1_TRANSFER_ON_VC18,
	DSP_N3_TCM0_TRANSFER_ON_VC19,
	DSP_N3_TCM1_TRANSFER_ON_VC19,
	DSP_N3_TCM0_TRANSFER_ON_VC20,
	DSP_N3_TCM1_TRANSFER_ON_VC20,
	DSP_N3_TCM0_TRANSFER_ON_VC21,
	DSP_N3_TCM1_TRANSFER_ON_VC21,
	DSP_N3_TCM0_TRANSFER_ON_VC22,
	DSP_N3_TCM1_TRANSFER_ON_VC22,
	DSP_N3_TCM0_TRANSFER_ON_VC23,
	DSP_N3_TCM1_TRANSFER_ON_VC23,
	DSP_N3_FLT_INFO_SET_CFG,
	DSP_N3_FLT_INFO_MAX_SET0,
	DSP_N3_FLT_INFO_MIN_SET0,
	DSP_N3_FLT_INFO_SUM_SET0,
	DSP_N3_FLT_INFO_SUM2_SET0,
	DSP_N3_FLT_INFO_MAX_SET1,
	DSP_N3_FLT_INFO_MIN_SET1,
	DSP_N3_FLT_INFO_SUM_SET1,
	DSP_N3_FLT_INFO_SUM2_SET1,
	DSP_N3_FLT_INFO_MAX_SET2,
	DSP_N3_FLT_INFO_MIN_SET2,
	DSP_N3_FLT_INFO_SUM_SET2,
	DSP_N3_FLT_INFO_SUM2_SET2,
	DSP_N3_FLT_INFO_MAX_SET3,
	DSP_N3_FLT_INFO_MIN_SET3,
	DSP_N3_FLT_INFO_SUM_SET3,
	DSP_N3_FLT_INFO_SUM2_SET3,
	DSP_N3_STATUS_SE_0,
	DSP_N3_STATUS_SE_1,
	DSP_N3_STATUS_INT_SOURCE_ERR,
	DSP_N3_STATUS_INT_SOURCE_DONE,
	DSP_N3_STATUS_INT_SOURCE_BLK_DONE,
	DSP_N3_STATUS_INT_SOURCE_GROUP,
	DSP_N3_STATUS_VC_INFO_VC0_7,
	DSP_N3_STATUS_VC_INFO_VC8_15,
	DSP_N3_STATUS_VC_INFO_VC16_24,
	DSP_N3_STATUS_TCM0_SDMA_MUTEX,
	DSP_N3_STATUS_TCM1_SDMA_MUTEX,
	DSP_N3_TCM0_TRANSFER_ON_UPDATE_VC,
	DSP_N3_TCM1_TRANSFER_ON_UPDATE_VC,
	DSP_N3_NSECURE,
	DSP_N3_DEBUG_ADDR,
	DSP_N3_DEBUG_REG0,
	DSP_N3_ENABLE_VC0,
	DSP_N3_FLOW_CONTROL_VC0,
	DSP_N3_INTERRUPT_MASK_VC0,
	DSP_N3_NUM_OF_BLK_VC0,
	DSP_N3_FRM_SIZE_XY_VC0,
	DSP_N3_BLK_SIZE_XY_VC0,
	DSP_N3_BLK_SIZE_Z_VC0,
	DSP_N3_BLK_BOUNDER_XY_VC0,
	DSP_N3_BLK_BOUNDER_Z_VC0,
	DSP_N3_BLK_OVERLAP_XY_VC0,
	DSP_N3_BLK_OVERLAP_Z_VC0,
	DSP_N3_EXT_MEM_ADDR_P0_VC0,
	DSP_N3_EXT_MEM_ADDR_P1_VC0,
	DSP_N3_INT_MEM0_ADDR_P0_VC0,
	DSP_N3_INT_MEM0_ADDR_P1_VC0,
	DSP_N3_INT_MEM0_ADDR_P2_VC0,
	DSP_N3_INT_MEM1_ADDR_P0_VC0,
	DSP_N3_INT_MEM1_ADDR_P1_VC0,
	DSP_N3_INT_MEM1_ADDR_P2_VC0,
	DSP_N3_INT_MEM_ADDR_DSG_VC0,
	DSP_N3_INT_MEM_OFFSET_DSG_VC0,
	DSP_N3_INT_MEM_STRIDE_VC0,
	DSP_N3_INT_MEM_2D_STRIDE_Y_VC0,
	DSP_N3_INT_MEM_2D_STRIDE_UV_VC0,
	DSP_N3_DATA_INFO_VC0,
	DSP_N3_DATA_CONVERT_CFG_VC0,
	DSP_N3_QCONV_SCALE_VC0,
	DSP_N3_QCONV_BAIS_VC0,
	DSP_N3_ROTATE_CFG_VC0,
	DSP_N3_PADDING_SIZE_VC0,
	DSP_N3_PADDING_SIZE_UV_VC0,
	DSP_N3_PADDING_DATA_INFO_VC0,
	DSP_N3_NPUFMT_CFG_VC0,
	DSP_N3_ENABLE_VC1,
	DSP_N3_FLOW_CONTROL_VC1,
	DSP_N3_INTERRUPT_MASK_VC1,
	DSP_N3_NUM_OF_BLK_VC1,
	DSP_N3_FRM_SIZE_XY_VC1,
	DSP_N3_BLK_SIZE_XY_VC1,
	DSP_N3_BLK_SIZE_Z_VC1,
	DSP_N3_BLK_BOUNDER_XY_VC1,
	DSP_N3_BLK_BOUNDER_Z_VC1,
	DSP_N3_BLK_OVERLAP_XY_VC1,
	DSP_N3_BLK_OVERLAP_Z_VC1,
	DSP_N3_EXT_MEM_ADDR_P0_VC1,
	DSP_N3_EXT_MEM_ADDR_P1_VC1,
	DSP_N3_INT_MEM0_ADDR_P0_VC1,
	DSP_N3_INT_MEM0_ADDR_P1_VC1,
	DSP_N3_INT_MEM0_ADDR_P2_VC1,
	DSP_N3_INT_MEM1_ADDR_P0_VC1,
	DSP_N3_INT_MEM1_ADDR_P1_VC1,
	DSP_N3_INT_MEM1_ADDR_P2_VC1,
	DSP_N3_INT_MEM_ADDR_DSG_VC1,
	DSP_N3_INT_MEM_OFFSET_DSG_VC1,
	DSP_N3_INT_MEM_STRIDE_VC1,
	DSP_N3_INT_MEM_2D_STRIDE_Y_VC1,
	DSP_N3_INT_MEM_2D_STRIDE_UV_VC1,
	DSP_N3_DATA_INFO_VC1,
	DSP_N3_DATA_CONVERT_CFG_VC1,
	DSP_N3_QCONV_SCALE_VC1,
	DSP_N3_QCONV_BAIS_VC1,
	DSP_N3_ROTATE_CFG_VC1,
	DSP_N3_PADDING_SIZE_VC1,
	DSP_N3_PADDING_SIZE_UV_VC1,
	DSP_N3_PADDING_DATA_INFO_VC1,
	DSP_N3_NPUFMT_CFG_VC1,
	DSP_N3_ENABLE_VC2,
	DSP_N3_FLOW_CONTROL_VC2,
	DSP_N3_INTERRUPT_MASK_VC2,
	DSP_N3_NUM_OF_BLK_VC2,
	DSP_N3_FRM_SIZE_XY_VC2,
	DSP_N3_BLK_SIZE_XY_VC2,
	DSP_N3_BLK_SIZE_Z_VC2,
	DSP_N3_BLK_BOUNDER_XY_VC2,
	DSP_N3_BLK_BOUNDER_Z_VC2,
	DSP_N3_BLK_OVERLAP_XY_VC2,
	DSP_N3_BLK_OVERLAP_Z_VC2,
	DSP_N3_EXT_MEM_ADDR_P0_VC2,
	DSP_N3_EXT_MEM_ADDR_P1_VC2,
	DSP_N3_INT_MEM0_ADDR_P0_VC2,
	DSP_N3_INT_MEM0_ADDR_P1_VC2,
	DSP_N3_INT_MEM0_ADDR_P2_VC2,
	DSP_N3_INT_MEM1_ADDR_P0_VC2,
	DSP_N3_INT_MEM1_ADDR_P1_VC2,
	DSP_N3_INT_MEM1_ADDR_P2_VC2,
	DSP_N3_INT_MEM_ADDR_DSG_VC2,
	DSP_N3_INT_MEM_OFFSET_DSG_VC2,
	DSP_N3_INT_MEM_STRIDE_VC2,
	DSP_N3_INT_MEM_2D_STRIDE_Y_VC2,
	DSP_N3_INT_MEM_2D_STRIDE_UV_VC2,
	DSP_N3_DATA_INFO_VC2,
	DSP_N3_DATA_CONVERT_CFG_VC2,
	DSP_N3_QCONV_SCALE_VC2,
	DSP_N3_QCONV_BAIS_VC2,
	DSP_N3_ROTATE_CFG_VC2,
	DSP_N3_PADDING_SIZE_VC2,
	DSP_N3_PADDING_SIZE_UV_VC2,
	DSP_N3_PADDING_DATA_INFO_VC2,
	DSP_N3_NPUFMT_CFG_VC2,
	DSP_N3_ENABLE_VC3,
	DSP_N3_FLOW_CONTROL_VC3,
	DSP_N3_INTERRUPT_MASK_VC3,
	DSP_N3_NUM_OF_BLK_VC3,
	DSP_N3_FRM_SIZE_XY_VC3,
	DSP_N3_BLK_SIZE_XY_VC3,
	DSP_N3_BLK_SIZE_Z_VC3,
	DSP_N3_BLK_BOUNDER_XY_VC3,
	DSP_N3_BLK_BOUNDER_Z_VC3,
	DSP_N3_BLK_OVERLAP_XY_VC3,
	DSP_N3_BLK_OVERLAP_Z_VC3,
	DSP_N3_EXT_MEM_ADDR_P0_VC3,
	DSP_N3_EXT_MEM_ADDR_P1_VC3,
	DSP_N3_INT_MEM0_ADDR_P0_VC3,
	DSP_N3_INT_MEM0_ADDR_P1_VC3,
	DSP_N3_INT_MEM0_ADDR_P2_VC3,
	DSP_N3_INT_MEM1_ADDR_P0_VC3,
	DSP_N3_INT_MEM1_ADDR_P1_VC3,
	DSP_N3_INT_MEM1_ADDR_P2_VC3,
	DSP_N3_INT_MEM_ADDR_DSG_VC3,
	DSP_N3_INT_MEM_OFFSET_DSG_VC3,
	DSP_N3_INT_MEM_STRIDE_VC3,
	DSP_N3_INT_MEM_2D_STRIDE_Y_VC3,
	DSP_N3_INT_MEM_2D_STRIDE_UV_VC3,
	DSP_N3_DATA_INFO_VC3,
	DSP_N3_DATA_CONVERT_CFG_VC3,
	DSP_N3_QCONV_SCALE_VC3,
	DSP_N3_QCONV_BAIS_VC3,
	DSP_N3_ROTATE_CFG_VC3,
	DSP_N3_PADDING_SIZE_VC3,
	DSP_N3_PADDING_SIZE_UV_VC3,
	DSP_N3_PADDING_DATA_INFO_VC3,
	DSP_N3_NPUFMT_CFG_VC3,
	DSP_N3_ENABLE_VC4,
	DSP_N3_FLOW_CONTROL_VC4,
	DSP_N3_INTERRUPT_MASK_VC4,
	DSP_N3_NUM_OF_BLK_VC4,
	DSP_N3_FRM_SIZE_XY_VC4,
	DSP_N3_BLK_SIZE_XY_VC4,
	DSP_N3_BLK_SIZE_Z_VC4,
	DSP_N3_BLK_BOUNDER_XY_VC4,
	DSP_N3_BLK_BOUNDER_Z_VC4,
	DSP_N3_BLK_OVERLAP_XY_VC4,
	DSP_N3_BLK_OVERLAP_Z_VC4,
	DSP_N3_EXT_MEM_ADDR_P0_VC4,
	DSP_N3_EXT_MEM_ADDR_P1_VC4,
	DSP_N3_INT_MEM0_ADDR_P0_VC4,
	DSP_N3_INT_MEM0_ADDR_P1_VC4,
	DSP_N3_INT_MEM0_ADDR_P2_VC4,
	DSP_N3_INT_MEM1_ADDR_P0_VC4,
	DSP_N3_INT_MEM1_ADDR_P1_VC4,
	DSP_N3_INT_MEM1_ADDR_P2_VC4,
	DSP_N3_INT_MEM_ADDR_DSG_VC4,
	DSP_N3_INT_MEM_OFFSET_DSG_VC4,
	DSP_N3_INT_MEM_STRIDE_VC4,
	DSP_N3_INT_MEM_2D_STRIDE_Y_VC4,
	DSP_N3_INT_MEM_2D_STRIDE_UV_VC4,
	DSP_N3_DATA_INFO_VC4,
	DSP_N3_DATA_CONVERT_CFG_VC4,
	DSP_N3_QCONV_SCALE_VC4,
	DSP_N3_QCONV_BAIS_VC4,
	DSP_N3_ROTATE_CFG_VC4,
	DSP_N3_PADDING_SIZE_VC4,
	DSP_N3_PADDING_SIZE_UV_VC4,
	DSP_N3_PADDING_DATA_INFO_VC4,
	DSP_N3_NPUFMT_CFG_VC4,
	DSP_N3_ENABLE_VC5,
	DSP_N3_FLOW_CONTROL_VC5,
	DSP_N3_INTERRUPT_MASK_VC5,
	DSP_N3_NUM_OF_BLK_VC5,
	DSP_N3_FRM_SIZE_XY_VC5,
	DSP_N3_BLK_SIZE_XY_VC5,
	DSP_N3_BLK_SIZE_Z_VC5,
	DSP_N3_BLK_BOUNDER_XY_VC5,
	DSP_N3_BLK_BOUNDER_Z_VC5,
	DSP_N3_BLK_OVERLAP_XY_VC5,
	DSP_N3_BLK_OVERLAP_Z_VC5,
	DSP_N3_EXT_MEM_ADDR_P0_VC5,
	DSP_N3_EXT_MEM_ADDR_P1_VC5,
	DSP_N3_INT_MEM0_ADDR_P0_VC5,
	DSP_N3_INT_MEM0_ADDR_P1_VC5,
	DSP_N3_INT_MEM0_ADDR_P2_VC5,
	DSP_N3_INT_MEM1_ADDR_P0_VC5,
	DSP_N3_INT_MEM1_ADDR_P1_VC5,
	DSP_N3_INT_MEM1_ADDR_P2_VC5,
	DSP_N3_INT_MEM_ADDR_DSG_VC5,
	DSP_N3_INT_MEM_OFFSET_DSG_VC5,
	DSP_N3_INT_MEM_STRIDE_VC5,
	DSP_N3_INT_MEM_2D_STRIDE_Y_VC5,
	DSP_N3_INT_MEM_2D_STRIDE_UV_VC5,
	DSP_N3_DATA_INFO_VC5,
	DSP_N3_DATA_CONVERT_CFG_VC5,
	DSP_N3_QCONV_SCALE_VC5,
	DSP_N3_QCONV_BAIS_VC5,
	DSP_N3_ROTATE_CFG_VC5,
	DSP_N3_PADDING_SIZE_VC5,
	DSP_N3_PADDING_SIZE_UV_VC5,
	DSP_N3_PADDING_DATA_INFO_VC5,
	DSP_N3_NPUFMT_CFG_VC5,
	DSP_N3_ENABLE_VC6,
	DSP_N3_FLOW_CONTROL_VC6,
	DSP_N3_INTERRUPT_MASK_VC6,
	DSP_N3_NUM_OF_BLK_VC6,
	DSP_N3_FRM_SIZE_XY_VC6,
	DSP_N3_BLK_SIZE_XY_VC6,
	DSP_N3_BLK_SIZE_Z_VC6,
	DSP_N3_BLK_BOUNDER_XY_VC6,
	DSP_N3_BLK_BOUNDER_Z_VC6,
	DSP_N3_BLK_OVERLAP_XY_VC6,
	DSP_N3_BLK_OVERLAP_Z_VC6,
	DSP_N3_EXT_MEM_ADDR_P0_VC6,
	DSP_N3_EXT_MEM_ADDR_P1_VC6,
	DSP_N3_INT_MEM0_ADDR_P0_VC6,
	DSP_N3_INT_MEM0_ADDR_P1_VC6,
	DSP_N3_INT_MEM0_ADDR_P2_VC6,
	DSP_N3_INT_MEM1_ADDR_P0_VC6,
	DSP_N3_INT_MEM1_ADDR_P1_VC6,
	DSP_N3_INT_MEM1_ADDR_P2_VC6,
	DSP_N3_INT_MEM_ADDR_DSG_VC6,
	DSP_N3_INT_MEM_OFFSET_DSG_VC6,
	DSP_N3_INT_MEM_STRIDE_VC6,
	DSP_N3_INT_MEM_2D_STRIDE_Y_VC6,
	DSP_N3_INT_MEM_2D_STRIDE_UV_VC6,
	DSP_N3_DATA_INFO_VC6,
	DSP_N3_DATA_CONVERT_CFG_VC6,
	DSP_N3_QCONV_SCALE_VC6,
	DSP_N3_QCONV_BAIS_VC6,
	DSP_N3_ROTATE_CFG_VC6,
	DSP_N3_PADDING_SIZE_VC6,
	DSP_N3_PADDING_SIZE_UV_VC6,
	DSP_N3_PADDING_DATA_INFO_VC6,
	DSP_N3_NPUFMT_CFG_VC6,
	DSP_N3_ENABLE_VC7,
	DSP_N3_FLOW_CONTROL_VC7,
	DSP_N3_INTERRUPT_MASK_VC7,
	DSP_N3_NUM_OF_BLK_VC7,
	DSP_N3_FRM_SIZE_XY_VC7,
	DSP_N3_BLK_SIZE_XY_VC7,
	DSP_N3_BLK_SIZE_Z_VC7,
	DSP_N3_BLK_BOUNDER_XY_VC7,
	DSP_N3_BLK_BOUNDER_Z_VC7,
	DSP_N3_BLK_OVERLAP_XY_VC7,
	DSP_N3_BLK_OVERLAP_Z_VC7,
	DSP_N3_EXT_MEM_ADDR_P0_VC7,
	DSP_N3_EXT_MEM_ADDR_P1_VC7,
	DSP_N3_INT_MEM0_ADDR_P0_VC7,
	DSP_N3_INT_MEM0_ADDR_P1_VC7,
	DSP_N3_INT_MEM0_ADDR_P2_VC7,
	DSP_N3_INT_MEM1_ADDR_P0_VC7,
	DSP_N3_INT_MEM1_ADDR_P1_VC7,
	DSP_N3_INT_MEM1_ADDR_P2_VC7,
	DSP_N3_INT_MEM_ADDR_DSG_VC7,
	DSP_N3_INT_MEM_OFFSET_DSG_VC7,
	DSP_N3_INT_MEM_STRIDE_VC7,
	DSP_N3_INT_MEM_2D_STRIDE_Y_VC7,
	DSP_N3_INT_MEM_2D_STRIDE_UV_VC7,
	DSP_N3_DATA_INFO_VC7,
	DSP_N3_DATA_CONVERT_CFG_VC7,
	DSP_N3_QCONV_SCALE_VC7,
	DSP_N3_QCONV_BAIS_VC7,
	DSP_N3_ROTATE_CFG_VC7,
	DSP_N3_PADDING_SIZE_VC7,
	DSP_N3_PADDING_SIZE_UV_VC7,
	DSP_N3_PADDING_DATA_INFO_VC7,
	DSP_N3_NPUFMT_CFG_VC7,
	DSP_N3_ENABLE_VC8,
	DSP_N3_FLOW_CONTROL_VC8,
	DSP_N3_INTERRUPT_MASK_VC8,
	DSP_N3_NUM_OF_BLK_VC8,
	DSP_N3_FRM_SIZE_XY_VC8,
	DSP_N3_BLK_SIZE_XY_VC8,
	DSP_N3_BLK_SIZE_Z_VC8,
	DSP_N3_BLK_BOUNDER_XY_VC8,
	DSP_N3_BLK_BOUNDER_Z_VC8,
	DSP_N3_BLK_OVERLAP_XY_VC8,
	DSP_N3_BLK_OVERLAP_Z_VC8,
	DSP_N3_EXT_MEM_ADDR_P0_VC8,
	DSP_N3_EXT_MEM_ADDR_P1_VC8,
	DSP_N3_INT_MEM0_ADDR_P0_VC8,
	DSP_N3_INT_MEM0_ADDR_P1_VC8,
	DSP_N3_INT_MEM0_ADDR_P2_VC8,
	DSP_N3_INT_MEM1_ADDR_P0_VC8,
	DSP_N3_INT_MEM1_ADDR_P1_VC8,
	DSP_N3_INT_MEM1_ADDR_P2_VC8,
	DSP_N3_INT_MEM_ADDR_DSG_VC8,
	DSP_N3_INT_MEM_OFFSET_DSG_VC8,
	DSP_N3_INT_MEM_STRIDE_VC8,
	DSP_N3_INT_MEM_2D_STRIDE_Y_VC8,
	DSP_N3_INT_MEM_2D_STRIDE_UV_VC8,
	DSP_N3_DATA_INFO_VC8,
	DSP_N3_DATA_CONVERT_CFG_VC8,
	DSP_N3_QCONV_SCALE_VC8,
	DSP_N3_QCONV_BAIS_VC8,
	DSP_N3_ROTATE_CFG_VC8,
	DSP_N3_PADDING_SIZE_VC8,
	DSP_N3_PADDING_SIZE_UV_VC8,
	DSP_N3_PADDING_DATA_INFO_VC8,
	DSP_N3_NPUFMT_CFG_VC8,
	DSP_N3_ENABLE_VC9,
	DSP_N3_FLOW_CONTROL_VC9,
	DSP_N3_INTERRUPT_MASK_VC9,
	DSP_N3_NUM_OF_BLK_VC9,
	DSP_N3_FRM_SIZE_XY_VC9,
	DSP_N3_BLK_SIZE_XY_VC9,
	DSP_N3_BLK_SIZE_Z_VC9,
	DSP_N3_BLK_BOUNDER_XY_VC9,
	DSP_N3_BLK_BOUNDER_Z_VC9,
	DSP_N3_BLK_OVERLAP_XY_VC9,
	DSP_N3_BLK_OVERLAP_Z_VC9,
	DSP_N3_EXT_MEM_ADDR_P0_VC9,
	DSP_N3_EXT_MEM_ADDR_P1_VC9,
	DSP_N3_INT_MEM0_ADDR_P0_VC9,
	DSP_N3_INT_MEM0_ADDR_P1_VC9,
	DSP_N3_INT_MEM0_ADDR_P2_VC9,
	DSP_N3_INT_MEM1_ADDR_P0_VC9,
	DSP_N3_INT_MEM1_ADDR_P1_VC9,
	DSP_N3_INT_MEM1_ADDR_P2_VC9,
	DSP_N3_INT_MEM_ADDR_DSG_VC9,
	DSP_N3_INT_MEM_OFFSET_DSG_VC9,
	DSP_N3_INT_MEM_STRIDE_VC9,
	DSP_N3_INT_MEM_2D_STRIDE_Y_VC9,
	DSP_N3_INT_MEM_2D_STRIDE_UV_VC9,
	DSP_N3_DATA_INFO_VC9,
	DSP_N3_DATA_CONVERT_CFG_VC9,
	DSP_N3_QCONV_SCALE_VC9,
	DSP_N3_QCONV_BAIS_VC9,
	DSP_N3_ROTATE_CFG_VC9,
	DSP_N3_PADDING_SIZE_VC9,
	DSP_N3_PADDING_SIZE_UV_VC9,
	DSP_N3_PADDING_DATA_INFO_VC9,
	DSP_N3_NPUFMT_CFG_VC9,
	DSP_N3_ENABLE_VC10,
	DSP_N3_FLOW_CONTROL_VC10,
	DSP_N3_INTERRUPT_MASK_VC10,
	DSP_N3_NUM_OF_BLK_VC10,
	DSP_N3_FRM_SIZE_XY_VC10,
	DSP_N3_BLK_SIZE_XY_VC10,
	DSP_N3_BLK_SIZE_Z_VC10,
	DSP_N3_BLK_BOUNDER_XY_VC10,
	DSP_N3_BLK_BOUNDER_Z_VC10,
	DSP_N3_BLK_OVERLAP_XY_VC10,
	DSP_N3_BLK_OVERLAP_Z_VC10,
	DSP_N3_EXT_MEM_ADDR_P0_VC10,
	DSP_N3_EXT_MEM_ADDR_P1_VC10,
	DSP_N3_INT_MEM0_ADDR_P0_VC10,
	DSP_N3_INT_MEM0_ADDR_P1_VC10,
	DSP_N3_INT_MEM0_ADDR_P2_VC10,
	DSP_N3_INT_MEM1_ADDR_P0_VC10,
	DSP_N3_INT_MEM1_ADDR_P1_VC10,
	DSP_N3_INT_MEM1_ADDR_P2_VC10,
	DSP_N3_INT_MEM_ADDR_DSG_VC10,
	DSP_N3_INT_MEM_OFFSET_DSG_VC10,
	DSP_N3_INT_MEM_STRIDE_VC10,
	DSP_N3_INT_MEM_2D_STRIDE_Y_VC10,
	DSP_N3_INT_MEM_2D_STRIDE_UV_VC10,
	DSP_N3_DATA_INFO_VC10,
	DSP_N3_DATA_CONVERT_CFG_VC10,
	DSP_N3_QCONV_SCALE_VC10,
	DSP_N3_QCONV_BAIS_VC10,
	DSP_N3_ROTATE_CFG_VC10,
	DSP_N3_PADDING_SIZE_VC10,
	DSP_N3_PADDING_SIZE_UV_VC10,
	DSP_N3_PADDING_DATA_INFO_VC10,
	DSP_N3_NPUFMT_CFG_VC10,
	DSP_N3_ENABLE_VC11,
	DSP_N3_FLOW_CONTROL_VC11,
	DSP_N3_INTERRUPT_MASK_VC11,
	DSP_N3_NUM_OF_BLK_VC11,
	DSP_N3_FRM_SIZE_XY_VC11,
	DSP_N3_BLK_SIZE_XY_VC11,
	DSP_N3_BLK_SIZE_Z_VC11,
	DSP_N3_BLK_BOUNDER_XY_VC11,
	DSP_N3_BLK_BOUNDER_Z_VC11,
	DSP_N3_BLK_OVERLAP_XY_VC11,
	DSP_N3_BLK_OVERLAP_Z_VC11,
	DSP_N3_EXT_MEM_ADDR_P0_VC11,
	DSP_N3_EXT_MEM_ADDR_P1_VC11,
	DSP_N3_INT_MEM0_ADDR_P0_VC11,
	DSP_N3_INT_MEM0_ADDR_P1_VC11,
	DSP_N3_INT_MEM0_ADDR_P2_VC11,
	DSP_N3_INT_MEM1_ADDR_P0_VC11,
	DSP_N3_INT_MEM1_ADDR_P1_VC11,
	DSP_N3_INT_MEM1_ADDR_P2_VC11,
	DSP_N3_INT_MEM_ADDR_DSG_VC11,
	DSP_N3_INT_MEM_OFFSET_DSG_VC11,
	DSP_N3_INT_MEM_STRIDE_VC11,
	DSP_N3_INT_MEM_2D_STRIDE_Y_VC11,
	DSP_N3_INT_MEM_2D_STRIDE_UV_VC11,
	DSP_N3_DATA_INFO_VC11,
	DSP_N3_DATA_CONVERT_CFG_VC11,
	DSP_N3_QCONV_SCALE_VC11,
	DSP_N3_QCONV_BAIS_VC11,
	DSP_N3_ROTATE_CFG_VC11,
	DSP_N3_PADDING_SIZE_VC11,
	DSP_N3_PADDING_SIZE_UV_VC11,
	DSP_N3_PADDING_DATA_INFO_VC11,
	DSP_N3_NPUFMT_CFG_VC11,
	DSP_N3_ENABLE_VC12,
	DSP_N3_FLOW_CONTROL_VC12,
	DSP_N3_INTERRUPT_MASK_VC12,
	DSP_N3_NUM_OF_BLK_VC12,
	DSP_N3_FRM_SIZE_XY_VC12,
	DSP_N3_BLK_SIZE_XY_VC12,
	DSP_N3_BLK_SIZE_Z_VC12,
	DSP_N3_BLK_BOUNDER_XY_VC12,
	DSP_N3_BLK_BOUNDER_Z_VC12,
	DSP_N3_BLK_OVERLAP_XY_VC12,
	DSP_N3_BLK_OVERLAP_Z_VC12,
	DSP_N3_EXT_MEM_ADDR_P0_VC12,
	DSP_N3_EXT_MEM_ADDR_P1_VC12,
	DSP_N3_INT_MEM0_ADDR_P0_VC12,
	DSP_N3_INT_MEM0_ADDR_P1_VC12,
	DSP_N3_INT_MEM0_ADDR_P2_VC12,
	DSP_N3_INT_MEM1_ADDR_P0_VC12,
	DSP_N3_INT_MEM1_ADDR_P1_VC12,
	DSP_N3_INT_MEM1_ADDR_P2_VC12,
	DSP_N3_INT_MEM_ADDR_DSG_VC12,
	DSP_N3_INT_MEM_OFFSET_DSG_VC12,
	DSP_N3_INT_MEM_STRIDE_VC12,
	DSP_N3_INT_MEM_2D_STRIDE_Y_VC12,
	DSP_N3_INT_MEM_2D_STRIDE_UV_VC12,
	DSP_N3_DATA_INFO_VC12,
	DSP_N3_DATA_CONVERT_CFG_VC12,
	DSP_N3_QCONV_SCALE_VC12,
	DSP_N3_QCONV_BAIS_VC12,
	DSP_N3_ROTATE_CFG_VC12,
	DSP_N3_PADDING_SIZE_VC12,
	DSP_N3_PADDING_SIZE_UV_VC12,
	DSP_N3_PADDING_DATA_INFO_VC12,
	DSP_N3_NPUFMT_CFG_VC12,
	DSP_N3_ENABLE_VC13,
	DSP_N3_FLOW_CONTROL_VC13,
	DSP_N3_INTERRUPT_MASK_VC13,
	DSP_N3_NUM_OF_BLK_VC13,
	DSP_N3_FRM_SIZE_XY_VC13,
	DSP_N3_BLK_SIZE_XY_VC13,
	DSP_N3_BLK_SIZE_Z_VC13,
	DSP_N3_BLK_BOUNDER_XY_VC13,
	DSP_N3_BLK_BOUNDER_Z_VC13,
	DSP_N3_BLK_OVERLAP_XY_VC13,
	DSP_N3_BLK_OVERLAP_Z_VC13,
	DSP_N3_EXT_MEM_ADDR_P0_VC13,
	DSP_N3_EXT_MEM_ADDR_P1_VC13,
	DSP_N3_INT_MEM0_ADDR_P0_VC13,
	DSP_N3_INT_MEM0_ADDR_P1_VC13,
	DSP_N3_INT_MEM0_ADDR_P2_VC13,
	DSP_N3_INT_MEM1_ADDR_P0_VC13,
	DSP_N3_INT_MEM1_ADDR_P1_VC13,
	DSP_N3_INT_MEM1_ADDR_P2_VC13,
	DSP_N3_INT_MEM_ADDR_DSG_VC13,
	DSP_N3_INT_MEM_OFFSET_DSG_VC13,
	DSP_N3_INT_MEM_STRIDE_VC13,
	DSP_N3_INT_MEM_2D_STRIDE_Y_VC13,
	DSP_N3_INT_MEM_2D_STRIDE_UV_VC13,
	DSP_N3_DATA_INFO_VC13,
	DSP_N3_DATA_CONVERT_CFG_VC13,
	DSP_N3_QCONV_SCALE_VC13,
	DSP_N3_QCONV_BAIS_VC13,
	DSP_N3_ROTATE_CFG_VC13,
	DSP_N3_PADDING_SIZE_VC13,
	DSP_N3_PADDING_SIZE_UV_VC13,
	DSP_N3_PADDING_DATA_INFO_VC13,
	DSP_N3_NPUFMT_CFG_VC13,
	DSP_N3_ENABLE_VC14,
	DSP_N3_FLOW_CONTROL_VC14,
	DSP_N3_INTERRUPT_MASK_VC14,
	DSP_N3_NUM_OF_BLK_VC14,
	DSP_N3_FRM_SIZE_XY_VC14,
	DSP_N3_BLK_SIZE_XY_VC14,
	DSP_N3_BLK_SIZE_Z_VC14,
	DSP_N3_BLK_BOUNDER_XY_VC14,
	DSP_N3_BLK_BOUNDER_Z_VC14,
	DSP_N3_BLK_OVERLAP_XY_VC14,
	DSP_N3_BLK_OVERLAP_Z_VC14,
	DSP_N3_EXT_MEM_ADDR_P0_VC14,
	DSP_N3_EXT_MEM_ADDR_P1_VC14,
	DSP_N3_INT_MEM0_ADDR_P0_VC14,
	DSP_N3_INT_MEM0_ADDR_P1_VC14,
	DSP_N3_INT_MEM0_ADDR_P2_VC14,
	DSP_N3_INT_MEM1_ADDR_P0_VC14,
	DSP_N3_INT_MEM1_ADDR_P1_VC14,
	DSP_N3_INT_MEM1_ADDR_P2_VC14,
	DSP_N3_INT_MEM_ADDR_DSG_VC14,
	DSP_N3_INT_MEM_OFFSET_DSG_VC14,
	DSP_N3_INT_MEM_STRIDE_VC14,
	DSP_N3_INT_MEM_2D_STRIDE_Y_VC14,
	DSP_N3_INT_MEM_2D_STRIDE_UV_VC14,
	DSP_N3_DATA_INFO_VC14,
	DSP_N3_DATA_CONVERT_CFG_VC14,
	DSP_N3_QCONV_SCALE_VC14,
	DSP_N3_QCONV_BAIS_VC14,
	DSP_N3_ROTATE_CFG_VC14,
	DSP_N3_PADDING_SIZE_VC14,
	DSP_N3_PADDING_SIZE_UV_VC14,
	DSP_N3_PADDING_DATA_INFO_VC14,
	DSP_N3_NPUFMT_CFG_VC14,
	DSP_N3_ENABLE_VC15,
	DSP_N3_FLOW_CONTROL_VC15,
	DSP_N3_INTERRUPT_MASK_VC15,
	DSP_N3_NUM_OF_BLK_VC15,
	DSP_N3_FRM_SIZE_XY_VC15,
	DSP_N3_BLK_SIZE_XY_VC15,
	DSP_N3_BLK_SIZE_Z_VC15,
	DSP_N3_BLK_BOUNDER_XY_VC15,
	DSP_N3_BLK_BOUNDER_Z_VC15,
	DSP_N3_BLK_OVERLAP_XY_VC15,
	DSP_N3_BLK_OVERLAP_Z_VC15,
	DSP_N3_EXT_MEM_ADDR_P0_VC15,
	DSP_N3_EXT_MEM_ADDR_P1_VC15,
	DSP_N3_INT_MEM0_ADDR_P0_VC15,
	DSP_N3_INT_MEM0_ADDR_P1_VC15,
	DSP_N3_INT_MEM0_ADDR_P2_VC15,
	DSP_N3_INT_MEM1_ADDR_P0_VC15,
	DSP_N3_INT_MEM1_ADDR_P1_VC15,
	DSP_N3_INT_MEM1_ADDR_P2_VC15,
	DSP_N3_INT_MEM_ADDR_DSG_VC15,
	DSP_N3_INT_MEM_OFFSET_DSG_VC15,
	DSP_N3_INT_MEM_STRIDE_VC15,
	DSP_N3_INT_MEM_2D_STRIDE_Y_VC15,
	DSP_N3_INT_MEM_2D_STRIDE_UV_VC15,
	DSP_N3_DATA_INFO_VC15,
	DSP_N3_DATA_CONVERT_CFG_VC15,
	DSP_N3_QCONV_SCALE_VC15,
	DSP_N3_QCONV_BAIS_VC15,
	DSP_N3_ROTATE_CFG_VC15,
	DSP_N3_PADDING_SIZE_VC15,
	DSP_N3_PADDING_SIZE_UV_VC15,
	DSP_N3_PADDING_DATA_INFO_VC15,
	DSP_N3_NPUFMT_CFG_VC15,
	DSP_N3_ENABLE_VC16,
	DSP_N3_FLOW_CONTROL_VC16,
	DSP_N3_INTERRUPT_MASK_VC16,
	DSP_N3_NUM_OF_BLK_VC16,
	DSP_N3_FRM_SIZE_XY_VC16,
	DSP_N3_BLK_SIZE_XY_VC16,
	DSP_N3_BLK_SIZE_Z_VC16,
	DSP_N3_BLK_BOUNDER_XY_VC16,
	DSP_N3_BLK_BOUNDER_Z_VC16,
	DSP_N3_BLK_OVERLAP_XY_VC16,
	DSP_N3_BLK_OVERLAP_Z_VC16,
	DSP_N3_EXT_MEM_ADDR_P0_VC16,
	DSP_N3_EXT_MEM_ADDR_P1_VC16,
	DSP_N3_INT_MEM0_ADDR_P0_VC16,
	DSP_N3_INT_MEM0_ADDR_P1_VC16,
	DSP_N3_INT_MEM0_ADDR_P2_VC16,
	DSP_N3_INT_MEM1_ADDR_P0_VC16,
	DSP_N3_INT_MEM1_ADDR_P1_VC16,
	DSP_N3_INT_MEM1_ADDR_P2_VC16,
	DSP_N3_INT_MEM_ADDR_DSG_VC16,
	DSP_N3_INT_MEM_OFFSET_DSG_VC16,
	DSP_N3_INT_MEM_STRIDE_VC16,
	DSP_N3_INT_MEM_2D_STRIDE_Y_VC16,
	DSP_N3_INT_MEM_2D_STRIDE_UV_VC16,
	DSP_N3_DATA_INFO_VC16,
	DSP_N3_DATA_CONVERT_CFG_VC16,
	DSP_N3_QCONV_SCALE_VC16,
	DSP_N3_QCONV_BAIS_VC16,
	DSP_N3_ROTATE_CFG_VC16,
	DSP_N3_PADDING_SIZE_VC16,
	DSP_N3_PADDING_SIZE_UV_VC16,
	DSP_N3_PADDING_DATA_INFO_VC16,
	DSP_N3_NPUFMT_CFG_VC16,
	DSP_N3_ENABLE_VC17,
	DSP_N3_FLOW_CONTROL_VC17,
	DSP_N3_INTERRUPT_MASK_VC17,
	DSP_N3_NUM_OF_BLK_VC17,
	DSP_N3_FRM_SIZE_XY_VC17,
	DSP_N3_BLK_SIZE_XY_VC17,
	DSP_N3_BLK_SIZE_Z_VC17,
	DSP_N3_BLK_BOUNDER_XY_VC17,
	DSP_N3_BLK_BOUNDER_Z_VC17,
	DSP_N3_BLK_OVERLAP_XY_VC17,
	DSP_N3_BLK_OVERLAP_Z_VC17,
	DSP_N3_EXT_MEM_ADDR_P0_VC17,
	DSP_N3_EXT_MEM_ADDR_P1_VC17,
	DSP_N3_INT_MEM0_ADDR_P0_VC17,
	DSP_N3_INT_MEM0_ADDR_P1_VC17,
	DSP_N3_INT_MEM0_ADDR_P2_VC17,
	DSP_N3_INT_MEM1_ADDR_P0_VC17,
	DSP_N3_INT_MEM1_ADDR_P1_VC17,
	DSP_N3_INT_MEM1_ADDR_P2_VC17,
	DSP_N3_INT_MEM_ADDR_DSG_VC17,
	DSP_N3_INT_MEM_OFFSET_DSG_VC17,
	DSP_N3_INT_MEM_STRIDE_VC17,
	DSP_N3_INT_MEM_2D_STRIDE_Y_VC17,
	DSP_N3_INT_MEM_2D_STRIDE_UV_VC17,
	DSP_N3_DATA_INFO_VC17,
	DSP_N3_DATA_CONVERT_CFG_VC17,
	DSP_N3_QCONV_SCALE_VC17,
	DSP_N3_QCONV_BAIS_VC17,
	DSP_N3_ROTATE_CFG_VC17,
	DSP_N3_PADDING_SIZE_VC17,
	DSP_N3_PADDING_SIZE_UV_VC17,
	DSP_N3_PADDING_DATA_INFO_VC17,
	DSP_N3_NPUFMT_CFG_VC17,
	DSP_N3_ENABLE_VC18,
	DSP_N3_FLOW_CONTROL_VC18,
	DSP_N3_INTERRUPT_MASK_VC18,
	DSP_N3_NUM_OF_BLK_VC18,
	DSP_N3_FRM_SIZE_XY_VC18,
	DSP_N3_BLK_SIZE_XY_VC18,
	DSP_N3_BLK_SIZE_Z_VC18,
	DSP_N3_BLK_BOUNDER_XY_VC18,
	DSP_N3_BLK_BOUNDER_Z_VC18,
	DSP_N3_BLK_OVERLAP_XY_VC18,
	DSP_N3_BLK_OVERLAP_Z_VC18,
	DSP_N3_EXT_MEM_ADDR_P0_VC18,
	DSP_N3_EXT_MEM_ADDR_P1_VC18,
	DSP_N3_INT_MEM0_ADDR_P0_VC18,
	DSP_N3_INT_MEM0_ADDR_P1_VC18,
	DSP_N3_INT_MEM0_ADDR_P2_VC18,
	DSP_N3_INT_MEM1_ADDR_P0_VC18,
	DSP_N3_INT_MEM1_ADDR_P1_VC18,
	DSP_N3_INT_MEM1_ADDR_P2_VC18,
	DSP_N3_INT_MEM_ADDR_DSG_VC18,
	DSP_N3_INT_MEM_OFFSET_DSG_VC18,
	DSP_N3_INT_MEM_STRIDE_VC18,
	DSP_N3_INT_MEM_2D_STRIDE_Y_VC18,
	DSP_N3_INT_MEM_2D_STRIDE_UV_VC18,
	DSP_N3_DATA_INFO_VC18,
	DSP_N3_DATA_CONVERT_CFG_VC18,
	DSP_N3_QCONV_SCALE_VC18,
	DSP_N3_QCONV_BAIS_VC18,
	DSP_N3_ROTATE_CFG_VC18,
	DSP_N3_PADDING_SIZE_VC18,
	DSP_N3_PADDING_SIZE_UV_VC18,
	DSP_N3_PADDING_DATA_INFO_VC18,
	DSP_N3_NPUFMT_CFG_VC18,
	DSP_N3_ENABLE_VC19,
	DSP_N3_FLOW_CONTROL_VC19,
	DSP_N3_INTERRUPT_MASK_VC19,
	DSP_N3_NUM_OF_BLK_VC19,
	DSP_N3_FRM_SIZE_XY_VC19,
	DSP_N3_BLK_SIZE_XY_VC19,
	DSP_N3_BLK_SIZE_Z_VC19,
	DSP_N3_BLK_BOUNDER_XY_VC19,
	DSP_N3_BLK_BOUNDER_Z_VC19,
	DSP_N3_BLK_OVERLAP_XY_VC19,
	DSP_N3_BLK_OVERLAP_Z_VC19,
	DSP_N3_EXT_MEM_ADDR_P0_VC19,
	DSP_N3_EXT_MEM_ADDR_P1_VC19,
	DSP_N3_INT_MEM0_ADDR_P0_VC19,
	DSP_N3_INT_MEM0_ADDR_P1_VC19,
	DSP_N3_INT_MEM0_ADDR_P2_VC19,
	DSP_N3_INT_MEM1_ADDR_P0_VC19,
	DSP_N3_INT_MEM1_ADDR_P1_VC19,
	DSP_N3_INT_MEM1_ADDR_P2_VC19,
	DSP_N3_INT_MEM_ADDR_DSG_VC19,
	DSP_N3_INT_MEM_OFFSET_DSG_VC19,
	DSP_N3_INT_MEM_STRIDE_VC19,
	DSP_N3_INT_MEM_2D_STRIDE_Y_VC19,
	DSP_N3_INT_MEM_2D_STRIDE_UV_VC19,
	DSP_N3_DATA_INFO_VC19,
	DSP_N3_DATA_CONVERT_CFG_VC19,
	DSP_N3_QCONV_SCALE_VC19,
	DSP_N3_QCONV_BAIS_VC19,
	DSP_N3_ROTATE_CFG_VC19,
	DSP_N3_PADDING_SIZE_VC19,
	DSP_N3_PADDING_SIZE_UV_VC19,
	DSP_N3_PADDING_DATA_INFO_VC19,
	DSP_N3_NPUFMT_CFG_VC19,
	DSP_N3_ENABLE_VC20,
	DSP_N3_FLOW_CONTROL_VC20,
	DSP_N3_INTERRUPT_MASK_VC20,
	DSP_N3_NUM_OF_BLK_VC20,
	DSP_N3_FRM_SIZE_XY_VC20,
	DSP_N3_BLK_SIZE_XY_VC20,
	DSP_N3_BLK_SIZE_Z_VC20,
	DSP_N3_BLK_BOUNDER_XY_VC20,
	DSP_N3_BLK_BOUNDER_Z_VC20,
	DSP_N3_BLK_OVERLAP_XY_VC20,
	DSP_N3_BLK_OVERLAP_Z_VC20,
	DSP_N3_EXT_MEM_ADDR_P0_VC20,
	DSP_N3_EXT_MEM_ADDR_P1_VC20,
	DSP_N3_INT_MEM0_ADDR_P0_VC20,
	DSP_N3_INT_MEM0_ADDR_P1_VC20,
	DSP_N3_INT_MEM0_ADDR_P2_VC20,
	DSP_N3_INT_MEM1_ADDR_P0_VC20,
	DSP_N3_INT_MEM1_ADDR_P1_VC20,
	DSP_N3_INT_MEM1_ADDR_P2_VC20,
	DSP_N3_INT_MEM_ADDR_DSG_VC20,
	DSP_N3_INT_MEM_OFFSET_DSG_VC20,
	DSP_N3_INT_MEM_STRIDE_VC20,
	DSP_N3_INT_MEM_2D_STRIDE_Y_VC20,
	DSP_N3_INT_MEM_2D_STRIDE_UV_VC20,
	DSP_N3_DATA_INFO_VC20,
	DSP_N3_DATA_CONVERT_CFG_VC20,
	DSP_N3_QCONV_SCALE_VC20,
	DSP_N3_QCONV_BAIS_VC20,
	DSP_N3_ROTATE_CFG_VC20,
	DSP_N3_PADDING_SIZE_VC20,
	DSP_N3_PADDING_SIZE_UV_VC20,
	DSP_N3_PADDING_DATA_INFO_VC20,
	DSP_N3_NPUFMT_CFG_VC20,
	DSP_N3_ENABLE_VC21,
	DSP_N3_FLOW_CONTROL_VC21,
	DSP_N3_INTERRUPT_MASK_VC21,
	DSP_N3_NUM_OF_BLK_VC21,
	DSP_N3_FRM_SIZE_XY_VC21,
	DSP_N3_BLK_SIZE_XY_VC21,
	DSP_N3_BLK_SIZE_Z_VC21,
	DSP_N3_BLK_BOUNDER_XY_VC21,
	DSP_N3_BLK_BOUNDER_Z_VC21,
	DSP_N3_BLK_OVERLAP_XY_VC21,
	DSP_N3_BLK_OVERLAP_Z_VC21,
	DSP_N3_EXT_MEM_ADDR_P0_VC21,
	DSP_N3_EXT_MEM_ADDR_P1_VC21,
	DSP_N3_INT_MEM0_ADDR_P0_VC21,
	DSP_N3_INT_MEM0_ADDR_P1_VC21,
	DSP_N3_INT_MEM0_ADDR_P2_VC21,
	DSP_N3_INT_MEM1_ADDR_P0_VC21,
	DSP_N3_INT_MEM1_ADDR_P1_VC21,
	DSP_N3_INT_MEM1_ADDR_P2_VC21,
	DSP_N3_INT_MEM_ADDR_DSG_VC21,
	DSP_N3_INT_MEM_OFFSET_DSG_VC21,
	DSP_N3_INT_MEM_STRIDE_VC21,
	DSP_N3_INT_MEM_2D_STRIDE_Y_VC21,
	DSP_N3_INT_MEM_2D_STRIDE_UV_VC21,
	DSP_N3_DATA_INFO_VC21,
	DSP_N3_DATA_CONVERT_CFG_VC21,
	DSP_N3_QCONV_SCALE_VC21,
	DSP_N3_QCONV_BAIS_VC21,
	DSP_N3_ROTATE_CFG_VC21,
	DSP_N3_PADDING_SIZE_VC21,
	DSP_N3_PADDING_SIZE_UV_VC21,
	DSP_N3_PADDING_DATA_INFO_VC21,
	DSP_N3_NPUFMT_CFG_VC21,
	DSP_N3_ENABLE_VC22,
	DSP_N3_FLOW_CONTROL_VC22,
	DSP_N3_INTERRUPT_MASK_VC22,
	DSP_N3_NUM_OF_BLK_VC22,
	DSP_N3_FRM_SIZE_XY_VC22,
	DSP_N3_BLK_SIZE_XY_VC22,
	DSP_N3_BLK_SIZE_Z_VC22,
	DSP_N3_BLK_BOUNDER_XY_VC22,
	DSP_N3_BLK_BOUNDER_Z_VC22,
	DSP_N3_BLK_OVERLAP_XY_VC22,
	DSP_N3_BLK_OVERLAP_Z_VC22,
	DSP_N3_EXT_MEM_ADDR_P0_VC22,
	DSP_N3_EXT_MEM_ADDR_P1_VC22,
	DSP_N3_INT_MEM0_ADDR_P0_VC22,
	DSP_N3_INT_MEM0_ADDR_P1_VC22,
	DSP_N3_INT_MEM0_ADDR_P2_VC22,
	DSP_N3_INT_MEM1_ADDR_P0_VC22,
	DSP_N3_INT_MEM1_ADDR_P1_VC22,
	DSP_N3_INT_MEM1_ADDR_P2_VC22,
	DSP_N3_INT_MEM_ADDR_DSG_VC22,
	DSP_N3_INT_MEM_OFFSET_DSG_VC22,
	DSP_N3_INT_MEM_STRIDE_VC22,
	DSP_N3_INT_MEM_2D_STRIDE_Y_VC22,
	DSP_N3_INT_MEM_2D_STRIDE_UV_VC22,
	DSP_N3_DATA_INFO_VC22,
	DSP_N3_DATA_CONVERT_CFG_VC22,
	DSP_N3_QCONV_SCALE_VC22,
	DSP_N3_QCONV_BAIS_VC22,
	DSP_N3_ROTATE_CFG_VC22,
	DSP_N3_PADDING_SIZE_VC22,
	DSP_N3_PADDING_SIZE_UV_VC22,
	DSP_N3_PADDING_DATA_INFO_VC22,
	DSP_N3_NPUFMT_CFG_VC22,
	DSP_N3_ENABLE_VC23,
	DSP_N3_FLOW_CONTROL_VC23,
	DSP_N3_INTERRUPT_MASK_VC23,
	DSP_N3_NUM_OF_BLK_VC23,
	DSP_N3_FRM_SIZE_XY_VC23,
	DSP_N3_BLK_SIZE_XY_VC23,
	DSP_N3_BLK_SIZE_Z_VC23,
	DSP_N3_BLK_BOUNDER_XY_VC23,
	DSP_N3_BLK_BOUNDER_Z_VC23,
	DSP_N3_BLK_OVERLAP_XY_VC23,
	DSP_N3_BLK_OVERLAP_Z_VC23,
	DSP_N3_EXT_MEM_ADDR_P0_VC23,
	DSP_N3_EXT_MEM_ADDR_P1_VC23,
	DSP_N3_INT_MEM0_ADDR_P0_VC23,
	DSP_N3_INT_MEM0_ADDR_P1_VC23,
	DSP_N3_INT_MEM0_ADDR_P2_VC23,
	DSP_N3_INT_MEM1_ADDR_P0_VC23,
	DSP_N3_INT_MEM1_ADDR_P1_VC23,
	DSP_N3_INT_MEM1_ADDR_P2_VC23,
	DSP_N3_INT_MEM_ADDR_DSG_VC23,
	DSP_N3_INT_MEM_OFFSET_DSG_VC23,
	DSP_N3_INT_MEM_STRIDE_VC23,
	DSP_N3_INT_MEM_2D_STRIDE_Y_VC23,
	DSP_N3_INT_MEM_2D_STRIDE_UV_VC23,
	DSP_N3_DATA_INFO_VC23,
	DSP_N3_DATA_CONVERT_CFG_VC23,
	DSP_N3_QCONV_SCALE_VC23,
	DSP_N3_QCONV_BAIS_VC23,
	DSP_N3_ROTATE_CFG_VC23,
	DSP_N3_PADDING_SIZE_VC23,
	DSP_N3_PADDING_SIZE_UV_VC23,
	DSP_N3_PADDING_DATA_INFO_VC23,
	DSP_N3_NPUFMT_CFG_VC23,
#endif // ENABLE_DSP_N3_REG_SDMA_SS
#ifdef ENABLE_DSP_N3_REG_PWM
	DSP_N3_PWM_CONFIG0,
	DSP_N3_PWM_CONFIG1,
	DSP_N3_PWM_CONTROL,
	DSP_N3_PWM_CNTB0,
	DSP_N3_PWM_CMPB0,
	DSP_N3_PWM_OBST0,
	DSP_N3_PWM_CNTB1,
	DSP_N3_PWM_CMPB1,
	DSP_N3_PWM_OBST1,
	DSP_N3_PWM_CNTB2,
	DSP_N3_PWM_CMPB2,
	DSP_N3_PWM_OBST2,
	DSP_N3_PWM_CNTB3,
	DSP_N3_PWM_CMPB3,
	DSP_N3_PWM_OBST3,
	DSP_N3_PWM_CNTB4,
	DSP_N3_PWM_OBST4,
	DSP_N3_TINT_CSTAT,
#endif // ENABLE_DSP_N3_REG_PWM
#ifdef ENABLE_DSP_N3_REG_CPU_SS
	DSP_N3_DSPC_CPU_REMAPS0_NS,
	DSP_N3_DSPC_CPU_REMAPS1,
	DSP_N3_DSPC_CPU_REMAPD0_NS,
	DSP_N3_DSPC_CPU_REMAPD1,
	DSP_N3_DSPC_CPU_RESET_RELEASE,
	DSP_N3_DSPC_CPU_ABORTEN,
	DSP_N3_DSPC_CPU_AWCACHE,
	DSP_N3_DSPC_CPU_ARCACHE,
	DSP_N3_DSPC_CPU_CKEN_ON,
	DSP_N3_DSPC_CPU_EVENT,
	DSP_N3_DSPC_CPU_RELEASE,
	DSP_N3_DSPC_CPU_RELEASE_NS,
	DSP_N3_DSPC_CPU_PERIPHBASE,
	DSP_N3_GIC_WCPU_SEL,
	DSP_N3_GIC_RCPU_SEL,
	DSP_N3_DSPC_SEC_MEMORY_FLAG,
	DSP_N3_DSPC_SEC_SLAVE_FLAG,
	DSP_N3_DSPC_SEC_DMAVC_FLAG,
	DSP_N3_DSPC_SEC_NPU_FLAG,
	DSP_N3_DSPC_SEC_SLAVE_FLAG_CLR,
	DSP_N3_DSPC_SEC_DMAVC_FLAG_CLR,
	DSP_N3_DSPC_SEC_ISP_FLAG,
	DSP_N3_DSPC_CPU_CP15DISABLE,
	DSP_N3_DSPC_CPU_L1RSTDISABLE,
	DSP_N3_DSPC_CPU_CFGDISABLE,
	DSP_N3_DSPC_CPU_EVENT_STATUS,
	DSP_N3_DSPC_CPU_WFI_STATUS,
	DSP_N3_DSPC_CPU_WFE_STATUS,
	DSP_N3_DSPC_CPU0_PC,
	DSP_N3_DSPC_CPU1_PC,
	DSP_N3_DSPC_CPU_RESTART,
	DSP_N3_DSPC_WR2C_EN,
#endif // ENABLE_DSP_N3_REG_CPU_SS
#ifdef ENABLE_DSP_N3_REG_GIC
	DSP_N3_GICD_CTLR,
	DSP_N3_GICD_TYPER,
	DSP_N3_GICD_IIDR,
	DSP_N3_GICD_IGROUPR,
	DSP_N3_GICD_ISENABLER,
	DSP_N3_GICD_ICENABLER,
	DSP_N3_GICD_ISPENDR,
	DSP_N3_GICD_ICPENDR,
	DSP_N3_GICD_ISACTIVER,
	DSP_N3_GICD_ICACTIVER,
	DSP_N3_GICD_IPRIORITYR_SGI,
	DSP_N3_GICD_IPRIORITYR_PPI0,
	DSP_N3_GICD_IPRIORITYR_PPI1,
	DSP_N3_GICD_IPRIORITYR_SPI,
	DSP_N3_GICD_ITARGETSR_SGI,
	DSP_N3_GICD_ITARGETSR_PPI0,
	DSP_N3_GICD_ITARGETSR_PPI1,
	DSP_N3_GICD_ITARGETSR_SPI,
	DSP_N3_GICD_ICFGR_SGI,
	DSP_N3_GICD_ICFGR_PPI,
	DSP_N3_GICD_ICFGR_SPI,
	DSP_N3_GICD_PPISR,
	DSP_N3_GICD_SPISRn,
	DSP_N3_GICD_SGIR,
	DSP_N3_GICD_CPENDSGIR,
	DSP_N3_GICC_CTLR,
	DSP_N3_GICC_PMR,
	DSP_N3_GICC_BPR,
	DSP_N3_GICC_IAR,
	DSP_N3_GICC_EOIR,
	DSP_N3_GICC_RPR,
	DSP_N3_GICC_HPPIR,
	DSP_N3_GICC_ABPR,
	DSP_N3_GICC_AIAR,
	DSP_N3_GICC_AEOIR,
	DSP_N3_GICC_AHPPIR,
	DSP_N3_GICC_APR0,
	DSP_N3_GICC_NSAPR0,
	DSP_N3_GICC_IIDR,
	DSP_N3_GICC_DIR,
#endif // ENABLE_DSP_N3_REG_GIC
#ifdef ENABLE_DSP_N3_REG_SYSCTRL_DSP0
	DSP_N3_DSP0_MCGEN,
	DSP_N3_DSP0_IVP_SWRESET,
	DSP_N3_DSP0_PERF_MON_ENABLE,
	DSP_N3_DSP0_PERF_MON_CLEAR,
	DSP_N3_DSP0_DBG_MON_ENABLE,
	DSP_N3_DSP0_DBG_INTR_STATUS,
	DSP_N3_DSP0_DBG_INTR_ENABLE,
	DSP_N3_DSP0_DBG_INTR_CLEAR,
	DSP_N3_DSP0_DBG_INTR_MSTATUS,
	DSP_N3_DSP0_IVP_SFR2AXI_SGMO,
	DSP_N3_DSP0_VTCM_STACK_START_END,
	DSP_N3_DSP0_VTCM_MODE,
	DSP_N3_DSP0_PERF_IVP_PC0,
	DSP_N3_DSP0_PERF_IVP_PC1,
	DSP_N3_DSP0_PERF_IVP_VALID_CNTL,
	DSP_N3_DSP0_PERF_IVP_VALID_CNTH,
	DSP_N3_DSP0_PERF_IVP_STALL_CNT,
	DSP_N3_DSP0_PERF_IVP_IC_REQL,
	DSP_N3_DSP0_PERF_IVP_IC_REQH,
	DSP_N3_DSP0_PERF_IVP_IC_MISS,
	DSP_N3_DSP0_PERF_IVP_INST_CNT,
	DSP_N3_DSP0_DBG_IVP_ADDR_PM,
	DSP_N3_DSP0_DBG_IVP_ADDR_DM,
	DSP_N3_DSP0_DBG_IVP_ERROR_INFO,
	DSP_N3_DSP0_DBG_IVP0_ERROR_PC,
	DSP_N3_DSP0_DBG_IVP1_ERROR_PC,
	DSP_N3_DSP0_DBG_MPU_SMONITOR,
	DSP_N3_DSP0_DBG_MPU_EMONITOR,
	DSP_N3_DSP0_IVP_WAKEUP,
	DSP_N3_DSP0_IVP_INTR_STATUS_TH,
	DSP_N3_DSP0_IVP_INTR_ENABLE_TH,
	DSP_N3_DSP0_IVP_SWI_SET_TH,
	DSP_N3_DSP0_IVP_SWI_CLEAR_TH,
	DSP_N3_DSP0_IVP_MASKED_STATUS_TH,
	DSP_N3_DSP0_IVP_IC_BASE_ADDR,
	DSP_N3_DSP0_IVP_IC_CODE_SIZE,
	DSP_N3_DSP0_IVP_IC_INVALID_REQ,
	DSP_N3_DSP0_IVP_IC_INVALID_STATUS,
	DSP_N3_DSP0_IVP_DM_STACK_START_END,
	DSP_N3_DSP0_IVP_MAILBOX_INTR_TH0,
	DSP_N3_DSP0_IVP_MAILBOX_TH0,
	DSP_N3_DSP0_IVP_MAILBOX_INTR_TH1,
	DSP_N3_DSP0_IVP_MAILBOX_TH1,
#endif // ENABLE_DSP_N3_REG_SYSCTRL_DSP0
#ifdef ENABLE_DSP_N3_REG_SYSCTRL_DSP1
	DSP_N3_DSP1_MCGEN,
	DSP_N3_DSP1_IVP_SWRESET,
	DSP_N3_DSP1_PERF_MON_ENABLE,
	DSP_N3_DSP1_PERF_MON_CLEAR,
	DSP_N3_DSP1_DBG_MON_ENABLE,
	DSP_N3_DSP1_DBG_INTR_STATUS,
	DSP_N3_DSP1_DBG_INTR_ENABLE,
	DSP_N3_DSP1_DBG_INTR_CLEAR,
	DSP_N3_DSP1_DBG_INTR_MSTATUS,
	DSP_N3_DSP1_IVP_SFR2AXI_SGMO,
	DSP_N3_DSP1_VTCM_STACK_START_END,
	DSP_N3_DSP1_VTCM_MODE,
	DSP_N3_DSP1_PERF_IVP_PC0,
	DSP_N3_DSP1_PERF_IVP_PC1,
	DSP_N3_DSP1_PERF_IVP_VALID_CNTL,
	DSP_N3_DSP1_PERF_IVP_VALID_CNTH,
	DSP_N3_DSP1_PERF_IVP_STALL_CNT,
	DSP_N3_DSP1_PERF_IVP_IC_REQL,
	DSP_N3_DSP1_PERF_IVP_IC_REQH,
	DSP_N3_DSP1_PERF_IVP_IC_MISS,
	DSP_N3_DSP1_PERF_IVP_INST_CNT,
	DSP_N3_DSP1_DBG_IVP_ADDR_PM,
	DSP_N3_DSP1_DBG_IVP_ADDR_DM,
	DSP_N3_DSP1_DBG_IVP_ERROR_INFO,
	DSP_N3_DSP1_DBG_IVP0_ERROR_PC,
	DSP_N3_DSP1_DBG_IVP1_ERROR_PC,
	DSP_N3_DSP1_DBG_MPU_SMONITOR,
	DSP_N3_DSP1_DBG_MPU_EMONITOR,
	DSP_N3_DSP1_IVP_WAKEUP,
	DSP_N3_DSP1_IVP_INTR_STATUS_TH,
	DSP_N3_DSP1_IVP_INTR_ENABLE_TH,
	DSP_N3_DSP1_IVP_SWI_SET_TH,
	DSP_N3_DSP1_IVP_SWI_CLEAR_TH,
	DSP_N3_DSP1_IVP_MASKED_STATUS_TH,
	DSP_N3_DSP1_IVP_IC_BASE_ADDR,
	DSP_N3_DSP1_IVP_IC_CODE_SIZE,
	DSP_N3_DSP1_IVP_IC_INVALID_REQ,
	DSP_N3_DSP1_IVP_IC_INVALID_STATUS,
	DSP_N3_DSP1_IVP_DM_STACK_START_END,
	DSP_N3_DSP1_IVP_MAILBOX_INTR_TH0,
	DSP_N3_DSP1_IVP_MAILBOX_TH0,
	DSP_N3_DSP1_IVP_MAILBOX_INTR_TH1,
	DSP_N3_DSP1_IVP_MAILBOX_TH1,
#endif // ENABLE_DSP_N3_REG_SYSCTRL_DSP1
	DSP_N3_REG_END,
};

int dsp_hw_n3_ctrl_init(void);

#endif
