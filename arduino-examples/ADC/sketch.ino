int sensorPin = A0;   // select the input pin for the potentiometer
int sensorValue = 0; 

void setup() {
  // put your setup code here, to run once:
  // declare the L (built-in LED) as the output
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  // turn the LED on
  digitalWrite(LED_BUILTIN, HIGH);
  // stop the program for <sensorValue> milliseconds:
  delay(sensorValue);
  // turn the LED off:
  digitalWrite(LED_BUILTIN, LOW);
  // stop the program for for <sensorValue> milliseconds:
  delay(sensorValue);
}
