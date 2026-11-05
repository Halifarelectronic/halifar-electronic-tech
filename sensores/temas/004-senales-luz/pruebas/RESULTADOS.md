# Resultados de validación · 5 noviembre 2026

Arduino CLI, core AVR 1.8.6, placa `arduino:avr:uno`, sin librerías externas.

| Programa | Flash | RAM | Compilación |
| --- | --- | --- | --- |
| minimo | 1890 / 32256 bytes | 188 / 2048 bytes | correcta |
| umbral | 2266 / 32256 bytes | 196 / 2048 bytes | correcta |

Inspección documental: terminales E/C contra página 4 de la ficha TEPT4400; 5V, GND y A0 contra pinout A000066. Montaje trazado desde terminales definidos; filas de protoboard 10, 11 y 15 aisladas. R1 une 5V con SEÑAL; E retorna a GND. Código y conexiones usan A0. Corriente máxima calculada de 0,5 mA; sin salida digital externa. Se revisó el render completo. Compilar no demuestra cableado físico.

Pendiente: montaje real, comprobación con multímetro, carga en placa, lecturas en luz/sombra, ajuste del umbral y observación del LED. Los valores 300 y 700 son ejemplos simulados. No se realizaron medidas de lux, precisión ni pruebas físicas.
