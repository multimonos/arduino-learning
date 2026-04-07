
//
// Passive Buzzer / AC Circuit
//
// buzzer without the "black seal"
//
const int PASSIVE_BUZZER = 9;

void setup() {
  pinMode(PASSIVE_BUZZER, OUTPUT);
}

void loop() {
  return;
  for (int i = 0; i < 50; i++) {
    analogWrite(PASSIVE_BUZZER, i);
    delay(500);
    analogWrite(PASSIVE_BUZZER, 0);
    delay(250);
  }
}
