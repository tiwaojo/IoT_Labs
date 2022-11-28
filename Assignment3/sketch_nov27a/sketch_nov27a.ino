// Resources used: https://osoyoo.com/2017/09/13/photoresistor-sensor-module/
// https://youtu.be/yVm6zEwPyBU


#include <SoftwareSerial.h>

#define PHOTO_CELL A0
#define LED_PIN 13

int cellVal;
SoftwareSerial btSerial(4, 5);

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);    // declare the ledPin as an OUTPUT
  pinMode(PHOTO_CELL, INPUT);  // declare the ledPin as an OUTPUT
  Serial.begin(9600);          //Set the baudrate to 9600,make sure it's same as your software settings
  btSerial.begin(9600);          //Set the baudrate to 9600,make sure it's same as your software settings
}

void loop() {
  // put your main code here, to run repeatedly:
  cellVal = analogRead(PHOTO_CELL);  // read the value from the sensor

  String cellValStr;

  Serial.println(cellVal);
  if (cellVal < 650) {
    digitalWrite(LED_PIN, 0);
    cellValStr= "Light is Off";
  }else {
      digitalWrite(LED_PIN, 1);
    cellValStr= "Light is On";
  }
Serial.println(cellValStr);
char charArrayDeg[cellValStr.length() + 1];
    cellValStr.toCharArray(charArrayDeg, cellValStr.length() + 1);
    btSerial.write(charArrayDeg);

delay(50);
}