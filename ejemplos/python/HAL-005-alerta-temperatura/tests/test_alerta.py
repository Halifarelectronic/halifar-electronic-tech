import importlib.util
from pathlib import Path
import subprocess
import sys
import unittest

SCRIPT = Path(__file__).resolve().parents[1] / "src/alerta.py"
spec = importlib.util.spec_from_file_location("alerta", SCRIPT)
alerta = importlib.util.module_from_spec(spec)
spec.loader.exec_module(alerta)


class AlertaTest(unittest.TestCase):
    def test_limite_inclusivo(self):
        self.assertEqual(alerta.clasificar(29.9, 30), "NORMAL")
        self.assertEqual(alerta.clasificar(30, 30), "ALERTA")
        self.assertEqual(alerta.clasificar(30.1, 30), "ALERTA")

    def test_rechaza_valores_no_finitos(self):
        for valor in [float("nan"), float("inf"), -float("inf")]:
            with self.subTest(valor=valor):
                with self.assertRaises(ValueError):
                    alerta.clasificar(valor, 30)
                with self.assertRaises(ValueError):
                    alerta.clasificar(22, valor)

    def test_salida_predeterminada(self):
        resultado = subprocess.run([sys.executable, str(SCRIPT)], capture_output=True, text=True, encoding="utf-8", env={**__import__('os').environ, 'PYTHONIOENCODING':'utf-8'})
        self.assertEqual(resultado.returncode, 0, resultado.stderr)
        self.assertEqual(resultado.stdout.splitlines(), ["DATOS SIMULADOS", "22.0 °C | NORMAL", "28.0 °C | NORMAL", "31.0 °C | ALERTA"])

    def test_error_no_imprime_resultados_parciales(self):
        resultado = subprocess.run([sys.executable, str(SCRIPT), "--lecturas", "22", "nan"], capture_output=True, text=True)
        self.assertEqual(resultado.returncode, 2)
        self.assertEqual(resultado.stdout, "")


if __name__ == "__main__":
    unittest.main()
