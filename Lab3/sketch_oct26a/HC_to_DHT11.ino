// // #include "dht.h"
// // #include <Adafruit_Sensor.h>
// #include <DHT.h>
// // #include <DHT_U.h>

// #include <SoftwareSerial.h>
// dht DHT;
// #define DHTPIN 4
// #define DHTTYPE DHT11

// SoftwareSerial btSerial(4, 5);  // TX, RX
// // DHT dht(DHTPIN, DHTTYPE);
// //Tells us we are sending over Serial
// const int senderPin = 7;

// //Tells us we are receiving confirmation over Serial
// const int receiverPin = 8;
// const int sendSwitch = 2;
// //use for TMP36
// const int TMP36 = A5;
// //use for DTH11
// const int dht11 = A0;
// float degreesC;
// unsigned long timer = 0;
// int sendStatus = 0;

// void setup() {

//   //pinMode(senderPin, OUTPUT);
//   //pinMode(receiverPin, OUTPUT);
//   //pinMode(sendSwitch, INPUT_PULLUP);

//   //Setup and flush the serials to begin
//   btSerial.begin(9600);
//   Serial.begin(9600);
//   btSerial.flush();
//   Serial.flush();
// }



// void loop() {

//   //I want to send the temperature, I want the Raspberry PI to grab it, process it
//   //and send back a message. I don't want to continue spamming the raspberry pi, so
//   //I will only send a signal every 10 seconds.

//   //Non-blocking every 10 seconds.
//   //Original
//   //if ((timer == 0 || millis() >= timer) && sendStatus == 1){
//   //Modified
//   // if ((timer == 0 || millis() >= timer) && sendStatus == 0) {
//   //   //Grab the current temperature in celsius
//   //   //float degreesC = getVoltage(TMP36);
//   //   float degreesC = getVoltage(DHTPIN);
//   //   degreesC = (degreesC - 0.5) * 100.0;

//   //   //Send the current temperature. Didn't use readline to avoid blocking problem
//   //   //original one
//   //   //String sendDegrees = "<" + String(degreesC, 2) + ">";
//   //   String sendDegrees = "<" + String(degreesC) + ">";
//   //   //display message on the com port, ok the problem is here =>String(DHT.temperature returns 0.00

//   //   Serial.print(sendDegrees);
//   //   //Convert to byte array
//   //   char charArray[sendDegrees.length() + 1];
//   //   sendDegrees.toCharArray(charArray, sendDegrees.length() + 1);

//   //   btSerial.write(charArray);

//   //   //blinkTransmit(5, senderPin);

//   //   //Reset the timer for another 10 seconds.
//   //   timer = millis() + 10000;
//   // }

//   DHT.read11(DHTPIN);

//   Serial.print("Current Humidity = ");
//   Serial.print(DHT.humidity);
//   Serial.print("%\n");
//   Serial.print("Temperature = ");
//   Serial.print(DHT.temperature);
//   Serial.println("C\n");
//   delay(1000);

//   /*
//   checkButton();
 

//   //Received message back from Raspberry.
//   //RPI sends back messages in the form of <5>.
//   //We only check for the numerical.
//   while (btSerial.available()) {
//     //Numbers are between 48 and 57
//     char rpiMessage = btSerial.read();
//     Serial.println(rpiMessage); //Shows message from RPi.
    
//     if (rpiMessage >= 48 && rpiMessage <= 57) {
//       blinkTransmit(rpiMessage - '0', receiverPin); //convert to int before sending
//     }
    
//   }
//     */
// }

// //Function used for blinking the sending and receiving pins.
// //Just pass the appropriate pins as arguments.
// // void blinkTransmit(int numberOfTimes, int senderReceiver) {
// //   for (int i = 0; i < numberOfTimes; i++) {
// //     digitalWrite(senderReceiver, HIGH);
// //     delay(50);
// //     digitalWrite(senderReceiver, LOW);
// //     delay(50);
// //   }
// // }

// // //Checks to see if the user wants to keep sending messages.
// // void checkButton() {
// //   //0 means I am pushing the button;
// //   if (digitalRead(sendSwitch) == 0) {
// //     if (sendStatus == 0) {
// //       sendStatus = 1;
// //     } else {
// //       sendStatus = 0;
// //     }
// //   }
// // }

// // /*
// //  Convert 10 bit input to voltage reading. 
// //  This would be a great appliation of the map() function; however, the map() function only returns long
// //  data types so we would lose a lot of precision.
// // */
// // float getVoltage(int pin) {
// //   //return (analogRead(pin));
// //   float temp = dht.readTemperature();
// //   float temp1 = temp * (9.0 / 5.0) + 32;
// //   return (temp1);
// // }