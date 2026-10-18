import csv
import importlib.util
from pathlib import Path
import tempfile
import unittest

spec = importlib.util.spec_from_file_location("registro", Path(__file__).resolve().parents[1] / "src/registrar_csv.py")
registro = importlib.util.module_from_spec(spec)
spec.loader.exec_module(registro)

class RegistroTest(unittest.TestCase):
    def test_agrega_sin_duplicar_cabecera_ni_perder_datos(self):
        with tempfile.TemporaryDirectory() as carpeta:
            ruta = Path(carpeta) / "datos.csv"
            registro.guardar_medicion(ruta, 24.5, 58.0)
            registro.guardar_medicion(ruta, 25.0, 60.0)
            with ruta.open(newline="", encoding="utf-8") as archivo:
                self.assertEqual(list(csv.reader(archivo)), [registro.COLUMNAS, ["24.5", "58.0"], ["25.0", "60.0"]])
    def test_rechaza_cabecera_incompatible_sin_modificar_archivo(self):
        with tempfile.TemporaryDirectory() as carpeta:
            ruta = Path(carpeta) / "datos.csv"
            ruta.write_text("otra,columna\n", encoding="utf-8")
            antes = ruta.read_bytes()
            with self.assertRaises(ValueError):
                registro.guardar_medicion(ruta, 1, 2)
            self.assertEqual(ruta.read_bytes(), antes)

if __name__ == "__main__":
    unittest.main()
