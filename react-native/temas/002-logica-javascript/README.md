# Lógica y JavaScript para Mi laboratorio

Por Ernesto Leal · Halifar Electronic Tech.

## Continuidad y objetivo
[Anterior: definir la app](../001-la-app/README.md). Conservamos Mi laboratorio y sus pantallas previstas. Esta etapa añade solamente datos de ejemplo ejecutables en consola; todavía no entrega interfaz ni una app móvil. Primero aprendemos la lógica que luego alimentará sus componentes.

## Prerrequisitos y materiales
Haber definido el objetivo del proyecto. Computadora, terminal y Node.js; comprobado con Node 22.23.3, sin dependencias ni instalación de paquetes. No requiere Android, iOS ni Expo. Desde esta carpeta ejecuta `node src/datos.js`.

## Paso a paso
const nombre guarda texto entre comillas. let cantidad permite reasignación. const favorito guarda false, un booleano sin comillas. El signo = asigna; no pregunta si dos valores son iguales. cantidad + 5 calcula 15 antes de guardarlo. console.log imprime cada valor. const impide reasignar el nombre, aunque más adelante veremos que los objetos pueden contener datos modificables.

## Resultado y ejercicio
La consola imprime Resistencia, 15 y false en líneas separadas. Cambia el nombre a Capacitor y la cantidad inicial a 0: espera Capacitor, 5 y false. Predice el resultado antes de ejecutar. Estas son fichas ficticias de componentes, sin conexión a sensores reales.

## Diagnóstico y próximo avance
Node no encontrado: instala una versión mantenida desde nodejs.org. SyntaxError: comprueba comillas y signos; ReferenceError: distingue mayúsculas. Siguiente avance previsto: funciones y objetos, aún sin desarrollar. No se realizaron pruebas Android/iOS. Este snapshot conserva la etapa anterior; no sustituye su boceto.

## Fuentes

- https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Grammar_and_types

Consulta: 25 octubre 2026.

[Volver al índice](../../README.md) · [Biblioteca](https://github.com/Halifarelectronic/halifar-electronic-tech)
