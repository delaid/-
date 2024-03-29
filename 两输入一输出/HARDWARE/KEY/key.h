#ifndef __KEY_H
#define __KEY_H	 
#include "sys.h"


#define KEY0  GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_6)
#define KEY1  GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_7)
#define KEY2  GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_13)

#define KEY0_PRES 	1	
#define KEY1_PRES	  2	

void KEY_Init(void);
u8 KEY_Scan(u8);

#endif
