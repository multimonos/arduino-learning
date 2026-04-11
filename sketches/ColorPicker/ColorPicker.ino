constexpr int RED = 9;
constexpr int GREEN = 8;
constexpr int BLUE = 7;


void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  Serial.begin(9600);
}

/**
 * read csv of r,g,b
 */
void loop() {
  if (Serial.available() > 0) {
    // skips commas
    int r = Serial.parseInt();
    int g = Serial.parseInt();
    int b = Serial.parseInt();


    // debug
    char buf[30];
    sprintf(buf, "(r, g, b) = (%d, %d, %d)", r, g, b);
    Serial.println(buf);


    // write value
    analogWrite(RED, constrain(r, 0, 255));
    analogWrite(GREEN, constrain(g, 0, 255));
    analogWrite(BLUE, constrain(b, 0, 255));


    // flush newline from buf
    while (Serial.available() > 0) {
      Serial.read();  // flush the buf
    }
  }
}
