# Variables, tipos y operadores

Por Ernesto Leal · Halifar Electronic Tech.

## Prerrequisitos y objetivo
Haber cargado la lección del LED integrado y reconocer setup, loop, digitalWrite y delay. Ahora cambiarás tiempos mediante variables y expresiones, sin cableado externo. Una variable declarada tiene tipo; const impide modificar su valor después de inicializarla.

## Materiales e instalación
Arduino UNO R3 A000066 con ATmega328P, USB de datos, Arduino IDE y core Arduino AVR Boards. Sin bibliotecas externas. Entorno de compilación pendiente: no hay arduino-cli disponible. Selecciona Arduino UNO y su puerto. Abre cada .ino en su carpeta homónima y verifica antes de cargar.

## Conexiones y pinout
Solo USB; no conectes componentes externos. LED_BUILTIN corresponde a D13/PB5 en UNO R3 según el pinout oficial A000066, revisión 6 octubre 2022. No extrapoles a otras placas. [Pinout oficial](https://docs.arduino.cc/resources/pinouts/A000066-full-pinout.pdf). Este ejercicio no ofrece ni necesita un circuito externo.

## Tres niveles explicados
1. Esencial: int pausaMs guarda 500. Cada ciclo mantiene el LED encendido 500 ms y apagado otros 500 ms. En UNO R3 int tiene 16 bits; 500 queda dentro de su rango.
2. Ampliado: unsigned long y literales UL expresan duraciones. Multiplicar una unidad de 200 da 400 ms encendido y 600 apagado. const conserva las duraciones. No uses valores negativos para delay.
3. Reto: bool guarda false o true; ! invierte el estado cada 400 ms. El primer paso lo enciende. HIGH/LOW corresponden aquí a true/false. Cambia 400 por 800 y explica por qué el ciclo completo tarda aproximadamente 1600 ms. delay bloquea; el tiempo real incluye una pequeña sobrecarga. millis se estudiará más adelante.

## Diagnóstico
Si no carga, revisa cable de datos, placa y puerto. Si cambias de modelo, comprueba su LED_BUILTIN. No alimentes conexiones externas durante este ejercicio. Compilación y prueba física pendientes; estos resultados son esperados, no medidos.

## Fuentes

- https://docs.arduino.cc/language-reference/en/variables/data-types/int/

Consulta: 25 octubre 2026.

[Volver al índice](../../README.md) · [Biblioteca](https://github.com/Halifarelectronic/halifar-electronic-tech)
