# Embedded-C

## Badges
| Badge Name | Status |
|----|----|
| Build | [![Compile-Linux](https://github.com/Gobikumaar-Sivagnanam/Embedded-C/actions/workflows/compile_linux.yml/badge.svg)](https://github.com/Gobikumaar-Sivagnanam/Embedded-C/actions/workflows/compile_linux.yml) |
| Static Analysis Cppcheck | [![Cppcheck](https://github.com/Gobikumaar-Sivagnanam/Embedded-C/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/Gobikumaar-Sivagnanam/Embedded-C/actions/workflows/cppcheck.yml) |

## Operation 

### Pin Configuration 

*   Pins and the peripherals connected to it

| PIN | Connected Peripheral |
|-----|----------------------|
| PIN B0 | LED Actuator (Indicator LED) |
| PIN B1 | Pulse Width Modulation Wave |
| PIN B3 | Sensor for Passenger Seated |
| PIN B4 | Switch for Heating System |
| PIN C0 | Set Temperature using ADC |

*   Simulation Circuit
<img src="/simulation/Circuit_Configuration.JPG">

### Requirements Check 

*   Passenger is not Seated and Heating System is OFF
<img src="/simulation/Operation_No_Switch.JPG">

*   Passenger is Seated and Heating System is OFF
<img src="/simulation/Operation_One_Switch_2.JPG">

*   Passenger is not Seated and Heating System is ON
<img src="/simulation/Operation_One_Switch_1.JPG">

*   Passenger is Seated and Heating System is ON
<img src="/simulation/Operation_Two_Switch.JPG">

### Functionality Check

*   Initial Conditions are True and ADC Input is in the range \[0 - 200\]

| Expected Output | Simulation Output |
|-----------------|-------------------|
| LED Actuator- ON, PWM Output - 20%, Temperature - 20 C | <img src="/simulation/Operation_Two_Switch_Case1.JPG"> |
