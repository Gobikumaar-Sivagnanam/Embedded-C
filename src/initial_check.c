#define LED_ON PORTB |= (1<<PB0)
#define LED_OFF PORTB &= ~(1<<PB0)
#define SWITCH1 (!(PINB&(1<<PB1)))
#define SWITCH2 (!(PINB&(1<<PB2)))
#define LED_OUT

void initialize_port_func1()
{
    DDRB |= (1<<PORTB0);                                // Set bit PB0 for output
    DDRB &= ~(1<<PB1);                               // Clear bit PB1
    PORTB |= (1<<PB1);                               // Set bit PB1 to provide high(5V)
    DDRB &= ~(1<<PB2);                               // Clear bit PB2
    PORTB |= (1<<PB2);                               // Set bit PB2 to provide high(5V)
}

