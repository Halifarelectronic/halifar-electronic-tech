# Verificación y límites

Fecha: 2026-10-26. Placa: Arduino UNO R3 A000066. FQBN: arduino:avr:uno. Arduino CLI 1.5.2-rc.1 (fef6e48df); Arduino AVR Boards 1.8.6; avr-gcc 7.3.0-atmel3.6.1-arduino7. Sin bibliotecas externas.

| Ejemplo | Compilación | Flash | RAM estática |
|---|---|---|---|
| lectura_minima | Correcta | 1978 / 32256 bytes | 188 / 2048 bytes |
| contacto | Correcta | 2066 / 32256 bytes | 188 / 2048 bytes |

Se compilaron ambos con --warnings all. El core AVR emite cuatro avisos por el parámetro tag sin usar en new.cpp; no se emitieron avisos propios de estos sketches. No se cargó firmware en una placa.

## Revisión del montaje

- Modelo Adafruit 375 y revisión de cables del 2 junio 2021 identificados contra la ficha del proveedor. Contacto sin polaridad; sin VCC externo.
- UNO R3 desde arriba, USB a la izquierda; D2/PD2 y GND de POWER contrastados con pinout A000066 del 6 octubre 2022.
- Centros de terminales de la pieza UNO: connector63pin (183.573, 7.2), D2; connector88pin (133.172, 144), GND. Se transformaron con la misma traslación y escala que la pieza.
- Hilos A/B: nombres didácticos, intercambiables. El imán no está conectado. Las redes son D2–A y GND–B; no tienen cruces ni uniones directas entre sí. El contacto las une solo cuando se activa.
- INPUT_PULLUP limita la corriente al cerrar; D2 siempre entrada. No hay cable desde 5V ni alimentación externa. No se añade un condensador de desacoplo a un contacto pasivo.
- Código y tabla coinciden: abierto HIGH/1, cerrado LOW/0. La muestra numérica está disponible en lectura_minima y el aviso en contacto.
- SVG y raster revisados visualmente. El dibujo es una ilustración de montaje y no demuestra una prueba física.

## Pendiente de hardware

No se ha medido continuidad, tensión, distancia de actuación ni rebotes. No se ha ejecutado el código en UNO ni observado el monitor conectado. Los mensajes publicados son resultados esperados, no mediciones. Para verificar, repetir los pasos de la guía con el modelo indicado y documentar condiciones y resultados. Un cable desconectado produce HIGH igual que el contacto abierto; este ejercicio no es una alarma de seguridad.
