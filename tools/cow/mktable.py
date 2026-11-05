"""Generate the trivial table: src/tables/cow_trivial_rows.def, and the ledger rows that point at it.

    python tools/cow/mktable.py --report            # what the table would say, nothing written
    python tools/cow/mktable.py --write             # write the .def, rebook the ledger, prune names
    python tools/cow/mktable.py --check 0x10001370   # one row against the bytes (the gate calls this)

An entry is tabled only when BOTH of these hold, and neither is a judgement call:

  1. its generated body is one of the shapes in KINDS below - read out of generated/all, never guessed;
  2. tools/cow/vtable_model.py can say who reaches the address - an RTTI-bounded vtable slot (<= 128
     slots; a longer run is our bug, not a class), a call site, or a data table.

Anything else goes back to `todo` with the reason in its note, because a row we cannot justify is a
stub, and a stub means the file was not read. The kind/value/pop triple is the whole claim a row makes,
so `--check` can re-derive it from the bytes and compare - which is what makes the table auditable
instead of authoritative.
"""
import argparse
import csv
import json
import os
import re
import sys

if hasattr(sys.stdout, 'reconfigure'):
    sys.stdout.reconfigure(encoding='utf-8', errors='replace')

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(HERE))
sys.path.insert(0, HERE)

import cowdiff                      # noqa: E402  SITE_RE
import trivial_audit                # noqa: E402  body_index()
import vtable_model as vm           # noqa: E402  proof_for()

LEDGER = os.path.join(ROOT, 'ledger', 'functions.csv')
# Forward slashes: the ledger stores POSIX-style paths and gate.ps1 matches
# 'src/tables/' literally, so os.path.join() (backslashes on Windows) would
# make every tabled row look like a file outside the table.
TABLE_C = 'src/tables/cow_trivial.c'
TABLE_DEF = 'src/tables/cow_trivial_rows.def'
TRIVIAL_MAX_BYTES = 8
IMAGE_LO, IMAGE_HI = 0x10000000, 0x10C00000

RET_RE = re.compile(r'^ret(?:\s+(0x[0-9a-fA-F]+|\d+))?$', re.I)
IMM_RE = re.compile(r'^mov eax, (0x[0-9a-f]+|\d+)$', re.I)
GDWORD_RE = re.compile(r'^mov eax, dword ptr \[(0x10[0-9a-f]{6})\]$', re.I)
GBYTE_RE = re.compile(r'^mov al, byte ptr \[(0x10[0-9a-f]{6})\]$', re.I)
ECX_RE = re.compile(r'^\[(ecx)(\s*([+-])\s*(0x[0-9a-f]+|\d+))?\]$')
SELF_RE = re.compile(r'^mov eax, dword ptr (\[ecx[^\]]*\])$', re.I)
SELF8_RE = re.compile(r'^mov al, byte ptr (\[ecx[^\]]*\])$', re.I)
LEA_RE = re.compile(r'^lea eax, (\[ecx[^\]]*\])$', re.I)


def ecx_off(inner):
    """`[ecx]`, `[ecx + 0x14]`, `[ecx - 4]` -> the unsigned 32-bit offset it means."""
    m = ECX_RE.match(inner.strip())
    if not m:
        return None
    off = int(m.group(4) or '0', 0)
    if (m.group(3) or '+') == '-':
        off = (-off) & 0xFFFFFFFF
    return off


def classify(texts):
    """(kind, value, pop) from the generated instruction texts, or None if the body is not a shape.

    The right-hand sides are the ones MSVC emits for a trivial method; the left-hand side of each rule is
    a literal line of generated/all, which is why a row can be re-derived by --check.
    """
    if not texts:
        return None
    last = RET_RE.match(texts[-1])
    if not last:
        return None
    pop = int(last.group(1) or '0', 0)
    rest = texts[:-1]

    if not rest:
        return ('RET', 0, pop)
    if rest == ['xor eax, eax']:
        return ('ZERO', 0, pop)
    if rest == ['mov eax, ecx']:
        return ('SELF', 0, pop)
    if rest == ['xor al, al']:
        return ('FALSE', 0, pop)
    if rest == ['mov al, 1']:
        return ('TRUE', 0, pop)
    if rest == ['push 1', 'pop eax']:
        return ('CONST_PUSH', 1, pop)
    if rest == ['mov eax, dword ptr [esp + 4]', 'inc eax']:
        return ('INCARG', 0, pop)
    if len(rest) == 1:
        one = rest[0]
        m = GDWORD_RE.match(one)
        if m:
            return ('GDWORD', int(m.group(1), 16), pop)
        m = GBYTE_RE.match(one)
        if m:
            return ('GBYTE', int(m.group(1), 16), pop)
        m = SELF_RE.match(one)
        if m:
            off = ecx_off(m.group(1))
            return None if off is None else ('GET', off, pop)
        m = SELF8_RE.match(one)
        if m:
            off = ecx_off(m.group(1))
            return None if off is None else ('GETBYTE', off, pop)
        m = LEA_RE.match(one)
        if m:
            off = ecx_off(m.group(1))
            return None if off is None else ('LEA', off, pop)
        m = IMM_RE.match(one)
        if m:
            v = int(m.group(1), 0)
            return ('GPTR' if IMAGE_LO <= v < IMAGE_HI else 'CONST', v, pop)
    return None


def owner_of(target, caches):
    """Who reaches this address - the second half of what makes a row legitimate."""
    got = vm.proof_for(target, caches['tables'], caches['vidx'], caches['tags'], caches['cache'])
    if not got.get('proven'):
        return None
    kind = got['kind']
    if kind == 'vtable_slot':
        return 'vtable %s slot %d/%d (RTTI-bounded)' % (got['vtable'], got['slot'], got['slots'])
    if kind in ('called', 'generated_call'):
        return got['oracle']
    if kind == 'data':
        return got['oracle']
    return got['oracle']


def load_rows():
    with open(LEDGER, encoding='utf-8', newline='') as fh:
        return list(csv.DictReader(fh))


def trivial_done(rows):
    out = []
    for r in rows:
        if r['status'] != 'done':
            continue
        try:
            if int(r['size']) > TRIVIAL_MAX_BYTES:
                continue
        except (TypeError, ValueError):
            continue
        out.append(r)
    return out


def build_table(rows, caches, verbose=True):
    """[(entry, kind, value, pop, owner)] plus the entries that must go back to the queue."""
    keep, reject = [], []
    for r in trivial_done(rows):
        entry = r['entry'].lower().replace('0x', '')
        body = trivial_audit.body_index().get(entry)
        texts = None
        if body is not None:
            texts = [m.group(2).strip().lower() for m in (cowdiff.SITE_RE.match(l) for l in body) if m]
        got = classify(texts or [])
        if got is None:
            reject.append((r, 'body is not a table shape: %s' % (' / '.join(texts or ['?'])[:70])))
            continue
        kind, value, pop = got
        owner = owner_of(int(entry, 16), caches)
        if not owner:
            reject.append((r, 'no owner: 0 callers, 0 references, no vtable slot'))
            continue
        keep.append((entry, kind, value, pop, owner))
    keep.sort()
    if verbose:
        by = {}
        for _e, k, _v, _p, _o in keep:
            by[k] = by.get(k, 0) + 1
        print('table: %d row(s), %d rejected' % (len(keep), len(reject)))
        for k, n in sorted(by.items(), key=lambda kv: -kv[1]):
            print('   %5d  COW_TRIV_%s' % (n, k))
        for r, why in reject[:20]:
            print('   reject %s %s: %s' % (r['entry'], r['name'], why))
        if len(reject) > 20:
            print('   ... and %d more' % (len(reject) - 20))
    return keep, reject


def render_def(keep):
    head = (
        '/* src/tables/cow_trivial_rows.def - THE TABLE. Generated by tools/cow/mktable.py from\n'
        '   ledger/functions.csv and generated/all: one row per entry whose whole body is one of the\n'
        '   shapes in layout/trivial.h and which the vtable model can name an owner for. Do not edit -\n'
        '   rerun `python tools/cow/mktable.py --write`. `python tools/cow/mktable.py --check 0x<hex>`\n'
        '   re-derives a row from the bytes, which is how tools/cow/gate.ps1 keeps it honest.\n\n'
        '   Columns: (entry, kind, value, pop, owner). The value is the immediate, the global VA or the\n'
        '   field offset; pop is what the entry\'s `ret` cleans; owner is who reaches the address. The\n'
        '   meaning of every kind is in layout/trivial.h; the only code is src/tables/cow_trivial.c.\n'
        '*/\n\n')
    body = []
    for entry, kind, value, pop, owner in keep:
        own = owner.replace('"', "'")
        body.append('COW_TRIVIAL_ROW(%s, COW_TRIV_%s, 0x%08Xu, 0x%02Xu, "%s")\n'
                    % (entry, kind, value & 0xFFFFFFFF, pop & 0xFF, own))
    return head + ''.join(body)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--write', action='store_true')
    ap.add_argument('--report', action='store_true')
    ap.add_argument('--check', default=None, help='re-derive one entry\'s row and compare')
    ap.add_argument('--json', action='store_true')
    args = ap.parse_args()

    rows = load_rows()

    if args.check:
        entry = args.check.lower().replace('0x', '')
        row = next((r for r in rows if r['entry'].lower().replace('0x', '') == entry), None)
        if row is None:
            print('TABLE CHECK FAIL %s no ledger row' % entry)
            return 1
        body = trivial_audit.body_index().get(entry)
        texts = [m.group(2).strip().lower() for m in (cowdiff.SITE_RE.match(l) for l in body) if m] \
            if body is not None else []
        got = classify(texts)
        if got is None:
            print('TABLE CHECK FAIL %s not a table shape: %s' % (entry, ' / '.join(texts)[:70]))
            return 1
        kind, value, pop = got
        path = os.path.join(ROOT, TABLE_DEF)
        line = None
        if os.path.isfile(path):
            for l in open(path, encoding='utf-8'):
                if l.startswith('COW_TRIVIAL_ROW(%s,' % entry):
                    line = l.strip()
        if line is None:
            print('TABLE CHECK FAIL %s no row in %s' % (entry, TABLE_DEF))
            return 1
        want = 'COW_TRIVIAL_ROW(%s, COW_TRIV_%s, 0x%08Xu, 0x%02Xu,' % (entry, kind, value & 0xFFFFFFFF,
                                                                        pop & 0xFF)
        if not line.startswith(want):
            print('TABLE CHECK FAIL %s the bytes say %s, the row says %s'
                  % (entry, want, line.split('"')[0].rstrip()))
            return 1
        print('TABLE CHECK PASS %s %s pop=%d (%s)' % (entry, kind, pop, line.split('"')[1]))
        return 0

    caches = {'tables': vm.enumerate_vtables(2), 'vidx': vm.vendor_string_index(),
              'tags': vm.classname_strings()}
    caches['cache'] = {'ctor': vm.constructor_vtables(caches['tags']),
                       'col': vm.col_classnames(caches['tables'], caches['tags']),
                       'strings': {}}
    keep, reject = build_table(rows, caches, verbose=not args.json)

    if args.json:
        print(json.dumps({'rows': len(keep), 'rejected': [{'entry': r['entry'], 'why': w}
                                                           for r, w in reject],
                          'kinds': {k: sum(1 for _e, kk, _v, _p, _o in keep if kk == k)
                                    for k in sorted({kk for _e, kk, _v, _p, _o in keep})}}, indent=1))
        return 0

    if not args.write:
        return 0

    os.makedirs(os.path.dirname(os.path.join(ROOT, TABLE_DEF)), exist_ok=True)
    text = render_def(keep)
    with open(os.path.join(ROOT, TABLE_DEF), 'w', encoding='utf-8', newline='\n') as fh:
        fh.write(text)
    print('wrote %s (%d rows)' % (TABLE_DEF, len(keep)))

    # the ledger: tabled rows point at the shared body and carry their owner; rejected rows go back to
    # the queue rather than staying booked on a shape we cannot justify
    by_entry = {e: (k, v, p, o) for e, k, v, p, o in keep}
    rejects = {r['entry'].lower().replace('0x', ''): w for r, w in reject}
    out = []
    for r in rows:
        e = r['entry'].lower().replace('0x', '')
        if e in by_entry:
            kind, value, pop, owner = by_entry[e]
            r['name'] = 'cow_%s' % e
            r['file'] = TABLE_C
            r['oracle_refs'] = 'COW_TRIV_%s value=0x%08x pop=%d; %s' % (kind, value, pop, owner)
            r['verified'] = 'true'
            r['note'] = 'trivial table row (tools/cow/mktable.py)'
        elif e in rejects:
            r['status'] = 'todo'
            r['file'] = ''
            r['name'] = ''
            r['oracle_refs'] = ''
            r['verified'] = 'false'
            r['note'] = 'un-tabled: ' + rejects[e]
        out.append(r)
    with open(LEDGER, 'w', encoding='utf-8', newline='') as fh:
        w = csv.DictWriter(fh, fieldnames=list(rows[0].keys()))
        w.writeheader()
        w.writerows(out)
    print('ledger: %d tabled, %d back to todo' % (len(by_entry), len(rejects)))
    return 0


if __name__ == '__main__':
    sys.exit(main())
