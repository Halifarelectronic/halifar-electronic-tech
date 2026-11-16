# Reto: descartar valores fuera del intervalo antes de clasificar.
temperatura = float(input("Temperatura simulada (0 a 50): "))
if not (0 <= temperatura <= 50):
    print("Fuera de rango")
elif temperatura < 18:
    print("Frío")
elif temperatura <= 28:
    print("Normal")
else:
    print("Calor")
