int myVoltPin = A2;
int readVal;
float V2;
int delayTime = 500;
int redPin = 9;

void setup()
{
    Serial.begin(9600);
    pinMode(redPin, OUTPUT);
}

void loop()
{
    readVal = analogRead(myVoltPin);
    V2 = (5. / 1023.) * readVal;
    Serial.println(V2);
    if (V2 > 4.0)
    {
        digitalWrite(redPin, HIGH);
    }
    if (V2 < 4.0)
    {
        digitalWrite(redPin, LOW);
    }
    delay(delayTime);
}