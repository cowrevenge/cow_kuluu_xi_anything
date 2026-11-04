"""Drive the loopy chain for a list of already-classified tiny units.

For each (entry, kind, oracle) it runs mkret to write the file, registers the identifiers the
generated file uses in cow/names.csv (the gate demands registration before it will pass), submits
through loopy, and reports the verdict. Nothing here bypasses verification: the gate is still the
only judge of done.
"""
import json
import os
import re
import subprocess
import sys

import mkret

ROOT = mkret.ROOT


def register(name, ident_id, kind, confidence, evidence):
    row = '%s,%s,%s,%s,"%s",head' % (kind, ident_id, name, confidence, evidence.replace('"', "'"))
    with open(os.path.join(ROOT, 'cow', 'names.csv'), 'a', encoding='utf-8', newline='\n') as fh:
        fh.write(row + '\n')


def already_registered(name):
    with open(os.path.join(ROOT, 'cow', 'names.csv'), encoding='utf-8') as fh:
        return re.search(r',%s,' % re.escape(name), fh.read()) is not None


def run(entry, kind, oracle, name=None, confidence='guess'):
    out = subprocess.run([sys.executable, 'tools/cow/mkret.py', entry, '--write'],
                         capture_output=True, text=True, cwd=ROOT).stdout
    m = re.search(r'(?:wrote|unchanged) (\S+)', out)
    if not m:
        return entry, 'SKIP', out.strip()[:80]
    path = m.group(1)
    text = open(path, encoding='utf-8').read()
    fn = re.search(r'uint32_t (cow_\w+)\((?:void|uint32_t \w+)\)', text)
    fn = fn.group(1) if fn else name
    macro = re.search(r'(COW_ADDR_UNK_[0-9A-F]+)', text)
    if fn and not already_registered(fn):
        register(fn, entry, 'function', confidence, oracle)
    if macro and not already_registered(macro.group(1)):
        addr = macro.group(1).replace('COW_ADDR_UNK_', '0x').lower()
        register(macro.group(1), addr, 'layout', 'placeholder',
                 'layout/addresses.h: block named for %s (%s)' % (entry, oracle))
    r = subprocess.run([sys.executable, 'tools/cow/loopy/loopy.py', 'submit', entry,
                        '--name', fn, '--confidence', confidence, '--file', path.replace('\\', '/'),
                        '--oracle', oracle], capture_output=True, text=True, cwd=ROOT)
    try:
        d = json.loads(r.stdout)
        return entry, d.get('verdict'), (d.get('gate') or '')[:200] if isinstance(d.get('gate'), str) else str(d.get('gate'))[:200]
    except Exception:
        return entry, 'ERR', (r.stdout + r.stderr)[-300:]


if __name__ == '__main__':
    jobs = json.loads(sys.argv[1])
    for j in jobs:
        e, v, g = run(j['entry'], j.get('kind', ''), j['oracle'], j.get('name'),
                      j.get('confidence', 'guess'))
        print('%-12s %-14s %s' % (e, v, g))
