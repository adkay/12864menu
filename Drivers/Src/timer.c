#include "timer.h"



//ͨ�ö�ʱ�� 3 �жϳ�ʼ��
//����ʱ��ѡ��Ϊ APB1 �� 2 ������ APB1 Ϊ 36M
//arr���Զ���װֵ��
//psc��ʱ��Ԥ��Ƶ��
//����ʹ�õ��Ƕ�ʱ�� 3!
void TIM3_Int_Init(u16 arr,u16 psc)
{
	RCC->APB1ENR|=1<<1;  //TIM3 ʱ��ʹ��
	TIM3->ARR=arr; //�趨�������Զ���װֵ//�պ� 1ms
	TIM3->PSC=psc; //Ԥ��Ƶ�� 7200,�õ� 10Khz �ļ���ʱ��
	TIM3->DIER|=1<<0; //��������ж� 
	TIM3->CR1|=0x01; //ʹ�ܶ�ʱ�� 3
	MY_NVIC_Init(1,3,TIM3_IRQn,2);//��ռ 1�������ȼ� 3���� 2 
}





















