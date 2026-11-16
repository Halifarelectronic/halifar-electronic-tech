from pathlib import Path
import subprocess, sys, json
R = Path(__file__).resolve().parents[1]
cases = [(1, '', 'Umbral alcanzado'),
         (2, '17', 'Frío'), (2, '18', 'Normal'), (2, '28', 'Normal'),
         (2, '29', 'Calor'), (2, '18.5', 'Normal'),
         (3, '-1', 'Fuera de rango'), (3, '0', 'Frío'),
         (3, '18', 'Normal'), (3, '28', 'Normal'), (3, '50', 'Calor'),
         (3, '51', 'Fuera de rango'), (3, 'nan', 'Fuera de rango'),
         (3, 'inf', 'Fuera de rango'), (3, '-inf', 'Fuera de rango'),
         (2, 'texto', 'ValueError'), (3, 'texto', 'ValueError')]
results = []
for level, data, expected in cases:
    run = subprocess.run([sys.executable, f'nivel-{level}/main.py'],
                         input=data+'\n', text=True, capture_output=True, cwd=R)
    output = run.stdout if run.returncode == 0 else run.stderr
    passed = expected in output and ((run.returncode != 0) == (expected == 'ValueError'))
    results.append(dict(level=level, input=data, expected=expected, passed=passed,
                        exit_code=run.returncode, stdout=run.stdout, stderr=run.stderr.replace(str(R) + "/", "")))
    assert passed, results[-1]
(R/'pruebas/resultados.json').write_text(json.dumps({'python':sys.version,'cases':results},ensure_ascii=False,indent=2)+'\n')
print(f'{len(results)} casos correctos; errores de entrada esperados comprobados.')
