# UNO R3: dos chips, dos tareas

Pregunta: ¿qué parte ejecuta mi programa y qué parte lo comunica por USB?
Prerrequisito: [leer alias del pinout](../003-leer-pinout/README.md). Objetivo observable: ubicar procesador principal, puente USB y grupos de pines sin confundir sus funciones.

## Modelo y materiales

Arduino UNO R3 **A000066**, ATmega328P en PDIP-28 y ATmega16U2. No trasladar esta guía a UNO R4 ni UNO R3 SMD. Basta consultar el dibujo y el [pinout oficial](https://docs.arduino.cc/resources/pinouts/A000066-full-pinout.pdf); no hay instalación, código ni circuito externo. Si tienes la placa, examínala desconectada. La práctica es documental, sin medición ni prueba física.

## Arquitectura

El ATmega328P ejecuta el sketch a 16 MHz. El ATmega16U2 implementa la conexión USB a serie para comunicar el ordenador con el puerto serie del 328P. No son dos núcleos intercambiables ni dos lugares donde se carga el mismo sketch. La placa incorpora regulación, reloj, reset y conectores: esos elementos no se añaden al hablar solo del chip.

## Pinout por grupos del modelo exacto

| Terminales de la placa | Función habitual | Precaución |
|---|---|---|
| D0 / RX, D1 / TX | UART del 328P | Compartida con comunicación USB-serie |
| D2–D13 | E/S digital | Lógica de 5 V; no alimentar cargas directamente |
| D3, D5, D6, D9, D10, D11 | PWM | Son seis funciones entre los digitales, no pines adicionales |
| A0–A5 | ADC de 10 bits | Como digitales, alias D14–D19 |
| A4/SDA, A5/SCL | I²C | SDA/SCL duplicados junto a AREF son las mismas señales |
| D10/SS, D11/COPI, D12/CIPO, D13/SCK | SPI | También disponible en ICSP del 328P |
| 5V, 3.3V, GND | Alimentación y referencia | No confundir salidas reguladas con VIN |
| RESET, AREF, IOREF | Control y referencias | AREF no es una alimentación general |

Consulta el PDF para la posición física de **cada** terminal: vista superior, USB a la izquierda. No conectar nada guiándose solo por esta tabla. Los pines ICSP del 16U2 no equivalen al ICSP del 328P.

## Memorias y elección

32 KB Flash para programa, de los cuales 0.5 KB reserva el bootloader; 2 KB SRAM para datos de ejecución; 1 KB EEPROM para datos persistentes. Es memoria del 328P, no almacenamiento USB. Un sketch pequeño puede agotar SRAM por cadenas o buffers. Ejercicio: clasifica programa, variable temporal y ajuste guardado en esas tres memorias. Si necesitas cámara, pantalla compleja o mucha memoria, compara otra plataforma; el UNO resulta útil para aprender E/S y control sencillo.

Resultado esperado: puedes señalar chip principal, chip USB y grupos del pinout y explicar por qué PWM no suma otros seis conectores. Errores: confundir A4 con un pin I²C adicional, asumir que USB ejecuta el programa o trasladar números de chip a conectores de placa. No hay prueba de hardware ni compilación aplicable a esta lección documental. Siguiente previsto: entradas, salidas y niveles lógicos.

Fuentes oficiales consultadas el 8 de noviembre de 2026:
- https://docs.arduino.cc/hardware/uno-rev3/
- https://docs.arduino.cc/resources/datasheets/A000066-datasheet.pdf
- https://docs.arduino.cc/resources/pinouts/A000066-full-pinout.pdf


Por Ernesto Leal · Halifar Electronic Tech.

[Instagram](https://www.instagram.com/halifarelectronictech/) · [Facebook](https://www.facebook.com/halifarelectronictech/) · [Índice](../../README.md)
