# Mi laboratorio: funciones y objetos

Pregunta: ¿cómo reunir los datos de una ficha y reutilizar una operación?
[Anterior: datos iniciales](../002-logica-javascript/README.md). Se conserva el snapshot previo y la misma app prevista. Esta etapa sigue en consola: no hay interfaz móvil ejecutable.

Requisitos: Node.js 22.23.3, terminal, sin dependencias. Ejecuta `node src/ficha.js` desde esta carpeta. No necesitas Expo, Android ni iOS. Datos ficticios, sin sensores reales.

## Paso a paso

Las llaves de ficha agrupan nombre y cantidad. Cada par tiene una propiedad y su valor; el punto accede a una propiedad. function declara una operación con nombre; ficha entre paréntesis es un parámetro local, que recibe el objeto de la llamada. return entrega el nombre al lugar donde se invocó resumen. console.log muestra el resultado. const impide reasignar la variable; no congela las propiedades. Por eso ficha.cantidad = 20 es válido.

## Resultado y ejercicio

Salida ejecutada en Node: Resistencia, 15, 20 en líneas separadas. Cambia nombre a Capacitor y cantidad inicial a 0: espera Capacitor, 0, 20. Se comprobó también ese caso mediante una copia temporal sin modificar el snapshot. No hubo pruebas Android/iOS.

Errores frecuentes: usa comillas para texto, conserva mayúsculas, y escribe la propiedad exactamente; una propiedad inexistente devuelve undefined. Esta función requiere una ficha con nombre; validar objetos ajenos será otro avance. Siguiente previsto: arreglos y operaciones con datos. No se incluye enlace a material aún inexistente.

Fuentes consultadas 1 noviembre 2026:
- https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Working_with_objects
- https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Functions


Por Ernesto Leal · Halifar Electronic Tech.

[Instagram](https://www.instagram.com/halifarelectronictech/) · [Facebook](https://www.facebook.com/halifarelectronictech/) · [Índice](../../README.md)
