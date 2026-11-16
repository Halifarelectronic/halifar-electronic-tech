// UNO R3 A000066. Solo LED integrado: sin cableado externo.
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.begin(9600);
}
void loop() {
  if (Serial.available() > 0) {
    char comando = Serial.read();
    // Ignorar las terminaciones enviadas por el Monitor serie.
    if (comando == '\r' || comando == '\n') {
      return;
    }
    if (comando == '1') {
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("Encendido");
    } else if (comando == '0') {
      digitalWrite(LED_BUILTIN, LOW);
      Serial.println("Apagado");
    } else {
      Serial.println("Comando inválido");
    }
  }
}
