/*******************************************************************************
* File Name: WaveDAC_BuffAmp.c
* Version 1.90
*
* Description:
*  This file provides the source code to the API for OpAmp (Analog Buffer) 
*  Component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "WaveDAC_BuffAmp.h"

uint8 WaveDAC_BuffAmp_initVar = 0u;


/*******************************************************************************   
* Function Name: WaveDAC_BuffAmp_Init
********************************************************************************
*
* Summary:
*  Initialize component's parameters to the parameters set by user in the 
*  customizer of the component placed onto schematic. Usually called in 
*  WaveDAC_BuffAmp_Start().
*
* Parameters:
*  void
*
* Return:
*  void
*
*******************************************************************************/
void WaveDAC_BuffAmp_Init(void) 
{
    WaveDAC_BuffAmp_SetPower(WaveDAC_BuffAmp_DEFAULT_POWER);
}


/*******************************************************************************   
* Function Name: WaveDAC_BuffAmp_Enable
********************************************************************************
*
* Summary:
*  Enables the OpAmp block operation
*
* Parameters:
*  void
*
* Return:
*  void
*
*******************************************************************************/
void WaveDAC_BuffAmp_Enable(void) 
{
    /* Enable negative charge pumps in ANIF */
    WaveDAC_BuffAmp_PUMP_CR1_REG  |= (WaveDAC_BuffAmp_PUMP_CR1_CLKSEL | WaveDAC_BuffAmp_PUMP_CR1_FORCE);

    /* Enable power to buffer in active mode */
    WaveDAC_BuffAmp_PM_ACT_CFG_REG |= WaveDAC_BuffAmp_ACT_PWR_EN;

    /* Enable power to buffer in alternative active mode */
    WaveDAC_BuffAmp_PM_STBY_CFG_REG |= WaveDAC_BuffAmp_STBY_PWR_EN;
}


/*******************************************************************************
* Function Name:   WaveDAC_BuffAmp_Start
********************************************************************************
*
* Summary:
*  The start function initializes the Analog Buffer with the default values and 
*  sets the power to the given level. A power level of 0, is same as 
*  executing the stop function.
*
* Parameters:
*  void
*
* Return:
*  void
*
* Global variables:
*  WaveDAC_BuffAmp_initVar: Used to check the initial configuration, modified 
*  when this function is called for the first time.
*
*******************************************************************************/
void WaveDAC_BuffAmp_Start(void) 
{
    if(WaveDAC_BuffAmp_initVar == 0u)
    {
        WaveDAC_BuffAmp_initVar = 1u;
        WaveDAC_BuffAmp_Init();
    }

    WaveDAC_BuffAmp_Enable();
}


/*******************************************************************************
* Function Name: WaveDAC_BuffAmp_Stop
********************************************************************************
*
* Summary:
*  Powers down amplifier to lowest power state.
*
* Parameters:
*  void
*
* Return:
*  void
*
*******************************************************************************/
void WaveDAC_BuffAmp_Stop(void) 
{
    /* Disable power to buffer in active mode template */
    WaveDAC_BuffAmp_PM_ACT_CFG_REG &= (uint8)(~WaveDAC_BuffAmp_ACT_PWR_EN);

    /* Disable power to buffer in alternative active mode template */
    WaveDAC_BuffAmp_PM_STBY_CFG_REG &= (uint8)(~WaveDAC_BuffAmp_STBY_PWR_EN);
    
    /* Disable negative charge pumps for ANIF only if all ABuf is turned OFF */
    if(WaveDAC_BuffAmp_PM_ACT_CFG_REG == 0u)
    {
        WaveDAC_BuffAmp_PUMP_CR1_REG &= (uint8)(~(WaveDAC_BuffAmp_PUMP_CR1_CLKSEL | WaveDAC_BuffAmp_PUMP_CR1_FORCE));
    }
}


/*******************************************************************************
* Function Name: WaveDAC_BuffAmp_SetPower
********************************************************************************
*
* Summary:
*  Sets power level of Analog buffer.
*
* Parameters: 
*  power: PSoC3: Sets power level between low (1) and high power (3).
*         PSoC5: Sets power level High (0)
*
* Return:
*  void
*
**********************************************************************************/
void WaveDAC_BuffAmp_SetPower(uint8 power) 
{
    #if (CY_PSOC3 || CY_PSOC5LP)
        WaveDAC_BuffAmp_CR_REG &= (uint8)(~WaveDAC_BuffAmp_PWR_MASK);
        WaveDAC_BuffAmp_CR_REG |= power & WaveDAC_BuffAmp_PWR_MASK;      /* Set device power */
    #else
        CYASSERT(WaveDAC_BuffAmp_HIGHPOWER == power);
    #endif /* CY_PSOC3 || CY_PSOC5LP */
}


/* [] END OF FILE */
