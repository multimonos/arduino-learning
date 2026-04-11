constexpr int RED = 9;
constexpr int GREEN = 8;
constexpr int BLUE = 7;

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  Serial.begin(9600);

  for (int r = 0; r < 255; r += 8) {
    analogWrite(RED, r);
    delay(500);
  }
  for (int g = 0; g < 255; g += 8) {
    analogWrite(GREEN, g);
    delay(500);
  }
  for (int b = 0; b < 255; b += 8) {
    analogWrite(BLUE, b);
    // Serial.print("(r,g,b) = (");
    // Serial.print(r);
    // Serial.print(",");
    // Serial.print(g);
    // Serial.print(",");
    // Serial.print(b);
    // Serial.println(")");
    delay(500);
  }

  analogWrite(RED, 0);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 0);
}

void loop() {
}
