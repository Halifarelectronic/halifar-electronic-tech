# Tres zonas con fronteras explícitas. No es una medición.
temperatura = float(input("Temperatura simulada: "))
if temperatura < 18:
    print("Frío")
elif temperatura <= 28:
    print("Normal")
else:
    print("Calor")
