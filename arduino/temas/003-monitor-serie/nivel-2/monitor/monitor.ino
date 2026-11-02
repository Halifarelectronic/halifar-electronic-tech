// Contador sin signo; al llegar a su máximo vuelve a cero.
unsigned long cuenta = 0;
void setup() { Serial.begin(9600); }
void loop() {
  Serial.print("Cuenta: ");
  Serial.println(cuenta);
  cuenta = cuenta + 1;
  delay(1000);
}
