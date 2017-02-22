#include <AFMotor.h>

AF_Stepper motor(200,2);
void setup() {
  // put your setup code here, to run once:
motor.setSpeed(150);
}

void loop() {
  // put your main code here, to run repeatedly:
motor.step(2000,FORWARD,DOUBLE);
delay(1000);
motor.step(1000,BACKWARD,DOUBLE);
delay(1000);
}
