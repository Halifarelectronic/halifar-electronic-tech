# Python: condicionales

¿Cómo puede un programa escoger una respuesta según un dato? Objetivo: predecir y comprobar qué rama se ejecuta. Prerrequisitos: variables, input, float, comparaciones y operadores. [Anterior](../004-operadores-expresiones/README.md). Siguiente previsto: bucles.

## Requisitos e instalación

Python 3; ejemplos ejecutados con Python 3.11.2. Sin dependencias ni hardware. Descarga esta carpeta y ejecuta `python3 nivel-1/main.py`; repite para nivel-2 y nivel-3. Windows puede usar `py`. Los datos son simulados, no mediciones de un sensor.

## Tres ejemplos explicados

1. **Esencial:** temperatura vale 25. `>=` compara con 25; `if` imprime Umbral alcanzado cuando la condición es verdadera, `else` muestra la alternativa. Cambia el valor a 24 y comprueba Bajo el umbral.
2. **Ampliado:** input devuelve texto y float lo convierte a un decimal. `if` detecta menos de 18; `elif` se consulta solo si la primera condición falló y acepta hasta 28 inclusive; `else` cubre más de 28. Para 17, 18, 28 y 29 espera Frío, Normal, Normal y Calor.
3. **Reto:** `0 <= temperatura <= 50` es una comparación encadenada; `not` invierte su resultado. Primero se descarta lo que no cumple el intervalo; después se clasifica. Esto también descarta NaN e infinitos convertibles por float. Para -1 o 51 espera Fuera de rango. No se presupone que el lector termine este reto para continuar.

La sangría de cuatro espacios define el bloque; los dos puntos abren cada rama. `=` asigna y `==` compara. Se ejecuta solo la primera rama verdadera de la cadena.

## Pruebas, ejercicio y diagnóstico

[Casos y resultados](pruebas/resultados.json). Ejecuta `python3 pruebas/verificar.py` desde esta carpeta. Incluye fronteras, decimales, NaN, infinitos y entrada inválida. El texto no numérico genera ValueError: la lección de excepciones enseñará a recuperarse; por ahora vuelve a ejecutar y escribe un número con punto decimal. El nivel 2 clasifica cualquier número convertible, mientras el nivel 3 aplica el intervalo indicado. No son reglas para alarmas reales ni una calibración.

Ejercicio: cambia el umbral del esencial a 30; predice y comprueba qué ocurre con 29 y 30. Si ves IndentationError revisa sangría; si el resultado no coincide, comprueba el orden y los operadores.

## Fuente

https://docs.python.org/3/tutorial/controlflow.html#if-statements (consulta: 2026-11-15).

Por Ernesto Leal · Halifar Electronic Tech.
[Índice](../../README.md) · [Instagram](https://www.instagram.com/halifarelectronictech/) · [Facebook](https://www.facebook.com/halifarelectronictech/)
