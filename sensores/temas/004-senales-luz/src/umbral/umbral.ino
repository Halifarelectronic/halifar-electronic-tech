// Mismo montaje del ejemplo mínimo. Aviso en el LED integrado.
const byte SENSOR = A0;
const int UMBRAL = 600; // Ejemplo didáctico, ajustar al entorno.
void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT); // Sin LED ni resistencia externos.
}
void loop() {
  int lectura = analogRead(SENSOR);
  bool oscuro = lectura >= UMBRAL; // Más oscuridad: mayor tensión.
  digitalWrite(LED_BUILTIN, oscuro ? HIGH : LOW);
  Serial.print(lectura);
  Serial.print(" oscuro=");
  Serial.println(oscuro); // 1 si supera o iguala el umbral; 0 si no.
  delay(200); // Cerca del umbral puede alternar; no hay histéresis.
}
