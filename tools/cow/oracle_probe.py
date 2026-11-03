"""How much of an oracle lands on OUR functions? The join the loop needs before it trusts a name.

vendor/cow_ffxi_disassembly carries Disassembly_Tools/artifacts/ffximain_tables_v0.zip (built 2026-10-02
from the vault's own install):

  tables_functions.csv   16,010 function-start seeds        va, rva, seed(call|vtable)
  tables_vtables.csv      1,059 vtables                      vtable_va, slots, section, slot_targets_first8
  tables_strings.csv      3,581 code-referenced strings      va, len, text   (cp932)
  tables_classnames.csv    113 class tag strings             name, va, referenced_from_code
  tables_src_paths.txt     96 leaked build paths

That build is NOT ours (vault install md5 fb7464073c06489268fdd9215c3e5313; our 2026-10-05 retail
FFXiMain.dll is ac6d09d9cdb9dc2acb38317a5f57f3bd), so a row is only usable where the address still means
the same code. This asks instead of assuming: it reads a CSV straight out of the zip - nothing is
extracted into the repo, the tables belong to the vault and we cite them - and reports, per leaf_rank,
how many rows hit a ledger entry exactly and how many land inside some function's range.

  python tools/cow/oracle_probe.py --peek 5
  python tools/cow/oracle_probe.py
  python tools/cow/oracle_probe.py --csv tables_strings.csv --sample 8 --rank 0
  python tools/cow/oracle_probe.py --csv tables_classnames.csv --json
"""
import argparse
import bisect
import collections
import csv
import io
import json
import os
import re
import sys
import zipfile

# The console is cp1252 and tables_strings.csv is cp932-decoded: printing a 涙 without this dies with
# UnicodeEncodeError in the middle of a run, so every tool here reconfigures stdout the same way.
if hasattr(sys.stdout, 'reconfigure'):
    sys.stdout.reconfigure(encoding='utf-8', errors='replace')

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
ZIP = os.path.join(ROOT, 'vendor', 'cow_ffxi_disassembly', 'Disassembly_Tools', 'artifacts',
                   'ffximain_tables_v0.zip')
LEDGER = os.path.join(ROOT, 'ledger', 'functions.csv')
IMAGE_BASE = 0x10000000
ADDR_RE = re.compile(r'^(?:0x)?([0-9a-fA-F]{6,8})$')
NAME_RE = re.compile(r'^[A-Za-z_~][A-Za-z0-9_~:().,$+-]{1,120}$')


def read_csv_from_zip(path, member):
    if not os.path.isfile(path):
        raise SystemExit('no such zip: %s' % path)
    with zipfile.ZipFile(path) as zf:
        names = [n for n in zf.namelist() if n.endswith(('.csv', '.txt'))]
        key = member if member in names else next((n for n in names if n.endswith(member)), None)
        if key is None:
            raise SystemExit('%s not in %s (has: %s)'
                             % (member, os.path.basename(path), ', '.join(names)))
        with zf.open(key) as raw:
            text = raw.read().decode('utf-8', 'replace')
    return list(csv.reader(io.StringIO(text)))


def sniff(rows):
    """(header, address_col, name_col, add_base). Guesses, because these tables were not made for us."""
    header, body = rows[0], rows[1:]
    if not body:
        raise SystemExit('empty csv')
    sample = body[:400]
    acol = ncol = None
    for col in range(max(len(r) for r in sample)):
        vals = [r[col].strip() for r in sample if len(r) > col and r[col].strip()]
        if not vals:
            continue
        title = (header[col] if col < len(header) else '').lower()
        hits = sum(1 for v in vals if ADDR_RE.match(v))
        if acol is None and hits >= 0.8 * len(vals) and ('va' in title or 'addr' in title or 'rva' in title):
            acol = col
        names = sum(1 for v in vals if NAME_RE.match(v) and not ADDR_RE.match(v))
        if ncol is None and names >= 0.6 * len(vals):
            ncol = col
    if acol is None:
        raise SystemExit('no address-looking column; header was: %s' % header)
    if ncol == acol:
        ncol = None
    add_base = IMAGE_BASE if 'rva' in (header[acol] if acol < len(header) else '').lower() else 0
    return header, acol, ncol, add_base


def load_ledger(path):
    with open(path, encoding='utf-8', newline='') as fh:
        rows = list(csv.DictReader(fh))
    entries = {}
    ranges = []
    for r in rows:
        entry = int(r['entry'], 16)
        entries[entry] = r
        ranges.append((entry, int(r['end'], 16) if r.get('end') else entry + 1, r))
    ranges.sort()
    starts = [a for a, _, _ in ranges]
    return entries, ranges, starts


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--zip', default=ZIP)
    ap.add_argument('--csv', default='tables_functions.csv')
    ap.add_argument('--ledger', default=LEDGER)
    ap.add_argument('--base', type=lambda s: int(s, 16), default=None,
                    help='override the value added to the table address (default: 0 for a va column, '
                         '0x10000000 for an rva column)')
    ap.add_argument('--peek', type=int, default=0, help='print N raw rows plus what was sniffed')
    ap.add_argument('--sample', type=int, default=5)
    ap.add_argument('--rank', help='restrict the report to one leaf_rank, or 3+ for three and up')
    ap.add_argument('--json', action='store_true')
    args = ap.parse_args()

    rows = read_csv_from_zip(args.zip, args.csv)
    header, acol, ncol, guess_base = sniff(rows)
    base = guess_base if args.base is None else args.base
    body = [r for r in rows[1:] if len(r) > acol]
    if args.peek:
        print('columns: %s' % (header,))
        print('address column=%d (%s) name column=%s added base=0x%x'
              % (acol, header[acol] if acol < len(header) else '?',
                 header[ncol] if ncol is not None else None, base))
        for r in body[:args.peek]:
            print('  %s' % (r,))
        return 0

    entries, ranges, starts = load_ledger(args.ledger)

    def rank_ok(row):
        if not args.rank:
            return True
        rank = int(row['leaf_rank'])
        return rank >= 3 if args.rank.endswith('+') else rank == int(args.rank)

    exact = collections.Counter()
    inside = collections.Counter()
    total_rank = collections.Counter(int(r['leaf_rank']) for _, _, r in ranges if rank_ok(r))
    examples = []
    seen_exact, seen_inside = set(), set()
    for r in body:
        m = ADDR_RE.match(r[acol].strip())
        if not m:
            continue
        va = int(m.group(1), 16) + base
        name = r[ncol].strip() if ncol is not None else ''
        row = entries.get(va)
        if row is not None and rank_ok(row):
            if va not in seen_exact:
                seen_exact.add(va)
                exact[int(row['leaf_rank'])] += 1
                if len(examples) < args.sample:
                    examples.append({'va': '%08x' % va, 'name': name or '(no name column)',
                                     'leaf_rank': row['leaf_rank'], 'size': row['size'],
                                     'status': row['status']})
            continue
        i = bisect.bisect_right(starts, va) - 1
        if i >= 0:
            lo, hi, row = ranges[i]
            if lo < va < hi and rank_ok(row):
                seen_inside.add(va)
                inside[int(row['leaf_rank'])] += 1

    ranks = sorted(total_rank)
    out = {'csv': args.csv, 'zip': os.path.relpath(args.zip, ROOT), 'rows': len(body),
           'addresses': len(seen_exact) + len(seen_inside), 'ledger_rows': len(entries),
           'exact_entry_hits': sum(exact.values()), 'inside_function_hits': sum(inside.values()),
           'exact_pct': round(100.0 * sum(exact.values()) / max(1, len(entries)), 2),
           'by_leaf_rank': {str(k): 'exact %d, inside %d of %d' % (exact.get(k, 0), inside.get(k, 0),
                                                                   total_rank[k]) for k in ranks},
           'examples': [{'entry': '0x%s' % e['va'], **e} for e in examples]}
    del out['examples'][:]
    out['examples'] = examples
    if args.json:
        print(json.dumps(out, indent=1))
        return 0
    print('%s  (%s)' % (args.csv, out['zip']))
    print('  rows=%d  ledger=%d  rows on a ledger entry=%d (%.2f%%)  rows inside a function=%d'
          % (out['rows'], out['ledger_rows'], out['exact_entry_hits'], out['exact_pct'],
             out['inside_function_hits']))
    for k in ranks:
        print('    leaf_rank %-3s %s' % (k, out['by_leaf_rank'][str(k)]))
    for e in examples:
        print('    0x%s  %-42s rank=%s size=%s %s'
              % (e['va'], e['name'][:42], e['leaf_rank'], e['size'], e['status']))
    return 0


if __name__ == '__main__':
    sys.exit(main())
