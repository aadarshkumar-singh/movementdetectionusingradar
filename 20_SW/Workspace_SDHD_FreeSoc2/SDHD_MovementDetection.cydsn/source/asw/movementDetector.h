/**
* \file movementDetector.h
* \author Aadarsh Kumar Singh
* \date 11.06.2020
**/

#ifndef MOVEMENTDETECTOR_H
#define MOVEMENTDETECTOR_H

#include "global.h"

typedef enum event_e{
    EV_BUTTON,          /* Event when Button is pressed */
    EV_UART_RX,         /* Event when a charecter is recieved at UART */
    EV_DMA_COMPLETE,    /* Event when DMA is completed */
} event_t ;


/**
 * State machine for the movement detection 
 * @param : uint16* buffer - pointer to the buffer containing ADC samples 
 * @param : uint16 length  - length of the buffer containing ADC samples
 * @return void
 */
void movementDetector_StateMachine(uint16 * buffer , uint16 length);

/**
 * Sets Flag when the interrupt for the event arrives
 * @param : event
 * @return void
 */
void setEvent(event_t event);

/**
 * Clears the Flag when the interrupt for the event arrives
 * @param : event
 * @return void
 */
void clearEvent(event_t event);

/**
 * Returns the value for the flag corresponding to the events
 * @param : event
 * @return boolean_t
 */
boolean_t getEvent(event_t event);

/**
* Indicates the Initial(Idle) State of the movement detector 
* Red - On , Green - Off , Yellow - Off
*/
void ledIndictor_systemIsIdle();

/**
* Indicates that measurement is started , i.e. PSoC ready to send ADC samples
* Red - Off , Green - On , Yellow - Off
*/
void ledIndicator_readyToSend();

/**
* Indicates that its ready for measurement , i.e. Button has been pressed
* Red - Off , Green - On , Yellow - Off
*/
void ledIndicator_ReadyForMeasurement();

#endif /* FILE_H */