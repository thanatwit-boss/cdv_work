int Led[] = { 17, 2, 15, 12 };

void setup() {
  pinMode(Led[0], OUTPUT);
  pinMode(Led[1], OUTPUT);
  pinMode(Led[2], OUTPUT);
  pinMode(Led[3], OUTPUT);
}
void loop() {
  int i = 3;
  while (i>=0) {
    digitalWrite(Led[i], LOW);
    delay(800);
    digitalWrite(Led[i], HIGH);
    delay(800);
    i--;
    
    int i = 0;
  while (i<=3) {
    digitalWrite(Led[i], LOW);
    delay(800);
    digitalWrite(Led[i], HIGH);
    delay(800);
    i++;
    
  
  }
  }

}
