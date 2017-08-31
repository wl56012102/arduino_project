#include<EEPROM.h>
int addr=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
EEPROM.write(addr,-10);
delay(500);
Serial.println(EEPROM.read(0),DEC);
}
