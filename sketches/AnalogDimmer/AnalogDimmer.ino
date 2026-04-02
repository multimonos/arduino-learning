#include <math.h>

const int RED = 9;
const double RED_SPEED = 0.002;

const int GREEN = 7;
const double GREEN_SPEED = 0.001;

const int YELLOW = 8;
const double YELLOW_SPEED = 0.003;


void setup() {
  pinMode(RED, OUTPUT);
}

void loop() {
  // (int) cast is same as Math.floor()
  int red = (int)(fabs(sin(RED_SPEED * millis())) * 255);
  analogWrite(RED, red);

  int green = (int)(fabs(sin(GREEN_SPEED * millis())) * 255);
  analogWrite(GREEN, green);

  int yellow = (int)(fabs(sin(YELLOW_SPEED * millis())) * 255);
  analogWrite(YELLOW, yellow);
}
