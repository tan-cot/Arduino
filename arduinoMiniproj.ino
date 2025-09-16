int ledG=10;
int ledY=12;
int ledR=8;
int readV=A0;
int readS;
float Vout;
int dT=500;

void setup() {
 Serial.begin(9600);
pinMode(ledG,OUTPUT);
pinMode(ledY,OUTPUT);
pinMode(ledR,OUTPUT);
pinMode(readV,INPUT);
}

void loop() {
  readS=analogRead(readV);
  Vout=(5./1023.)*readS;
  Serial.println(Vout);


if(Vout<3.00){
digitalWrite(ledG,HIGH);

}
  else{
    digitalWrite(ledG,LOW);
  }
     

if(Vout>=3 && Vout<=4){
digitalWrite(ledY,HIGH);

}
  else{
    digitalWrite(ledY,LOW);
  }
  
if(Vout>4){
  digitalWrite(ledR,HIGH);
}
  
  else{
    digitalWrite(ledR,LOW);
  }
delay(dT);
}
