/**
 * @file display_temperature.h
 * @author Gobikumaar Sivagnanam
 * @brief Function to Display PWM output using PIN B1
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __DISPLAY_TEMPERATURE_H__   /// Header Guard
#define __DISPLAY_TEMPERATURE_H__   /// Beginning of Definition

/**
 * @brief Include Files for referencing AVR atmega defined names 
 */
#include <avr/io.h>
#include <avr/interrupt.h>

/**
 * @brief MACRO for calling the Output Compare Register for channel A (PIN B1)
 * 
 */
#define Output_pwm (OCR1A)  

/**
 * @brief Function to initialize bits for timer to generate pwm in PIN B1 
 * 
 */
void initialize_timer1_pwm();

#endif                              /// End of Definition