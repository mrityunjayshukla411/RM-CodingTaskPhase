#include <Servo.h>
#include <LiquidCrystal.h>
int servoPin = 9;
int servoPos = 0;
int initialPos = 0;

LiquidCrystal lcd(12, 11, 7, 6, 5, 4);

String warning = "The number You enter should be less than or equal to 180";
  Servo myServo;
void setup()
{
  Serial.begin(9600);
  myServo.attach(servoPin);
  lcd.begin(16, 2);
  
}

void loop()
{
  myServo.write(initialPos);
  Serial.println(warning);
  while(Serial.available() == 0){
 
  }
  servoPos = Serial.parseInt();
  if(servoPos <=180){
    lcd.setCursor(0,0);
  lcd.print("Turning...");
  delay(300);
  lcd.setCursor(0,1);
    lcd.print(servoPos);
    lcd.print(" degrees ");
  myServo.write(servoPos);
  }
  else{
   lcd.setCursor(0,0);
  lcd.print("Turning...");
  delay(300);
  lcd.setCursor(0,1);
    lcd.print(servoPos%180);
    lcd.print(" degrees ");
  myServo.write(servoPos%180);
  }

  delay(1000);

}
