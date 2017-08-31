#include <Servo.h>
Servo s1;
Servo s2;
Servo s3;
Servo s4;
int pos =0;
String str="";
String inString = "";
char line[]="";


void setup() {
  // put your setup code here, to run once:
 s1.attach(8);
 s2.attach(9);
 s3.attach(10);
 s4.attach(11);
 s1.write(10);
 s2.write(10);
 s3.write(10);
 s4.write(10);
 Serial.begin(115200);
 while (!Serial) {
  ;
 }
}

void loop() {

  while (Serial.available() > 0) {
    str += char(Serial.read());
    delay(2);
  }
  if(str.length()>0){
    Serial.println(str);
    int x1= str.substring(0,3).toInt();
    int y1 = str.substring(3,6).toInt();
    int x2= str.substring(6,9).toInt();
    int y2 = str.substring(9,12).toInt();
    s1.write(x1);
    s2.write(x2);
    s3.write(y1);
    s4.write(y2);
    str="";
  }
    delay(100);  
    inString = "";
}
