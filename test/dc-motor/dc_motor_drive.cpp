#include <Ardunino.h>
#include "pins.h"

void setup(){
  pinMode(motorPin1,OUTPUT);
  pinMode(motorPin2,OUTPUT);
}
void motorStop(){
  digitalWrite(motorPin1,LOW);
  digitalWrite(motorPin2,LOW);
  delay(500);
}
void loop(){
  digitalWrite(motorPin1,HIGH);   // Motor Vor
  digitalWrite(motorPin2,LOW);
  delay(1000);
  motorStop();                    // Motor Stop
}