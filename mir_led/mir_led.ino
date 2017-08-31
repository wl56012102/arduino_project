
int led = 4;

void setup()
{
 pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
 digitalWrite(led, HIGH);
 Serial.println("Hello");
 delay(1000);
 digitalWrite(led, LOW);
 delay(1000);
}

