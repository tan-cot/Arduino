int ledG=10;//Green led
int ledY=12;//yellow led
int ledR=8; // Red led
int readV=A0; // Potentiometer Input
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
  readS=analogRead(readV);   // Read sensor value (0-1023)
  Vout=(5./1023.)*readS;     // Convert to voltage (0-5V)
  Serial.println(Vout);

// For green LED
if(Vout<3.00){
digitalWrite(ledG,HIGH);

}
  else{
    digitalWrite(ledG,LOW);
  }
     
// For Yellow LED
if(Vout>=3 && Vout<=4){
digitalWrite(ledY,HIGH);

}
  else{
    digitalWrite(ledY,LOW);
  }
  
// For Red LED
if(Vout>4){
  digitalWrite(ledR,HIGH);
}
  
  else{
    digitalWrite(ledR,LOW);
  }
delay(dT);
}
