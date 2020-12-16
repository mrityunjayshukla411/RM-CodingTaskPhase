int analogOutputPin = 9;
int analogInputPin = A3;

int sensorValue = 0;
int outputValue = 0;
void setup()
{
    Serial.begin(9600);
    pinMode(analogOutputPin, OUTPUT);
    pinMode(analogInputPin,INPUT);
}

void loop()
{
    sensorValue = analogRead(analogInputPin);

    outputValue = map(sensorValue, 0, 1023, 0, 255);

    // analogWrite(analogOutputPin,outputValue);
    if (outputValue > 127)
    {
        analogWrite(analogOutputPin,LOW);
    }
    if (outputValue < 127)
    {
        analogWrite(analogOutputPin,HIGH);
        /* code */
    }
    
    

    Serial.print("sensor = ");
    Serial.print(sensorValue);
    Serial.print("\t output = ");
    Serial.println(outputValue);
}