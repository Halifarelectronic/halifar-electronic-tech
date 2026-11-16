# UNO R3: entradas, salidas y niveles lógicos

¿Basta decir que una señal es de 3.3 V para conectarla? Objetivo: comparar límites garantizados de salida e entrada antes de decidir compatibilidad. [Anterior: arquitectura](../004-arquitectura-uno-r3/README.md). Material: documentación del UNO R3 A000066 con ATmega328P PDIP-28; visor PDF. Sin instalación, programa, alimentación o cableado. Es una práctica documental, sin pruebas físicas.

## El mapa del modelo exacto

[Pinout oficial completo, vista superior, A000066](https://docs.arduino.cc/resources/pinouts/A000066-full-pinout.pdf), revisión 12 noviembre 2026. Abre la primera página: D2 corresponde a PD2, D13/LED_BUILTIN a PB5. Los nombres de placa y puerto son alias de una misma señal, no pines extras. No corresponde al UNO R4, al UNO WiFi Rev2 ni a cualquier placa que use el nombre UNO. Se enlaza el original bajo CC BY-SA 4.0, sin redibujar o reinterpretar sus terminales.

## Entrada y salida

INPUT lee un nivel. OUTPUT conduce una señal y puede entrar en conflicto con otra salida. INPUT_PULLUP activa una resistencia débil hacia VCC; no es una conversión de niveles para cualquier módulo. Una entrada flotante no tiene estado confiable. No conectes dos salidas solo por coincidir sus valores nominales.

Para entradas digitales comunes del **ATmega328P**, la tabla 32-2 de la ficha Atmel-42735B, noviembre 2016, especifica VIL máximo = 0.3 × VCC y VIH mínimo = 0.6 × VCC para VCC de 2.4 a 5.5 V y las condiciones indicadas en la tabla. Con VCC = 5.0 V, eso da LOW hasta 1.5 V y HIGH desde 3.0 V. La zona intermedia no garantiza lectura. Son límites de entrada, no tensiones medidas ni voltajes que pueda suministrar una salida. RESET y XTAL1 tienen especificaciones distintas.

## Práctica guiada

1. Localiza D2/PD2 en el pinout oficial. Busca los límites de entrada del ATmega328P en su ficha y calcula 0.3 × 5 y 0.6 × 5.
2. Una salida hipotética con VOH mínimo garantizado de 2.9 V no alcanza VIH = 3.0 V. Que su etiqueta diga 3.3 V no cambia esa comparación. Una salida con VOH mínimo de 3.1 V sí supera ese umbral en estas condiciones, pero aún debes comprobar VOL, alimentación, referencia de masa y márgenes.
3. Invierte la dirección: una salida de un UNO a 5 V puede exceder el máximo de entrada de una placa de 3.3 V. Lee la ficha exacta y utiliza adaptación adecuada antes de realizar un montaje. Este documento no valida una conexión específica ni prescribe un adaptador genérico.

Resultado esperado: distinguir dirección y límites, y justificar la decisión por valores garantizados. Diagnóstico: no confundas VIH con VOH, un típico con un mínimo, ni el máximo absoluto con una condición de operación. Ejercicio: para una entrada con VIH de 0.7 × 3.3 V calcula 2.31 V; después busca el límite de tensión admisible de ese dispositivo hipotético antes de conectar nada. Siguiente previsto: ADC y PWM.

## Fuentes y revisión

- https://docs.arduino.cc/hardware/uno-rev3/
- https://docs.arduino.cc/resources/pinouts/A000066-full-pinout.pdf
- https://docs.arduino.cc/resources/datasheets/Atmel-42735-8-bit-AVR-Microcontroller-ATmega328-328P_Datasheet.pdf (tabla 32-2, DC Characteristics).

Consulta: 2026-11-15. Cálculos y alias cotejados documentalmente, sin mediciones eléctricas. Por Ernesto Leal · Halifar Electronic Tech.
[Índice](../../README.md) · [Instagram](https://www.instagram.com/halifarelectronictech/) · [Facebook](https://www.facebook.com/halifarelectronictech/)
