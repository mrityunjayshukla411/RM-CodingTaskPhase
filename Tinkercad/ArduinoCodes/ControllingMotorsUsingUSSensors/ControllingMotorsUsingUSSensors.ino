// Right side is considered forward
// Left side is considered backward
// Up side is considered left
// Down side is considered right
# define trigOut1 3  //Left Sensor
#define echoInput1 2
# define trigOut2 12  // Right Sensor
#define echoInput2 11
int duration1 = 0;
int distance1 = 0;

int duration2 = 0;
int distance2 = 0;

int motor1Pin1 = 5; //Left Motor
int motor1Pin2 = 6;
int motor2Pin1 = 9; // Right Motor
int motor2Pin2 = 10;
char choice;
void setup()
{
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);

  pinMode(trigOut1,OUTPUT);
  pinMode(echoInput1,INPUT);

  pinMode(trigOut2,OUTPUT);
  pinMode(echoInput2,INPUT);
  Serial.begin(9600);
}
void moveForward()
{
  digitalWrite(motor1Pin1, LOW); 
  digitalWrite(motor1Pin2, HIGH);
  digitalWrite(motor2Pin1, LOW); 
  digitalWrite(motor2Pin2, HIGH);
}
void rotateLeft()
{
  digitalWrite(motor1Pin1, LOW); 
  digitalWrite(motor1Pin2, HIGH);
  digitalWrite(motor2Pin1, HIGH); 
  digitalWrite(motor2Pin2, LOW);
}
void stopBotAt20(int distance1,int distance2){
moveForward();
  if(distance1 == 20 && distance2==20){
  digitalWrite(motor1Pin1, LOW); 
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, LOW); 
  digitalWrite(motor2Pin2, LOW);
  }
}
void rotateRight()
{
  digitalWrite(motor1Pin1, HIGH); 
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, LOW); 
  digitalWrite(motor2Pin2, HIGH);
}
bool alignBot(int distance1,int distance2)
{
if(distance1 > distance2){
      rotateRight();
    }
    if(distance2 > distance1){
      rotateLeft();
    }
  if(distance1 == distance2){
    Serial.println("Alignment Successful");
  digitalWrite(motor1Pin1, LOW); 
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, LOW); 
  digitalWrite(motor2Pin2, LOW);
    return true;
  }
  
  return false;
}

void loop()
{

    digitalWrite(trigOut1,LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigOut1,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigOut1,LOW);
  duration1 = pulseIn(echoInput1,HIGH);
  
  
  distance1 = (duration1)*(0.034)/2;

  
    digitalWrite(trigOut2,LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigOut2,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigOut2,LOW);
  duration2 = pulseIn(echoInput2,HIGH);
  
  
  distance2 = (duration2)*(0.034)/2;
  if(distance1 < 50 && distance2 < 50)
  {
    Serial.println("Wall Detected");
  }
  if(alignBot(distance1,distance2) == true)
  {stopBotAt20(distance1,distance2);}
  
  

    Serial.print("distance1:- ");
  Serial.println(distance1);
  
    Serial.print("distance2:- ");
  Serial.println(distance2);
  
  delay(1000); 
}
