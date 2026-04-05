#include <Arduino.h>
#include "Arduino_Modulino.h"

ModulinoDistance distanceSensor;
ModulinoBuzzer buzzer;

void setup() {
  Serial.begin(115200);
  while (!Serial);

  Serial.println("Inicializando Modulino...");

  Modulino.begin();       // 🔥 ESSENCIAL
  distanceSensor.begin();
  buzzer.begin();

  Serial.println("Sistema pronto!");
}

void loop() {
  if (distanceSensor.available()) {
    int distance = distanceSensor.get();

    Serial.print("Distancia: ");
    Serial.print(distance);
    Serial.println(" mm");

    if (distance > 0 && distance < 500) {
      int toneFreq = map(distance, 20, 500, 1000, 200);
      buzzer.tone(toneFreq, 50);
    } else {
      buzzer.noTone();
    }
  }

  delay(50);
}