#include <dht.h>


#define dht_apin A4 // Analog Pin
 
dht DHT;
 
void setup(){
 
  Serial.begin(9600);
  delay(500);
  delay(1000);
 
}
 
void loop(){
    DHT.read11(dht_apin);
    
    Serial.print("Current Humidity = ");
    Serial.print(DHT.humidity);
    Serial.print("%\n");
    Serial.print("Temperature = ");
    Serial.print(DHT.temperature); 
    Serial.println("C\n");
    
    delay(10000);
}