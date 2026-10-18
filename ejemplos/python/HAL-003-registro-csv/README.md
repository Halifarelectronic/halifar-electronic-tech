# HAL-003 · Registro de mediciones en CSV

**Creador: Ernesto Leal · Halifar Electronic Tech.**

## Reseña y objetivo
Aprende a conservar mediciones en un archivo de texto tabular. El programa agrega una temperatura y una humedad simuladas cada vez que se ejecuta, sin borrar filas anteriores ni repetir la cabecera. No se conecta a un sensor físico.

## Qué necesitas
Una computadora con Python 3.10 o posterior y una terminal. No requiere componentes, conexiones eléctricas ni paquetes adicionales: utiliza la biblioteca estándar.

## Ejecución
Desde esta carpeta:
```sh
python src/registrar_csv.py --archivo datos.csv
python src/registrar_csv.py --archivo datos.csv
python -m unittest discover -s tests -v
```
En Windows también puedes usar `py` en lugar de `python`.

## Código explicado
`guardar_medicion` comprueba si existe contenido y valida su cabecera. Abre el archivo en modo `a` para agregar, crea la cabecera solo una vez y utiliza `csv.writer` para escapar los campos correctamente. `newline=""` evita saltos extra, y `encoding="utf-8"` define la codificación. Los valores 24.5 y 58.0 son simulados: sustituirlos por lecturas reales requiere otra integración.

## Resultado esperado después de dos ejecuciones
```csv
temperatura_C,humedad_pct
24.5,58.0
24.5,58.0
```
La infografía HAL-003 muestra una primera versión mínima que usa `w` y sobrescribe; este ejemplo completo usa `a` para conservar el historial. No son la misma estrategia.

## Problemas frecuentes
Si Python no se reconoce, comprueba la instalación. Si el archivo está bloqueado, ciérralo en Excel. Una cabecera incompatible genera ValueError sin modificar el archivo. No está diseñado para varias escrituras simultáneas ni como almacenamiento industrial.

## Comprobaciones del ejemplo y fuentes
Pruebas automáticas: creación, dos mediciones, cabecera única y rechazo de archivos incompatibles. Sin validación de hardware.
Fuente: https://docs.python.org/3/library/csv.html


## Continúa aprendiendo
Encuentra más explicaciones e ideas de proyectos de **Halifar Electronic Tech**: [Instagram](https://www.instagram.com/halifarelectronictech/) · [Facebook](https://www.facebook.com/100426115975380). Guarda la publicación de este tema y comparte tus resultados con nosotros.
