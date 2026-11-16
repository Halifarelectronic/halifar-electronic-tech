// Halifar Electronic Tech: distancia con Pololu 2490 y UNO R3.
#include <Wire.h>
#include <VL53L0X.h>
VL53L0X sensor;
void setup() {
  Serial.begin(9600);
  Wire.begin(); // UNO R3: A4 = SDA, A5 = SCL.
  Wire.setClock(100000);
  sensor.setTimeout(500); // No esperar indefinidamente una medición.
  if (!sensor.init()) {
    Serial.println(F("ERROR: revisar modelo, VIN, GND, SDA y SCL"));
    while (true) { delay(1000); }
  }
  sensor.startContinuous(100); // Una lectura aproximadamente cada 100 ms.
}
void loop() {
  uint16_t mm = sensor.readRangeContinuousMillimeters();
  if (sensor.timeoutOccurred()) {
    Serial.println(F("TIMEOUT: lectura descartada"));
  } else if (mm >= 8190) {
    Serial.println(F("FUERA DE RANGO: lectura descartada"));
  } else {
    Serial.print(F("Distancia (mm): "));
    Serial.println(mm);
    // Ejemplo educativo, no función de seguridad: avisar bajo 200 mm.
    if (mm < 200) Serial.println(F("Objeto cercano"));
  }
}
