void setup() {
  // put your setup code here, to run once:
  pinMode(7,OUTPUT);
  pinMode(9,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(9)==LOW){
    digitalWrite(7,HIGH);
  }
  else{
    digitalWrite(7,LOW);
  }
}
