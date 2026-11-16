# Mi laboratorio: promesas y espera

¿Qué ocurre si las fichas llegan después? Este hito conserva el arreglo del [snapshot anterior](../004-arreglos-datos/README.md) e introduce una carga simulada asíncrona. Objetivo: observar éxito, error y el orden de salida. Es JavaScript de consola; **todavía no es una app React Native ni una interfaz móvil**. No hay servidor, red, credenciales o datos de usuarios.

## Requisitos y ejecución

Node.js **22.23.3**, sin dependencias externas ni instalación npm. Desde esta carpeta ejecuta `node src/fichas.cjs`, luego `node src/fichas.cjs --fallar`. `node --test pruebas/fichas.test.cjs` ejecuta las comprobaciones. No requiere hardware ni conexiones eléctricas. No se probó en Android/iOS.

## Cómo funciona

Prerrequisitos: funciones, objetos, arreglos y map. `new Promise` recibe una función con resolve para completar y reject para fallar. setTimeout programa una función para después; el resto del programa sigue. Los 30 ms son una demora mínima de demostración, no un tiempo garantizado. Una función flecha `x => ...` recibe x; la versión sin parámetro usa `() => ...`.

cargarFichas devuelve inmediatamente una promesa. then agrega la función que recibirá el arreglo resuelto; catch recibe un Error si la carga se rechaza. error.message es el texto de ese error. No son dos llamadas a cargarFichas: es una cadena sobre la misma operación. El parámetro fallar vale false por defecto; `--fallar` lo cambia a true en la demostración.

La copia `{ ...ficha }` crea un nuevo objeto por ficha y map devuelve un arreglo nuevo. Es una copia superficial adecuada para estas propiedades de texto; no promete copiar estructuras anidadas. module.exports permite que las pruebas importen la función sin ejecutar la demostración; require.main identifica la ejecución directa. Estas son convenciones Node, no una API de React Native.

## Resultado esperado

En éxito aparecen Cargando..., La consola sigue disponible y después TMP36, LED. Con --fallar las dos primeras líneas se conservan y aparece No se pudieron cargar las fichas por stderr. La prueba física no aplica a esta etapa; datos simulados y ejecución real de JavaScript en consola. [Resultados de pruebas](pruebas/resultados.txt).

Ejercicio: añade una ficha con nombre Resistencia, predice el nuevo texto y compruébalo. Si no hay salida, revisa que ejecutes src/fichas.cjs con Node. Si hay un rechazo sin manejar, comprueba que mantuviste catch. El snapshot previo sigue intacto; este hito tiene su propia carpeta. [Ruta del proyecto](../../proyecto/README.md). Siguiente previsto: TypeScript, todavía no desarrollado en este hito.

Fuentes consultadas 2026-11-15:
- https://tc39.es/ecma262/multipage/control-abstraction-objects.html#sec-promise-objects
- https://nodejs.org/api/timers.html#timers_settimeout_callback_delay_args
- https://reactnative.dev/docs/getting-started

Por Ernesto Leal · Halifar Electronic Tech.
[Índice](../../README.md) · [Instagram](https://www.instagram.com/halifarelectronictech/) · [Facebook](https://www.facebook.com/halifarelectronictech/)
