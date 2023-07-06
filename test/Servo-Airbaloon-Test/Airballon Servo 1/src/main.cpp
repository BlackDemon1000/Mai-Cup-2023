#include <Servo.h>
#include <Arduino.h>

Servo name_servo;

int servo_position = 0;

void setup() {

  name_servo.attach (6);

}

void loop() {
  name_servo.write(160);
  while(true) {
    //Servo in Baloon = 160
    //Servo Idle = 30
  }

  
}
