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
    ;
  }

}

void loop() {
  while (Serial.available() > 0) {
    int inChar = Serial.read();
    if (isDigit(inChar)) {
      inString += (char)inChar;
    }
    if (inChar == '\n') {
      if(inString.substring(0,1).toInt()==1){
        m_up();
      }
      else if(inString.substring(0,1).toInt()==2){
        m_down();
      }
      else if(inString.substring(0,1).toInt()==3){
        m_left();
      }
      else if(inString.substring(0,1).toInt()==4){
        m_right();
      }
      else if(inString.substring(0,1).toInt()==5){
        m_center();
      }
      else if(inString.substring(0,1).toInt()==6){
        m_ru();
      }
      inString = "";
    }
  }
}

void m_up(){
  s1.write(0);
  s2.write(90);  
}

void m_down(){
  s1.write(180);
  s2.write(90);  
}

void m_left(){
  s1.write(90);
  s2.write(180);
}

void m_right(){
  s1.write(90);
  s2.write(0);  
}

void m_center(){
  s1.write(90);
  s2.write(90);
}

void m_ru(){
  s1.write(0);
  s2.write(0);
}
