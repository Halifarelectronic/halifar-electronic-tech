# Operadores y expresiones

Pregunta: ¿cómo expresar un cálculo sin cambiar su significado por accidente?
Prerrequisitos: variables, números, print y conversiones. [Anterior](../003-entrada-conversiones/README.md).
Objetivo observable: predecir el resultado de una expresión y repartir piezas en grupos.

## Requisitos e instalación

Python 3.11 o posterior, una terminal y esta carpeta descargada. Sin bibliotecas externas. No hay hardware ni conexiones. Desde esta carpeta ejecuta `python3 nivel-1/main.py`, después nivel-2 y nivel-3. Los parámetros son constantes didácticas; capacidad debe ser un entero positivo. No se pide entrada por teclado.

## Tres ejemplos explicados

1. **Esencial: agrupación.** `*` se evalúa antes que `+`; 2 + 3 * 4 vale 14. Con paréntesis, (2 + 3) * 4 vale 20. `=` guarda el resultado; print muestra ambos. Cambia el 4 por 0: espera 2 y 0.
2. **Ampliado: grupos.** Con 17 piezas y capacidad 5, `//` produce 3 grupos completos y `%` deja 2 piezas. No es redondear al entero más cercano: // redondea hacia menos infinito. Por eso -17 // 5 vale -4 y el resto es 3. La práctica usa cantidades no negativas; cambia a 0 piezas y espera 0 y 0.
3. **Reto: comparación.** `/` produce 3.4; `==` compara el resto con cero y devuelve False. Cambia a 20 piezas: espera 4.0 y True. No necesitas condicionales para mostrar el booleano.

## Pruebas y límites

Consulta [evidencia ejecutada](pruebas/resultados.json). Incluye los tres originales, reparto exacto, cero piezas, valores negativos para entender // y un divisor cero como error esperado. El último caso produce ZeroDivisionError; el ejemplo no acepta datos externos ni implementa aún validación de entradas. Para evitarlo conserva capacidad > 0. Los números decimales binarios pueden tener aproximación; aquí no se usa dinero ni precisión financiera.

Errores frecuentes: `=` asigna y `==` compara; `**` es potencia, `^` no lo es. `/` y `//` no son intercambiables. Escribe la expresión antes de ejecutarla y comprueba manualmente el orden.

Siguiente previsto: condicionales, todavía sin recurso enlazado.

Fuentes oficiales consultadas el 8 de noviembre de 2026:
- https://docs.python.org/3/tutorial/introduction.html
- https://docs.python.org/3/reference/expressions.html


Por Ernesto Leal · Halifar Electronic Tech.

[Instagram](https://www.instagram.com/halifarelectronictech/) · [Facebook](https://www.facebook.com/halifarelectronictech/) · [Índice](../../README.md)
