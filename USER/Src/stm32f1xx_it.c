#include "stm32f1xx_it.h"
#include "sys.h"
#include "step_motor.h"
#include "gpio.h"



//�û��жϺ���

void TIM2_IRQHandler(void)
{
	if(TIM2->SR&0X0001) //����ж�
	{
		//LED0_T;
		motorThr_TimerEvent();
		
	} 
	TIM2->SR&=~(1<<0); //����жϱ�־λ
}


void TIM3_IRQHandler(void)
{
	if(TIM3->SR&0X0001) //����ж�
	{
		//LED0_T;
		motorOne_TimerEvent();
		
	} 
	TIM3->SR&=~(1<<0); //����жϱ�־λ
}


void TIM4_IRQHandler(void)
{
	if(TIM4->SR&0X0001) //����ж�
	{
		motorTwo_TimerEvent();
	} 
	TIM4->SR&=~(1<<0); //����жϱ�־λ
}



