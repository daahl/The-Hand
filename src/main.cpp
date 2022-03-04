#include <Arduino.h>
#include <talkyBoi.h>


void setup(){
  Serial.begin(115200); 
  delay(100);
  getMACAdress();
  init_wifi();

}


void loop() {
  send(1);
  delay(10);
}

