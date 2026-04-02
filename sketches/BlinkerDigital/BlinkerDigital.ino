
const int PIN_LED = 7;

void pulse(int duration) {
  digitalWrite(PIN_LED, HIGH);  // turn on 5V
  delay(duration);
  digitalWrite(PIN_LED, LOW);  // turn off 5V
}

void setup() {
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  pulse(100);
  delay(50);

  pulse(100);
  delay(50);

  pulse(100);
  delay(50);

  pulse(100);
  delay(50);

  pulse(100);
  delay(500);

  pulse(500);
  delay(500);

  pulse(1000);
  delay(500);

  pulse(3000);
  delay(500);
}
