# Mi laboratorio: arreglos y operaciones con datos

Pregunta: ¿cómo reunir varias fichas sin crear una variable distinta para cada nombre?
[Anterior: funciones y objetos](../003-funciones-objetos/README.md). Se conserva aquel snapshot y su ficha Resistencia con cantidad actualizada a 20; aquí se añade Capacitor, cantidad 8. Datos ficticios.

## Requisitos e instalación

Node.js **22.23.3**, terminal, sin paquetes externos. Este hito es un programa de consola, todavía sin proyecto React Native ni interfaz móvil. Descarga la carpeta y ejecuta `node src/lista.js` o `npm start`; no necesita npm install ni Expo. No hay conexiones eléctricas. No se realizaron pruebas Android/iOS.

## Cambios y explicación

`[]` crea un arreglo ordenado; sus elementos son los objetos ya aprendidos. `length` entrega el número de elementos; `[0]` accede al primero. La expresión `fichas[0].nombre` toma su propiedad nombre. La función nombreDe recibe una ficha y devuelve su nombre: se utiliza el mismo concepto de función del hito anterior. `map(nombreDe)` llama esa función para cada elemento y crea un arreglo nuevo con los resultados; no modifica el arreglo original. `join(", ")` produce texto separando cada nombre con coma y espacio.

Salida esperada y ejecutada: `2`, `Resistencia`, `Resistencia, Capacitor` en líneas separadas. No representa una pantalla móvil. [Pruebas](pruebas/lista.test.cjs): `npm test` comprueba salida, lista vacía y una sola ficha; [evidencia](pruebas/resultados.txt).

Ejercicio: añade `{ nombre: "LED", cantidad: 3 }` como tercer objeto y espera length 3 y un nombre adicional. Para lista vacía, [0] es undefined: leer .nombre desde allí falla. La prueba vacía cubre solo map/join; no anuncia validación genérica. Los datos de este hito siempre contienen nombre. Una copia por map no congela los objetos; no usarla como promesa de aislamiento profundo.

Errores frecuentes: separa elementos con comas, conserva comillas para texto y usa índices desde cero. Un índice igual a length está fuera del arreglo. Siguiente previsto: asincronía y promesas, sin enlace a un recurso que todavía no existe.

Fuentes consultadas el 8 de noviembre de 2026:
- https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array
- https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/map


Por Ernesto Leal · Halifar Electronic Tech.

[Instagram](https://www.instagram.com/halifarelectronictech/) · [Facebook](https://www.facebook.com/halifarelectronictech/) · [Índice](../../README.md)
