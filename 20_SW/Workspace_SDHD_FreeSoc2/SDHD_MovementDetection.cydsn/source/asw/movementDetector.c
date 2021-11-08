/**
* \file movementDetector.c
* \author Aadarsh Kumar Singh
* \date 11.06.2020
**/

#include "project.h"
#include "movementDetector.h"
#include "led.h"
#include "dma.h"

/* Flag for detection of Button Press,
   default state - False, on button Press : True */
volatile boolean_t buttonPressedFlag = FALSE ;

/* Flag for detection of DMA completion ,
   default state - False, on DMA completion : True */
volatile boolean_t dmaCompletionFlag = FALSE;

/* Flag for detection of UART,
   default state - False, on receiving data on COM port : True */
volatile boolean_t UART_RX_Flag = FALSE ;

/* Enum that defines States for the state machine */
typedef enum state_e{
    STATE_IDLE,                     /* Waiting for starting the measurement */
    STATE_MEASUREMENT,              /* Measurement started waiting for the Reciever to send 's' by UART */
    STATE_WAIT_FOR_MEASUREMENT_END, /* Waiting for the DMA to finish reading ADC samples */
    STATE_TRANSFER_DATA,            /* Waiting for the PSoC to finish transmiting ADC samples */
} state_t ;

/**
 * State machine for the movement detection 
 * @param : uint16* buffer - pointer to the buffer containing ADC samples 
 * @param : uint16 length  - length of the buffer containing ADC samples
 * @return void
 */
void movementDetector_StateMachine(uint16 * buffer , uint16 length)
{
    /* Stores the state */
    static state_t state = STATE_IDLE ;
    
    switch(state)
    {
        case STATE_IDLE :    
            /* Waiting for the button to be pressed by the user to start measurement */
            if (getEvent(EV_BUTTON))
            {
                /** Indicator LED - ready for measurement (Button has been pressed by user) */
                /*  Red - Off , Green - Off , Yellow - On */
                ledIndicator_ReadyForMeasurement();
                
                // Clear the button Event 
                clearEvent(EV_BUTTON);
                                
                /* Starts the ADC sampling in continous mode */
                ADC_DelSig_StartConvert();                

                state = STATE_MEASUREMENT ; 
            }                    
            break;
     
        case STATE_MEASUREMENT:            

            /* start reading ADC samples on receiving 's' from matlab */
            /* The decision of enabling DMA as soons as s is received from matlab
            * was made so that we send the latest ADC samples on request from matlab */
          
            /* Waiting for the Reciever to send 's' by UART */
            if (getEvent(EV_UART_RX) && UART_GetChar() == 's' )
            {
                /* Clear the Receiver(MATLAB) Ready event */
                clearEvent(EV_UART_RX);

                /* Enable DMA to start reading ADC samples */
                DMA_Enable();
                                
                state = STATE_WAIT_FOR_MEASUREMENT_END ;
            }    
            break;
     
        case STATE_WAIT_FOR_MEASUREMENT_END :
          
            /* Check if DMA has completed reading the ADC samples */
            if (getEvent(EV_DMA_COMPLETE))
            {
                /* Clear the DMA Completion event */
                clearEvent(EV_DMA_COMPLETE);
            

                /** Indicator Led - PSoC ready to send ADC samples */
                /* Red - Off, Green - On , Yellow - Off */
                ledIndicator_readyToSend();
                
                /* Send the sampled values to the reciever(MATLAB) */
                UART_PutArray((uint8*)buffer, length);              
            
                state = STATE_TRANSFER_DATA;
            }  
            break;
     
        case STATE_TRANSFER_DATA : 
          
          /* Waiting for Acknowledgment (Reciever to send 'o' by UART) */
          if (getEvent(EV_UART_RX) && UART_GetChar() == 'o')
          {
            clearEvent(EV_UART_RX);           
            state = STATE_MEASUREMENT ;
          }            
          break;
    }
        
}

/**
 * Sets Flag when the interrupt for the event arrives
 * @param : event
 * @return void
 */
void setEvent(event_t event)
{
    switch(event)
    {
        /* sets the Button pressed flag */
        case EV_BUTTON :
        
            buttonPressedFlag = TRUE;
            break;
        
        /* sets the DMA completion flag */
        case EV_DMA_COMPLETE :
            
            dmaCompletionFlag = TRUE;
            break;
        
        /* Sets the UART reception Flag */
        case EV_UART_RX :
            UART_RX_Flag = TRUE;
            break ;
        
        /* Invalid Event */ 
        default: 
            UART_PutString("Invalid Event ");
            break ;   
    }
       
}

/**
 * Clears the Flag when the interrupt for the event arrives
 * @param : event
 * @return void
 */
void clearEvent(event_t event)
{
    switch(event)
    {
        /* Clears the Button pressed flag */
        case EV_BUTTON :
        
            buttonPressedFlag = FALSE;
            break;
        
        /* Clears the DMA completion flag */
        case EV_DMA_COMPLETE :
            
            dmaCompletionFlag = FALSE;
            break;
        
        /* Clears the UART reception flag */
        case EV_UART_RX :
            UART_RX_Flag = FALSE;
            break ;
        
        /* Invalid Event */ 
        default: 
            UART_PutString("Invalid Event ");
            break ;   
    }     
}

/**
 * Returns the value for the flag corresponding to the events
 * @param : event
 * @return boolean_t
 */
boolean_t getEvent(event_t event)
{
    boolean_t flag = FALSE  ;
    switch(event)
    {
        /*Returns the state of button pressed flag*/
        case EV_BUTTON :
        
            flag = buttonPressedFlag;
            break;
        
        /* Returns the state of dma completion*/
        case EV_DMA_COMPLETE :
            
            flag = dmaCompletionFlag;
            break;
        
        /* Returns the state of UART reception */
        case EV_UART_RX :
            flag = UART_RX_Flag;
            break ;
        
        /* Invalid Event */
        default: 
            UART_PutString("Invalid Event ");
            break ;   
    }
    
    return flag ;
}

/**
* Indicates the Initial(Idle) State of the movement detector 
* Red - On , Green - Off , Yellow - Off
*/
void ledIndictor_systemIsIdle()
{
    /* Red - On , Green - Off , Yellow - Off */
    LED_Set(LED_GREEN,LED_OFF);
    LED_Set(LED_RED,LED_ON);
    LED_Set(LED_YELLOW,LED_OFF);     
}

/**
* Indicates that its ready for measurement , i.e. Button has been pressed
* Red - Off , Green - Off , Yellow - On
*/
void ledIndicator_ReadyForMeasurement()
{
    LED_Set(LED_GREEN,LED_OFF);
    LED_Set(LED_RED,LED_OFF);
    LED_Set(LED_YELLOW,LED_ON);   
    
}

/**
* Indicates that measurement is started , i.e. PSoC ready to send ADC samples
* Red - Off , Green - On , Yellow - Off
*/
void ledIndicator_readyToSend()
{
    LED_Set(LED_GREEN,LED_ON);
    LED_Set(LED_RED,LED_OFF);
    LED_Set(LED_YELLOW,LED_OFF);  
}