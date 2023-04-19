#include "pins.h"

//////////////////////////////////////////////////////
///               Start of the Functions           ///
//////////////////////////////////////////////////////

void setpinmodes() {
  pinMode(motorPin1,OUTPUT);
  pinMode(motorPin2,OUTPUT);
}

void motorStop(){
  digitalWrite(motorPin1,LOW);
  digitalWrite(motorPin2,LOW);
  delay(500);
}