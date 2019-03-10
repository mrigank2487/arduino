
const int led=13; //Pin 13 is named led
void setup() 
{
  pinMode(led,OUTPUT);

}

void loop() 
{
  digitalWrite(led, HIGH); //Turn on
  delay(500);
  digitalWrite(led, LOW); //Turn off
  delay(500);

}
