/*
 * idelay.c
 *
 *  Created on: June 07, 2024
 *      Author: SHUAIWEN CUI
 */

#include "idelay.h"

void delay_us(uint32_t us) // use CPU cycles to implement a non-precise microsecond delay function
{
    uint32_t delay = (HAL_RCC_GetHCLKFreq() / 8000000 * us); // use HAL_RCC_GetHCLKFreq() function to get the main frequency value, and calculate the number of cycles per microsecond
    while (delay--); //cycle to delay
}
