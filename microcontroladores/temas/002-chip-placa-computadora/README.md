# Chip, placa y computadora

Por Ernesto Leal · Halifar Electronic Tech.

## Prerrequisitos y objetivo
Tras identificar un microcontrolador, distingue tres niveles de un sistema. El chip ejecuta instrucciones y controla periféricos. Una placa añade alimentación, conectores y otros circuitos. Una computadora añade recursos y un entorno capaz de ejecutar aplicaciones y sistemas operativos. La elección depende de la tarea, no solo del tamaño físico.

## Ejemplo concreto
El ATmega328P es el chip principal del Arduino UNO R3 A000066. La placa incorpora además un puente USB y componentes de alimentación. Conectar USB a un chip suelto no equivale a conectar una placa preparada. Un equipo de escritorio permite editar y compilar el programa; el UNO ejecuta el sketch cargado, sin necesitar ese editor para continuar.

## Materiales y práctica sin alimentación
Un navegador y el pinout oficial del modelo exacto. No se requiere software instalado, montaje ni programa. [Consulta el pinout UNO R3 A000066](https://docs.arduino.cc/resources/pinouts/A000066-full-pinout.pdf), revisión 6 octubre 2022, vista superior. D13 se corresponde con PB5 y LED_BUILTIN; A4/SDA con PC4 y A5/SCL con PC5. Los números de la placa no son posiciones físicas del encapsulado del chip. El diagrama completo está en la fuente, no en la ilustración conceptual.

## Resultado, límites y diagnóstico
Identifica chip, placa y computadora en tu mesa. Para hacer parpadear un LED de forma autónoma basta el UNO; para editar su programa usas una computadora. No concluyas que una placa cualquiera admite 5 V o que todos los pines tienen la misma función. Si la serigrafía dice UNO R4 o UNO R3 SMD, consulta su documentación específica. No hay prueba física porque esta es una práctica de lectura.

## Ejercicio
Explica qué parte cambiarías para ejecutar otro sketch y cuál para añadir un conector. Respuesta orientativa: normalmente cambias el programa cargado para la primera tarea; la segunda afecta la placa o sus accesorios. No implica sustituir automáticamente el chip. Siguiente tema previsto: lectura de pinout.

## Fuentes

- https://docs.arduino.cc/hardware/uno-rev3/

Consulta: 25 octubre 2026.

[Volver al índice](../../README.md) · [Biblioteca](https://github.com/Halifarelectronic/halifar-electronic-tech)
