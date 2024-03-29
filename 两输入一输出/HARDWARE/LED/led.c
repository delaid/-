#include "led.h"


void LED_Init(void)
{
 
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	//使能PB,PE端口时钟

 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		//推挽输出
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;	 //IO口速度为50MHz
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1|GPIO_Pin_10;	    		//LED1-->PE.5 端口配置, 推挽输出
 GPIO_Init(GPIOC, &GPIO_InitStructure);	  				 //推挽输出 ，IO口速度为50MHz
 //GPIO_SetBits(GPIOC,GPIO_Pin_0); 						      //PE.5 输出高 
}
 
