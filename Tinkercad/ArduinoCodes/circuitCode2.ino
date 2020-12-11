int redLEDpin = 9;
int yellowLEDpin = 10;
int redLEDOnTime = 100;
int redLEDOffTime = 900;
int yellowLEDOnTime = 900;
int yellowLEDOffTime = 100;
int redBlink = 5;
void setup()
{
  pinMode(redLEDpin, OUTPUT);
  pinMode(yellowLEDpin, OUTPUT);
}

void loop()
{
  
  digitalWrite(redLEDpin, HIGH);
  delay(redLEDOnTime); 
  digitalWrite(redLEDpin, LOW);
  delay(redLEDOffTime); 
  
  digitalWrite(yellowLEDpin, HIGH);
  delay(yellowLEDOnTime); 
  digitalWrite(yellowLEDpin, LOW);
  delay(yellowLEDOffTime); 
  
}