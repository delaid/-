#include "led.h"


void LED_Init(void)
{
 
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	//ʹ��PB,PE�˿�ʱ��

 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		//�������
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;	 //IO���ٶ�Ϊ50MHz
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1|GPIO_Pin_10;	    		//LED1-->PE.5 �˿�����, �������
 GPIO_Init(GPIOC, &GPIO_InitStructure);	  				 //������� ��IO���ٶ�Ϊ50MHz
 //GPIO_SetBits(GPIOC,GPIO_Pin_0); 						      //PE.5 ����� 
}
 
