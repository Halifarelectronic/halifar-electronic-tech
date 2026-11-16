// UNO R3 A000066. Solo LED integrado: sin cableado externo.
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.begin(9600);
}
void loop() {
  // Solo leer cuando hay un byte disponible.
  if (Serial.available() > 0) {
    char comando = Serial.read();
    if (comando == '1') {
      digitalWrite(LED_BUILTIN, HIGH);
    } else if (comando == '0') {
      digitalWrite(LED_BUILTIN, LOW);
    }
    // Otros caracteres conservan el estado del LED.
  }
}
