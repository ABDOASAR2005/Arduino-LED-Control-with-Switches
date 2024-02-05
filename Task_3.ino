int led1=13;
int led2=12;
int switch1=11;
int switch2=10;
int read=0;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(switch1,INPUT);
  pinMode(switch2,INPUT);
  

}

void loop() {
  read = digitalRead(switch1);
if(read==HIGH)
  
  {digitalWrite(led1,HIGH);}
  
  else{digitalWrite(led1,LOW);}
  delay(250);
  

 read = digitalRead(switch2);
if(read==HIGH)
  
  {digitalWrite(led2,HIGH);}
  
  else{digitalWrite(led2,LOW);}
  delay(250);




}
