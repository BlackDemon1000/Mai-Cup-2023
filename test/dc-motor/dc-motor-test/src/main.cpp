#include <Arduino.h>
#include  "pins.h"
#include "functions.h"

void setup(){
  setpinmodes();
}

void loop(){
  digitalWrite(motorPin1,HIGH);   // Motor Vor
  digitalWrite(motorPin2,LOW);
  delay(1000);
  motorStop();                    // Motor Stop
  delay(1000);
}