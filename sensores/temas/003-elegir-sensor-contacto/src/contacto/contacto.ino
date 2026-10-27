// Adafruit 375, revision de cables 2021-06-02; UNO R3 A000066.
// A y B nombran didacticamente los dos hilos intercambiables.
// A a D2; B a GND. Contacto pasivo: no conectar a 5V.
// Por Ernesto Leal / Halifar Electronic Tech.
const byte PIN_CONTACTO = 2;

void setup() {
  pinMode(PIN_CONTACTO, INPUT_PULLUP); // Evita una entrada flotante.
  Serial.begin(9600);                // Igual velocidad en el monitor.
}

void loop() {
  const int estado = digitalRead(PIN_CONTACTO);
  // LOW: el iman cierra el contacto hacia GND; HIGH: contacto abierto.
  if (estado == LOW) {
    Serial.println(F("IMAN CERCA: contacto cerrado"));
  } else {
    Serial.println(F("IMAN LEJOS o cable desconectado: contacto abierto"));
  }
  delay(100); // Lectura cada ~100 ms; no es un filtro antirrebote.
}
