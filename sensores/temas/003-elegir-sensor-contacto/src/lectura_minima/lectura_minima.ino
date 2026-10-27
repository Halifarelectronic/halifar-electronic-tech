// Lectura minima del contacto Adafruit 375 en UNO R3.
// Un hilo a D2; el otro a GND. Sin polaridad y sin VCC externo.
// INPUT_PULLUP: abierto = HIGH (1); cerrado con iman = LOW (0).
void setup() {
  pinMode(2, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int estado = digitalRead(2);
  Serial.println(estado);
  delay(100);
}
