int bt = 17;
int wifi = 2;
int ntp = 15;
int iot = 12;

void setup() {
 pinMode(bt, OUTPUT);
 pinMode(wifi, OUTPUT);
 pinMode(ntp, OUTPUT);
 pinMode(iot, OUTPUT);
}

void loop() {
  digitalWrite(bt, LOW);
  delay(100);
  digitalWrite(bt, HIGH);
  delay(200);

  digitalWrite(wifi, LOW);
  delay(100);
  digitalWrite(wifi, HIGH);
  delay(200);

  digitalWrite(ntp, LOW);
  delay(100);
  digitalWrite(ntp, HIGH);
  delay(200);

  digitalWrite(iot, LOW);
  delay(100);
  digitalWrite(iot, HIGH);
  delay(200);
}