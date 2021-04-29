/**
 * @file temperature_set.h
 * @author Gobikumaar Sivagnanam
 * @brief Function to read the input from ADC and store this
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __TEMPERATURE_SET_H__       /// Header Guard
#define __TEMPERATURE_SET_H__       /// Beginning of Definition

/**
 * @brief Include Files for referencing AVR atmega defined names 
 */
#include <avr/io.h>
#include <avr/interrupt.h>

/**
 * @brief Setting MACROS for Starting ADC read and checking if ADC register is loaded 
 */
#define ADC_Start (ADCSRA |= (1<<ADSC))             /// Enabling the ADC Start Conversion bit in the control register
#define ADC_Load (!(ADCSRA&(1<<ADIF)))              /// Checking if the Interrupt Flag is being cleared

/**
 * @brief Function to initalize the ADC Registers with appropriate values
 * 
 * @param [in] ch To select the Channel
 */
void initialize_ADC(uint8_t ch);

/**
 * @brief To Read the ADC input which is the set temperature, read using the ADC channel
 *  
 * @return uint16_t Since ADC is a 10-bit register using uint16_t to return the ADC register 
 */
uint16_t get_temperature();

#endif                          /// End of Definition