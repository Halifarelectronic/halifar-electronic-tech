# Python: tu primer programa

**Por Ernesto Leal · Halifar Electronic Tech**

Objetivo: escribir un mensaje en la terminal y entender cómo cambia al usar variables. No necesitas sensores ni conexiones eléctricas.

## Qué necesitas

Python 3 instalado y una terminal. Comprueba la instalación con `python --version` o `py --version` en Windows. No hay bibliotecas externas.

## Tres versiones

| Versión | Ejecutar desde esta carpeta | Qué cambia |
|---|---|---|
| Esencial | `python nivel-1/mensaje.py` | Imprime un texto fijo |
| Ampliada | `python nivel-2/mensaje.py` | Usa variables y una cadena formateada |
| Reto | `python nivel-3/mensaje.py` | Solicita un nombre y usa el texto introducido |

En Windows puedes sustituir `python` por `py`.

### Esencial

`print` escribe en la terminal. El texto va entre comillas; estas delimitan el texto y no aparecen en la salida. Resultado: `Hola, mundo de la electrónica.`

### Ampliada

`nombre` y `tema` son variables: nombres asociados a valores. La letra `f` antes de las comillas permite insertar sus valores con llaves. Resultado: `Hola, Halifar. Hoy aprendemos Python.`

### Reto

`input` muestra una pregunta y espera que escribas un texto y pulses Enter. Guarda ese texto en `nombre`; después `print` lo incluye en el saludo. Introduce `Ana`: verás `Hola, Ana. Este es tu primer programa.` No convierte la entrada a número ni ejecuta instrucciones escritas por el usuario.

## Haz una modificación

Cambia solo el tema de la segunda versión. Ejecuta otra vez y compara. Después prueba la tercera con dos nombres distintos.

## Errores frecuentes

Comillas sin cerrar producen un error de sintaxis. Si la terminal no encuentra el archivo, entra en la carpeta correcta o usa su ruta. Si Python no se reconoce, revisa su instalación.

## Fuente

[Introducción oficial a Python](https://docs.python.org/3/tutorial/introduction.html).

## Sigue aprendiendo

[Instagram](https://www.instagram.com/halifarelectronictech/) · [Facebook](https://www.facebook.com/halifarelectronictech/) · [Biblioteca](https://github.com/Halifarelectronic/halifar-electronic-tech)

© 2026 Ernesto Leal · Halifar Electronic Tech.
