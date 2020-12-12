int greenLED = 8;
int brightness = 0;
int fadeAmount = 4;
// I just have on issue with this code
// this code only works if max brightness is a multiple of fadeAmount I don't know why 
void setup()
{
    pinMode(greenLED, OUTPUT);
}

void loop()
{
    analogWrite(greenLED, brightness);

    brightness = brightness + fadeAmount;

    if (brightness <= 0 || brightness >= 252)
    {
        fadeAmount = -fadeAmount;
    }
    delay(30);
}