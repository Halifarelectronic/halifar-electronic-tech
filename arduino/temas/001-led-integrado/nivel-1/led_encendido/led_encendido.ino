// Ernesto Leal · Halifar Electronic Tech
// Placa de referencia: Arduino UNO R3; usa el LED integrado.
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);       // Configura el pin como salida.
  digitalWrite(LED_BUILTIN, HIGH);    // Mantiene el LED encendido.
}

void loop() {
  // No necesitamos repetir ninguna operación.
}
