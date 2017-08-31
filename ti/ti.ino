#include <Servo.h>
Servo s1;
Servo s2;
String str_rec="";

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
  // put your main code here, to run repeatedly:
  while (Serial.available() > 0) {
    str_rec += char(Serial.read());
    delay(2);
  }
  if(str_rec.length()>0){
    Serial.println(str_rec);
    int cx=str_rec.substring(0,3).toInt();
    int cy = str_rec.substring(3,6).toInt();
    if(cx<200){
      s2.write(0);
    }
    if(cx>280){
      s2.write(180);  
    }
    if(cy<200){
      s1.write(180);  
    }
    if(cy>280){
      s1.write(0);
    }
    //motor_control(pw);
    //s1.write(pw);
    str_rec="";
  }
    delay(1);
}

void motor_control(int i){
  if(i==1){
    m_up();
  }
  if(i==2){
    m_down();
  }
  if(i==3){
    m_left();
  }
  if(i==4){
    m_right();
  }
  if(i==5){
    m_center();
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
