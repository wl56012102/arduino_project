#include <Keyboard.h>
int btn=4;
int i=1;
void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();
  pinMode(4,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(4)==0){
    Keyboard.print("Wl19960812");
    Keyboard.write(KEY_RETURN);
    delay(1000);
  }
}
