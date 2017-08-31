int x=A0;
int y=A1;
int btn=7;

void setup() {
  // put your setup code here, to run once:
  pinMode(btn,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("X轴: ");
  Serial.print(analogRead(x)/100);
  Serial.print(" Y轴: ");
  Serial.println(analogRead(y)/100);
  delay(100);
}
