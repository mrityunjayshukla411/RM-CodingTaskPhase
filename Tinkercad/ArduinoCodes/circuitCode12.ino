

int LED = 8;
int IRSensorPin = 4;
IRrecv irrecv(IRSensorPin);
decode_re
void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(IRSensorPin,INPUT);
  Serial.begin(9600);
}

void loop()
{
int sensorValue = digitalRead(IRSensorPin);
  Serial.println(sensorValue);
if (sensorValue == 0)
{
    digitalWrite(LED,HIGH);
}
if (sensorValue == 1)
{
    digitalWrite(LED,LOW);
}

}