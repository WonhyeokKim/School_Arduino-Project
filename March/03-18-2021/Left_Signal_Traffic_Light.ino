int redLed = 4;
int yellowLed = 5;
int leftLed = 6;
int greenLed = 7;

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(leftLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(greenLed, HIGH);
  Serial.println("Green Light");
  delay(1000 * 2);
  digitalWrite(greenLed, LOW);
  
  digitalWrite(yellowLed, HIGH);
  Serial.println("Green Light");
  delay(1000 * 1);
  digitalWrite(yellowLed, LOW);
  
  digitalWrite(redLed, HIGH);
  digitalWrite(leftLed, HIGH);
  Serial.println("Red, Left Light");
  delay(1000 * 1);
  digitalWrite(leftLed, LOW);
  
  digitalWrite(yellowLed, HIGH);
  Serial.println("Yellow Light");
  delay(1000 * 1);
  digitalWrite(yellowLed, LOW);
  
  delay(1000 * 2);
  digitalWrite(redLed, LOW);
}