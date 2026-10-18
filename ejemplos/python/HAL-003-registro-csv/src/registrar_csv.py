"""Registro didáctico con datos simulados.
Creador: Ernesto Leal · Halifar Electronic Tech.
"""
import argparse
import csv
from pathlib import Path

COLUMNAS = ["temperatura_C", "humedad_pct"]

def guardar_medicion(ruta, temperatura, humedad):
    """Agrega una fila; crea la cabecera solo si el archivo está vacío."""
    ruta = Path(ruta)
    # Detecta un archivo de otro formato antes de agregar datos incompatibles.
    nueva = not ruta.exists() or ruta.stat().st_size == 0
    if not nueva:
        with ruta.open(newline="", encoding="utf-8") as archivo:
            if next(csv.reader(archivo), None) != COLUMNAS:
                raise ValueError("La cabecera del CSV no coincide con este ejemplo")
    # a conserva las mediciones previas; newline evita saltos extra en Windows.
    with ruta.open("a", newline="", encoding="utf-8") as archivo:
        escritor = csv.writer(archivo)
        if nueva:
            escritor.writerow(COLUMNAS)
        escritor.writerow([temperatura, humedad])

def main():
    parser = argparse.ArgumentParser(description="Guarda una medición simulada en CSV")
    parser.add_argument("--archivo", default="datos.csv")
    args = parser.parse_args()
    guardar_medicion(args.archivo, 24.5, 58.0)
    print("Medición SIMULADA agregada:", args.archivo)

if __name__ == "__main__":
    main()
