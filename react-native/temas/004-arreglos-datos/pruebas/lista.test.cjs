const assert = require('node:assert/strict');
const {execFileSync} = require('node:child_process');
const path = require('node:path');
const script = path.join(__dirname, '../src/lista.js');
assert.equal(execFileSync(process.execPath,[script],{encoding:'utf8'}), '2\nResistencia\nResistencia, Capacitor\n');
function nombreDe(ficha){ return ficha.nombre; }
assert.deepEqual([].map(nombreDe), []);
assert.equal([].map(nombreDe).join(', '), '');
assert.deepEqual([{nombre:'LED',cantidad:3}].map(nombreDe), ['LED']);
console.log('4 comprobaciones correctas: snapshot, vacío/map, vacío/join y una ficha.');
