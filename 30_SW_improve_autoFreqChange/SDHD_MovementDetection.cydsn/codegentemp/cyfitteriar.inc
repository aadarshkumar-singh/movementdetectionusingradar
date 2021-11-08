;
; File Name: cyfitteriar.inc
; 
; PSoC Creator  4.3
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2019 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar.inc
    INCLUDE cydeviceiar_trm.inc

/* Rx_1 */
Rx_1__0__INTTYPE EQU CYREG_PICU2_INTTYPE0
Rx_1__0__MASK EQU 0x01
Rx_1__0__PC EQU CYREG_PRT2_PC0
Rx_1__0__PORT EQU 2
Rx_1__0__SHIFT EQU 0
Rx_1__AG EQU CYREG_PRT2_AG
Rx_1__AMUX EQU CYREG_PRT2_AMUX
Rx_1__BIE EQU CYREG_PRT2_BIE
Rx_1__BIT_MASK EQU CYREG_PRT2_BIT_MASK
Rx_1__BYP EQU CYREG_PRT2_BYP
Rx_1__CTL EQU CYREG_PRT2_CTL
Rx_1__DM0 EQU CYREG_PRT2_DM0
Rx_1__DM1 EQU CYREG_PRT2_DM1
Rx_1__DM2 EQU CYREG_PRT2_DM2
Rx_1__DR EQU CYREG_PRT2_DR
Rx_1__INP_DIS EQU CYREG_PRT2_INP_DIS
Rx_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
Rx_1__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
Rx_1__LCD_EN EQU CYREG_PRT2_LCD_EN
Rx_1__MASK EQU 0x01
Rx_1__PORT EQU 2
Rx_1__PRT EQU CYREG_PRT2_PRT
Rx_1__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
Rx_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
Rx_1__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
Rx_1__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
Rx_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
Rx_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
Rx_1__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
Rx_1__PS EQU CYREG_PRT2_PS
Rx_1__SHIFT EQU 0
Rx_1__SLW EQU CYREG_PRT2_SLW

/* Tx_1 */
Tx_1__0__INTTYPE EQU CYREG_PICU2_INTTYPE1
Tx_1__0__MASK EQU 0x02
Tx_1__0__PC EQU CYREG_PRT2_PC1
Tx_1__0__PORT EQU 2
Tx_1__0__SHIFT EQU 1
Tx_1__AG EQU CYREG_PRT2_AG
Tx_1__AMUX EQU CYREG_PRT2_AMUX
Tx_1__BIE EQU CYREG_PRT2_BIE
Tx_1__BIT_MASK EQU CYREG_PRT2_BIT_MASK
Tx_1__BYP EQU CYREG_PRT2_BYP
Tx_1__CTL EQU CYREG_PRT2_CTL
Tx_1__DM0 EQU CYREG_PRT2_DM0
Tx_1__DM1 EQU CYREG_PRT2_DM1
Tx_1__DM2 EQU CYREG_PRT2_DM2
Tx_1__DR EQU CYREG_PRT2_DR
Tx_1__INP_DIS EQU CYREG_PRT2_INP_DIS
Tx_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
Tx_1__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
Tx_1__LCD_EN EQU CYREG_PRT2_LCD_EN
Tx_1__MASK EQU 0x02
Tx_1__PORT EQU 2
Tx_1__PRT EQU CYREG_PRT2_PRT
Tx_1__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
Tx_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
Tx_1__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
Tx_1__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
Tx_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
Tx_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
Tx_1__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
Tx_1__PS EQU CYREG_PRT2_PS
Tx_1__SHIFT EQU 1
Tx_1__SLW EQU CYREG_PRT2_SLW

/* UART */
UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB08_09_ACTL
UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG EQU CYREG_B1_UDB08_09_CTL
UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG EQU CYREG_B1_UDB08_09_CTL
UART_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG EQU CYREG_B1_UDB08_09_CTL
UART_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG EQU CYREG_B1_UDB08_09_CTL
UART_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG EQU CYREG_B1_UDB08_09_MSK
UART_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG EQU CYREG_B1_UDB08_09_MSK
UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG EQU CYREG_B1_UDB08_09_MSK
UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG EQU CYREG_B1_UDB08_09_MSK
UART_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB08_ACTL
UART_BUART_sRX_RxBitCounter__CONTROL_REG EQU CYREG_B1_UDB08_CTL
UART_BUART_sRX_RxBitCounter__CONTROL_ST_REG EQU CYREG_B1_UDB08_ST_CTL
UART_BUART_sRX_RxBitCounter__COUNT_REG EQU CYREG_B1_UDB08_CTL
UART_BUART_sRX_RxBitCounter__COUNT_ST_REG EQU CYREG_B1_UDB08_ST_CTL
UART_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG EQU CYREG_B1_UDB08_MSK_ACTL
UART_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG EQU CYREG_B1_UDB08_MSK_ACTL
UART_BUART_sRX_RxBitCounter__PERIOD_REG EQU CYREG_B1_UDB08_MSK
UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB08_09_ACTL
UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG EQU CYREG_B1_UDB08_09_ST
UART_BUART_sRX_RxBitCounter_ST__MASK_REG EQU CYREG_B1_UDB08_MSK
UART_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG EQU CYREG_B1_UDB08_MSK_ACTL
UART_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG EQU CYREG_B1_UDB08_MSK_ACTL
UART_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB08_ACTL
UART_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG EQU CYREG_B1_UDB08_ST_CTL
UART_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG EQU CYREG_B1_UDB08_ST_CTL
UART_BUART_sRX_RxBitCounter_ST__STATUS_REG EQU CYREG_B1_UDB08_ST
UART_BUART_sRX_RxShifter_u0__16BIT_A0_REG EQU CYREG_B0_UDB08_09_A0
UART_BUART_sRX_RxShifter_u0__16BIT_A1_REG EQU CYREG_B0_UDB08_09_A1
UART_BUART_sRX_RxShifter_u0__16BIT_D0_REG EQU CYREG_B0_UDB08_09_D0
UART_BUART_sRX_RxShifter_u0__16BIT_D1_REG EQU CYREG_B0_UDB08_09_D1
UART_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB08_09_ACTL
UART_BUART_sRX_RxShifter_u0__16BIT_F0_REG EQU CYREG_B0_UDB08_09_F0
UART_BUART_sRX_RxShifter_u0__16BIT_F1_REG EQU CYREG_B0_UDB08_09_F1
UART_BUART_sRX_RxShifter_u0__A0_A1_REG EQU CYREG_B0_UDB08_A0_A1
UART_BUART_sRX_RxShifter_u0__A0_REG EQU CYREG_B0_UDB08_A0
UART_BUART_sRX_RxShifter_u0__A1_REG EQU CYREG_B0_UDB08_A1
UART_BUART_sRX_RxShifter_u0__D0_D1_REG EQU CYREG_B0_UDB08_D0_D1
UART_BUART_sRX_RxShifter_u0__D0_REG EQU CYREG_B0_UDB08_D0
UART_BUART_sRX_RxShifter_u0__D1_REG EQU CYREG_B0_UDB08_D1
UART_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB08_ACTL
UART_BUART_sRX_RxShifter_u0__F0_F1_REG EQU CYREG_B0_UDB08_F0_F1
UART_BUART_sRX_RxShifter_u0__F0_REG EQU CYREG_B0_UDB08_F0
UART_BUART_sRX_RxShifter_u0__F1_REG EQU CYREG_B0_UDB08_F1
UART_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB11_12_ACTL
UART_BUART_sRX_RxSts__16BIT_STATUS_REG EQU CYREG_B0_UDB11_12_ST
UART_BUART_sRX_RxSts__3__MASK EQU 0x08
UART_BUART_sRX_RxSts__3__POS EQU 3
UART_BUART_sRX_RxSts__4__MASK EQU 0x10
UART_BUART_sRX_RxSts__4__POS EQU 4
UART_BUART_sRX_RxSts__5__MASK EQU 0x20
UART_BUART_sRX_RxSts__5__POS EQU 5
UART_BUART_sRX_RxSts__MASK EQU 0x38
UART_BUART_sRX_RxSts__MASK_REG EQU CYREG_B0_UDB11_MSK
UART_BUART_sRX_RxSts__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB11_ACTL
UART_BUART_sRX_RxSts__STATUS_REG EQU CYREG_B0_UDB11_ST
UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG EQU CYREG_B0_UDB12_13_A0
UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG EQU CYREG_B0_UDB12_13_A1
UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG EQU CYREG_B0_UDB12_13_D0
UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG EQU CYREG_B0_UDB12_13_D1
UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB12_13_ACTL
UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG EQU CYREG_B0_UDB12_13_F0
UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG EQU CYREG_B0_UDB12_13_F1
UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG EQU CYREG_B0_UDB12_A0_A1
UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG EQU CYREG_B0_UDB12_A0
UART_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG EQU CYREG_B0_UDB12_A1
UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG EQU CYREG_B0_UDB12_D0_D1
UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG EQU CYREG_B0_UDB12_D0
UART_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG EQU CYREG_B0_UDB12_D1
UART_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG EQU CYREG_B0_UDB12_ACTL
UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG EQU CYREG_B0_UDB12_F0_F1
UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG EQU CYREG_B0_UDB12_F0
UART_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG EQU CYREG_B0_UDB12_F1
UART_BUART_sTX_TxShifter_u0__A0_A1_REG EQU CYREG_B0_UDB15_A0_A1
UART_BUART_sTX_TxShifter_u0__A0_REG EQU CYREG_B0_UDB15_A0
UART_BUART_sTX_TxShifter_u0__A1_REG EQU CYREG_B0_UDB15_A1
UART_BUART_sTX_TxShifter_u0__D0_D1_REG EQU CYREG_B0_UDB15_D0_D1
UART_BUART_sTX_TxShifter_u0__D0_REG EQU CYREG_B0_UDB15_D0
UART_BUART_sTX_TxShifter_u0__D1_REG EQU CYREG_B0_UDB15_D1
UART_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB15_ACTL
UART_BUART_sTX_TxShifter_u0__F0_F1_REG EQU CYREG_B0_UDB15_F0_F1
UART_BUART_sTX_TxShifter_u0__F0_REG EQU CYREG_B0_UDB15_F0
UART_BUART_sTX_TxShifter_u0__F1_REG EQU CYREG_B0_UDB15_F1
UART_BUART_sTX_TxSts__0__MASK EQU 0x01
UART_BUART_sTX_TxSts__0__POS EQU 0
UART_BUART_sTX_TxSts__1__MASK EQU 0x02
UART_BUART_sTX_TxSts__1__POS EQU 1
UART_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB12_13_ACTL
UART_BUART_sTX_TxSts__16BIT_STATUS_REG EQU CYREG_B0_UDB12_13_ST
UART_BUART_sTX_TxSts__2__MASK EQU 0x04
UART_BUART_sTX_TxSts__2__POS EQU 2
UART_BUART_sTX_TxSts__3__MASK EQU 0x08
UART_BUART_sTX_TxSts__3__POS EQU 3
UART_BUART_sTX_TxSts__MASK EQU 0x0F
UART_BUART_sTX_TxSts__MASK_REG EQU CYREG_B0_UDB12_MSK
UART_BUART_sTX_TxSts__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB12_ACTL
UART_BUART_sTX_TxSts__STATUS_REG EQU CYREG_B0_UDB12_ST
UART_IntClock__CFG0 EQU CYREG_CLKDIST_DCFG6_CFG0
UART_IntClock__CFG1 EQU CYREG_CLKDIST_DCFG6_CFG1
UART_IntClock__CFG2 EQU CYREG_CLKDIST_DCFG6_CFG2
UART_IntClock__CFG2_SRC_SEL_MASK EQU 0x07
UART_IntClock__INDEX EQU 0x06
UART_IntClock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
UART_IntClock__PM_ACT_MSK EQU 0x40
UART_IntClock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
UART_IntClock__PM_STBY_MSK EQU 0x40
UART_TXInternalInterrupt__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
UART_TXInternalInterrupt__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
UART_TXInternalInterrupt__INTC_MASK EQU 0x08
UART_TXInternalInterrupt__INTC_NUMBER EQU 3
UART_TXInternalInterrupt__INTC_PRIOR_NUM EQU 7
UART_TXInternalInterrupt__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_3
UART_TXInternalInterrupt__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
UART_TXInternalInterrupt__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* Clk_600 */
Clk_600__CFG0 EQU CYREG_CLKDIST_DCFG1_CFG0
Clk_600__CFG1 EQU CYREG_CLKDIST_DCFG1_CFG1
Clk_600__CFG2 EQU CYREG_CLKDIST_DCFG1_CFG2
Clk_600__CFG2_SRC_SEL_MASK EQU 0x07
Clk_600__INDEX EQU 0x01
Clk_600__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clk_600__PM_ACT_MSK EQU 0x02
Clk_600__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clk_600__PM_STBY_MSK EQU 0x02

/* IRQ_DMA */
IRQ_DMA__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
IRQ_DMA__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
IRQ_DMA__INTC_MASK EQU 0x02
IRQ_DMA__INTC_NUMBER EQU 1
IRQ_DMA__INTC_PRIOR_NUM EQU 7
IRQ_DMA__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_1
IRQ_DMA__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
IRQ_DMA__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* LED_red */
LED_red__0__INTTYPE EQU CYREG_PICU2_INTTYPE7
LED_red__0__MASK EQU 0x80
LED_red__0__PC EQU CYREG_PRT2_PC7
LED_red__0__PORT EQU 2
LED_red__0__SHIFT EQU 7
LED_red__AG EQU CYREG_PRT2_AG
LED_red__AMUX EQU CYREG_PRT2_AMUX
LED_red__BIE EQU CYREG_PRT2_BIE
LED_red__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LED_red__BYP EQU CYREG_PRT2_BYP
LED_red__CTL EQU CYREG_PRT2_CTL
LED_red__DM0 EQU CYREG_PRT2_DM0
LED_red__DM1 EQU CYREG_PRT2_DM1
LED_red__DM2 EQU CYREG_PRT2_DM2
LED_red__DR EQU CYREG_PRT2_DR
LED_red__INP_DIS EQU CYREG_PRT2_INP_DIS
LED_red__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
LED_red__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LED_red__LCD_EN EQU CYREG_PRT2_LCD_EN
LED_red__MASK EQU 0x80
LED_red__PORT EQU 2
LED_red__PRT EQU CYREG_PRT2_PRT
LED_red__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LED_red__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LED_red__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LED_red__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LED_red__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LED_red__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LED_red__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LED_red__PS EQU CYREG_PRT2_PS
LED_red__SHIFT EQU 7
LED_red__SLW EQU CYREG_PRT2_SLW

/* WaveDAC */
WaveDAC_BuffAmp_ABuf__CR EQU CYREG_OPAMP3_CR
WaveDAC_BuffAmp_ABuf__MX EQU CYREG_OPAMP3_MX
WaveDAC_BuffAmp_ABuf__NPUMP_OPAMP_TR0 EQU CYREG_NPUMP_OPAMP_TR0
WaveDAC_BuffAmp_ABuf__PM_ACT_CFG EQU CYREG_PM_ACT_CFG4
WaveDAC_BuffAmp_ABuf__PM_ACT_MSK EQU 0x08
WaveDAC_BuffAmp_ABuf__PM_STBY_CFG EQU CYREG_PM_STBY_CFG4
WaveDAC_BuffAmp_ABuf__PM_STBY_MSK EQU 0x08
WaveDAC_BuffAmp_ABuf__RSVD EQU CYREG_OPAMP3_RSVD
WaveDAC_BuffAmp_ABuf__SW EQU CYREG_OPAMP3_SW
WaveDAC_BuffAmp_ABuf__TR0 EQU CYREG_OPAMP3_TR0
WaveDAC_BuffAmp_ABuf__TR1 EQU CYREG_OPAMP3_TR1
WaveDAC_VDAC8_viDAC8__CR0 EQU CYREG_DAC3_CR0
WaveDAC_VDAC8_viDAC8__CR1 EQU CYREG_DAC3_CR1
WaveDAC_VDAC8_viDAC8__D EQU CYREG_DAC3_D
WaveDAC_VDAC8_viDAC8__PM_ACT_CFG EQU CYREG_PM_ACT_CFG8
WaveDAC_VDAC8_viDAC8__PM_ACT_MSK EQU 0x08
WaveDAC_VDAC8_viDAC8__PM_STBY_CFG EQU CYREG_PM_STBY_CFG8
WaveDAC_VDAC8_viDAC8__PM_STBY_MSK EQU 0x08
WaveDAC_VDAC8_viDAC8__STROBE EQU CYREG_DAC3_STROBE
WaveDAC_VDAC8_viDAC8__SW0 EQU CYREG_DAC3_SW0
WaveDAC_VDAC8_viDAC8__SW2 EQU CYREG_DAC3_SW2
WaveDAC_VDAC8_viDAC8__SW3 EQU CYREG_DAC3_SW3
WaveDAC_VDAC8_viDAC8__SW4 EQU CYREG_DAC3_SW4
WaveDAC_VDAC8_viDAC8__TR EQU CYREG_DAC3_TR
WaveDAC_VDAC8_viDAC8__TRIM__M1 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M1
WaveDAC_VDAC8_viDAC8__TRIM__M2 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M2
WaveDAC_VDAC8_viDAC8__TRIM__M3 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M3
WaveDAC_VDAC8_viDAC8__TRIM__M4 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M4
WaveDAC_VDAC8_viDAC8__TRIM__M5 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M5
WaveDAC_VDAC8_viDAC8__TRIM__M6 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M6
WaveDAC_VDAC8_viDAC8__TRIM__M7 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M7
WaveDAC_VDAC8_viDAC8__TRIM__M8 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M8
WaveDAC_VDAC8_viDAC8__TST EQU CYREG_DAC3_TST
WaveDAC_Wave1_DMA__DRQ_CTL EQU CYREG_IDMUX_DRQ_CTL0
WaveDAC_Wave1_DMA__DRQ_NUMBER EQU 0
WaveDAC_Wave1_DMA__NUMBEROF_TDS EQU 0
WaveDAC_Wave1_DMA__PRIORITY EQU 2
WaveDAC_Wave1_DMA__TERMIN_EN EQU 0
WaveDAC_Wave1_DMA__TERMIN_SEL EQU 0
WaveDAC_Wave1_DMA__TERMOUT0_EN EQU 0
WaveDAC_Wave1_DMA__TERMOUT0_SEL EQU 0
WaveDAC_Wave1_DMA__TERMOUT1_EN EQU 0
WaveDAC_Wave1_DMA__TERMOUT1_SEL EQU 0
WaveDAC_Wave2_DMA__DRQ_CTL EQU CYREG_IDMUX_DRQ_CTL0
WaveDAC_Wave2_DMA__DRQ_NUMBER EQU 1
WaveDAC_Wave2_DMA__NUMBEROF_TDS EQU 0
WaveDAC_Wave2_DMA__PRIORITY EQU 2
WaveDAC_Wave2_DMA__TERMIN_EN EQU 0
WaveDAC_Wave2_DMA__TERMIN_SEL EQU 0
WaveDAC_Wave2_DMA__TERMOUT0_EN EQU 0
WaveDAC_Wave2_DMA__TERMOUT0_SEL EQU 0
WaveDAC_Wave2_DMA__TERMOUT1_EN EQU 0
WaveDAC_Wave2_DMA__TERMOUT1_SEL EQU 0

/* BUTTON_1 */
BUTTON_1__0__INTTYPE EQU CYREG_PICU2_INTTYPE4
BUTTON_1__0__MASK EQU 0x10
BUTTON_1__0__PC EQU CYREG_PRT2_PC4
BUTTON_1__0__PORT EQU 2
BUTTON_1__0__SHIFT EQU 4
BUTTON_1__AG EQU CYREG_PRT2_AG
BUTTON_1__AMUX EQU CYREG_PRT2_AMUX
BUTTON_1__BIE EQU CYREG_PRT2_BIE
BUTTON_1__BIT_MASK EQU CYREG_PRT2_BIT_MASK
BUTTON_1__BYP EQU CYREG_PRT2_BYP
BUTTON_1__CTL EQU CYREG_PRT2_CTL
BUTTON_1__DM0 EQU CYREG_PRT2_DM0
BUTTON_1__DM1 EQU CYREG_PRT2_DM1
BUTTON_1__DM2 EQU CYREG_PRT2_DM2
BUTTON_1__DR EQU CYREG_PRT2_DR
BUTTON_1__INP_DIS EQU CYREG_PRT2_INP_DIS
BUTTON_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
BUTTON_1__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
BUTTON_1__LCD_EN EQU CYREG_PRT2_LCD_EN
BUTTON_1__MASK EQU 0x10
BUTTON_1__PORT EQU 2
BUTTON_1__PRT EQU CYREG_PRT2_PRT
BUTTON_1__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
BUTTON_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
BUTTON_1__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
BUTTON_1__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
BUTTON_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
BUTTON_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
BUTTON_1__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
BUTTON_1__PS EQU CYREG_PRT2_PS
BUTTON_1__SHIFT EQU 4
BUTTON_1__SLW EQU CYREG_PRT2_SLW

/* IRQ_UART */
IRQ_UART__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
IRQ_UART__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
IRQ_UART__INTC_MASK EQU 0x04
IRQ_UART__INTC_NUMBER EQU 2
IRQ_UART__INTC_PRIOR_NUM EQU 7
IRQ_UART__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_2
IRQ_UART__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
IRQ_UART__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* LED_green */
LED_green__0__INTTYPE EQU CYREG_PICU2_INTTYPE5
LED_green__0__MASK EQU 0x20
LED_green__0__PC EQU CYREG_PRT2_PC5
LED_green__0__PORT EQU 2
LED_green__0__SHIFT EQU 5
LED_green__AG EQU CYREG_PRT2_AG
LED_green__AMUX EQU CYREG_PRT2_AMUX
LED_green__BIE EQU CYREG_PRT2_BIE
LED_green__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LED_green__BYP EQU CYREG_PRT2_BYP
LED_green__CTL EQU CYREG_PRT2_CTL
LED_green__DM0 EQU CYREG_PRT2_DM0
LED_green__DM1 EQU CYREG_PRT2_DM1
LED_green__DM2 EQU CYREG_PRT2_DM2
LED_green__DR EQU CYREG_PRT2_DR
LED_green__INP_DIS EQU CYREG_PRT2_INP_DIS
LED_green__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
LED_green__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LED_green__LCD_EN EQU CYREG_PRT2_LCD_EN
LED_green__MASK EQU 0x20
LED_green__PORT EQU 2
LED_green__PRT EQU CYREG_PRT2_PRT
LED_green__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LED_green__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LED_green__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LED_green__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LED_green__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LED_green__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LED_green__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LED_green__PS EQU CYREG_PRT2_PS
LED_green__SHIFT EQU 5
LED_green__SLW EQU CYREG_PRT2_SLW

/* ADC_DelSig */
ADC_DelSig_DEC__COHER EQU CYREG_DEC_COHER
ADC_DelSig_DEC__CR EQU CYREG_DEC_CR
ADC_DelSig_DEC__DR1 EQU CYREG_DEC_DR1
ADC_DelSig_DEC__DR2 EQU CYREG_DEC_DR2
ADC_DelSig_DEC__DR2H EQU CYREG_DEC_DR2H
ADC_DelSig_DEC__GCOR EQU CYREG_DEC_GCOR
ADC_DelSig_DEC__GCORH EQU CYREG_DEC_GCORH
ADC_DelSig_DEC__GVAL EQU CYREG_DEC_GVAL
ADC_DelSig_DEC__OCOR EQU CYREG_DEC_OCOR
ADC_DelSig_DEC__OCORH EQU CYREG_DEC_OCORH
ADC_DelSig_DEC__OCORM EQU CYREG_DEC_OCORM
ADC_DelSig_DEC__OUTSAMP EQU CYREG_DEC_OUTSAMP
ADC_DelSig_DEC__OUTSAMPH EQU CYREG_DEC_OUTSAMPH
ADC_DelSig_DEC__OUTSAMPM EQU CYREG_DEC_OUTSAMPM
ADC_DelSig_DEC__OUTSAMPS EQU CYREG_DEC_OUTSAMPS
ADC_DelSig_DEC__PM_ACT_CFG EQU CYREG_PM_ACT_CFG10
ADC_DelSig_DEC__PM_ACT_MSK EQU 0x01
ADC_DelSig_DEC__PM_STBY_CFG EQU CYREG_PM_STBY_CFG10
ADC_DelSig_DEC__PM_STBY_MSK EQU 0x01
ADC_DelSig_DEC__SHIFT1 EQU CYREG_DEC_SHIFT1
ADC_DelSig_DEC__SHIFT2 EQU CYREG_DEC_SHIFT2
ADC_DelSig_DEC__SR EQU CYREG_DEC_SR
ADC_DelSig_DEC__TRIM__M1 EQU CYREG_FLSHID_CUST_TABLES_DEC_M1
ADC_DelSig_DEC__TRIM__M2 EQU CYREG_FLSHID_CUST_TABLES_DEC_M2
ADC_DelSig_DEC__TRIM__M3 EQU CYREG_FLSHID_CUST_TABLES_DEC_M3
ADC_DelSig_DEC__TRIM__M4 EQU CYREG_FLSHID_CUST_TABLES_DEC_M4
ADC_DelSig_DEC__TRIM__M5 EQU CYREG_FLSHID_CUST_TABLES_DEC_M5
ADC_DelSig_DEC__TRIM__M6 EQU CYREG_FLSHID_CUST_TABLES_DEC_M6
ADC_DelSig_DEC__TRIM__M7 EQU CYREG_FLSHID_CUST_TABLES_DEC_M7
ADC_DelSig_DEC__TRIM__M8 EQU CYREG_FLSHID_CUST_TABLES_DEC_M8
ADC_DelSig_DSM__BUF0 EQU CYREG_DSM0_BUF0
ADC_DelSig_DSM__BUF1 EQU CYREG_DSM0_BUF1
ADC_DelSig_DSM__BUF2 EQU CYREG_DSM0_BUF2
ADC_DelSig_DSM__BUF3 EQU CYREG_DSM0_BUF3
ADC_DelSig_DSM__CLK EQU CYREG_DSM0_CLK
ADC_DelSig_DSM__CR0 EQU CYREG_DSM0_CR0
ADC_DelSig_DSM__CR1 EQU CYREG_DSM0_CR1
ADC_DelSig_DSM__CR10 EQU CYREG_DSM0_CR10
ADC_DelSig_DSM__CR11 EQU CYREG_DSM0_CR11
ADC_DelSig_DSM__CR12 EQU CYREG_DSM0_CR12
ADC_DelSig_DSM__CR13 EQU CYREG_DSM0_CR13
ADC_DelSig_DSM__CR14 EQU CYREG_DSM0_CR14
ADC_DelSig_DSM__CR15 EQU CYREG_DSM0_CR15
ADC_DelSig_DSM__CR16 EQU CYREG_DSM0_CR16
ADC_DelSig_DSM__CR17 EQU CYREG_DSM0_CR17
ADC_DelSig_DSM__CR2 EQU CYREG_DSM0_CR2
ADC_DelSig_DSM__CR3 EQU CYREG_DSM0_CR3
ADC_DelSig_DSM__CR4 EQU CYREG_DSM0_CR4
ADC_DelSig_DSM__CR5 EQU CYREG_DSM0_CR5
ADC_DelSig_DSM__CR6 EQU CYREG_DSM0_CR6
ADC_DelSig_DSM__CR7 EQU CYREG_DSM0_CR7
ADC_DelSig_DSM__CR8 EQU CYREG_DSM0_CR8
ADC_DelSig_DSM__CR9 EQU CYREG_DSM0_CR9
ADC_DelSig_DSM__DEM0 EQU CYREG_DSM0_DEM0
ADC_DelSig_DSM__DEM1 EQU CYREG_DSM0_DEM1
ADC_DelSig_DSM__MISC EQU CYREG_DSM0_MISC
ADC_DelSig_DSM__OUT0 EQU CYREG_DSM0_OUT0
ADC_DelSig_DSM__OUT1 EQU CYREG_DSM0_OUT1
ADC_DelSig_DSM__REF0 EQU CYREG_DSM0_REF0
ADC_DelSig_DSM__REF1 EQU CYREG_DSM0_REF1
ADC_DelSig_DSM__REF2 EQU CYREG_DSM0_REF2
ADC_DelSig_DSM__REF3 EQU CYREG_DSM0_REF3
ADC_DelSig_DSM__RSVD1 EQU CYREG_DSM0_RSVD1
ADC_DelSig_DSM__SW0 EQU CYREG_DSM0_SW0
ADC_DelSig_DSM__SW2 EQU CYREG_DSM0_SW2
ADC_DelSig_DSM__SW3 EQU CYREG_DSM0_SW3
ADC_DelSig_DSM__SW4 EQU CYREG_DSM0_SW4
ADC_DelSig_DSM__SW6 EQU CYREG_DSM0_SW6
ADC_DelSig_DSM__TR0 EQU CYREG_NPUMP_DSM_TR0
ADC_DelSig_DSM__TST0 EQU CYREG_DSM0_TST0
ADC_DelSig_DSM__TST1 EQU CYREG_DSM0_TST1
ADC_DelSig_Ext_CP_Clk__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
ADC_DelSig_Ext_CP_Clk__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
ADC_DelSig_Ext_CP_Clk__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
ADC_DelSig_Ext_CP_Clk__CFG2_SRC_SEL_MASK EQU 0x07
ADC_DelSig_Ext_CP_Clk__INDEX EQU 0x00
ADC_DelSig_Ext_CP_Clk__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
ADC_DelSig_Ext_CP_Clk__PM_ACT_MSK EQU 0x01
ADC_DelSig_Ext_CP_Clk__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
ADC_DelSig_Ext_CP_Clk__PM_STBY_MSK EQU 0x01
ADC_DelSig_IRQ__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
ADC_DelSig_IRQ__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
ADC_DelSig_IRQ__INTC_MASK EQU 0x20000000
ADC_DelSig_IRQ__INTC_NUMBER EQU 29
ADC_DelSig_IRQ__INTC_PRIOR_NUM EQU 7
ADC_DelSig_IRQ__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_29
ADC_DelSig_IRQ__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
ADC_DelSig_IRQ__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0
ADC_DelSig_theACLK__CFG0 EQU CYREG_CLKDIST_ACFG0_CFG0
ADC_DelSig_theACLK__CFG1 EQU CYREG_CLKDIST_ACFG0_CFG1
ADC_DelSig_theACLK__CFG2 EQU CYREG_CLKDIST_ACFG0_CFG2
ADC_DelSig_theACLK__CFG2_SRC_SEL_MASK EQU 0x07
ADC_DelSig_theACLK__CFG3 EQU CYREG_CLKDIST_ACFG0_CFG3
ADC_DelSig_theACLK__CFG3_PHASE_DLY_MASK EQU 0x0F
ADC_DelSig_theACLK__INDEX EQU 0x00
ADC_DelSig_theACLK__PM_ACT_CFG EQU CYREG_PM_ACT_CFG1
ADC_DelSig_theACLK__PM_ACT_MSK EQU 0x01
ADC_DelSig_theACLK__PM_STBY_CFG EQU CYREG_PM_STBY_CFG1
ADC_DelSig_theACLK__PM_STBY_MSK EQU 0x01

/* Clk_150KHz */
Clk_150KHz__CFG0 EQU CYREG_CLKDIST_DCFG5_CFG0
Clk_150KHz__CFG1 EQU CYREG_CLKDIST_DCFG5_CFG1
Clk_150KHz__CFG2 EQU CYREG_CLKDIST_DCFG5_CFG2
Clk_150KHz__CFG2_SRC_SEL_MASK EQU 0x07
Clk_150KHz__INDEX EQU 0x05
Clk_150KHz__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clk_150KHz__PM_ACT_MSK EQU 0x20
Clk_150KHz__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clk_150KHz__PM_STBY_MSK EQU 0x20

/* Clk_200KHz */
Clk_200KHz__CFG0 EQU CYREG_CLKDIST_DCFG4_CFG0
Clk_200KHz__CFG1 EQU CYREG_CLKDIST_DCFG4_CFG1
Clk_200KHz__CFG2 EQU CYREG_CLKDIST_DCFG4_CFG2
Clk_200KHz__CFG2_SRC_SEL_MASK EQU 0x07
Clk_200KHz__INDEX EQU 0x04
Clk_200KHz__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clk_200KHz__PM_ACT_MSK EQU 0x10
Clk_200KHz__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clk_200KHz__PM_STBY_MSK EQU 0x10

/* Clk_350KHz */
Clk_350KHz__CFG0 EQU CYREG_CLKDIST_DCFG3_CFG0
Clk_350KHz__CFG1 EQU CYREG_CLKDIST_DCFG3_CFG1
Clk_350KHz__CFG2 EQU CYREG_CLKDIST_DCFG3_CFG2
Clk_350KHz__CFG2_SRC_SEL_MASK EQU 0x07
Clk_350KHz__INDEX EQU 0x03
Clk_350KHz__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clk_350KHz__PM_ACT_MSK EQU 0x08
Clk_350KHz__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clk_350KHz__PM_STBY_MSK EQU 0x08

/* Clk_500Khz */
Clk_500Khz__CFG0 EQU CYREG_CLKDIST_DCFG2_CFG0
Clk_500Khz__CFG1 EQU CYREG_CLKDIST_DCFG2_CFG1
Clk_500Khz__CFG2 EQU CYREG_CLKDIST_DCFG2_CFG2
Clk_500Khz__CFG2_SRC_SEL_MASK EQU 0x07
Clk_500Khz__INDEX EQU 0x02
Clk_500Khz__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clk_500Khz__PM_ACT_MSK EQU 0x04
Clk_500Khz__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clk_500Khz__PM_STBY_MSK EQU 0x04

/* DMA_ForAdc */
DMA_ForAdc__DRQ_CTL EQU CYREG_IDMUX_DRQ_CTL2
DMA_ForAdc__DRQ_NUMBER EQU 10
DMA_ForAdc__NUMBEROF_TDS EQU 0
DMA_ForAdc__PRIORITY EQU 2
DMA_ForAdc__TERMIN_EN EQU 0
DMA_ForAdc__TERMIN_SEL EQU 0
DMA_ForAdc__TERMOUT0_EN EQU 1
DMA_ForAdc__TERMOUT0_SEL EQU 10
DMA_ForAdc__TERMOUT1_EN EQU 0
DMA_ForAdc__TERMOUT1_SEL EQU 0

/* IRQ_BUTTON */
IRQ_BUTTON__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
IRQ_BUTTON__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
IRQ_BUTTON__INTC_MASK EQU 0x01
IRQ_BUTTON__INTC_NUMBER EQU 0
IRQ_BUTTON__INTC_PRIOR_NUM EQU 7
IRQ_BUTTON__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_0
IRQ_BUTTON__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
IRQ_BUTTON__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* InputToAdc */
InputToAdc__0__INTTYPE EQU CYREG_PICU15_INTTYPE5
InputToAdc__0__MASK EQU 0x20
InputToAdc__0__PC EQU CYREG_IO_PC_PRT15_PC5
InputToAdc__0__PORT EQU 15
InputToAdc__0__SHIFT EQU 5
InputToAdc__AG EQU CYREG_PRT15_AG
InputToAdc__AMUX EQU CYREG_PRT15_AMUX
InputToAdc__BIE EQU CYREG_PRT15_BIE
InputToAdc__BIT_MASK EQU CYREG_PRT15_BIT_MASK
InputToAdc__BYP EQU CYREG_PRT15_BYP
InputToAdc__CTL EQU CYREG_PRT15_CTL
InputToAdc__DM0 EQU CYREG_PRT15_DM0
InputToAdc__DM1 EQU CYREG_PRT15_DM1
InputToAdc__DM2 EQU CYREG_PRT15_DM2
InputToAdc__DR EQU CYREG_PRT15_DR
InputToAdc__INP_DIS EQU CYREG_PRT15_INP_DIS
InputToAdc__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU15_BASE
InputToAdc__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
InputToAdc__LCD_EN EQU CYREG_PRT15_LCD_EN
InputToAdc__MASK EQU 0x20
InputToAdc__PORT EQU 15
InputToAdc__PRT EQU CYREG_PRT15_PRT
InputToAdc__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
InputToAdc__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
InputToAdc__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
InputToAdc__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
InputToAdc__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
InputToAdc__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
InputToAdc__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
InputToAdc__PS EQU CYREG_PRT15_PS
InputToAdc__SHIFT EQU 5
InputToAdc__SLW EQU CYREG_PRT15_SLW

/* LED_yellow */
LED_yellow__0__INTTYPE EQU CYREG_PICU2_INTTYPE6
LED_yellow__0__MASK EQU 0x40
LED_yellow__0__PC EQU CYREG_PRT2_PC6
LED_yellow__0__PORT EQU 2
LED_yellow__0__SHIFT EQU 6
LED_yellow__AG EQU CYREG_PRT2_AG
LED_yellow__AMUX EQU CYREG_PRT2_AMUX
LED_yellow__BIE EQU CYREG_PRT2_BIE
LED_yellow__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LED_yellow__BYP EQU CYREG_PRT2_BYP
LED_yellow__CTL EQU CYREG_PRT2_CTL
LED_yellow__DM0 EQU CYREG_PRT2_DM0
LED_yellow__DM1 EQU CYREG_PRT2_DM1
LED_yellow__DM2 EQU CYREG_PRT2_DM2
LED_yellow__DR EQU CYREG_PRT2_DR
LED_yellow__INP_DIS EQU CYREG_PRT2_INP_DIS
LED_yellow__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
LED_yellow__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LED_yellow__LCD_EN EQU CYREG_PRT2_LCD_EN
LED_yellow__MASK EQU 0x40
LED_yellow__PORT EQU 2
LED_yellow__PRT EQU CYREG_PRT2_PRT
LED_yellow__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LED_yellow__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LED_yellow__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LED_yellow__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LED_yellow__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LED_yellow__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LED_yellow__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LED_yellow__PS EQU CYREG_PRT2_PS
LED_yellow__SHIFT EQU 6
LED_yellow__SLW EQU CYREG_PRT2_SLW

/* Debounce_Clock */
Debounce_Clock__CFG0 EQU CYREG_CLKDIST_DCFG7_CFG0
Debounce_Clock__CFG1 EQU CYREG_CLKDIST_DCFG7_CFG1
Debounce_Clock__CFG2 EQU CYREG_CLKDIST_DCFG7_CFG2
Debounce_Clock__CFG2_SRC_SEL_MASK EQU 0x07
Debounce_Clock__INDEX EQU 0x07
Debounce_Clock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Debounce_Clock__PM_ACT_MSK EQU 0x80
Debounce_Clock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Debounce_Clock__PM_STBY_MSK EQU 0x80

/* AnalogOutFromDAC */
AnalogOutFromDAC__0__INTTYPE EQU CYREG_PICU15_INTTYPE4
AnalogOutFromDAC__0__MASK EQU 0x10
AnalogOutFromDAC__0__PC EQU CYREG_IO_PC_PRT15_PC4
AnalogOutFromDAC__0__PORT EQU 15
AnalogOutFromDAC__0__SHIFT EQU 4
AnalogOutFromDAC__AG EQU CYREG_PRT15_AG
AnalogOutFromDAC__AMUX EQU CYREG_PRT15_AMUX
AnalogOutFromDAC__BIE EQU CYREG_PRT15_BIE
AnalogOutFromDAC__BIT_MASK EQU CYREG_PRT15_BIT_MASK
AnalogOutFromDAC__BYP EQU CYREG_PRT15_BYP
AnalogOutFromDAC__CTL EQU CYREG_PRT15_CTL
AnalogOutFromDAC__DM0 EQU CYREG_PRT15_DM0
AnalogOutFromDAC__DM1 EQU CYREG_PRT15_DM1
AnalogOutFromDAC__DM2 EQU CYREG_PRT15_DM2
AnalogOutFromDAC__DR EQU CYREG_PRT15_DR
AnalogOutFromDAC__INP_DIS EQU CYREG_PRT15_INP_DIS
AnalogOutFromDAC__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU15_BASE
AnalogOutFromDAC__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
AnalogOutFromDAC__LCD_EN EQU CYREG_PRT15_LCD_EN
AnalogOutFromDAC__MASK EQU 0x10
AnalogOutFromDAC__PORT EQU 15
AnalogOutFromDAC__PRT EQU CYREG_PRT15_PRT
AnalogOutFromDAC__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
AnalogOutFromDAC__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
AnalogOutFromDAC__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
AnalogOutFromDAC__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
AnalogOutFromDAC__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
AnalogOutFromDAC__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
AnalogOutFromDAC__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
AnalogOutFromDAC__PS EQU CYREG_PRT15_PS
AnalogOutFromDAC__SHIFT EQU 4
AnalogOutFromDAC__SLW EQU CYREG_PRT15_SLW

/* MuxControlRegister */
MuxControlRegister_Sync_ctrl_reg__0__MASK EQU 0x01
MuxControlRegister_Sync_ctrl_reg__0__POS EQU 0
MuxControlRegister_Sync_ctrl_reg__1__MASK EQU 0x02
MuxControlRegister_Sync_ctrl_reg__1__POS EQU 1
MuxControlRegister_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB10_11_ACTL
MuxControlRegister_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB10_11_CTL
MuxControlRegister_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB10_11_CTL
MuxControlRegister_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB10_11_CTL
MuxControlRegister_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB10_11_CTL
MuxControlRegister_Sync_ctrl_reg__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB10_11_MSK
MuxControlRegister_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB10_11_MSK
MuxControlRegister_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB10_11_MSK
MuxControlRegister_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB10_11_MSK
MuxControlRegister_Sync_ctrl_reg__2__MASK EQU 0x04
MuxControlRegister_Sync_ctrl_reg__2__POS EQU 2
MuxControlRegister_Sync_ctrl_reg__3__MASK EQU 0x08
MuxControlRegister_Sync_ctrl_reg__3__POS EQU 3
MuxControlRegister_Sync_ctrl_reg__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB10_ACTL
MuxControlRegister_Sync_ctrl_reg__CONTROL_REG EQU CYREG_B0_UDB10_CTL
MuxControlRegister_Sync_ctrl_reg__CONTROL_ST_REG EQU CYREG_B0_UDB10_ST_CTL
MuxControlRegister_Sync_ctrl_reg__COUNT_REG EQU CYREG_B0_UDB10_CTL
MuxControlRegister_Sync_ctrl_reg__COUNT_ST_REG EQU CYREG_B0_UDB10_ST_CTL
MuxControlRegister_Sync_ctrl_reg__MASK EQU 0x0F
MuxControlRegister_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB10_MSK_ACTL
MuxControlRegister_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB10_MSK_ACTL
MuxControlRegister_Sync_ctrl_reg__PERIOD_REG EQU CYREG_B0_UDB10_MSK

/* Miscellaneous */
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 24
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E160069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 24
CYDEV_CHIP_MEMBER_4AA EQU 23
CYDEV_CHIP_MEMBER_4AB EQU 28
CYDEV_CHIP_MEMBER_4AC EQU 14
CYDEV_CHIP_MEMBER_4D EQU 18
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 25
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 22
CYDEV_CHIP_MEMBER_4I EQU 30
CYDEV_CHIP_MEMBER_4J EQU 19
CYDEV_CHIP_MEMBER_4K EQU 20
CYDEV_CHIP_MEMBER_4L EQU 29
CYDEV_CHIP_MEMBER_4M EQU 27
CYDEV_CHIP_MEMBER_4N EQU 11
CYDEV_CHIP_MEMBER_4O EQU 8
CYDEV_CHIP_MEMBER_4P EQU 26
CYDEV_CHIP_MEMBER_4Q EQU 15
CYDEV_CHIP_MEMBER_4R EQU 9
CYDEV_CHIP_MEMBER_4S EQU 12
CYDEV_CHIP_MEMBER_4T EQU 10
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_4V EQU 21
CYDEV_CHIP_MEMBER_4W EQU 13
CYDEV_CHIP_MEMBER_4X EQU 7
CYDEV_CHIP_MEMBER_4Y EQU 16
CYDEV_CHIP_MEMBER_4Z EQU 17
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 31
CYDEV_CHIP_MEMBER_FM3 EQU 35
CYDEV_CHIP_MEMBER_FM4 EQU 36
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 32
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 33
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 34
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4AA_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AB_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AC_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4T_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4V_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4W_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4X_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Y_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Z_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_ES EQU 17
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 33
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 33
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x0000000F
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
Dedicated_Output__INTTYPE EQU CYREG_PICU3_INTTYPE7
Dedicated_Output__MASK EQU 0x80
Dedicated_Output__PC EQU CYREG_PRT3_PC7
Dedicated_Output__PORT EQU 3
Dedicated_Output__SHIFT EQU 7
DMA_CHANNELS_USED__MASK0 EQU 0x00000403
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */