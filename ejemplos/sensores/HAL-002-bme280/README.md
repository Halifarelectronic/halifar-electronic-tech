# HAL-002 · Prueba de BME280 con Arduino

**Creador: Ernesto Leal · Halifar Electronic Tech.**

## Reseña
Lee temperatura, humedad y presión mediante I²C y muestra filas CSV en el monitor serie. Es un ejemplo inicial; no representa un instrumento calibrado ni incluye almacenamiento persistente.

## Materiales y software
- Placa compatible con Arduino y bus I²C.
- Módulo BME280 identificado por fabricante y revisión, cable USB y cables de conexión.
- Arduino IDE 2.x y paquete de soporte de la placa.
- Adafruit BME280 Library, Adafruit Unified Sensor y Adafruit BusIO, instaladas desde el gestor de bibliotecas con sus dependencias. Registrar las versiones efectivamente utilizadas al compilar.

## Conexiones: confirmar antes de montar
No se ha identificado el módulo físico del usuario. Por eso no se fijan números de pin, colores ni conexión a 5 V. Conecta SDA al SDA de tu placa, SCL al SCL y GND a GND únicamente tras comprobar la ficha del módulo y la compatibilidad de niveles lógicos. Su alimentación debe seguir la especificación del módulo exacto. El chip BME280 usa VDD de 1.71 a 3.6 V y VDDIO de 1.2 a 3.6 V; un regulador de alimentación no garantiza conversión de niveles en SDA/SCL. En una placa de lógica de 5 V puede hacer falta un traductor bidireccional I²C. Las resistencias pull-up y CS/SDO dependen del módulo.

## Instalación y ejecución
1. Identifica placa y módulo; verifica sus fichas y conexiones con la alimentación desconectada.
2. Instala las bibliotecas y abre `src/bme280_prueba/bme280_prueba.ino`.
3. Selecciona placa y puerto en Arduino IDE, pulsa Verificar y registra versiones/resultados.
4. Solo después de verificar el montaje, carga y abre el monitor serie a 115200 baudios.

## Código explicado
`Wire.begin()` inicia el bus de la placa. `begin` intenta las direcciones 0x76 y 0x77 y comprueba el sensor mediante la biblioteca. Si ambas fallan, el programa se detiene con un mensaje. Cada dos segundos lee las tres magnitudes; divide la presión entre 100 para convertir Pa en hPa. Rechaza lecturas NaN y emite columnas con unidades en la cabecera.

## Salida ilustrativa (simulada)
```text
temperatura_C,humedad_pct,presion_hPa
24.50,58.00,1012.30
```
Los valores reales variarán. La temperatura del encapsulado puede verse afectada por el calor de la placa.

## Diagnóstico
Si no detecta el dispositivo, revisa alimentación, masa común, SDA/SCL, dirección, CS/SDO y modelo. Un BMP280 no mide humedad y no sustituye al BME280 en esta prueba. No cambies tensiones por ensayo y error.

## Estado de validación
API contrastada con el ejemplo oficial de la biblioteca. **No compilado ni probado físicamente en esta sesión**: no hay compilador Arduino ni módulo conectado. Completar modelo/revisión, versiones, compilación, montaje y captura serie antes de declarar una prueba de hardware exitosa.

## Fuentes y créditos
- Bosch: https://www.bosch-sensortec.com/media/boschsensortec/downloads/datasheets/bst-bme280-ds002.pdf
- Biblioteca y ejemplo de referencia: https://github.com/adafruit/Adafruit_BME280_Library
El programa educativo usa la API de Adafruit; no incluye ni relicencia el código de la biblioteca. Mantener sus avisos al redistribuir dependencias.
