#include <Servo.h>
Servo s1;
Servo s2;
String str="";
String inString = "";

void setup() {
  // put your setup code here, to run once:
 s1.attach(8);
 s2.attach(9);
 s1.write(90);
 s2.write(90);
 Serial.begin(9600);
 while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
}

void loop() {
  //for(int i =0;i<180;i+=10)
 // {
  //  myservo.write(i);
  //  delay(100);  
  //}
  while (Serial.available() > 0) {
    int inChar = Serial.read();
    if (isDigit(inChar)) {
      inString += (char)inChar;
    }
    if (inChar == '\n') {
      Serial.println(inString);
      inString = "";
    }
  }
}
