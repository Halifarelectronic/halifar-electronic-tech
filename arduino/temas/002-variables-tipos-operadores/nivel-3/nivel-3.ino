// bool guarda un estado lógico. ! invierte ese estado.
bool encendido = false;
const unsigned long pausaMs = 400UL;
void setup() { pinMode(LED_BUILTIN, OUTPUT); }
void loop() {
  encendido = !encendido;
  // En Arduino HIGH es 1 y LOW es 0: coincide con true y false.
  digitalWrite(LED_BUILTIN, encendido);
  delay(pausaMs);
}
