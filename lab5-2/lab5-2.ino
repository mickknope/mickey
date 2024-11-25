int adc = 36;
int pwm = 13;

void setup() {
  Serial.begin(9600);
}

void loop() {
  //Serial.println("hello world");
  //Serial.println("mickey");
  int read = analogRead(adc);
  int vol = map(read, 0 ,1023, 255 ,0);
  Serial.println(read);
  analogWrite(pwm,vol);
  delay(200);

}
