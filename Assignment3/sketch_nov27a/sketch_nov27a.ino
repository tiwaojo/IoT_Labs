// Resources used: https://osoyoo.com/2017/09/13/photoresistor-sensor-module/
// https://youtu.be/yVm6zEwPyBU
#define PHOTO_CELL A0
#define LED_PIN 13

int cellVal;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);          //Set the baudrate to 9600,make sure it's same as your software settings
  pinMode(LED_PIN, OUTPUT);    // declare the ledPin as an OUTPUT
  pinMode(PHOTO_CELL, INPUT);  // declare the ledPin as an OUTPUT
}

void loop() {
  // put your main code here, to run repeatedly:
  cellVal = analogRead(PHOTO_CELL);  // read the value from the sensor
  Serial.println(cellVal);
  if (cellVal > 700) {
    digitalWrite(LED_PIN, 1);
  }else {
      digitalWrite(LED_PIN, 1);
  }
delay(50);
}