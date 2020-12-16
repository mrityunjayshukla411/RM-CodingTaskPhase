int readPin = A3;
int V2 = 0;
int delayTime = 500;
int readVal;
void setup() {
    pinMode(readPin,INPUT);
    Serial.begin(9600);
}

void loop() {
readVal = analogRead(readPin);
V2 = (5./1023.)*readVal;
Serial.println(V2);
delay(delayTime);
}