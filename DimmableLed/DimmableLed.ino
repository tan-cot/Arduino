int potpin=A1;
int ledP=11;
float potVal;
float ledVal;
int dT=500;


void setup() {
 Serial.begin(9600);
 pinMode(potpin,INPUT);
 pinMode(ledP,OUTPUT);
}

void loop() {
  potVal=analogRead(potpin);
  ledVal=(255./1023.)*potVal;
  analogWrite(ledP,ledVal);
  Serial.print(ledVal);
delay(dT);
}
