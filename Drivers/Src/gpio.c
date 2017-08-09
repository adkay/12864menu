#include "gpio.h"

// 3 ͨ���������  ����
// 7 ͨ�ÿ�©���  ����
// B �����������
// F ���ÿ�©���


// 8 �ڲ�����������
// 0 ģ������
// 4 ��������

void GPIO_Init(void)
{
	RCC->APB2ENR|=1<<2;			//PORTA
	RCC->APB2ENR|=1<<3;    	//PORTB  
	RCC->APB2ENR|=1<<4;			//PORTC
	//RCC->APB2ENR|=1<<5;			//PORTD
	RCC->APB2ENR|=1<<6;    	//PORTE
	//RCC->APB2ENR|=1<<7;    	//PORTF
	RCC->APB2ENR|=1<<8;    	//PORTG
	
	//����IOģʽ
	GPIOA->CRL&=0XFFFFFFF0;
	GPIOA->CRL|=0X00000008;
	GPIOA->ODR|=1<<0;      
		
	GPIOB->CRL&=0XFF0FFFFF; 
	GPIOB->CRL|=0X00300000;	 
  GPIOB->ODR|=1<<5;      
		
	GPIOB->CRH&=0XFFFFFF0F; 
	GPIOB->CRH|=0X00000030;	 
  GPIOB->ODR|=1<<9;      
	

	GPIOC->CRL&=0X00FFFFFF; 
	GPIOC->CRL|=0X33000000;	 
  GPIOC->ODR|=1<<6;      
	GPIOC->ODR|=1<<7;      
	
	GPIOC->CRH&=0XFFFFFF00; 
	GPIOC->CRH|=0X00000033;  	 
  GPIOC->ODR|=1<<8;      
	GPIOC->ODR|=1<<9; 
	
	GPIOE->CRL&=0XFF0000FF;
	GPIOE->CRL|=0X00388800;
	GPIOE->ODR|=1<<5;      
	GPIOE->ODR|=1<<2;
	GPIOE->ODR|=1<<3;
	GPIOE->ODR|=1<<4;
	
	GPIOG->CRH&=0X0FFFFFFF; 
	GPIOG->CRH|=0X30000000;  	 
  GPIOG->ODR|=1<<15;      
	
}








