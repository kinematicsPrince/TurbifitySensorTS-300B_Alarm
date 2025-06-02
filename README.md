# TurbifitySensorTS-300B_Alarm
Thingiverse link:
## Project Overview

This turbidity sensor creates noise and light when the water's opacity increases by a certain amount. To trigger the alarm, the opacity of the water must increase. The trigger value is based on the initial value obtained, therefore it changes everytime you reset.

## Hardware Components

- Arduino Uno/Nano
- Passive Buzzer (KY-006 or other)
- LED
- Turbidity Sensor (TS-300B)
- 3D printer / 3D plastic
- Mini breadboard
- 220 ohms resistor
- 200 ohms resistor
- 2x m3 screws

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

## Assembly Instructions

The plastic part (`Sensor_Support.3MF`) is designed to specifically fit/clip on this container. You can find it at many stores including Dollarama.

<img src="https://github.com/user-attachments/assets/e4ec42ff-3c5e-4f75-99d3-e94040b381f9" alt="Sample Image" style="width:50%; height:auto;">

*Rectangular Plastic Storage Box With Lid Clear 9.9 cm.

The board included with the TS-300B sensor can be screwed on the plastic part (`Sensor_Support.3MF`) with two m3 screws.
## Usage Instruction

You can use food coloring to artificially increase the opacity of the water. 

## Troubleshooting

You can lower the sensitivity by increasing the tolerance (in the Arduino code), the water's opacity difference will have to be higher in order to trigger the alarm

## Future Improvements

## Files

- `Arduino_Support.3MF`: An optional 3D printable Arduino Uno Support
- `Sensor_Support.3MF`: 3D printable turbidity sensor holder that clips on the container
- `License`: The license
- `README.md`: This documentation file

## References

- https://www.circuitbasics.com/how-to-use-active-and-passive-buzzers-on-the-arduino/
- https://makeabilitylab.github.io/physcomp/arduino/led-blink.html#making-the-circuit
- https://innovatorsguru.com/ts-300b-arduino-turbidity-sensor/#google_vignette
