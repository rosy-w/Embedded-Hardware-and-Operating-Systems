const int redPin = 3;
const int greenPin = 5;
const int bluePin = 6;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
while (Serial.available() > 0) {
  int red = Serial.parseInt();
  int green = Serial.parseInt();
  int blue = Serial.parseInt();

  if (Serial.read() == '\n') {
    red = 255 - constrain(red, 0, 255);
    green = 255 - constrain(green, 0, 255);
    blue = 255 - constrain(blue, 0, 255);

    analogWrite(redPin, red);
    analogWrite(greenPin, green);
    analogWrite(bluePin, blue);

    Serial.print(red, HEX);
    Serial.print(green, HEX);
    Serial.println(blue, HEX);
  }
}
}

