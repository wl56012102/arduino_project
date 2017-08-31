#include <Servo.h>
Servo s1;
Servo s2;
Servo s3;
Servo s4;
void setup() {
  // put your setup code here, to run once:
  s1.attach(8);
  s2.attach(9);
  s3.attach(10);
  s4.attach(11);
}

void loop() {
  // put your main code here, to run repeatedly:
  s1.write(0);
  s2.write(0);
  s3.write(0);
  s4.write(0);
}
