#include <LiquidCrystal.h>
# define trigOut 3
#define echoInput 2
int duration = 0;
int distance = 0;


LiquidCrystal lcd(12, 11, 7, 6, 5, 4);


void setup(){

  Serial.begin(9600);
  pinMode(trigOut,OUTPUT);
  pinMode(echoInput,INPUT);
  lcd.begin(16, 2);
  
}

void loop(){
  digitalWrite(trigOut,LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigOut,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigOut,LOW);
  duration = pulseIn(echoInput,HIGH);
  
  
  distance = (duration)*(0.034)/2;
  if(distance > 3 && distance < 300){ 
  Serial.print("Distance: - ");
  Serial.println(distance); 
  lcd.setCursor(0,0);
  lcd.print("Distance:- ");
    lcd.print(distance);
    lcd.print("cms");
  }
  else{
   Serial.println("Object Not Detected");
    lcd.setCursor(0,0);
    lcd.print("Object Not Found");
  }
}
