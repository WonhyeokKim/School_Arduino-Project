int ledRed;
int ledYellow;
int ledGreen;

void setup() {
  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledGreen, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  digitalWrite(ledRed, LOW);
  digitalWrite(ledGreen, HIGH);
  second(3);
  
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledYellow, HIGH);
  second(1);

  digitalWrite(ledYellow, LOW);
  digitalWrite(ledRed, HIGH);
  second(2);
}

int second(int getDelay) {
  return delay(getDelay * 1000);
}
