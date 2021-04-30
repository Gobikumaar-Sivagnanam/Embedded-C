# Application Operation

## Interrupt Service Routines

### PIN CHANGE INTERRPUT
```C
ISR(PCINT0_vect)							/// ISR for checking the inital check status of passenger seating and switching on system
{	
	if((SWITCH1)&&(SWITCH2))				/// Checking if both the switches are on to enable the LED actuator
	{
		LED_ON;									
		FLAG_1 = 1;							/// Setting flag to enable the Next function
	}
	else{
		LED_OFF;							/// Switching off LED Actuator
		FLAG_1 = 0;							/// Clearing flag to disable the Next function
		Output_pwm = 0;						/// Setting the PWM to 0
	}
}
```