const int GREEN = 7;
const int YELLOW = 8;
const int RED = 9;

void setup() {
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);
}


void pulse(int pin, int sustain) {
  digitalWrite(pin, HIGH);  // turn on 5V
  delay(sustain);
  digitalWrite(pin, LOW);  // turn off 5V
}

void loop() {

  // advance green
  for (int i = 0; i < 6; i++) {
    pulse(GREEN, 500);
    delay(500);
  }

  // green
  pulse(GREEN, 10000);

  // yellow
  pulse(YELLOW, 3000);

  // red
  pulse(RED, 15000);
}
