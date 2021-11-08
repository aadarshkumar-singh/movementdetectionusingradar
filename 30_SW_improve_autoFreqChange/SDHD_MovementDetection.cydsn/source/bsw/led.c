/**
* \file led.h
* \author Aadarsh Kumar Singh
* \date 11.06.2020
**/

/*****************************************************************************/
/* Include files                                                             */
/*****************************************************************************/

#include "project.h"
#include "led.h"


/**
 * Sets the required LED
 * @param LED_t ledId - Identifier for the LED, ALL will change all LED's
 * @param LED_ONOFF_t ledOnOff - Trun the led on or off
 * @return RC_SUCCESS if function was executed as exepected, other error code in case of error
 */
RC_t LED_Set(LED_id_t ledId, LED_ONOFF_t ledOnOff)
{
    //set individual LED
    switch (ledId)
    {
        case LED_RED : 
            LED_red_Write(ledOnOff); 
            break;
        
        case LED_YELLOW : 
            LED_yellow_Write(ledOnOff);
            break;
            
        case LED_GREEN : 
            LED_green_Write(ledOnOff);             
            break;
           
        case LED_ALL : 
            for (LED_id_t i = LED_RED; i < LED_ALL; i++)
            {
                LED_Set(i, ledOnOff);
            }
            break;
        default: return RC_ERROR_BAD_PARAM;
    }
    
    return RC_SUCCESS;
}





