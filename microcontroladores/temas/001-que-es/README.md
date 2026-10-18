# Qué es un microcontrolador

**Por Ernesto Leal · Halifar Electronic Tech**

Un microcontrolador es un circuito integrado que reúne un procesador, memoria y periféricos para ejecutar un programa y relacionarse con otros dispositivos.

## Una idea sencilla

Imagina una tarea: leer un botón y encender una luz. Una entrada recibe el estado del botón, el programa decide qué hacer y una salida cambia el estado de la luz mediante el circuito adecuado.

```mermaid
flowchart LR
  A[Entrada: botón o sensor] --> B[Programa en el microcontrolador]
  B --> C[Salida: indicador o etapa de control]
```

El dibujo representa funciones, no cableado.

## Qué contiene

- Procesador: ejecuta instrucciones.
- Memoria: conserva programa y datos según el tipo de memoria.
- GPIO: pines configurables como entradas o salidas.
- Periféricos: pueden incluir temporizadores, ADC y buses de comunicación; dependen del modelo.

## Chip, placa y pinout

El microcontrolador es el chip. Una placa de desarrollo añade elementos para alimentarlo, programarlo y acceder a sus conexiones. Su pinout muestra las señales disponibles y debe corresponder al modelo y revisión exactos. El nombre de un pin del chip no siempre coincide con el rótulo de la placa.

## Práctica

Busca el modelo escrito en tu placa y el del chip principal. Anota por separado ambos nombres y localiza su documentación oficial. En esta lección no hace falta conectar componentes ni ejecutar código.

## Sigue aprendiendo

[Instagram](https://www.instagram.com/halifarelectronictech/) · [Facebook](https://www.facebook.com/halifarelectronictech/) · [Biblioteca](https://github.com/Halifarelectronic/halifar-electronic-tech)

© 2026 Ernesto Leal · Halifar Electronic Tech.
