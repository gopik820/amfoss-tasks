
int trigPin = 9;
int echoPin = 10;
int motor = 8;


void setup()
{
   Serial.begin(9600); 
   pinMode(motor, OUTPUT);
   pinMode(trigPin, OUTPUT);
   pinMode(echoPin, INPUT);

}

void loop() 
{
  double duration, distance;
  digitalWrite(trigPin,HIGH);
  digitalWrite(trigPin, LOW);
  duration=pulseIn(echoPin, HIGH);
  distance =(duration/2)/29.1;
  delay(10);
 
 if((distance<=100)) 
   {
    digitalWrite(motor, LOW);
    
   }
  
   else if(distance>100)
     
   {
    
     digitalWrite(motor, HIGH);
   }
}

