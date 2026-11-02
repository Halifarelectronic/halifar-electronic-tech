# Monitor serie en Arduino UNO R3

Pregunta: ¿cómo observar el estado del programa sin añadir una pantalla?
Prerrequisito: variables, tipos y operadores. [Anterior](../002-variables-tipos-operadores/README.md).

Materiales: Arduino UNO R3 A000066 y USB de datos; computadora con Arduino IDE 2. No hay circuito externo ni conexiones a D0/RX o D1/TX: el USB enlaza la interfaz serie de la placa. El LED integrado es D13/PB5 según el pinout oficial. No conectar cargas externas en esta práctica.

## Instalación y ejecución

Selecciona Arduino AVR Boards y Arduino Uno; conecta USB, selecciona puerto, abre cada archivo nivel-N/monitor/monitor.ino, verifica y carga. Abre Monitor serie a 9600 baudios. Abrir el puerto puede reiniciar UNO R3; para repetir el saludo pulsa RESET. Cierra el monitor antes de usar otra herramienta en el mismo puerto.

## Tres versiones explicadas

1. Esencial: setup configura 9600 baudios y println manda Hola con final de línea. loop queda vacío: el saludo sucede al arrancar, no repetidamente.
2. Ampliado: unsigned long guarda la cuenta, inicialmente cero. print escribe Cuenta: sin cambiar de línea; println añade el número y termina la línea. La suma incrementa uno y delay espera aproximadamente un segundo. Salida ilustrativa: Cuenta: 0, Cuenta: 1, Cuenta: 2 en líneas sucesivas. Al superar el máximo unsigned long vuelve a cero; no es contador ilimitado.
3. Reto: estado empieza false, ! lo invierte en cada vuelta, digitalWrite actualiza LED_BUILTIN y println muestra 1 o 0. Espera LED: 1 y LED: 0 alternados. Es estado ordenado por software; el texto no acredita luminosidad medida. delay bloquea; más adelante se estudiará millis.

## Diagnóstico y ejercicio

Caracteres extraños: iguala baudios. Sin puerto: comprueba cable de datos y controladores. Mensaje inicial ausente: abre el monitor y pulsa RESET. No uses mensajes muy frecuentes como instrumento preciso de tiempo: la comunicación consume tiempo. Cambia 1000 por 500 y observa la cadencia. Próximo: entradas digitales.

Fuentes oficiales consultadas 1 noviembre 2026:
- https://docs.arduino.cc/language-reference/en/functions/communication/serial/begin/
- https://docs.arduino.cc/learn/programming/reference
- https://docs.arduino.cc/resources/pinouts/A000066-full-pinout.pdf (6 octubre 2022)

Estado de compilación en pruebas/RESULTADOS.md. Prueba física y observación del monitor en una placa real pendientes. Las salidas descritas son esperadas.


Por Ernesto Leal · Halifar Electronic Tech.

[Instagram](https://www.instagram.com/halifarelectronictech/) · [Facebook](https://www.facebook.com/halifarelectronictech/) · [Índice](../../README.md)
