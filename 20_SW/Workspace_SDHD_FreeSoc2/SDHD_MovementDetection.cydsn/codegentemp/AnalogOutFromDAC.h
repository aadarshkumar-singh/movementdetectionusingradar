/*******************************************************************************
* File Name: AnalogOutFromDAC.h  
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

#if !defined(CY_PINS_AnalogOutFromDAC_H) /* Pins AnalogOutFromDAC_H */
#define CY_PINS_AnalogOutFromDAC_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "AnalogOutFromDAC_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 AnalogOutFromDAC__PORT == 15 && ((AnalogOutFromDAC__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    AnalogOutFromDAC_Write(uint8 value);
void    AnalogOutFromDAC_SetDriveMode(uint8 mode);
uint8   AnalogOutFromDAC_ReadDataReg(void);
uint8   AnalogOutFromDAC_Read(void);
void    AnalogOutFromDAC_SetInterruptMode(uint16 position, uint16 mode);
uint8   AnalogOutFromDAC_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the AnalogOutFromDAC_SetDriveMode() function.
     *  @{
     */
        #define AnalogOutFromDAC_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define AnalogOutFromDAC_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define AnalogOutFromDAC_DM_RES_UP          PIN_DM_RES_UP
        #define AnalogOutFromDAC_DM_RES_DWN         PIN_DM_RES_DWN
        #define AnalogOutFromDAC_DM_OD_LO           PIN_DM_OD_LO
        #define AnalogOutFromDAC_DM_OD_HI           PIN_DM_OD_HI
        #define AnalogOutFromDAC_DM_STRONG          PIN_DM_STRONG
        #define AnalogOutFromDAC_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define AnalogOutFromDAC_MASK               AnalogOutFromDAC__MASK
#define AnalogOutFromDAC_SHIFT              AnalogOutFromDAC__SHIFT
#define AnalogOutFromDAC_WIDTH              1u

/* Interrupt constants */
#if defined(AnalogOutFromDAC__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in AnalogOutFromDAC_SetInterruptMode() function.
     *  @{
     */
        #define AnalogOutFromDAC_INTR_NONE      (uint16)(0x0000u)
        #define AnalogOutFromDAC_INTR_RISING    (uint16)(0x0001u)
        #define AnalogOutFromDAC_INTR_FALLING   (uint16)(0x0002u)
        #define AnalogOutFromDAC_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define AnalogOutFromDAC_INTR_MASK      (0x01u) 
#endif /* (AnalogOutFromDAC__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define AnalogOutFromDAC_PS                     (* (reg8 *) AnalogOutFromDAC__PS)
/* Data Register */
#define AnalogOutFromDAC_DR                     (* (reg8 *) AnalogOutFromDAC__DR)
/* Port Number */
#define AnalogOutFromDAC_PRT_NUM                (* (reg8 *) AnalogOutFromDAC__PRT) 
/* Connect to Analog Globals */                                                  
#define AnalogOutFromDAC_AG                     (* (reg8 *) AnalogOutFromDAC__AG)                       
/* Analog MUX bux enable */
#define AnalogOutFromDAC_AMUX                   (* (reg8 *) AnalogOutFromDAC__AMUX) 
/* Bidirectional Enable */                                                        
#define AnalogOutFromDAC_BIE                    (* (reg8 *) AnalogOutFromDAC__BIE)
/* Bit-mask for Aliased Register Access */
#define AnalogOutFromDAC_BIT_MASK               (* (reg8 *) AnalogOutFromDAC__BIT_MASK)
/* Bypass Enable */
#define AnalogOutFromDAC_BYP                    (* (reg8 *) AnalogOutFromDAC__BYP)
/* Port wide control signals */                                                   
#define AnalogOutFromDAC_CTL                    (* (reg8 *) AnalogOutFromDAC__CTL)
/* Drive Modes */
#define AnalogOutFromDAC_DM0                    (* (reg8 *) AnalogOutFromDAC__DM0) 
#define AnalogOutFromDAC_DM1                    (* (reg8 *) AnalogOutFromDAC__DM1)
#define AnalogOutFromDAC_DM2                    (* (reg8 *) AnalogOutFromDAC__DM2) 
/* Input Buffer Disable Override */
#define AnalogOutFromDAC_INP_DIS                (* (reg8 *) AnalogOutFromDAC__INP_DIS)
/* LCD Common or Segment Drive */
#define AnalogOutFromDAC_LCD_COM_SEG            (* (reg8 *) AnalogOutFromDAC__LCD_COM_SEG)
/* Enable Segment LCD */
#define AnalogOutFromDAC_LCD_EN                 (* (reg8 *) AnalogOutFromDAC__LCD_EN)
/* Slew Rate Control */
#define AnalogOutFromDAC_SLW                    (* (reg8 *) AnalogOutFromDAC__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define AnalogOutFromDAC_PRTDSI__CAPS_SEL       (* (reg8 *) AnalogOutFromDAC__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define AnalogOutFromDAC_PRTDSI__DBL_SYNC_IN    (* (reg8 *) AnalogOutFromDAC__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define AnalogOutFromDAC_PRTDSI__OE_SEL0        (* (reg8 *) AnalogOutFromDAC__PRTDSI__OE_SEL0) 
#define AnalogOutFromDAC_PRTDSI__OE_SEL1        (* (reg8 *) AnalogOutFromDAC__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define AnalogOutFromDAC_PRTDSI__OUT_SEL0       (* (reg8 *) AnalogOutFromDAC__PRTDSI__OUT_SEL0) 
#define AnalogOutFromDAC_PRTDSI__OUT_SEL1       (* (reg8 *) AnalogOutFromDAC__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define AnalogOutFromDAC_PRTDSI__SYNC_OUT       (* (reg8 *) AnalogOutFromDAC__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(AnalogOutFromDAC__SIO_CFG)
    #define AnalogOutFromDAC_SIO_HYST_EN        (* (reg8 *) AnalogOutFromDAC__SIO_HYST_EN)
    #define AnalogOutFromDAC_SIO_REG_HIFREQ     (* (reg8 *) AnalogOutFromDAC__SIO_REG_HIFREQ)
    #define AnalogOutFromDAC_SIO_CFG            (* (reg8 *) AnalogOutFromDAC__SIO_CFG)
    #define AnalogOutFromDAC_SIO_DIFF           (* (reg8 *) AnalogOutFromDAC__SIO_DIFF)
#endif /* (AnalogOutFromDAC__SIO_CFG) */

/* Interrupt Registers */
#if defined(AnalogOutFromDAC__INTSTAT)
    #define AnalogOutFromDAC_INTSTAT            (* (reg8 *) AnalogOutFromDAC__INTSTAT)
    #define AnalogOutFromDAC_SNAP               (* (reg8 *) AnalogOutFromDAC__SNAP)
    
	#define AnalogOutFromDAC_0_INTTYPE_REG 		(* (reg8 *) AnalogOutFromDAC__0__INTTYPE)
#endif /* (AnalogOutFromDAC__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_AnalogOutFromDAC_H */


/* [] END OF FILE */
