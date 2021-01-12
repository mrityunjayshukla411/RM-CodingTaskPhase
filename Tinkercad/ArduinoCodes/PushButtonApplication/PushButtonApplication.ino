int buttonPin1 = 12;
int buttonPin2 = 11;
int ledPin = 3;
int buzzPin = 2;
int buttonVal1;
int buttonVal2;
int dt = 500;
int ledBright = 0;
void setup(){
pinMode(buttonPin1,INPUT);
pinMode(buttonPin2,INPUT);
pinMode(ledPin,OUTPUT);
pinMode(buzzPin,OUTPUT);
Serial.begin(9600);
}
void loop(){
buttonVal1 = digitalRead(buttonPin1);
buttonVal2 = digitalRead(buttonPin2);
Serial.print("Button 1:- ");
Serial.print(buttonVal1);
Serial.print(",");
Serial.print("Button 2:- ");
Serial.println(buttonVal2);
delay(250);
if(buttonVal1 == 0){
    ledBright = ledBright + 5;
}
if(buttonVal2 == 0){
    ledBright = ledBright - 5;
}
if (ledBright > 255)
{
    ledBright = 255;
    digitalWrite(buzzPin,HIGH);
    delay(dt);
    digitalWrite(buzzPin,LOW);
    

}
if (ledBright < 0)
{
    ledBright = 0;
}

Serial.print("Brightness of LED = ");
Serial.println(ledBright);
delay(dt);
analogWrite(ledPin,ledBright);
}
