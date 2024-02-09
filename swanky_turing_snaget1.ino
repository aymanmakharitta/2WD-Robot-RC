// C++ code
//
int ENB1=9;
int IN1=10;
int IN2=11;
int ENB2=3;
  int IN3=4;
  int IN4=5;
void setup()
{
pinMode(ENB1,OUTPUT);pinMode(IN1,OUTPUT);
pinMode(IN2,OUTPUT);
pinMode(ENB2,OUTPUT);
pinMode(IN3,OUTPUT);
pinMode(IN4,OUTPUT);
Serial.begin(9600);

}

void loop()
{
  digitalWrite(ENB1,HIGH);digitalWrite(ENB2,HIGH);
  if (Serial.available()){
    char reading=Serial.read();
    if (reading=='f'){digitalWrite(IN1,HIGH);digitalWrite(IN3,HIGH);
                     digitalWrite(IN2,LOW);digitalWrite(IN4,LOW);}
    if (reading=='b'){digitalWrite(IN2,HIGH);digitalWrite(IN4,HIGH);
                     digitalWrite(IN1,LOW);digitalWrite(IN3,LOW);}
    if (reading=='r'){digitalWrite(IN1,HIGH);digitalWrite(IN3,LOW);
                     digitalWrite(IN2,LOW);digitalWrite(IN4,LOW);}
    if (reading=='l'){digitalWrite(IN3,HIGH);digitalWrite(IN1,LOW);
                     digitalWrite(IN4,LOW);digitalWrite(IN2,LOW);}
    if (reading=='s'){digitalWrite(IN1,LOW);digitalWrite(IN3,LOW);
                     digitalWrite(IN2,LOW);digitalWrite(IN4,LOW);}
  } 
}