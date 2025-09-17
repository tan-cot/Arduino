int ledY=6;
int ledR=9;
int dT=750;
int yBlink=3; //no. of times yellow will blink
int rBlink=5; //no. of times red will blink
int x;

void setup() {
 pinMode(ledY,OUTPUT);
 pinMode(ledR,OUTPUT);
}

void loop() {
//For yellow LED
  for(x=1;x<=yBlink;x=x+1){
  
  digitalWrite(ledY,HIGH);
  delay(dT);
  digitalWrite(ledY,LOW);
  delay(dT);
  }
  
//For red LED
 
  for(x=1;x<=rBlink;x=x+1){
    
digitalWrite(ledR,HIGH);
  delay(dT);
  digitalWrite(ledR,LOW);
  delay(dT);
  
  }
  
  
}
