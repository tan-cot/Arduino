String msg="How many blinks?";  //Message I'll ask from user
int redPin=10;
int dT=500;
int j;
int numBlinks;                 //variable which will store the user input
void setup() {
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);

}

void loop() {
  Serial.println(msg);      //ask the user for input

  while(Serial.available()==0);{    //keeps looping until user input

  }
numBlinks=Serial.parseInt();         //stores the user input
for(j=1;j<=numBlinks;j=j+1){         //a for loop for led blinking
digitalWrite(redPin,HIGH);
delay(dT);
digitalWrite(redPin,LOW);
delay(dT);
}

}
