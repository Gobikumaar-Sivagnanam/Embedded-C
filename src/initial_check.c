#include "initial_check.h"

void intialize_interrupt_func1()
{
    PCICR |= (1<<PCIE0);                               /// Setting the PCINT0 corresponding to B PINS
    PCMSK0 |= (1<<PCINT1);                             /// Setting PIN B1 to enable interrupt PCINT0
    PCMSK0 |= (1<<PCINT2);                             /// Setting ping B1 to enable interrupt PCINT0
}

void initialize_port_func1()
{
    DDRB |= (1<<PORTB0);                                /// Set bit PB0 for output
    DDRB &= ~(1<<PORTB1);                               /// Clear bit PB1
    PORTB |= (1<<PORTB1);                               /// Set bit PB1 to provide high(5V)
    DDRB &= ~(1<<PORTB2);                               /// Clear bit PB2
    PORTB |= (1<<PORTB2);                               /// Set bit PB2 to provide high(5V)
}

