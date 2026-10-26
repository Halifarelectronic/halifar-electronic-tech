// unsigned long expresa una duración no negativa en milisegundos.
const unsigned long unidadMs = 200UL;
const unsigned long encendidoMs = unidadMs * 2UL;
const unsigned long apagadoMs = unidadMs * 3UL;
void setup() { pinMode(LED_BUILTIN, OUTPUT); }
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(encendidoMs);
  digitalWrite(LED_BUILTIN, LOW);
  delay(apagadoMs);
}
