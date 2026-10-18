// Ernesto Leal · Halifar Electronic Tech
const unsigned long intervalo = 500;
unsigned long ultimoCambio = 0;
bool encendido = false;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
  const unsigned long ahora = millis();
  // Compara tiempos mediante resta para admitir el desbordamiento de millis.
  if (ahora - ultimoCambio >= intervalo) {
    ultimoCambio = ahora;
    encendido = !encendido; // Invierte el estado anterior.
    digitalWrite(LED_BUILTIN, encendido ? HIGH : LOW);
  }
  // Aquí podrían atenderse otras tareas sin usar delay.
}
