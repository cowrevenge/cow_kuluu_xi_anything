"""Prove cowdiff actually checks something: break a conversion on purpose and require it to FAIL.

A PASS only means the two sides agreed. The way to show they were *compared* is to make one side wrong
in a specific, chosen way and watch the run go red - and to say so out loud when it does not, because a
mutation that still passes is a hole in the checker, not a clean conversion.

  python tools/cow/mutate.py 0x100dc1f0 --find 'clock->cleared_before_tick = 0u;' --replace '/* gone */'
  python tools/cow/mutate.py 0x100dc1f0 --list-file cow/mutations/100dc1f0.json

`--replace` may be empty (the text is deleted). The file is restored whatever happens, including on an
exception, so a failed run never leaves a broken unit behind. Exit 0 when the mutation was caught
(cowdiff FAIL), 1 when it was not (the checker missed it), 2 on a usage/build problem.
"""
import argparse
import json
import os
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))


def run_cowdiff(entry, extra):
    cmd = [sys.executable, os.path.join('tools', 'cow', 'cowdiff.py'), '0x' + entry, '--json'] + extra
    p = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True, encoding='utf-8', errors='replace')
    payload = (p.stdout or '') + (p.stderr or '')
    js = None
    for line in payload.splitlines():
        line = line.strip()
        if line.startswith('{') and line.endswith('}'):
            try:
                js = json.loads(line)
            except ValueError:
                pass
    return p.returncode, js, payload


def mutate_one(entry, path, find, replace, extra, label=''):
    full = os.path.join(ROOT, path)
    original = open(full, encoding='utf-8').read()
    if find not in original:
        print('MUTATE %s %s: NOT APPLIED - the text is not in %s' % (entry, label or '?', path))
        return 2
    if original.count(find) != 1:
        print('MUTATE %s %s: NOT APPLIED - the text appears %d times in %s; name it more precisely'
              % (entry, label or '?', original.count(find), path))
        return 2
    try:
        open(full, 'w', encoding='utf-8', newline='').write(original.replace(find, replace, 1))
        code, js, _payload = run_cowdiff(entry, extra)
    finally:
        open(full, 'w', encoding='utf-8', newline='').write(original)
    caught = code != 0
    detail = ''
    if js:
        detail = 'states=%s mismatches=%s first=%s reason=%s blocks=%s/%s' % (
            js.get('states'), js.get('mismatches'), js.get('first_state'), js.get('reason'),
            js.get('blocks'), js.get('blocks_total'))
    print('MUTATE %s %s: %s  %s' % (entry, label or find[:40], 'CAUGHT (cowdiff FAIL)' if caught
                                    else 'MISSED - cowdiff still PASSED, the checker does not compare this',
                                    detail))
    return 0 if caught else 1


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('entry')
    ap.add_argument('--file', help='the unit source the mutation is applied to')
    ap.add_argument('--find', help='the exact text to replace')
    ap.add_argument('--replace', default='', help='what to replace it with (default: delete it)')
    ap.add_argument('--label', default='', help='what this mutation is called in the report')
    ap.add_argument('--list-file', help='a JSON list of {"file","find","replace","label"} to run in order')
    ap.add_argument('--states', default=None, help='pass --states N to cowdiff (default: its own 2000)')
    a = ap.parse_args()

    entry = a.entry.lower().replace('0x', '')
    extra = ['--states', a.states] if a.states else []

    if a.list_file:
        jobs = json.load(open(os.path.join(ROOT, a.list_file), encoding='utf-8'))
    elif a.file and a.find is not None:
        jobs = [{'file': a.file, 'find': a.find, 'replace': a.replace, 'label': a.label}]
    else:
        raise SystemExit('give --file and --find, or --list-file')

    worst = 0
    for j in jobs:
        worst = max(worst, mutate_one(entry, j['file'], j['find'], j.get('replace', ''), extra,
                                      j.get('label', '')))
    return worst


if __name__ == '__main__':
    sys.exit(main())
