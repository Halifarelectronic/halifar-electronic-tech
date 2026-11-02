// Un estado lógico gobierna el LED integrado y el mensaje.
bool estado = false;
void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
  estado = !estado;
  digitalWrite(LED_BUILTIN, estado);
  Serial.print("LED: ");
  Serial.println(estado);
  delay(1000);
}
