int potPin=A1;
int ledPin=10;
int potval;
int dT=500;

void setup()
{
  pinMode(potPin,INPUT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  potval=analogRead(potPin);
  Serial.println(potval);
  delay(dT);
  
  while(potval>1000){
    digitalWrite(ledPin,HIGH);
    potval=analogRead(potPin);
    Serial.println(potval);
    delay(dT);
  }
  digitalWrite(ledPin,LOW);
  delay(dT);
  
  
  
}