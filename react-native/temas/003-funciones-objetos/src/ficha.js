// Snapshot de Mi laboratorio: datos ficticios, ejecución en consola.
// Un objeto agrupa propiedades con nombre.
const ficha = { nombre: "Resistencia", cantidad: 15 };
// El parámetro recibe el objeto que se entrega al llamar la función.
function resumen(ficha) {
  return ficha.nombre;
}
console.log(resumen(ficha));
console.log(ficha.cantidad);
// const impide reasignar ficha; sus propiedades sí pueden cambiar.
ficha.cantidad = 20;
console.log(ficha.cantidad);
