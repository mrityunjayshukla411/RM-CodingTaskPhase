
int LED = 8;
int IRSensorPin = 4;
void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(IRSensorPin,INPUT);
  Serial.begin(9600);
}

void loop()
{
int sensorValue = digitalRead(IRSensorPin);
if (sensorValue == 0)
{
    digitalWrite(LED,HIGH);
    Serial.println("Object Detected");
 
}
if (sensorValue == 1)
{
    digitalWrite(LED,LOW);
  Serial.println("Object not detected");

}
delay(500);
}
