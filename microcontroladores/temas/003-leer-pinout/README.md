# Cómo leer alias en el pinout del UNO R3

Pregunta: ¿por qué un terminal puede tener varios nombres? Prerrequisito: distinguir chip, placa y computadora. [Anterior](../002-chip-placa-computadora/README.md).

Material: documento oficial del UNO R3 A000066; sin software ni montaje. Abre el [pinout oficial](https://docs.arduino.cc/resources/pinouts/A000066-full-pinout.pdf), actualización 6 octubre 2022, y usa su vista superior. Identifica primero SKU y orientación. Este ejercicio lee el mapa; no autoriza un cableado genérico.

| Rótulo de placa | Alias o función | Qué observar |
|---|---|---|
| A0 | D14, PC0, ADC0 | Un mismo terminal, distintas capas de nombre |
| A4 | D18, PC4, SDA | Datos de I²C |
| A5 | D19, PC5, SCL | Reloj de I²C |
| D0 | RX, PD0 | Recepción UART |
| D1 | TX, PD1 | Transmisión UART |
| D13 | PB5, LED_BUILTIN | LED integrado |

La marca ~ identifica salidas con PWM en esta placa. PWM alterna niveles; no equivale a una salida analógica continua. GND es la referencia, no una señal de datos. Los rótulos SDA/SCL duplicados de la cabecera R3 comparten las señales de A4/A5: no son un segundo bus independiente. No intercambies numeración de placa con número de pata del encapsulado. El chip PDIP y el SMD requieren sus propias vistas y numeración.

Resultado esperado: identificar correctamente los seis renglones en el documento. Ejercicio: busca D3 y su marca PWM. Si tu placa no dice UNO R3 o tiene otro SKU, busca su propio pinout antes de seguir. Los límites eléctricos y la alimentación se verifican antes de conectar; aquí no se alimenta ningún componente. Revisión documental de las correspondencias contra el pinout oficial; ninguna prueba física.

Fuentes consultadas 1 noviembre 2026: pinout enlazado y https://docs.arduino.cc/hardware/uno-rev3/. La tabla es una explicación original basada en el mapa oficial, sin reproducir la ilustración. Próximo previsto: arquitectura del UNO R3.


Por Ernesto Leal · Halifar Electronic Tech.

[Instagram](https://www.instagram.com/halifarelectronictech/) · [Facebook](https://www.facebook.com/halifarelectronictech/) · [Índice](../../README.md)
