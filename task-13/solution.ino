const int led=4;
const int trigger=7;
const int echo=9;
const int motor=11;
const int speed_ON=255;
const int speed_OFF=0;

void setup()
{
  Serial.begin(9600);
  
  pinMode(led, OUTPUT);
  pinMode(motor, OUTPUT);
  pinMode(trigger,OUTPUT);
  pinMode(echo, INPUT);
  
  digitalWrite(motor,speed_ON);
  digitalWrite(led, LOW);
  digitalWrite(trigger, LOW);
}

void loop()
{
  digitalWrite(trigger,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  int time=pulseIn(echo, HIGH);
  float dist= time*0.034/2;
  if(dist<=100){
    analogWrite(motor, speed_OFF);
    digitalWrite(led, HIGH);  
  }
  else
  {
    analogWrite(motor, speed_ON);
    digitalWrite(led,LOW);
  }
}