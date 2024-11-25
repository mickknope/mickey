int adc = 36;
int led[] = {17, 2, 15, 12};

void setup() {
  Serial.begin(9600);
  pinMode(led[0], OUTPUT);
  pinMode(led[1], OUTPUT);
  pinMode(led[2], OUTPUT);
  pinMode(led[3], OUTPUT);
}

void loop() {
  int light = analogRead(adc);
  int read = map(light, 1024, 0, 0, 4);
  Serial.println(read);
  LED(read);
  delay(50);
}

void LED(int vol) {
  reset();
  switch(vol) {
    case 0:
      break;
    case 1:
      digitalWrite(led[0], LOW);
      break;
    case 2:
      digitalWrite(led[0], LOW);
      digitalWrite(led[1], LOW);
      break;
    case 3:
      digitalWrite(led[0], LOW);
      digitalWrite(led[1], LOW);
      digitalWrite(led[2], LOW);
      break;
    case 4:
      digitalWrite(led[0], LOW);
      digitalWrite(led[1], LOW);
      digitalWrite(led[2], LOW);
      digitalWrite(led[3], LOW);
      break;
  }
}

void reset() {
  for (int i = 0; i < 4; i++) {
    digitalWrite(led[i], HIGH);
  }
}
