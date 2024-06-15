/*
 * iled.c
 *
 *  Created on: June 07, 2024
 *      Author: SHUAIWEN CUI
 */

#include "iled.h"

void LED_1(uint8_t a)// LED1 independent control function (0 is off, other values are on)
{
	if(a)HAL_GPIO_WritePin(GPIOB,LED1_Pin,GPIO_PIN_RESET);
	else HAL_GPIO_WritePin(GPIOB,LED1_Pin,GPIO_PIN_SET);
}
void LED_2(uint8_t a)//LED2 independent control function (0 is off, other values are on)
{
	if(a)HAL_GPIO_WritePin(GPIOB,LED2_Pin,GPIO_PIN_RESET);
	else HAL_GPIO_WritePin(GPIOB,LED2_Pin,GPIO_PIN_SET);
}

void LED_1_Switch(void){
	HAL_GPIO_WritePin(GPIOG,LED1_Pin,1-HAL_GPIO_ReadPin(GPIOG,LED1_Pin));
}
void LED_2_Switch(void){
	HAL_GPIO_WritePin(GPIOG,LED2_Pin,1-HAL_GPIO_ReadPin(GPIOG,LED2_Pin));
}
