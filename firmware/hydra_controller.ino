#include "HX711.h"

#define LOADCELL_DOUT  4
#define LOADCELL_SCK   5
#define RELAY_PIN      8

HX711 scale;

float minWeight = 50.0;    // grams
float maxWeight = 2000.0;  // grams
unsigned long cooldown = 10000; // 10 seconds
unsigned long lastTrigger = 0;

void setup() {
  Serial.begin(9600);

  scale.begin(LOADCELL_DOUT, LOADCELL_SCK);
  scale.set_scale();
  scale.tare();

  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW);

  Serial.println("HYDRA system initialized");
}

void loop() {
  if (scale.is_ready()) {
    float weight = scale.get_units(5);
    unsigned long now = millis();

    Serial.print("Weight: ");
    Serial.println(weight);

    if (weight > minWeight && weight < maxWeight &&
        (now - lastTrigger) > cooldown) {

      dispenseWater();
      lastTrigger = now;
    }
  }
  delay(1000);
}

void dispenseWater() {
  Serial.println("Valid input detected. Dispensing water.");
  digitalWrite(RELAY_PIN, HIGH);
  delay(3000);
  digitalWrite(RELAY_PIN, LOW);
}
