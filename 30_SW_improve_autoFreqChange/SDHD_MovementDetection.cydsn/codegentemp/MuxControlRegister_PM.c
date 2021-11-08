/*******************************************************************************
* File Name: MuxControlRegister_PM.c
* Version 1.80
*
* Description:
*  This file contains the setup, control, and status commands to support 
*  the component operation in the low power mode. 
*
* Note:
*
********************************************************************************
* Copyright 2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "MuxControlRegister.h"

/* Check for removal by optimization */
#if !defined(MuxControlRegister_Sync_ctrl_reg__REMOVED)

static MuxControlRegister_BACKUP_STRUCT  MuxControlRegister_backup = {0u};

    
/*******************************************************************************
* Function Name: MuxControlRegister_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the control register value.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void MuxControlRegister_SaveConfig(void) 
{
    MuxControlRegister_backup.controlState = MuxControlRegister_Control;
}


/*******************************************************************************
* Function Name: MuxControlRegister_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the control register value.
*
* Parameters:
*  None
*
* Return:
*  None
*
*
*******************************************************************************/
void MuxControlRegister_RestoreConfig(void) 
{
     MuxControlRegister_Control = MuxControlRegister_backup.controlState;
}


/*******************************************************************************
* Function Name: MuxControlRegister_Sleep
********************************************************************************
*
* Summary:
*  Prepares the component for entering the low power mode.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void MuxControlRegister_Sleep(void) 
{
    MuxControlRegister_SaveConfig();
}


/*******************************************************************************
* Function Name: MuxControlRegister_Wakeup
********************************************************************************
*
* Summary:
*  Restores the component after waking up from the low power mode.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void MuxControlRegister_Wakeup(void)  
{
    MuxControlRegister_RestoreConfig();
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
