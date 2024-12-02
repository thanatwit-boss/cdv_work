int Led[] = { 17, 2, 15, 12 };
void up();
void down();
void loop() {
  up();
  down();
}
void setup() {
  pinMode(Led[0], OUTPUT);
  pinMode(Led[1], OUTPUT);
  pinMode(Led[2], OUTPUT);
  pinMode(Led[3], OUTPUT);
}
void up() {
  for (int i = 0; i < 4; i++) {
    digitalWrite(Led[i], LOW);
    delay(100);
    digitalWrite(Led[i], HIGH);
    delay(200);
  }
}
  void down() {
    for (int i = 4; i >= 0; i--) {
      digitalWrite(Led[i], LOW);
      delay(100);
      digitalWrite(Led[i], HIGH);
      delay(200);
    }
  }