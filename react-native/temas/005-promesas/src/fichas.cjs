// Snapshot de Mi laboratorio: datos locales simulados, sin red.
const fichas = [{ nombre: "TMP36", categoria: "sensor" },
                { nombre: "LED", categoria: "indicador" }];

function cargarFichas(fallar = false) {
  // El retraso sirve para observar la espera; no representa una red real.
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      if (fallar) {
        reject(new Error("No se pudieron cargar las fichas"));
      } else {
        resolve(fichas.map(ficha => ({ ...ficha })));
      }
    }, 30);
  });
}
module.exports = { cargarFichas };

if (require.main === module) {
  console.log("Cargando...");
  cargarFichas(process.argv.includes("--fallar"))
    .then(lista => console.log(lista.map(ficha => ficha.nombre).join(", ")))
    .catch(error => console.error(error.message));
  console.log("La consola sigue disponible");
}
