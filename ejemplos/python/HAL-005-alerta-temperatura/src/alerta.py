"""Alerta educativa con datos simulados.
Creador: Ernesto Leal · Halifar Electronic Tech.
"""
import argparse
import math


def clasificar(temperatura, limite):
    """Devuelve ALERTA al alcanzar el límite; rechaza números no finitos."""
    if not math.isfinite(temperatura) or not math.isfinite(limite):
        raise ValueError("La temperatura y el límite deben ser números finitos")
    return "ALERTA" if temperatura >= limite else "NORMAL"


def main():
    parser = argparse.ArgumentParser(description="Comparación educativa de temperaturas simuladas")
    parser.add_argument("--limite", type=float, default=30.0)
    parser.add_argument("--lecturas", type=float, nargs="+", default=[22.0, 28.0, 31.0])
    args = parser.parse_args()
    try:
        # Valida todo antes de imprimir para evitar una salida parcial inválida.
        estados = [clasificar(t, args.limite) for t in args.lecturas]
    except ValueError as error:
        parser.error(str(error))
    print("DATOS SIMULADOS")
    for temperatura, estado in zip(args.lecturas, estados):
        print(f"{temperatura:.1f} °C | {estado}")


if __name__ == "__main__":
    main()
