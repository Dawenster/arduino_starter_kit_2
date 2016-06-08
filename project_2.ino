int switchState = 0;

void setup() {
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  switchState = digitalRead(2);
  if (switchState == LOW) {
    digitalWrite(3, HIGH); // Green LED
    digitalWrite(4, LOW);  // Red LED
    digitalWrite(5, LOW);  // Red LED
  }
}
