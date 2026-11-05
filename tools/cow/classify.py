"""Classify every done entry against its GENERATED original: trivial (tableable) or real.

A body is trivial when it is one of the shapes whose whole meaning is a kind plus a constant:
ret / ret N, xor eax,eax, mov al,1, xor al,al, mov eax,ecx, mov eax imm, push imm/pop eax,
mov eax,[ecx+N], mov [ecx+N],eax, mov [ecx+N],ecx, lea eax,[ecx+N], mov al,[ecx+N],
mov eax,[gaddr], mov al,[gaddr], mov eax,[esp+4]/inc eax, fld dword ptr [ecx+N].
Anything with a branch, a call, a loop or more than one memory write is REAL.

Classification is derived ONLY from generated/all/funcs_*.c (the oracle), never from the hand file.

  python tools/cow/classify.py            # counts + ledger/trivial.csv + ledger/real.csv
  python tools/cow/classify.py --entry 0x10082aa0
"""
import argparse
import csv
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import cowdiff

ROOT = cowdiff.ROOT
GEN = os.path.join(ROOT, 'generated', 'all')

OFF = r'([+-]\s*0x[0-9a-f]+|\d+)'
RET_RE = re.compile(r'^ret(?:\s+(0x[0-9a-f]+|\d+))?$', re.I)
XOR_EAX = re.compile(r'^xor eax, eax$', re.I)
MOV_AL_1 = re.compile(r'^mov al, 1$', re.I)
XOR_AL = re.compile(r'^xor al, al$', re.I)
MOV_ECX = re.compile(r'^mov eax, ecx$', re.I)
MOV_IMM = re.compile(r'^mov eax, (0x[0-9a-f]+|\d+)$', re.I)
PUSH_IMM = re.compile(r'^push (0x[0-9a-f]+|\d+)$', re.I)
POP_EAX = re.compile(r'^pop eax$', re.I)
GET_W = re.compile(r'^mov eax, dword ptr \[ecx\s*%s\]$' % OFF, re.I)
SET_W = re.compile(r'^mov dword ptr \[ecx\s*%s\], eax$' % OFF, re.I)
SET_S = re.compile(r'^mov dword ptr \[ecx\s*%s\], ecx$' % OFF, re.I)
LEA_W = re.compile(r'^lea eax, (?:dword ptr )?\[ecx\s*%s\]$' % OFF, re.I)
GET_B = re.compile(r'^mov al, byte ptr \[ecx\s*%s\]$' % OFF, re.I)
GWORD = re.compile(r'^mov eax, dword ptr \[(0x10[0-9a-f]{6})\]$', re.I)
GBYTE = re.compile(r'^mov al, byte ptr \[(0x10[0-9a-f]{6})\]$', re.I)
ARG1 = re.compile(r'^mov eax, dword ptr \[esp \+ 4\]$', re.I)
INC = re.compile(r'^inc eax$', re.I)
FLD = re.compile(r'^fld dword ptr \[ecx\s*%s\]$' % OFF, re.I)

IMAGE_LO, IMAGE_HI = 0x10000000, 0x10c00000


def body_sites(entry):
    _path, _kind, body = cowdiff.find_generated_source(entry)
    if body is None:
        return None
    return [m.group(2).strip().lower().replace('  ', ' ')
            for m in (cowdiff.SITE_RE.match(l) for l in body) if m]


def classify(texts):
    """(kind, value, offset, pop) when the body is a tableable trivial, else None."""
    if not texts:
        return None
    t = [x for x in texts]
    m = RET_RE.match(t[-1])
    if not m:
        return None
    pop = int(m.group(1) or 0, 0)
    if len(t) == 1 and RET_RE.match(t[0]):
        return ('ret', 0, 0, pop)
    if len(t) == 2 and RET_RE.match(t[1]):
        a, b = t[0], 'ret'
        if XOR_EAX.match(a):
            return ('zero', 0, 0, pop)
        if MOV_AL_1.match(a):
            return ('true', 0, 0, pop)
        if XOR_AL.match(a):
            return ('false', 0, 0, pop)
        if MOV_ECX.match(a):
            return ('self', 0, 0, pop)
        m2 = GET_W.match(a)
        if m2:
            return ('get_word', 0, int(m2.group(1), 0), pop)
        m2 = SET_W.match(a)
        if m2:
            return ('set_word', 0, int(m2.group(1), 0), pop)
        m2 = SET_S.match(a)
        if m2:
            return ('set_self', 0, int(m2.group(1), 0), pop)
        m2 = LEA_W.match(a)
        if m2:
            return ('lea', 0, int(m2.group(1), 0), pop)
        m2 = GET_B.match(a)
        if m2:
            return ('get_byte', 0, int(m2.group(1), 0), pop)
        m2 = FLD.match(a)
        if m2:
            return ('float', 0, int(m2.group(1), 0), pop)
        m2 = GWORD.match(a)
        if m2:
            return ('gword', int(m2.group(1), 0), 0, pop)
        m2 = GBYTE.match(a)
        if m2:
            return ('gbyte', int(m2.group(1), 0), 0, pop)
        m2 = MOV_IMM.match(a)
        if m2:
            v = int(m2.group(1), 0)
            return ('gptr' if IMAGE_LO <= v < IMAGE_HI else 'const', v, 0, pop)
        return None
    if len(t) == 3 and RET_RE.match(t[2]) and PUSH_IMM.match(t[0]) and POP_EAX.match(t[1]):
        return ('push_const', int(PUSH_IMM.match(t[0]).group(1), 0), 0, pop)
    if len(t) == 3 and RET_RE.match(t[2]) and ARG1.match(t[0]) and INC.match(t[1]):
        return ('inc_arg', 0, 0, pop)
    return None


def entry_class(entry):
    texts = body_sites(entry)
    if texts is None:
        return None, None
    return classify(texts), texts


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--entry', default=None)
    ap.add_argument('--write', action='store_true', help='write ledger/trivial.csv and ledger/real.csv')
    args = ap.parse_args()

    if args.entry:
        got, texts = entry_class(args.entry)
        print(args.entry, got, texts)
        return

    rows = list(csv.DictReader(open(os.path.join(ROOT, 'ledger', 'functions.csv'), encoding='utf-8')))
    trivial, real = [], []
    for r in rows:
        if r['status'] != 'done':
            continue
        got, _ = entry_class(r['entry'])
        if got:
            trivial.append({'entry': r['entry'], 'kind': got[0], 'value': got[1],
                            'offset': got[2], 'pop': got[3], 'name': r['name'],
                            'oracle_refs': r['oracle_refs']})
        else:
            real.append({'entry': r['entry'], 'name': r['name'], 'file': r['file']})
    from collections import Counter
    print('done=%d trivial=%d real=%d' % (len(trivial) + len(real), len(trivial), len(real)))
    print(Counter(t['kind'] for t in trivial))
    if args.write:
        os.makedirs(os.path.join(ROOT, 'ledger'), exist_ok=True)
        for name, data in (('trivial.csv', trivial), ('real.csv', real)):
            p = os.path.join(ROOT, 'ledger', name)
            with open(p, 'w', encoding='utf-8', newline='\n') as fh:
                w = csv.DictWriter(fh, fieldnames=list(data[0].keys()))
                w.writeheader()
                w.writerows(data)
            print('wrote %s (%d rows)' % (p, len(data)))


if __name__ == '__main__':
    main()
