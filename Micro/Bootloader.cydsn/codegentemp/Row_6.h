/*******************************************************************************
* File Name: Row_6.h  
* Version 2.10
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Row_6_H) /* Pins Row_6_H */
#define CY_PINS_Row_6_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Row_6_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v2_10 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Row_6__PORT == 15 && ((Row_6__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    Row_6_Write(uint8 value) ;
void    Row_6_SetDriveMode(uint8 mode) ;
uint8   Row_6_ReadDataReg(void) ;
uint8   Row_6_Read(void) ;
uint8   Row_6_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Row_6_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Row_6_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Row_6_DM_RES_UP          PIN_DM_RES_UP
#define Row_6_DM_RES_DWN         PIN_DM_RES_DWN
#define Row_6_DM_OD_LO           PIN_DM_OD_LO
#define Row_6_DM_OD_HI           PIN_DM_OD_HI
#define Row_6_DM_STRONG          PIN_DM_STRONG
#define Row_6_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Row_6_MASK               Row_6__MASK
#define Row_6_SHIFT              Row_6__SHIFT
#define Row_6_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Row_6_PS                     (* (reg8 *) Row_6__PS)
/* Data Register */
#define Row_6_DR                     (* (reg8 *) Row_6__DR)
/* Port Number */
#define Row_6_PRT_NUM                (* (reg8 *) Row_6__PRT) 
/* Connect to Analog Globals */                                                  
#define Row_6_AG                     (* (reg8 *) Row_6__AG)                       
/* Analog MUX bux enable */
#define Row_6_AMUX                   (* (reg8 *) Row_6__AMUX) 
/* Bidirectional Enable */                                                        
#define Row_6_BIE                    (* (reg8 *) Row_6__BIE)
/* Bit-mask for Aliased Register Access */
#define Row_6_BIT_MASK               (* (reg8 *) Row_6__BIT_MASK)
/* Bypass Enable */
#define Row_6_BYP                    (* (reg8 *) Row_6__BYP)
/* Port wide control signals */                                                   
#define Row_6_CTL                    (* (reg8 *) Row_6__CTL)
/* Drive Modes */
#define Row_6_DM0                    (* (reg8 *) Row_6__DM0) 
#define Row_6_DM1                    (* (reg8 *) Row_6__DM1)
#define Row_6_DM2                    (* (reg8 *) Row_6__DM2) 
/* Input Buffer Disable Override */
#define Row_6_INP_DIS                (* (reg8 *) Row_6__INP_DIS)
/* LCD Common or Segment Drive */
#define Row_6_LCD_COM_SEG            (* (reg8 *) Row_6__LCD_COM_SEG)
/* Enable Segment LCD */
#define Row_6_LCD_EN                 (* (reg8 *) Row_6__LCD_EN)
/* Slew Rate Control */
#define Row_6_SLW                    (* (reg8 *) Row_6__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Row_6_PRTDSI__CAPS_SEL       (* (reg8 *) Row_6__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Row_6_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Row_6__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Row_6_PRTDSI__OE_SEL0        (* (reg8 *) Row_6__PRTDSI__OE_SEL0) 
#define Row_6_PRTDSI__OE_SEL1        (* (reg8 *) Row_6__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Row_6_PRTDSI__OUT_SEL0       (* (reg8 *) Row_6__PRTDSI__OUT_SEL0) 
#define Row_6_PRTDSI__OUT_SEL1       (* (reg8 *) Row_6__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Row_6_PRTDSI__SYNC_OUT       (* (reg8 *) Row_6__PRTDSI__SYNC_OUT) 


#if defined(Row_6__INTSTAT)  /* Interrupt Registers */

    #define Row_6_INTSTAT                (* (reg8 *) Row_6__INTSTAT)
    #define Row_6_SNAP                   (* (reg8 *) Row_6__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Row_6_H */


/* [] END OF FILE */
