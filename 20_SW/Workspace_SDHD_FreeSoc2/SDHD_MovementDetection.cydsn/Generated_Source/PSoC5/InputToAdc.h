/*******************************************************************************
* File Name: InputToAdc.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_InputToAdc_H) /* Pins InputToAdc_H */
#define CY_PINS_InputToAdc_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "InputToAdc_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 InputToAdc__PORT == 15 && ((InputToAdc__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    InputToAdc_Write(uint8 value);
void    InputToAdc_SetDriveMode(uint8 mode);
uint8   InputToAdc_ReadDataReg(void);
uint8   InputToAdc_Read(void);
void    InputToAdc_SetInterruptMode(uint16 position, uint16 mode);
uint8   InputToAdc_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the InputToAdc_SetDriveMode() function.
     *  @{
     */
        #define InputToAdc_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define InputToAdc_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define InputToAdc_DM_RES_UP          PIN_DM_RES_UP
        #define InputToAdc_DM_RES_DWN         PIN_DM_RES_DWN
        #define InputToAdc_DM_OD_LO           PIN_DM_OD_LO
        #define InputToAdc_DM_OD_HI           PIN_DM_OD_HI
        #define InputToAdc_DM_STRONG          PIN_DM_STRONG
        #define InputToAdc_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define InputToAdc_MASK               InputToAdc__MASK
#define InputToAdc_SHIFT              InputToAdc__SHIFT
#define InputToAdc_WIDTH              1u

/* Interrupt constants */
#if defined(InputToAdc__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in InputToAdc_SetInterruptMode() function.
     *  @{
     */
        #define InputToAdc_INTR_NONE      (uint16)(0x0000u)
        #define InputToAdc_INTR_RISING    (uint16)(0x0001u)
        #define InputToAdc_INTR_FALLING   (uint16)(0x0002u)
        #define InputToAdc_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define InputToAdc_INTR_MASK      (0x01u) 
#endif /* (InputToAdc__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define InputToAdc_PS                     (* (reg8 *) InputToAdc__PS)
/* Data Register */
#define InputToAdc_DR                     (* (reg8 *) InputToAdc__DR)
/* Port Number */
#define InputToAdc_PRT_NUM                (* (reg8 *) InputToAdc__PRT) 
/* Connect to Analog Globals */                                                  
#define InputToAdc_AG                     (* (reg8 *) InputToAdc__AG)                       
/* Analog MUX bux enable */
#define InputToAdc_AMUX                   (* (reg8 *) InputToAdc__AMUX) 
/* Bidirectional Enable */                                                        
#define InputToAdc_BIE                    (* (reg8 *) InputToAdc__BIE)
/* Bit-mask for Aliased Register Access */
#define InputToAdc_BIT_MASK               (* (reg8 *) InputToAdc__BIT_MASK)
/* Bypass Enable */
#define InputToAdc_BYP                    (* (reg8 *) InputToAdc__BYP)
/* Port wide control signals */                                                   
#define InputToAdc_CTL                    (* (reg8 *) InputToAdc__CTL)
/* Drive Modes */
#define InputToAdc_DM0                    (* (reg8 *) InputToAdc__DM0) 
#define InputToAdc_DM1                    (* (reg8 *) InputToAdc__DM1)
#define InputToAdc_DM2                    (* (reg8 *) InputToAdc__DM2) 
/* Input Buffer Disable Override */
#define InputToAdc_INP_DIS                (* (reg8 *) InputToAdc__INP_DIS)
/* LCD Common or Segment Drive */
#define InputToAdc_LCD_COM_SEG            (* (reg8 *) InputToAdc__LCD_COM_SEG)
/* Enable Segment LCD */
#define InputToAdc_LCD_EN                 (* (reg8 *) InputToAdc__LCD_EN)
/* Slew Rate Control */
#define InputToAdc_SLW                    (* (reg8 *) InputToAdc__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define InputToAdc_PRTDSI__CAPS_SEL       (* (reg8 *) InputToAdc__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define InputToAdc_PRTDSI__DBL_SYNC_IN    (* (reg8 *) InputToAdc__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define InputToAdc_PRTDSI__OE_SEL0        (* (reg8 *) InputToAdc__PRTDSI__OE_SEL0) 
#define InputToAdc_PRTDSI__OE_SEL1        (* (reg8 *) InputToAdc__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define InputToAdc_PRTDSI__OUT_SEL0       (* (reg8 *) InputToAdc__PRTDSI__OUT_SEL0) 
#define InputToAdc_PRTDSI__OUT_SEL1       (* (reg8 *) InputToAdc__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define InputToAdc_PRTDSI__SYNC_OUT       (* (reg8 *) InputToAdc__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(InputToAdc__SIO_CFG)
    #define InputToAdc_SIO_HYST_EN        (* (reg8 *) InputToAdc__SIO_HYST_EN)
    #define InputToAdc_SIO_REG_HIFREQ     (* (reg8 *) InputToAdc__SIO_REG_HIFREQ)
    #define InputToAdc_SIO_CFG            (* (reg8 *) InputToAdc__SIO_CFG)
    #define InputToAdc_SIO_DIFF           (* (reg8 *) InputToAdc__SIO_DIFF)
#endif /* (InputToAdc__SIO_CFG) */

/* Interrupt Registers */
#if defined(InputToAdc__INTSTAT)
    #define InputToAdc_INTSTAT            (* (reg8 *) InputToAdc__INTSTAT)
    #define InputToAdc_SNAP               (* (reg8 *) InputToAdc__SNAP)
    
	#define InputToAdc_0_INTTYPE_REG 		(* (reg8 *) InputToAdc__0__INTTYPE)
#endif /* (InputToAdc__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_InputToAdc_H */


/* [] END OF FILE */
