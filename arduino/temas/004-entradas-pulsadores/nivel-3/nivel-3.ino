// UNO R3 A000066; Alps Alpine SKHHAMA010, terminal 1 a D2 y 3 a GND.
// 1-2 y 3-4 están unidos internamente. No conectar 5V al pulsador.
const byte BOTON = 2;
void setup() {
  Serial.begin(9600); // Configurar igual el Monitor serie.
  pinMode(BOTON, INPUT_PULLUP); // Suelto HIGH, pulsado LOW.
  pinMode(LED_BUILTIN, OUTPUT); // LED incorporado, sin cable externo.
}
void loop() {
  bool pulsado = (digitalRead(BOTON) == LOW);
  digitalWrite(LED_BUILTIN, pulsado); // bool se convierte a 0/1.
  Serial.println(pulsado);
  delay(100); // Facilita observar estados; NO es antirrebote.
}
