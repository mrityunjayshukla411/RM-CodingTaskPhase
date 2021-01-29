// Up side is considered forward
// Left side is considered Left
// Right side is considered right
// Back side is considered backward

// Defining the pins for the Ultra Sonic Sensor
# define trigOutF 3
# define echoInputF 2
# define trigOutR 5
# define echoInputR 4
# define trigOutB 7
# define echoInputB 6
# define trigOutL 9
# define echoInputL 8

int v = 30;

// Distances of bot given by the respective sensors
int distanceF = 0;
int distanceR = 0;
int distanceB = 0;
int distanceL = 0;

// Direction in which the bot was moving and is moving now
int oldDir = 0;
int newDir;
void setup()
{
  pinMode(trigOutF,OUTPUT);
  pinMode(echoInputF,INPUT);

  pinMode(trigOutR,OUTPUT);
  pinMode(echoInputR,INPUT);
  
  pinMode(trigOutB,OUTPUT);
  pinMode(echoInputB,INPUT);
  
  pinMode(trigOutL,OUTPUT);
  pinMode(echoInputL,INPUT);
  
  Serial.begin(9600);
}

int distanceFromBot(int trigOut,int echoInput){
  // This fuction returns distance between the bot and the wall using the ultra sonic sensor
  int duration = 0;
  int distance = 0;
  
  digitalWrite(trigOut,LOW);
  delayMicroseconds(2);
  digitalWrite(trigOut,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigOut,LOW);
  
  duration = pulseIn(echoInput,HIGH);
  
  distance = (duration)*(0.034)/2;
  
  return distance;
}
void move(int theta,int v){
  // This function is used to move the bot in the said direction
  
  if(theta == 0){
    Serial.print("Moving Forward with Speed ");
    Serial.println(v);
  }
  if(theta == 90){
    Serial.print("Moving Left with Speed ");
    Serial.println(v);
  }
  if(theta == 180){
    Serial.print("Moving Backward with Speed ");
    Serial.println(v);
  }
  if(theta == 270){
    Serial.print("Moving Right with Speed ");
    Serial.println(v);
  }
  
}
void loop()
{
 	
  distanceF = distanceFromBot(trigOutF,echoInputF);
  distanceR = distanceFromBot(trigOutR,echoInputR);
  distanceB = distanceFromBot(trigOutB,echoInputB);
  distanceL = distanceFromBot(trigOutL,echoInputL);
	  //Serial.println(distanceF);
  	//Serial.println(distanceR);
  	//Serial.println(distanceB);
  	//Serial.println(distanceL);
  	  Serial.print("OldDir :- ");
      Serial.println(oldDir);
  // The next lines of code determine the new direction in which the bot is supposed to move
  // in order to solve the maze
	if((oldDir == 0)&& (distanceF<=10))
  	{
  		if(distanceL<=10)
    	{
    		  newDir = 270;
      		move(newDir,v);
    	}
    else
    	{
    		if(distanceR<=10)
        	{
        		newDir = 90;
      			move(newDir,v);
        	}
    	}	
  	}
  	else
  	{
  		if((oldDir == 270)&& (distanceR<=10))
    	{
    		if(distanceB<=10)
    		{
    			  newDir = 0;
      			move(newDir,v);
   			}
    		else
    		{
    			if(distanceF<=10)
        		{
        			newDir = 180;
      				move(newDir,v);
        		}
    		}
    	}
    	else
    	{
    		if((oldDir == 90)&& (distanceL<=10))
        	{
        		if(distanceB<=10)
    			{
    				  newDir = 0;
      				move(newDir,v);
   				}
    			else
    			{
    				if(distanceF<=10)
        			{
        				newDir = 180;
      					move(newDir,v);
        			}
    			}	
        	}
      		else
          	{
        		if((oldDir == 180)&& (distanceB<=10))
           	 	{
            		if(distanceL<=10)
    				{
    					  newDir = 270;
      					move(newDir,v);
   					}
    				else
    				{
    					if(distanceR<=10)
        				{
        					newDir = 90;
      						move(newDir,v);
        				}	
    				}	
            	}
        	}
    	}
  	}
  oldDir = newDir;
  delay(1000);
}
