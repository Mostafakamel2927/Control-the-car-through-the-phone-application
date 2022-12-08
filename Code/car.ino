#include<AFMotor.h>


AF_DCMotor motor1(1, MOTOR12_1KHZ); 
AF_DCMotor motor2(2, MOTOR12_1KHZ);
AF_DCMotor motor3(3, MOTOR34_1KHZ);
AF_DCMotor motor4(4, MOTOR34_1KHZ);
char blu_val;
void setup() {
  Serial.begin(9600);
  
}

void loop() {
  
Up();
  


}

void Up()
{
  motor1.setSpeed(90);
  motor1.run(FORWARD);
  motor2.setSpeed(90);
  motor2.run(FORWARD);
  motor3.setSpeed(90);
  motor3.run(FORWARD);
  motor4.setSpeed(90);
  motor4.run(FORWARD);
  
}
void back()
{
  motor1.setSpeed(70);
  motor1.run(BACKWARD);
  motor2.setSpeed(70);
  motor2.run(BACKWARD);
  motor3.setSpeed(70);
  motor3.run(BACKWARD);
  motor4.setSpeed(70);
  motor4.run(BACKWARD);
  
}

void left() {

  motor1.run(BACKWARD);
  motor1.setSpeed(90);
  motor2.run(BACKWARD);
  motor2.setSpeed(90);
  motor3.run(FORWARD);
  motor3.setSpeed(90);
  motor4.run(FORWARD);
  motor4.setSpeed(90);

}

void right() {
  motor1.run(FORWARD);
  motor1.setSpeed(90);
  motor2.run(FORWARD);
  motor2.setSpeed(90);
  motor3.run(BACKWARD);
  motor3.setSpeed(90);
  motor4.run(BACKWARD);
  motor4.setSpeed(90);

}

void Stop() {
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
}
