# Entrada de datos y conversiones

Pregunta: ¿cómo transformar lo que escribe una persona en un dato del programa?
Prerrequisito: variables y tipos. [Anterior](../002-variables-tipos/README.md).

Necesitas Python 3 y terminal. Ejecutado con Python 3.11.2, sin dependencias. No requiere hardware ni conexiones. Desde esta carpeta ejecuta `python3 nivel-1/main.py` y repite con nivel-2 y nivel-3.

## Tres niveles explicados

1. Esencial: `input` muestra una pregunta y devuelve texto sin el salto de línea. `nombre` conserva ese texto. `print` muestra el saludo. Escribe Ana: verás Hola, Ana. Una entrada vacía se acepta como texto vacío.
2. Ampliado: primero guardamos texto y luego `int` lo convierte a un entero. Escribe -3 o 0: la salida conserva su valor numérico. El texto 2.5 produce ValueError: tiene parte decimal. No uses int para convertir una medida decimal.
3. Reto: `float` interpreta texto con punto decimal, por ejemplo 2.5. La salida muestra Medida: 2.5. -3 se muestra como -3.0. Es una representación aproximada en coma flotante; no garantiza exactitud decimal. No conviertas entradas no confiables con eval.

## Pruebas y límites

Se ejecutaron diez casos: texto, vacío, cero, negativo, decimal, coma y letras. Las conversiones inválidas terminan con ValueError de forma explícita en esta lección. No se oculta ni se trata como dato cero: ejecuta otra vez con entrada válida. Si falta entrada estándar aparece EOFError. El tratamiento con try/except se estudiará después; todavía no se enseña un formulario robusto. Una coma decimal no se acepta: escribe punto. Ningún dato representa una medición de hardware.

Ejercicio: predice el tipo de cada variable antes y después de convertir. Cambia las preguntas sin modificar las conversiones. Siguiente previsto: operadores y expresiones.

Fuente consultada 1 noviembre 2026: https://docs.python.org/3/library/functions.html (input, int, float). Código completo en las tres carpetas nivel-N. Resultado de pruebas: pruebas/RESULTADOS.md.


Por Ernesto Leal · Halifar Electronic Tech.

[Instagram](https://www.instagram.com/halifarelectronictech/) · [Facebook](https://www.facebook.com/halifarelectronictech/) · [Índice](../../README.md)
