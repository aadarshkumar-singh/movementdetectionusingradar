/**
* \file led.h
* \author Aadarsh Kumar Singh
* \date 11.06.2020
**/

 
#ifndef LED_H
#define LED_H

#include "global.h"

/**
* \brief 
* Types of LEDS
*
*/
enum LED_Type_e{
  LED_RED,          /**< Selection of red LED */
  LED_YELLOW,       /**< Selection of yellow LED */
  LED_GREEN,        /**< Selection of green LED */
  LED_ALL           /**< Selection of all LED's */
} ;         
typedef enum LED_Type_e LED_id_t;

enum LED_ONOFF_e{
    LED_OFF = 0,    /**< Turn the LED OFF */
    LED_ON  = 1     /**< Turn the LED ON */
};
typedef enum LED_ONOFF_e LED_ONOFF_t;


/*****************************************************************************/
/* API functions                                                             */
/*****************************************************************************/

/**
 * Sets the required LED
 * @param LED_t ledId - Identifier for the LED, ALL will change all LED's
 * @param LED_ONOFF_t ledOnOff - Trun the led on or off
 * @return RC_SUCCESS if function was executed as exepected, other error code in case of error
 */
RC_t LED_Set(LED_id_t ledId, LED_ONOFF_t ledOnOff);



#endif /* FILE_H */
