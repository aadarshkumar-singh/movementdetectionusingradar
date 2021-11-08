/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include "global.h"
#include "led.h"
#include "dma.h"
#include "movementDetector.h"

/* Number of bytes to be buffered  */
#define ADC_SAMPLE_BUFF_SIZE 1024

/* Destination where ADC samples are stored */
uint16 AdcSamplesFromDMA[ADC_SAMPLE_BUFF_SIZE];

/****** function prototypes ***********/
/**
 * Initialization of peripherals - DAC, UART,ADC
 * Starts ADC sampling in continous mode
 * @return void
 */
void peripheral_init();

/**
 * Interrupt Service Routine (ISR) for Button
 * @return void
 */
void isr_Button_handler();

/**
 * Interrupt Service Routine (ISR) for UART
 * @return void
 */
void isr_Uart_handler_onRX();

/**
 * Interrupt Service Routine (ISR) for DMA
 * @return void
 */
void isr_DMA_handler_onEOC();

int main(void)
{
    /* Enable global interrupts. */
    CyGlobalIntEnable; 

    /* Activates and Enables button Interrupt */
    IRQ_BUTTON_StartEx(isr_Button_handler);
    
    /* Activates and Enables UART Interrupt */
    IRQ_UART_StartEx(isr_Uart_handler_onRX);
    
    /* Activates and Enables DMA Interrupt */
    IRQ_DMA_StartEx(isr_DMA_handler_onEOC);
    
    /* Initialization of peripherals - DAC,UART,ADC, DMA */
    /* Starts ADC sampling in continous mode, and */ 
    /* Initialises DMA to read Sampled ADC value into SRAM*/
    peripheral_init();
    
    /** Indicator LED the Initial State of the movement detector  */
    /* Red - On , Green - Off , Yellow - Off */        
    ledIndictor_systemIsIdle();

    for(;;)
    {
        /* State machine for movement detection */
        movementDetector_StateMachine(AdcSamplesFromDMA,(ADC_SAMPLE_BUFF_SIZE *sizeof(uint16)));
    }
}

/**
 * Initialization of peripherals - DAC, UART,ADC
 * Starts ADC sampling in continous mode
 * @return void
 */
void peripheral_init()
{
    /* Initializes the waveform DAC */
    WaveDAC_Start();
    
    /* Initializes the UART */
    UART_Start();
    
    /*Initializes ADC in continous mode */
    ADC_DelSig_Start();
    
    /*DMA initialization to read the ADC sampled values and store it in SRAM */
    DMA_Initialize(AdcSamplesFromDMA,(ADC_SAMPLE_BUFF_SIZE *sizeof(uint16)));
}

/**
 * Interrupt Service Routine (ISR) for Button
 * @return void
 */
void isr_Button_handler()
{
    IRQ_BUTTON_ClearPending();
    
    /* sets the Button pressed flag */
    setEvent(EV_BUTTON);
}

/**
 * Interrupt Service Routine (ISR) for UART
 * @return void
 */
void isr_Uart_handler_onRX()
{
    IRQ_UART_ClearPending();
    
    /* Sets the UART reception Flag */
    setEvent(EV_UART_RX);
}

/**
 * Interrupt Service Routine (ISR) for DMA
 * @return void
 */
void isr_DMA_handler_onEOC()
{   
    IRQ_DMA_ClearPending();
    
    /* sets the DMA completion flag */
    setEvent(EV_DMA_COMPLETE);
}

/* [] END OF FILE */
