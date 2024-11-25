int buzzer = 13;

int notes[] = {
  262, 262, 294, 262, 349, 330,
  262, 262, 294, 262, 392, 349,
  262, 262, 523, 440, 349, 330, 294,
  466, 466, 440, 349, 392, 349
};

int durations[] = {
  500, 500, 500, 500, 500, 1000,
  500, 500, 500, 500, 500, 1000,
  500, 500, 500, 500, 500, 500, 1000,
  500, 500, 500, 500, 500, 1000
};

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  for (int i = 0; i < 27; i++) {
    tone(buzzer, notes[i]);
    delay(durations[i]);
    noTone(buzzer);
  }
  delay(2000);
}
