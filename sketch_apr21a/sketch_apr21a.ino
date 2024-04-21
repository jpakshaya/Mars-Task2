const int trigoPin= 8;
const int echoPin= 9;
const int dirPin= 10;
const int pwmPin= 11;
int duration;
int distance;

void setup()
{
  pinMode(echoPin,INPUT);
  pinMode(trigoPin,OUTPUT);
  pinMode(dirPin,OUTPUT);
  pinMode(pwmPin,OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  digitalWrite(trigoPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigoPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigoPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  distance=duration*0.034/2;
  delay(100);

  Serial.println("Distance: ");
  Serial.println(distance);
  delay(100);

  if(distance<25)
  {
    digitalWrite(dirPin,LOW);
    analogWrite(pwmPin,150);
    delay(100);

  }
  else if(distance>25 && distance<50)
  {
    digitalWrite(dirPin,LOW);
    analogWrite(pwmPin,75);
    delay(100);
  }
  else if(distance>50 && distance<75)
  {
    analogWrite(pwmPin,0);
    delay(1000);
  }
   else if(distance>75 && distance<100)
  {
    digitalWrite(dirPin,HIGH);
    analogWrite(pwmPin,75);
    delay(100);
  }
 else if(distance>100)
  {
    digitalWrite(dirPin,HIGH);
    analogWrite(pwmPin,150);
    delay(100);
  
  }




}

