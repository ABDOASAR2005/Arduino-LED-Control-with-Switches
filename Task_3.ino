
  int led1=13;
int led2=12;
int led3=3;
int led4=5;
int switch1=11;
int switch2=10;
int read=0;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(switch1,INPUT);
  pinMode(switch2,INPUT);
  

}

void loop() {
  read = digitalRead(switch1);
if(read==HIGH)
  
  {digitalWrite(led1,HIGH);
  
  analogWrite(led4,50);}
  
  else{digitalWrite(led1,LOW); 
    analogWrite(led4,0);}
  delay(250);
  

 read = digitalRead(switch2);
if(read==HIGH)
  
  {digitalWrite(led2,HIGH);
   analogWrite(led3,50);}
  
  else{digitalWrite(led2,LOW);
       analogWrite(led3,0);}
  delay(250);




}
 





