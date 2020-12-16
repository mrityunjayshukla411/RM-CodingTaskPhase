int numBlinks;
String msg = "How many blinks do you want?";
// String msg2 = "Your number is ";
int blinkTime = 500;
int redPin = 12;
void setup(){
    Serial.begin(9600);
    pinMode(redPin,OUTPUT);
}

void loop(){
int j = 0;
Serial.println(msg);
while (Serial.available() == 0)
{
    /* code */
}
numBlinks = Serial.parseInt();
// Serial.print(msg2);
// Serial.println(numBlinks);
for ( j = 0; j < numBlinks; j++)
{
    digitalWrite(redPin,HIGH);
    delay(blinkTime);
    digitalWrite(redPin,LOW);
    delay(blinkTime);
}

}