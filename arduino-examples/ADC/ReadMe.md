Resources: https://docs.arduino.cc/built-in-examples/analog/AnalogInput

An analog to digital converter demonstration using Arduino.

A potentiometer is used to control the blinking of a built-in LED. 
The potentiometer has 3 terminals:
  - the center terminal is connected to the analog input A0 of the arduino
  - the left goes to ground
  - the right is connected to 5V
The range of numbers is from 0 to 1023, when the voltage is 0, number is 0 and when voltage is 5, number is 1023.

The result observed is that when the potentiometer is rotated more to the left(the ground terminal), 
the sensor value decreases closer to 0. When potentiometer is rotated more to the right (5v terminal), the sensor value increases closer to 1023.

The output being the LED, which is controlled by the sensorValue,determines the delay in blinking of the light. 
![image](https://github.com/rosywaruku/Embedded-Hardware-and-Operating-Systems/assets/71630865/73640c9a-6a9b-4f5d-bc2c-66bd4b3fb0d5)
