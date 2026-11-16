// UNO R3 A000066. Solo LED integrado: sin cableado externo.
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.begin(9600);
}
void loop() {
  // Dato fijo de práctica; cambia a false y vuelve a cargar.
  bool encender = true;
  if (encender) {
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    digitalWrite(LED_BUILTIN, LOW);
  }
}
