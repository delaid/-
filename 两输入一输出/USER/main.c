#include "led.h"
#include "delay.h"
#include "key.h"
#include "sys.h"
#include "timer.h"


int main(void)
 {
	 int i;
 	vu8 key=0;	
	delay_init();	
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); 
 
 	LED_Init();			     
	KEY_Init(); 
  TIM3_Int_Init(9999 , 3599);	 //10Khz�ļ���Ƶ�ʣ�������10000Ϊ1s 
  for(i=0;i<5;i++)
				{
						delay_ms(1000);
				}	 	

	while(1)
	{
	//KEY0�����GPIO_Pin_6 ��鵽�˵͵�ƽ  KEY1��ͨ���⿪�� P7��鵽�ڵ���͵�ƽ
	
		     if( KEY1==1)
				 {
					   i=30;
					   while(--i)
						 {
								delay_ms(1000);
						    if( KEY1!=1 )
								break;										
							
					    }
						 if(i==0)
						 {
								LED1=1;
								//TIM_Cmd(TIM3, ENABLE );  //ʹ��TIMx
								for(i=0;i<10;i++)
								{
									 delay_ms(1000);
								}	
								LED1=0;
						 }
         }	
		
		}
}

