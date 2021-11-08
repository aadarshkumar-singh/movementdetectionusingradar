/**
* \file dma.h
* \author Aadarsh Kumar Singh
* \date 11.06.2020
**
**/
#include "dma.h"


/* Defines for DMA_ForAdc */

// Number of bytes transmitted by DMA per request
#define DMA_ForAdc_BYTES_TX_PER_REQUEST 2

// DMA Request Type for ADC , 0- manual request , 1- automatic requests
#define DMA_ForAdc_REQUEST_TYPE 1 

//source of the ADC samples , length of the sample is 2 
#define ADC_DELSIG_SAMPLE_SOURCE ADC_DelSig_DEC_SAMP_PTR


/* Variable declarations for DMA_ForAdc */
/* Move these variable declarations to the top of the function */
uint8 DMA_ForAdc_Chan;
uint8 DMA_ForAdc_TD[1];


/**
 * Initializes DMA to read samples ADC values and store it in buffer
 * @param : uint16* buffer - pointer to the buffer containing ADC samples 
 * @param : uint16 length  - length of the buffer containing ADC samples
 * @return void
 */    
void DMA_Initialize(uint16 * buffer , uint16 length)
{
    /* DMA Initialization, DMA Configuration for DMA_ForAdc */
    /* Allocates and initializes a DMA channel to be used by the caller. */
    DMA_ForAdc_Chan = DMA_ForAdc_DmaInitialize(
        DMA_ForAdc_BYTES_TX_PER_REQUEST,  // Number of bytes to be transmitted per request
        DMA_ForAdc_REQUEST_TYPE,          // 0- manual request , 1- automatic requests
        HI16(ADC_DELSIG_SAMPLE_SOURCE),   // ADC samples aource address
        HI16(buffer));         // Sampled ADC data in destination address (Higher address)
    
    /* allocate transport descriptor */
    DMA_ForAdc_TD[0] = CyDmaTdAllocate();
    
    /* Configure Transport descriptor */
    CyDmaTdSetConfiguration(
        DMA_ForAdc_TD[0],           //transport descriptor handle
        length,       //total number of bytes to be transferred
        CY_DMA_DISABLE_TD,          //terminate channel after TD has finished
        DMA_ForAdc__TD_TERMOUT_EN | CY_DMA_TD_INC_DST_ADR);
    
    /*Setting Low address in Transport descriptor */
    CyDmaTdSetAddress(
        DMA_ForAdc_TD[0],                       //transport descriptor handle
        LO16((uint32)ADC_DELSIG_SAMPLE_SOURCE), // ADC samples source address (low address)
        LO16((uint32)buffer));       // Sampled ADC data in destination address (low address)
    
    
    /* Set the TD to use */
    CyDmaChSetInitialTd(
        DMA_ForAdc_Chan,    //DMA module handle
        DMA_ForAdc_TD[0]    //Transport Descriptor to use
    );    
}

/**
 * Enables the DMA
 * @return void
 */
void DMA_Enable()
{
    CyDmaChEnable(
        DMA_ForAdc_Chan, // DMA module handle
        1                // Restores the original configuration after TD has ended
    );    
}