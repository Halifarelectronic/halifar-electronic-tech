// TEPT4400: E a GND; C a A0; 10 kohm entre C y 5V.
// UNO R3 A000066. A0 es entrada analógica, sin pull-up.
const byte SENSOR = A0;
void setup() {
  Serial.begin(9600); // Mismo valor en el Monitor serie.
}
void loop() {
  int lectura = analogRead(SENSOR); // ADC de 10 bits: 0..1023.
  Serial.println(lectura); // Valor relativo; no representa lux.
  delay(200); // Cinco muestras por segundo para observar cambios.
}
