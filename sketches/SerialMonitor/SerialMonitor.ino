// ---
// Prints a "1" to the monitor
//
// Setup,
// - create sketch.yaml with attach cmd
// - kill any existing monitor
// - deploy code
// - start monitor
// ---

const int RAW_VALUE_PIN = A5;
const int LOG_FREQUENCY = 250;
const unsigned long BAUD_RATE = 9600;

void setup() {
  pinMode(RAW_VALUE_PIN, INPUT);
  Serial.begin(BAUD_RATE);
}

void loop() {
  int val = analogRead(RAW_VALUE_PIN);
  float voltage = val * (5.0 / 1023.0);

  Serial.println(val);         // raw value ... 10 bit read 2^10
  Serial.println(voltage, 4);  // voltage

  delay(LOG_FREQUENCY);  // delay so buf is not flooded
}
