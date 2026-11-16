const { test } = require('node:test');
const assert = require('node:assert/strict');
const { cargarFichas } = require('../src/fichas.cjs');
test('la carga devuelve una promesa y preserva el orden de las fichas', async () => {
  const pendiente = cargarFichas();
  assert.ok(pendiente instanceof Promise);
  assert.deepEqual((await pendiente).map(f => f.nombre), ['TMP36', 'LED']);
});
test('el fallo simulado rechaza con un mensaje útil', async () => {
  await assert.rejects(cargarFichas(true), /No se pudieron cargar las fichas/);
});
test('editar una respuesta no altera futuras cargas', async () => {
  const primera = await cargarFichas(); primera[0].nombre = 'Otro';
  assert.equal((await cargarFichas())[0].nombre, 'TMP36');
});
test('el código síncrono avanza antes de la respuesta', async () => {
  const orden = [];
  const pendiente = cargarFichas().then(() => orden.push('respuesta'));
  orden.push('sigue'); await pendiente;
  assert.deepEqual(orden, ['sigue', 'respuesta']);
});
