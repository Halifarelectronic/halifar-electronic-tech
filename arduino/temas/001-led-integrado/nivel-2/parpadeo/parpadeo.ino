// Ernesto Leal · Halifar Electronic Tech
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // Enciende.
  delay(500);                     // Espera medio segundo.
  digitalWrite(LED_BUILTIN, LOW);  // Apaga.
  delay(500);                     // Espera antes del siguiente ciclo.
}
