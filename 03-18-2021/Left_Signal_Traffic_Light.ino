int redLed = 4;
int yellowLed = 5;
int leftLed = 6;
int greenLed = 7;

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(leftLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void loop() {
  digitalWrite(greenLed, HIGH);
  delay(1000 * 2);
  digitalWrite(greenLed, LOW);
  
  digitalWrite(yellowLed, HIGH);
  delay(1000 * 1);
  digitalWrite(yellowLed, LOW);
  
  digitalWrite(redLed, HIGH);
  digitalWrite(leftLed, HIGH);
  delay(1000 * 1);
  digitalWrite(leftLed, LOW);
  
  digitalWrite(yellowLed, HIGH);
  delay(1000 * 1);
  digitalWrite(yellowLed, LOW);
  
  delay(1000 * 2);
  digitalWrite(redLed, LOW);
}