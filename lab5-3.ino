int adc = 36;
int pwm = 13;
int Led[] = { 17, 2, 15, 12 };
void setup() {
  Serial.begin(9600);
  pinMode(Led[0], OUTPUT);
  pinMode(Led[1], OUTPUT);
  pinMode(Led[2], OUTPUT);
  pinMode(Led[3], OUTPUT);
}
void loop() {
  int LDR = analogRead(adc);
  Serial.println(LDR);
  if (LDR >= 400) {
    digitalWrite(Led[0], LOW);
    digitalWrite(Led[1], LOW);
    digitalWrite(Led[2], LOW);
    digitalWrite(Led[3], LOW);
    else if  (LDR >= 600) {
    digitalWrite(Led[0], LOW);
    digitalWrite(Led[1], LOW);
    digitalWrite(Led[2], LOW);
    digitalWrite(Led[3], LOW);
    else if  (LDR >= 800) {
    digitalWrite(Led[0], HIGH);
    digitalWrite(Led[1], HIGH);
    digitalWrite(Led[2], HIGH);
    digitalWrite(Led[3], HIGH);
  }
}
//if (adc <= 400) {
