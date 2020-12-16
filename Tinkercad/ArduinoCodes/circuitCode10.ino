int redPin = 8;
int greenPin = 9;
int bluePin = 10;
String myColor;
String msg = "What color do you want";
int wait = 200;
void setup()
{
    Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
}

void loop()
{
    Serial.println(msg);
    while (Serial.available() == 0)
    {
        /* code */
    }
    myColor = Serial.readString();
    if (myColor == "red")
    {
        digitalWrite(redPin,HIGH);
        digitalWrite(greenPin,LOW);
        digitalWrite(bluePin,LOW);
    }
    if (myColor == "green")
    {
        digitalWrite(redPin,LOW);
        digitalWrite(greenPin,HIGH);
        digitalWrite(bluePin,LOW);
    }
    if (myColor == "blue")
    {
        digitalWrite(redPin,LOW);
        digitalWrite(greenPin,LOW);
        digitalWrite(bluePin,HIGH);
    }
    if (myColor == "off")
    {
        digitalWrite(redPin,LOW);
        digitalWrite(greenPin,LOW);
        digitalWrite(bluePin,LOW);
    }
    if (myColor == "aqua")
    {
        digitalWrite(redPin,LOW);
        analogWrite(greenPin,255);
        analogWrite(bluePin,255);
    }
 
    if (myColor == "multi")
    {
        for (int i = 0; i < 255; i++)
        {
            /* code */
        analogWrite(redPin,255-i);
        analogWrite(greenPin,i);
        analogWrite(bluePin,127+i);
        delay(wait);
        }
        
    }
    
    
    
}