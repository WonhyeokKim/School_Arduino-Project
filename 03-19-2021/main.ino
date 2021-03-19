int led1 = 13;

void setup() {
  pinMode(led1, OUTPUT);
  Serial.begin(9600); // Serial peed
}

void loop() {
  int i = 1;
  
  while (i < 11) {
  	digitalWrite(led1, HIGH);
    delaySecond(i);
    digitalWrite(led1, LOW);
    delaySecond(i);

    i++;
  }
  
  Serial.println("RunTask: loop1"); // Debug code
  
  while (i >= 1) {
  	digitalWrite(led1, HIGH);
    delaySecond(i);
    digitalWrite(led1, LOW);
    delaySecond(i);

    i--;
  }

  Serial.println("RunTask: loop2"); // Debug code
}

void delaySecond(int setDelay) {
    delay(100 * setDelay); // 0.1
}