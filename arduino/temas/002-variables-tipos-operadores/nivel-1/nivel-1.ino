// UNO R3: un valor de tiempo entero controla ambas pausas.
int pausaMs = 500;
void setup() { pinMode(LED_BUILTIN, OUTPUT); }
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(pausaMs);
  digitalWrite(LED_BUILTIN, LOW);
  delay(pausaMs);
}
