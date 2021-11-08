/**
* \file dma.h
* \author Aadarsh Kumar Singh
* \date 11.06.2020
**/

#ifndef DMA_H
#define DMA_H
    
#include "global.h"

/**
 * Initializes DMA to read samples ADC values and store it in buffer
 * @param : uint16* buffer - pointer to the buffer containing ADC samples 
 * @param : uint16 length  - length of the buffer containing ADC samples
 * @return void
 */    
void DMA_Initialize(uint16 * buffer , uint16 length);

/**
 * Enables the DMA
 * @return void
 */
void DMA_Enable();

#endif /* FILE_H */