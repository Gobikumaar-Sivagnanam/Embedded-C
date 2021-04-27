#include "initial_check.h"

//#define F_CPU 16000000UL

volatile unsigned FLAG_1 = 0;

ISR(PCINT0_vect)
{	
	if((SWITCH1)&&(SWITCH2))
	{
		LED_ON;
		FLAG_1 = 1;
	}
	else{
		LED_OFF;
		FLAG_1 = 0;
	}
}

int main()
{
	sei();
	initialize_port_func1();
	intialize_interrupt_func1();
	while(1)
	{
		//LED_ON;
	}
	return 0;
}