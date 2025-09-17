// Smart Shoe for Blind People
// Using HC-SR04 Ultrasonic Sensor + Buzzer

int trigPin=9;
int echoPin=8;
int buzzer=12;

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Send ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure response time
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance in cm
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Alert if obstacle is closer than 50 cm
  if (distance > 0 && distance < 50) {
    digitalWrite(buzzer, HIGH); // Turn buzzer ON
  } else {
    digitalWrite(buzzer, LOW);  // Turn buzzer OFF
  }

  delay(200);
}
