int powerPin = 13 ; 
int dit = 100;
int dap = 500;
int wait = 1000;
void setup()
{
     pinMode(powerPin,OUTPUT) ;  //Set pin 2 as output
}
void loop()
{
   for(int i = 0; i<3; i++){
   digitalWrite(powerPin,HIGH);
   delay(dit);
   digitalWrite(powerPin,LOW);
   delay(wait);
   }
   for(int i = 0; i<3; i++){
   for (int j = 0; j<i+1;j++){
   digitalWrite(powerPin,HIGH);
   delay(dap);
   }
   digitalWrite(powerPin,LOW);
   delay(wait);
   }

   for(int i = 0; i<3; i++){
   digitalWrite(powerPin,HIGH);
   delay(dit);
   digitalWrite(powerPin,LOW);
   delay(wait);
   }
}