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
    digitalWrite(3, HIGH);  // Green LED
    digitalWrite(4, LOW);   // Red LED
    digitalWrite(5, LOW);   // Red LED
  } else {
    digitalWrite(3, LOW);   // Green LED
    digitalWrite(4, LOW);   // Red LED
    digitalWrite(5, HIGH);  // Red LED

    delay(250);             // Wait for a quarter second

    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    
    delay(250);             // Wait for a quarter second
  }
}
