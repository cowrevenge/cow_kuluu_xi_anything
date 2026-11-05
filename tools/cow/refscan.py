"""Find reference-conversion candidates in ONE bulk pass: real logic (40-200 bytes, branches + a call)
whose body cites an immediate that decodes to a nameable string - the things kuluu/LSB already names.

  python tools/cow/refscan.py --limit 40
"""
import argparse
import csv
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import cowdiff
import vtable_model as vm

ROOT = cowdiff.ROOT
LEDGER = os.path.join(ROOT, 'ledger', 'functions.csv')
GEN = os.path.join(ROOT, 'generated', 'all')

FUNC_RE = re.compile(r'void f_([0-9a-f]{8})(_body)?\(Guest\* g\)\s*\{(.*?)\n\}', re.S)
JCC_RE = re.compile(r'/(?:\* [0-9a-f]{8}: )?\b(j(?:z|nz|e|ne|s|ns|b|ae|a|be|l|ge|g|le|p|np|o|no|c|nc)\b)', re.I)
CALL_RE = re.compile(r'\bf_([0-9a-f]{8})\s*\(')
IMM_RE = re.compile(r'0x(10[0-9a-fA-F]{6})')


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--limit', type=int, default=40)
    ap.add_argument('--min', type=int, default=40)
    ap.add_argument('--max', type=int, default=200)
    ap.add_argument('--named-callees', action='store_true',
                    help='require at least one callee whose ledger name is not blank (already read)')
    args = ap.parse_args()

    ledger = {}
    for r in csv.DictReader(open(LEDGER, encoding='utf-8')):
        ledger.setdefault(r['entry'].lower(), r)

    # one pass over the corpus: entry -> (has jcc count, calls set)
    stats = {}
    for f in sorted(os.listdir(GEN)):
        if not f.endswith('.c'):
            continue
        text = open(os.path.join(GEN, f), encoding='utf-8', errors='replace').read()
        for m in FUNC_RE.finditer(text):
            hexno, _b, body = m.group(1), m.group(2), m.group(3)
            if hexno not in stats:
                stats[hexno] = (len(JCC_RE.findall(body)), frozenset(CALL_RE.findall(body)),
                                tuple(sorted(set(IMM_RE.findall(body)))))

    out = []
    for e, r in ledger.items():
        if r['status'] != 'todo':
            continue
        try:
            size = int(r['size'])
        except ValueError:
            continue
        if not (args.min <= size <= args.max):
            continue
        st = stats.get(e[2:])
        if not st:
            continue
        njcc, calls, imms = st
        if njcc < 1 or len(calls) < 1:
            continue
        if args.named_callees and not any(
                (ledger.get('0x' + c, {}).get('name') or '').strip() for c in calls):
            continue
        strings = []
        for im in imms[:8]:
            s = vm.cstring(int(im, 16), cap=80)
            if s and len(s) >= 5 and not s.startswith('.?A'):
                strings.append(s)
        score = len(strings) * 3 + min(njcc, 6)
        out.append((score, e, size, njcc, len(calls), strings[:3]))
    out.sort(reverse=True)
    for score, e, size, njcc, ncall, strs in out[:args.limit]:
        print('%-12s size=%-4s br=%-2s calls=%-2s %s' % (e, size, njcc, ncall,
                                                          ' || '.join(x[:70] for x in strs)))
    print('CANDIDATES: %d' % len(out))


if __name__ == '__main__':
    main()
