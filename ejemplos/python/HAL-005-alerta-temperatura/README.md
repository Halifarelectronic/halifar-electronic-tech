# Tu primera alerta de temperatura con Python

**Creador: Ernesto Leal · Halifar Electronic Tech**

Aprende a comparar un valor con un límite usando `if`. Este ejemplo recorre temperaturas simuladas y escribe NORMAL o ALERTA en la terminal. Es una práctica de programación: no lee un sensor, no envía notificaciones y no controla un equipo físico.

## Qué necesitas
Una computadora, una terminal y Python 3.10 o posterior. No necesitas conexiones eléctricas ni instalar bibliotecas: utiliza módulos incluidos con Python.

## Pruébalo
Descarga esta carpeta y ejecuta los siguientes comandos desde ella:
```sh
python src/alerta.py
python src/alerta.py --limite 28
python src/alerta.py --limite 30 --lecturas 25 30 33
```
En Windows puedes usar `py` en lugar de `python`. Las lecturas se expresan en grados Celsius y usan punto decimal.

## Resultado esperado
Con los valores predeterminados:
```text
DATOS SIMULADOS
22.0 °C | NORMAL
28.0 °C | NORMAL
31.0 °C | ALERTA
```
El límite es 30 °C para este ejercicio. El operador `>=` incluye la igualdad: 30 también produce ALERTA. No es un umbral recomendado para un equipo o aplicación real.

## Código explicado
`clasificar` comprueba que temperatura y límite sean números finitos mediante `math.isfinite`. Después compara ambos y devuelve una etiqueta. `argparse` permite cambiar las lecturas y el límite sin editar el programa. Primero se validan todas las lecturas; después se imprimen con un decimal y su estado.

La infografía muestra la lógica mínima con `if` y `else`. El archivo completo añade parámetros, validación y formato de salida para que puedas experimentar.

## Haz un cambio
Prueba el límite 28: las lecturas 28 y 31 deben mostrar ALERTA. Luego usa 31 y comprueba que la igualdad sigue activando el aviso. Cambia una cosa por vez y compara los resultados.

## Problemas frecuentes
- Python no se reconoce: verifica la instalación o usa `py` en Windows.
- Una lectura no es numérica: introduce números con punto decimal.
- `nan` o `inf`: se rechazan; no representan una lectura finita válida.

## Comprueba el programa
```sh
python -m unittest discover -s tests -v
```
Las comprobaciones cubren el límite inclusivo, los números no finitos, la salida de ejemplo y el rechazo de entradas inválidas sin imprimir resultados parciales. Los valores son simulados; no existe una prueba de hardware asociada.

## Sigue aprendiendo
Guarda la publicación y encuentra más proyectos de Halifar:
[Instagram](https://www.instagram.com/halifarelectronictech/) · [Facebook](https://www.facebook.com/halifarelectronictech/) · [Más ejemplos](../../../README.md)

## Fuentes
- [Condicionales en Python](https://docs.python.org/3/tutorial/controlflow.html#if-statements)
- [math.isfinite](https://docs.python.org/3/library/math.html#math.isfinite)

© 2026 Ernesto Leal · Halifar Electronic Tech.
