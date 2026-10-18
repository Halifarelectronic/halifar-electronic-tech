// Ernesto Leal · Halifar Electronic Tech
const float referenciaV = 5.0; // Nominal: verifica la alimentación para mayor exactitud.
void setup() {
  Serial.begin(9600);
}
void loop() {
  const int lectura = analogRead(A0);
  const float voltaje = lectura * referenciaV / 1024.0;
  const float temperaturaC = (voltaje - 0.5) * 100.0;
  Serial.print(temperaturaC, 1);
  Serial.println(" C estimados");
  delay(1000);
}
