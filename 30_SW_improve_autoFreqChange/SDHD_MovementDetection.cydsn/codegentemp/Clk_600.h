/*******************************************************************************
* File Name: Clk_600.h
* Version 2.20
*
*  Description:
*   Provides the function and constant definitions for the clock component.
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CLOCK_Clk_600_H)
#define CY_CLOCK_Clk_600_H

#include <cytypes.h>
#include <cyfitter.h>


/***************************************
* Conditional Compilation Parameters
***************************************/

/* Check to see if required defines such as CY_PSOC5LP are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5LP)
    #error Component cy_clock_v2_20 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5LP) */


/***************************************
*        Function Prototypes
***************************************/

void Clk_600_Start(void) ;
void Clk_600_Stop(void) ;

#if(CY_PSOC3 || CY_PSOC5LP)
void Clk_600_StopBlock(void) ;
#endif /* (CY_PSOC3 || CY_PSOC5LP) */

void Clk_600_StandbyPower(uint8 state) ;
void Clk_600_SetDividerRegister(uint16 clkDivider, uint8 restart) 
                                ;
uint16 Clk_600_GetDividerRegister(void) ;
void Clk_600_SetModeRegister(uint8 modeBitMask) ;
void Clk_600_ClearModeRegister(uint8 modeBitMask) ;
uint8 Clk_600_GetModeRegister(void) ;
void Clk_600_SetSourceRegister(uint8 clkSource) ;
uint8 Clk_600_GetSourceRegister(void) ;
#if defined(Clk_600__CFG3)
void Clk_600_SetPhaseRegister(uint8 clkPhase) ;
uint8 Clk_600_GetPhaseRegister(void) ;
#endif /* defined(Clk_600__CFG3) */

#define Clk_600_Enable()                       Clk_600_Start()
#define Clk_600_Disable()                      Clk_600_Stop()
#define Clk_600_SetDivider(clkDivider)         Clk_600_SetDividerRegister(clkDivider, 1u)
#define Clk_600_SetDividerValue(clkDivider)    Clk_600_SetDividerRegister((clkDivider) - 1u, 1u)
#define Clk_600_SetMode(clkMode)               Clk_600_SetModeRegister(clkMode)
#define Clk_600_SetSource(clkSource)           Clk_600_SetSourceRegister(clkSource)
#if defined(Clk_600__CFG3)
#define Clk_600_SetPhase(clkPhase)             Clk_600_SetPhaseRegister(clkPhase)
#define Clk_600_SetPhaseValue(clkPhase)        Clk_600_SetPhaseRegister((clkPhase) + 1u)
#endif /* defined(Clk_600__CFG3) */


/***************************************
*             Registers
***************************************/

/* Register to enable or disable the clock */
#define Clk_600_CLKEN              (* (reg8 *) Clk_600__PM_ACT_CFG)
#define Clk_600_CLKEN_PTR          ((reg8 *) Clk_600__PM_ACT_CFG)

/* Register to enable or disable the clock */
#define Clk_600_CLKSTBY            (* (reg8 *) Clk_600__PM_STBY_CFG)
#define Clk_600_CLKSTBY_PTR        ((reg8 *) Clk_600__PM_STBY_CFG)

/* Clock LSB divider configuration register. */
#define Clk_600_DIV_LSB            (* (reg8 *) Clk_600__CFG0)
#define Clk_600_DIV_LSB_PTR        ((reg8 *) Clk_600__CFG0)
#define Clk_600_DIV_PTR            ((reg16 *) Clk_600__CFG0)

/* Clock MSB divider configuration register. */
#define Clk_600_DIV_MSB            (* (reg8 *) Clk_600__CFG1)
#define Clk_600_DIV_MSB_PTR        ((reg8 *) Clk_600__CFG1)

/* Mode and source configuration register */
#define Clk_600_MOD_SRC            (* (reg8 *) Clk_600__CFG2)
#define Clk_600_MOD_SRC_PTR        ((reg8 *) Clk_600__CFG2)

#if defined(Clk_600__CFG3)
/* Analog clock phase configuration register */
#define Clk_600_PHASE              (* (reg8 *) Clk_600__CFG3)
#define Clk_600_PHASE_PTR          ((reg8 *) Clk_600__CFG3)
#endif /* defined(Clk_600__CFG3) */


/**************************************
*       Register Constants
**************************************/

/* Power manager register masks */
#define Clk_600_CLKEN_MASK         Clk_600__PM_ACT_MSK
#define Clk_600_CLKSTBY_MASK       Clk_600__PM_STBY_MSK

/* CFG2 field masks */
#define Clk_600_SRC_SEL_MSK        Clk_600__CFG2_SRC_SEL_MASK
#define Clk_600_MODE_MASK          (~(Clk_600_SRC_SEL_MSK))

#if defined(Clk_600__CFG3)
/* CFG3 phase mask */
#define Clk_600_PHASE_MASK         Clk_600__CFG3_PHASE_DLY_MASK
#endif /* defined(Clk_600__CFG3) */

#endif /* CY_CLOCK_Clk_600_H */


/* [] END OF FILE */
