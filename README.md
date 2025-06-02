# TurbifitySensorTS-300B_Alarm
Thingiverse link:
## Project Overview

This turbidity sensor creates noise and light when the when the water's opacity increases

## Hardware Components

- Arduino Uno/Nano
- Passive Buzzer (KY-006 or other)
- LED
- Turbidity Sensor (TS-300B)
- 3D printer / 3D plastic
- Mini breadboard
- 220 ohms resistor
- 200 ohms resistor

## Circuit Diagram

<img src="https://github.com/user-attachments/assets/fb287f20-c7ed-4ad7-b6f0-87edde538987" alt="Sample Image" style="width:70%; height:auto;">

## Wiring Instructions
### Buzzer and LED

| Arduino Pin | Connected To | Description |
|-------------|--------------|-------------|
| Pin 10      | Buzzer +     | with a 200 ohms resistor   |
| GND         |  Buzzer GND  |             |
| Pin 9       | LED +        | with a 220 ohms resistor   |
| GND         |  LED -       |             |

### Turbidity Sensor TS-300B

| Arduino Pin | Connected To | Description |
|-------------|--------------|-------------|
| Pin A0      | A            |             |
| GND         |  G           |             |
| 5V          | V            |             |

## Software Requirements

- Arduino IDE [2.3.3]

## Usage Instructions

## Troubleshooting

If the voltage given by the solar panel(s) exceeds the reading values of the analog input of the Arduino, a device that steps down voltage can be used

Example (buck converter): https://www.amazon.ca/BULVACK-LM2596-Converter-Module-1-25V-30V/dp/B07VVXF7YX/ref=sr_1_6?crid=K0KV1EOWJDZP&dib=eyJ2IjoiMSJ9.RC-W9MMW4wP1EhYY1tl50bZD3ouf-URFuvuVeLlqfTwFbaxAjldjpx9EBkaDE4Q5Ovca4jpkvg_ub3zznTmZ7EV_lASJl6y_VQU6zQ4dqHnClHaw90AvVRPGzw2KduSwNRxwZJ7dhqORJ9_7EaVZTjBzTW4b_Je0CLpTouLyS0Zl6mIBqSnSg9HNhCJPBi5TFPZhYgop-oagF0xvZxsIpuY4Ul8wIc9aYeIJozfkQYpMqptsEDKw7P_J-ktin6GkMelucrOPBueXxpwQzZJZAKKWA7mSyObmFu3XqjGEjWQ.UYSTfch3m1RunKXyCmxNG11SHiRj1x_ZMV6WpRTG_Sg&dib_tag=se&keywords=buck%2Bconverter%2B3.2V&qid=1748722391&sprefix=buck%2Bconverter%2B3%2B2v%2Caps%2C156&sr=8-6&th=1

## Future Improvements

## References

- https://www.circuitbasics.com/how-to-use-active-and-passive-buzzers-on-the-arduino/
- https://makeabilitylab.github.io/physcomp/arduino/led-blink.html#making-the-circuit
- https://innovatorsguru.com/ts-300b-arduino-turbidity-sensor/#google_vignette
