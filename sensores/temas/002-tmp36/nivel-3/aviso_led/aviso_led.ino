// Ernesto Leal · Halifar Electronic Tech
const float referenciaV = 5.0;
const float limiteC = 30.0; // Umbral educativo, no protección térmica.
void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
}
void loop() {
  const int lectura = analogRead(A0);
  const float temperaturaC = (lectura * referenciaV / 1024.0 - 0.5) * 100.0;
  const bool aviso = temperaturaC >= limiteC;
  digitalWrite(LED_BUILTIN, aviso ? HIGH : LOW);
  Serial.print(temperaturaC, 1);
  Serial.println(aviso ? " C | ALERTA" : " C | NORMAL");
  delay(1000);
}
