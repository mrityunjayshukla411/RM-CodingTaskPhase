// Left side is considered forward
// Right side is considered backward
// Up side is considered right
// Down side is considered left
int motor1Pin1 = 5;
int motor1Pin2 = 6;
int motor2Pin1 = 9;
int motor2Pin2 = 10;
char choice;
void setup()
{
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);
  Serial.begin(9600);
}
void moveForward()
{
  digitalWrite(motor1Pin1, HIGH); 
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, HIGH); 
  digitalWrite(motor2Pin2, LOW);
}
void moveBackward()
{
  digitalWrite(motor1Pin1, LOW); 
  digitalWrite(motor1Pin2, HIGH);
  digitalWrite(motor2Pin1, LOW); 
  digitalWrite(motor2Pin2, HIGH);
}
void turnRight()
{
  analogWrite(motor1Pin1, 127); 
  digitalWrite(motor1Pin2, LOW);
  analogWrite(motor2Pin1, 255); 
  digitalWrite(motor2Pin2, LOW);
  delay(5000);
    analogWrite(motor1Pin1, 0); 
  digitalWrite(motor1Pin2, LOW);
  analogWrite(motor2Pin1, 0); 
  digitalWrite(motor2Pin2, LOW);
}
void turnLeft()
{
  analogWrite(motor1Pin1, 255); 
  digitalWrite(motor1Pin2, LOW);
  analogWrite(motor2Pin1, 127); 
  digitalWrite(motor2Pin2, LOW);
  delay(5000);
    analogWrite(motor1Pin1, 0); 
  digitalWrite(motor1Pin2, LOW);
  analogWrite(motor2Pin1, 0); 
  digitalWrite(motor2Pin2, LOW);
}
void rotateRight()
{
  digitalWrite(motor1Pin1, LOW); 
  digitalWrite(motor1Pin2, HIGH);
  digitalWrite(motor2Pin1, HIGH); 
  digitalWrite(motor2Pin2, LOW);
}
void rotateLeft()
{
  digitalWrite(motor1Pin1, HIGH); 
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, LOW); 
  digitalWrite(motor2Pin2, HIGH);
}


void loop()
{
  Serial.println("Enter the direction of in which you want to move the bot");
  while(Serial.available() == 0){
  }
  choice = Serial.read();
  if(choice == 'F')
  {
    moveForward(); 
  }
  if(choice == 'B')
  {
    moveBackward(); 
  }
  if(choice == 'R')
  {
    turnRight(); 
  }
  if(choice == 'L')
  {
    turnLeft(); 
  }
  if(choice == 'r')
  {
    rotateRight(); 
  }
  if(choice == 'l')
  {
    rotateLeft(); 
  }
  delay(1000); 
}
