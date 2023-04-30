## InputPullupSerial
Resources: https://docs.arduino.cc/built-in-examples/digital/InputPullupSerial#hardware-required
### Hardware used:
Arduino Board 
Pushbutton
Hookup wire 

Building a simple Arduino system with input/output support
Connected one wire from  ground to one leg of the pushbutton.
The second wire goes from pin 2 to the other leg of the pushbutton. 
You can use the LED_BUILTIN constant to reference the "L" on the simulation
Internal pullup is active on pin 2. When the button is open(unpressed), it reads HIGH and when it is closed(pressed) and the connection to ground is completed, it reads LOW.

You will see a stream of "0"s when closed, or "1"s if the switch is open
