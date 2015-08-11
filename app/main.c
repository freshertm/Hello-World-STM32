#include "stm32f4xx.h"
#include "system_stm32f4xx.h"

#include "stm32f4xx_rcc.h"
#include "stm32f4xx_gpio.h"

int main(void)
{
	//SystemInit();

	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD, ENABLE);

	GPIO_InitTypeDef gpio;
	GPIO_StructInit(&gpio);

	gpio.GPIO_Mode=GPIO_Mode_OUT;
	gpio.GPIO_OType = GPIO_OType_PP;
	gpio.GPIO_Pin = GPIO_Pin_12 | GPIO_Pin_13 | GPIO_Pin_14 | GPIO_Pin_15 ;
	gpio.GPIO_Speed = GPIO_Speed_50MHz;

	GPIO_Init(GPIOD, &gpio);

	GPIO_SetBits(GPIOD, GPIO_Pin_12);
	GPIO_SetBits(GPIOD, GPIO_Pin_13);
	GPIO_SetBits(GPIOD, GPIO_Pin_14);
	GPIO_SetBits(GPIOD, GPIO_Pin_15);

    while(1)
    {
    }
}
