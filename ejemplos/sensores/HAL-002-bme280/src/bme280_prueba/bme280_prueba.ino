/* Prueba educativa BME280 por I2C.
 * Creador: Ernesto Leal · Halifar Electronic Tech.
 * Dependencia: Adafruit BME280 Library (autores y licencia propios).
 * Compilación y prueba física pendientes; verificar módulo y niveles lógicos.
 */
#include <Wire.h>
#include <Adafruit_BME280.h>
#include <math.h>

Adafruit_BME280 sensor;

void setup() {
  Serial.begin(115200);
  Wire.begin(); // Usa los pines I2C de la placa seleccionada.
  // SDO determina la dirección: probar ambas no cambia el cableado.
  if (!sensor.begin(0x76) && !sensor.begin(0x77)) {
    Serial.println("BME280 no detectado: revisar modelo, alimentacion y bus I2C");
    while (true) { delay(1000); }
  }
  Serial.println("temperatura_C,humedad_pct,presion_hPa");
}

void loop() {
  const float temperatura = sensor.readTemperature();
  const float humedad = sensor.readHumidity();
  const float presion = sensor.readPressure() / 100.0F; // Pa a hPa.
  if (isnan(temperatura) || isnan(humedad) || isnan(presion)) {
    Serial.println("ERROR: lectura no valida");
  } else {
    Serial.print(temperatura, 2); Serial.print(',');
    Serial.print(humedad, 2); Serial.print(',');
    Serial.println(presion, 2);
  }
  delay(2000); // Ejemplo inicial: una lectura cada dos segundos.
}
