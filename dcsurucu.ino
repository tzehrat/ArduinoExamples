int ENA=9;
int in1=13;
int in2=12;
int ENB=10;
int in3=5;
int in4=6;








void setup() {
  pinMode(ENA,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(ENB,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);

}

void loop() {

  for (int a=0;a<4;a++){
    
 
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);

  for(int i=255;i>0;i--){
    analogWrite(ENA,i);
    delay(199);
  }

  }
  
  delay(1000);
  
  
  for(int b=0;b<5;b++){
    digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);

  for(int i=0;i<255;i++){
    analogWrite(ENA,i);
    delay(199);
  }

}}
