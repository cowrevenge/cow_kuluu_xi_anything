"""Delete the files and the names the trivial table replaced.

    python tools/cow/table_prune.py            # report
    python tools/cow/table_prune.py --write    # delete and rewrite cow/names.csv

It reads the ledger as COMMITTED (the state before `mktable.py --write` pointed the shapes at the table),
takes the file each trivial row used to name, and removes those files - but only the ones no live row
still names, so a shared body that a real conversion happens to use survives. Then it prunes cow/names.csv
of the identifiers that no longer exist: the per-entry stub names (a tabled row is named `cow_<hex>` in
the ledger and the row plus its owner is the record, so there is no invented name to register) and the
family bodies whose names were semantic guesses about a shape (`cow_return_value`, `cow_always_true`, ...).

What it adds back is the table's own vocabulary: the kinds in layout/trivial.h and the runner in
src/tables/cow_trivial.c, which tools/cow/gate.ps1's names check requires for every tabled unit.
"""
import argparse
import csv
import io
import os
import subprocess
import sys

if hasattr(sys.stdout, 'reconfigure'):
    sys.stdout.reconfigure(encoding='utf-8', errors='replace')

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(HERE))
LEDGER = os.path.join(ROOT, 'ledger', 'functions.csv')
NAMES = os.path.join(ROOT, 'cow', 'names.csv')
TABLE_C = 'src/tables/cow_trivial.c'
TABLE_DEF = 'src/tables/cow_trivial_rows.def'
# the shared bodies the runner replaces: their names were guesses about what a shape means
FAMILY_BODIES = ('src/util/cow_return.c', 'src/util/cow_addrs.c', 'src/util/cow_accessors.c')
FAMILY_MARKS = ('cow_return_', 'cow_addr_', 'cow_read_global_', 'cow_accessor_')

TABLE_NAMES = [
    ('type', 'layout/trivial.h', 'CowTrivialRow', 'confirmed',
     'layout/trivial.h: one row of the trivial table - entry, kind, value, pop, owner'),
    ('enum', 'layout/trivial.h', 'CowTrivialKind', 'confirmed',
     'layout/trivial.h: the vocabulary of one- and two-instruction shapes; every member names the '
     'generated instruction texts it stands for, and tools/cow/mktable.py is the only thing that may '
     'put an entry into one'),
    ('function', TABLE_C, 'cow_trivial_run', 'confirmed',
     'src/tables/cow_trivial.c: the one body behind every row - switch on the kind, do what the shape '
     'does, return the way the entry\'s own `ret` returned; proved per row by tools/cow/table_proof.py'),
    ('function', TABLE_C, 'cow_trivial_dispatch', 'confirmed',
     'src/tables/cow_trivial.c: binary search over the rows by entry, then cow_trivial_run'),
    ('variable', TABLE_C, 'g_cow_trivial_rows', 'confirmed',
     'src/tables/cow_trivial.c: the rows, expanded from ' + TABLE_DEF + ' and sorted by entry'),
    ('variable', TABLE_C, 'g_cow_trivial_rows_count', 'confirmed',
     'src/tables/cow_trivial.c: how many rows the generator wrote'),
    ('macro', TABLE_DEF, 'COW_TRIVIAL_ROW', 'confirmed',
     TABLE_DEF + ': one row (entry, kind, value, pop, owner), expanded twice - the table and the adapters'),
]
KIND_DOC = {
    'COW_TRIV_RET': '`ret N`',
    'COW_TRIV_ZERO': '`xor eax, eax / ret N`',
    'COW_TRIV_SELF': '`mov eax, ecx / ret N`',
    'COW_TRIV_TRUE': '`mov al, 1 / ret N` - al only',
    'COW_TRIV_FALSE': '`xor al, al / ret N` - al only',
    'COW_TRIV_CONST': '`mov eax, <imm> / ret N`',
    'COW_TRIV_CONST_PUSH': '`push 1 / pop eax / ret N` - leaves the 1 in memory below esp',
    'COW_TRIV_GPTR': '`mov eax, <addr> / ret N` - the address itself, + RD',
    'COW_TRIV_GDWORD': '`mov eax, dword ptr [<addr>] / ret N`',
    'COW_TRIV_GBYTE': '`mov al, byte ptr [<addr>] / ret N` - al only',
    'COW_TRIV_GET': '`mov eax, dword ptr [ecx + off] / ret N`',
    'COW_TRIV_GETBYTE': '`mov al, byte ptr [ecx + off] / ret N` - al only',
    'COW_TRIV_LEA': '`lea eax, [ecx + off] / ret N`',
    'COW_TRIV_INCARG': '`mov eax, dword ptr [esp + 4] / inc eax / ret N`',
}


def head_ledger():
    """The ledger as committed - the only place the per-entry stub file names still exist."""
    p = subprocess.run(['git', 'show', 'HEAD:ledger/functions.csv'], cwd=ROOT, capture_output=True,
                       text=True, encoding='utf-8', errors='replace')
    if p.returncode:
        raise SystemExit('git show HEAD:ledger/functions.csv failed: %s' % p.stderr.strip()[:120])
    return list(csv.DictReader(io.StringIO(p.stdout)))


def still_used(path, rows):
    p = path.replace('\\', '/')
    return any((r.get('file') or '').replace('\\', '/') == p for r in rows)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--write', action='store_true')
    args = ap.parse_args()

    with open(LEDGER, encoding='utf-8', newline='') as fh:
        now = list(csv.DictReader(fh))
    tabled = {r['entry'].lower().replace('0x', '') for r in now
              if (r.get('file') or '').replace('\\', '/').startswith('src/tables/')}
    if not tabled:
        raise SystemExit('no tabled rows in the ledger - run python tools/cow/mktable.py --write first')

    seen = {}
    for r in head_ledger():
        e = r['entry'].lower().replace('0x', '')
        f = (r.get('file') or '').replace('\\', '/')
        if f and e in tabled and not f.startswith('src/tables/'):
            seen.setdefault(f, []).append(e)

    doomed, kept = [], []
    for f, entries in sorted(seen.items()):
        if still_used(f, now):
            kept.append((f, len(entries), 'a live row still names it'))
        else:
            doomed.append(f)
    for f in FAMILY_BODIES:
        p = os.path.join(ROOT, f.replace('/', os.sep))
        if not os.path.isfile(p):
            continue
        if still_used(f, now):
            kept.append((f, 0, 'a live row still names it'))
            continue
        doomed.append(f)

    # src/unsorted holds functions whose PURPOSE is not established - not shapes, and not files whose
    # entry is back in the queue. Anything there that no done row names is a leftover from an abandoned
    # booking: delete it, and let the loop write the real thing when it reaches the entry.
    unsorted = os.path.join(ROOT, 'src', 'unsorted')
    live_files = {(r.get('file') or '').replace('\\', '/') for r in now if r['status'] == 'done'}
    if os.path.isdir(unsorted):
        for f in sorted(os.listdir(unsorted)):
            rel = 'src/unsorted/' + f
            if not f.endswith('.c') or rel in live_files:
                continue
            doomed.append(rel)

    print('files to delete: %d' % len(doomed))
    for f in doomed[:10]:
        print('   rm %s' % f)
    if len(doomed) > 10:
        print('   ... and %d more' % (len(doomed) - 10))
    for f, n, why in kept:
        print('   keep %s (%d row(s)): %s' % (f, n, why))
    if not args.write:
        print('\nreport only; rerun with --write')
        return 0

    removed = 0
    for f in doomed:
        p = os.path.join(ROOT, f.replace('/', os.sep))
        if os.path.isfile(p):
            os.remove(p)
            removed += 1
    print('deleted %d file(s)' % removed)

    with open(NAMES, encoding='utf-8', newline='') as fh:
        rows = list(csv.DictReader(fh))
        fields = list(rows[0].keys())
    existing = {(r.get('kind'), r.get('id'), r.get('name')) for r in rows}
    drop_ids = {'0x' + e for e in tabled}
    keep_rows, dropped = [], 0
    for r in rows:
        kind, ident = (r.get('kind') or ''), (r.get('id') or '')
        if kind == 'function' and ident in drop_ids:
            dropped += 1                                  # the entry has a row, not a name
            continue
        if ident.replace('\\', '/') in FAMILY_BODIES:
            dropped += 1                                  # the body is gone, so the name is a lie
            continue
        if kind == 'function' and any((r.get('name') or '').startswith(m) for m in FAMILY_MARKS) \
                and (ident.replace('\\', '/') in FAMILY_BODIES or ident.startswith('src/util')):
            dropped += 1
            continue
        keep_rows.append(r)
    added = 0
    for kind, ident, name, conf, ev in TABLE_NAMES:
        if (kind, ident, name) in existing:
            continue
        keep_rows.append({'kind': kind, 'id': ident, 'name': name, 'confidence': conf,
                          'evidence': ev, 'first_seen_commit': 'head'})
        added += 1
    for name, doc in KIND_DOC.items():
        if ('enum', 'layout/trivial.h', name) in existing:
            continue
        keep_rows.append({'kind': 'enum', 'id': 'layout/trivial.h', 'name': name,
                          'confidence': 'confirmed',
                          'evidence': 'layout/trivial.h: the shape %s, tabled by tools/cow/mktable.py' % doc,
                          'first_seen_commit': 'head'})
        added += 1
    with open(NAMES, 'w', encoding='utf-8', newline='') as fh:
        w = csv.DictWriter(fh, fieldnames=fields)
        w.writeheader()
        w.writerows(keep_rows)
    print('names.csv: %d row(s) dropped, %d added (%d rows now)' % (dropped, added, len(keep_rows)))
    return 0


if __name__ == '__main__':
    sys.exit(main())
