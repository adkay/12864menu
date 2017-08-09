#include "sys.h"
#include "delay.h"
#include "gpio.h"

int main(void)
{	
	Stm32_Clock_Init(9);
	delay_init(72);	    //��ʱ������ʼ��	  
	GPIO_Init();
	while(1)
	{
		LED0_T;
		delay_ms(500);
	}
}
 
