// Mi laboratorio: snapshot de consola, datos ficticios; sin sensores conectados.
// Conservamos la ficha del hito anterior, después de actualizar cantidad a 20.
const ficha = { nombre: "Resistencia", cantidad: 20 };
// Un arreglo mantiene varias fichas en orden. Cada objeto conserva sus propiedades.
const fichas = [ficha, { nombre: "Capacitor", cantidad: 8 }];
console.log(fichas.length); // 2: cantidad de elementos.
console.log(fichas[0].nombre); // Resistencia: el primer índice es 0.
function nombreDe(ficha) {
  return ficha.nombre; // Recibe una ficha cada vez que map llama la función.
}
const nombres = fichas.map(nombreDe); // Nuevo arreglo; no cambia fichas.
console.log(nombres.join(", ")); // Unir los nombres para mostrarlos.
