int adc = 36;
int pwm = 13;
void setup(){
  Serial.begin(9600);
}
void loop(){
  int LDR = analogRead(adc);
  Serial.println(LDR);
  int val = map(LDR,0,1023,0,255);
  analogWrite(pwm,val);
}
