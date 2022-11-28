// #include <SoftwareSerial.h>

// SoftwareSerial btSerial(10, 11); // RX, TX


// void setup() {
  
//   pinMode(9, OUTPUT);
//  digitalWrite(9, HIGH);
  
//   //Setup and flush the serials to begin
//   btSerial.begin(9600);
//   Serial.begin(9600);
//   Serial.println("Enter AT Commands: ");
//   // btSerial.begin(38400); //HC-05 default speed in AT command
// }

// void loop() {
//     while (Serial.available()) {
//       delay(1);
//       btSerial.write(Serial.read());
//   }
//   while (btSerial.available()) {
//        Serial.write(btSerial.read());
//   }
// }
