// Ernesto Leal · Halifar Electronic Tech
// TMP36 TO-92: +Vs a 5V, Vout a A0, GND a GND; UNO R3.
void setup() {
  Serial.begin(9600);
}
void loop() {
  const int lectura = analogRead(A0); // Lee el ADC de 10 bits.
  Serial.println(lectura);
  delay(1000); // Una lectura por segundo, aproximadamente.
}
