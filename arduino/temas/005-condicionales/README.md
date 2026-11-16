# Arduino: decidir con if y else

¿Cómo controlar el LED con un comando? Objetivo: que '1' encienda y '0' apague el LED integrado, y que un comando inválido mantenga el estado. [Anterior: entradas y pulsadores](../004-entradas-pulsadores/README.md). Prerrequisitos: setup/loop, variables, comparación, LED integrado y Monitor serie. Esta práctica enseña decisiones; usa USB para aislar el concepto del montaje del pulsador.

## Materiales, versiones y conexiones

Arduino UNO R3 **A000066**, ATmega328P PDIP-28, computadora y cable USB de datos. Core Arduino AVR 1.8.6, FQBN `arduino:avr:uno`; sin bibliotecas adicionales. Retira todos los cables externos y shields con USB desconectado; conecta solo USB. No requiere protoboard, módulo, resistencias ni cableado GPIO. LED_BUILTIN corresponde a D13/PB5 del UNO R3 y usa el circuito incorporado de la placa. Conserva su alimentación y desacoplo originales. No extrapolar a otras placas ni conectar un LED externo directamente. Consulta el pinout oficial enlazado.

## Instalación y ejecución

Abre cada .ino en Arduino IDE, selecciona Arduino UNO y el puerto de tu placa y carga. También: `arduino-cli compile --fqbn arduino:avr:uno nivel-1`. Para los niveles 2 y 3 abre Monitor serie a 9600 baudios. Escribe `1` y envía; después `0`. Abrir el puerto puede reiniciar la placa, cuyo LED comienza apagado. No se cargó nada a hardware durante la validación.

## Tres programas explicados

1. **Esencial:** un bool fijo gobierna if/else. true selecciona HIGH; false selecciona LOW. Cambia el dato, recompila y carga para ver la alternativa.
2. **Ampliado:** Serial.available comprueba que haya un byte; Serial.read lo consume y char guarda el carácter. if compara con `'1'`; else if con `'0'`. Los demás caracteres no cambian el LED. Las comillas simples son necesarias: el carácter '1' tiene un código distinto al entero 1.
3. **Reto:** la primera condición usa `||` (o lógico) para ignorar retorno de carro y salto de línea. `return` termina esta vuelta de loop y Arduino lo invoca de nuevo. Una última rama else informa Comando inválido sin alterar el LED. Espera Encendido para '1' y Apagado para '0'. No necesitas dominar el reto para continuar.

## Validación, ejercicio y diagnóstico

Tres sketches compilados para UNO R3; [registro](pruebas/compilacion.txt). Se revisaron manualmente las ramas para 1, 0, retorno de carro, salto de línea y otros caracteres; no se ejecutó el sketch en un simulador. La compilación no prueba USB, tiempos ni tensiones reales. **Prueba física pendiente**, también la recepción de caracteres UTF-8 en el Monitor serie. No se afirma simulación eléctrica ni ejecución en placa.

Ejercicio: añade '?' al reto para responder Ayuda sin cambiar el LED. Si no cambia, revisa placa, puerto, envío y que uses el LED L; si el texto es ilegible, revisa 9600 baudios. Elimina dispositivos externos antes de probar. Siguiente previsto: bucles y funciones.

## Fuentes oficiales

- https://docs.arduino.cc/language-reference/en/structure/control-structure/if/
- https://docs.arduino.cc/language-reference/en/functions/communication/serial/read/
- https://docs.arduino.cc/language-reference/en/functions/communication/serial/available/
- https://docs.arduino.cc/resources/pinouts/A000066-full-pinout.pdf (A000066, actualización 12 noviembre 2026).

Consulta: 2026-11-15. Por Ernesto Leal · Halifar Electronic Tech.
[Índice](../../README.md) · [Instagram](https://www.instagram.com/halifarelectronictech/) · [Facebook](https://www.facebook.com/halifarelectronictech/)
