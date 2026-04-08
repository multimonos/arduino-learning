#include <DHT.h>
#include <DHT_U.h>

// modern way to define locally scope const
constexpr int DHT_TYPE = DHT11;
constexpr int DHT_SENSOR_PIN = 2;

// macro
DHT HT(DHT_SENSOR_PIN, DHT_TYPE);

float humidity;
float tempK;
float tempC;
float tempF;

void setup() {
  Serial.begin(9600);
  HT.begin();
}

void loop() {
  humidity = HT.readHumidity();
  tempC = HT.readTemperature();
  tempF = tempC * 9.0 / 5.0 + 32.0;
  tempK = tempC + 273.0;

  Serial.println("---");

  Serial.print("kPa: ");
  Serial.println(humidity, 3);

  Serial.print("C: ");
  Serial.println(tempC, 1);

  Serial.print("K: ");
  Serial.println(tempK, 2);

  Serial.print("F: ");
  Serial.println(tempF, 3);

  delay(1000);
}
