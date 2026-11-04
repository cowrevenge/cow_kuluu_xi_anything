"""Set one ledger row's conversion state - the only sanctioned way to edit ledger/functions.csv.

The ledger is the loop's state and the input to genwraps.py, status.py and the gate, so it is updated
through here rather than by hand: one row, one command, and it refuses states that would lie (a done
row with no file, a thunk, an unknown status).

  python tools/cow/setstatus.py 0x103169e0 --status in_progress --note 'reading the body'
  python tools/cow/setstatus.py 0x103169e0 --status done --name memcpy --file src/util/crt.c \
      --oracle vendor/cow_ffxi_disassembly/README.md:crt --verified true
  python tools/cow/setstatus.py 0x103169e0 --status todo            # back to untouched
  python tools/cow/setstatus.py --summary
"""
import argparse
import csv
import os
import sys

if hasattr(sys.stdout, 'reconfigure'):
    sys.stdout.reconfigure(encoding='utf-8', errors='replace')

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
LEDGER = os.path.join(ROOT, 'ledger', 'functions.csv')
FIELDS = ['entry', 'end', 'size', 'thunk', 'status', 'name', 'file', 'oracle_refs', 'verified',
          'callees', 'leaf_rank', 'cycle', 'note']
STATUSES = ('todo', 'in_progress', 'done', 'failed', 'thunk')
TRUTH = ('true', 'false')


def norm(entry):
    e = entry.strip().lower()
    if e.startswith('0x'):
        e = e[2:]
    if len(e) != 8 or any(c not in '0123456789abcdef' for c in e):
        raise SystemExit('bad entry %r (want 0x100035a0)' % entry)
    return '0x' + e


def read(path):
    with open(path, encoding='utf-8', newline='') as fh:
        reader = csv.DictReader(fh)
        rows = list(reader)
        fields = reader.fieldnames
    return rows, fields


def write(path, rows, fields):
    with open(path, 'w', encoding='utf-8', newline='\n') as fh:
        w = csv.DictWriter(fh, fieldnames=fields, lineterminator='\n')
        w.writeheader()
        w.writerows(rows)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('entry', nargs='?', help='0x100035a0')
    ap.add_argument('--ledger', default=LEDGER)
    ap.add_argument('--status', choices=STATUSES)
    ap.add_argument('--name')
    ap.add_argument('--file', dest='file')
    ap.add_argument('--oracle', dest='oracle_refs')
    ap.add_argument('--verified', choices=TRUTH)
    ap.add_argument('--note')
    ap.add_argument('--summary', action='store_true')
    args = ap.parse_args()

    rows, fields = read(args.ledger)
    extra = [f for f in FIELDS if f not in fields]
    if 'note' in extra:            # the loop's checkpoint note; appended once, then stable
        fields = fields + ['note']
    if not args.entry:
        counts = {}
        for r in rows:
            counts[r['status']] = counts.get(r['status'], 0) + 1
        print('ledger: %d rows %s' % (len(rows), ' '.join('%s=%d' % kv for kv in sorted(counts.items()))))
        live = [r for r in rows if r['status'] == 'in_progress']
        for r in live[:10]:
            print('  in_progress %s %s %s' % (r['entry'], r.get('name') or '', (r.get('note') or '')[:60]))
        return 0

    entry = norm(args.entry)
    hit = [r for r in rows if r['entry'].lower() == entry]
    if not hit:
        raise SystemExit('%s is not in the ledger' % entry)
    r = hit[0]
    before = dict(r)

    for key in ('status', 'name', 'file', 'oracle_refs', 'verified', 'note'):
        value = getattr(args, key)
        if value is not None:
            r[key] = value

    if r['status'] == 'done':
        if r['thunk'].lower() == 'true':
            raise SystemExit('%s is a thunk: it has no body of its own, nothing to convert' % entry)
        if not r.get('file'):
            raise SystemExit('a done row needs --file (where the user function lives)')
        if not r.get('name'):
            raise SystemExit('a done row needs --name (even a guess or placeholder name)')
        if not os.path.isfile(os.path.join(ROOT, r['file'])):
            raise SystemExit('the done row names %s, which does not exist' % r['file'])
    if args.status == 'todo':
        for key in ('name', 'file', 'oracle_refs', 'note'):
            r[key] = ''
        r['verified'] = 'false'

    changed = [k for k in FIELDS if before.get(k, '') != r.get(k, '')]
    if not changed:
        print('%s already %s' % (entry, r['status']))
        return 0
    write(args.ledger, rows, fields)
    print('%s: %s' % (entry, ', '.join('%s %r->%r' % (k, before.get(k, ''), r.get(k, '')) for k in changed)))
    return 0


if __name__ == '__main__':
    sys.exit(main())
