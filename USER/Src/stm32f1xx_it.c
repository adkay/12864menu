#include "sys.h"
#include "gpio.h"


//�û��жϺ���

void TIM3_IRQHandler(void)
{
	if(TIM3->SR&0X0001) //����ж�
	{
		LED0=!LED0; 
	} 
	TIM3->SR&=~(1<<0); //����жϱ�־λ
}





