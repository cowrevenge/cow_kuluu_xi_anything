"""Pick the next unit to convert: status=todo, lowest leaf_rank, then smallest size.

The loop asks this instead of remembering where it was - the ledger is the state.

  python tools/cow/next.py                 # the next unit, and the three behind it
  python tools/cow/next.py --rank 0 --limit 8 --json
  python tools/cow/next.py --cycle         # the next call-cycle group (converted as one unit)
"""
import argparse
import collections
import csv
import json
import os
import sys

if hasattr(sys.stdout, 'reconfigure'):
    sys.stdout.reconfigure(encoding='utf-8', errors='replace')

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

# ---------------------------------------------------------------- the size bands
#
# The queue has always SORTED by size (lowest leaf_rank, then smallest) - what it never said is which band a
# unit is in, so "the next 20 units" could be twenty 3-byte stubs or four 2 KB functions and nobody could see
# the difference without reading the size column. These names make the existing order visible; they do NOT
# change it. Ordering stays exactly as it was, and any change here that reorders the queue is wrong.
#
# Single definition on purpose: next.py, loopy.job() and status.py all import this rather than each keeping
# a copy, because three copies is how "tiny" ends up meaning 32 in one file and 64 in another and the STATUS
# table quietly disagrees with the queue.
BANDS = (('tiny', 32), ('small', 128), ('medium', 512), ('large', 2048), ('huge', None))


def band(size):
    """The band name for a byte size, or 'unknown' when the ledger has no usable size."""
    try:
        n = int(size)
    except (TypeError, ValueError):
        return 'unknown'
    for name, hi in BANDS:
        if hi is None or n <= hi:
            return name
    return 'huge'


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--ledger', default=os.path.join(ROOT, 'ledger', 'functions.csv'))
    ap.add_argument('--rank', type=int, default=None, help='force a leaf_rank (default: the lowest with work)')
    ap.add_argument('--limit', type=int, default=4)
    ap.add_argument('--cycle', action='store_true', help='only rows in a call cycle')
    ap.add_argument('--band', default='', choices=[''] + [b for b, _ in BANDS] + ['unknown'],
                    help='restrict the queue to one size band (tiny<=32, small<=128, medium<=512, '
                         'large<=2048, huge>2048). Filters the candidates; it does not reorder them.')
    ap.add_argument('--json', action='store_true')
    ap.add_argument('--skip-file', default=os.path.join(ROOT, 'cow', 'skip.txt'),
                    help='entries the loop has parked (a body that must be written by hand, or no proof '
                         'yet) are left out of the queue; one 0x-hex per line')
    args = ap.parse_args()

    with open(args.ledger, newline='', encoding='utf-8') as fh:
        rows = list(csv.DictReader(fh))
    skip = set()
    if args.skip_file and os.path.isfile(args.skip_file):
        with open(args.skip_file, encoding='utf-8', errors='replace') as fh:
            skip = {l.strip().lower() for l in fh if l.strip() and not l.startswith('#')}
    todo = [r for r in rows if r['status'] == 'todo' and r['thunk'].lower() != 'true'
            and r['entry'].lower() not in skip]
    if args.cycle:
        todo = [r for r in todo if r['cycle'] == 'true']
    # The histogram is taken BEFORE any band filter, and kept under its own name. Computed afterwards it
    # described the filter rather than the queue: asking for --band tiny reported tiny=everything and
    # small/medium/large/huge=0, which is not information about the tree at all, it is a mirror. A number
    # that only restates the question has to be called out, not shipped.
    band_hist = {b: sum(1 for r in todo if band(r['size']) == b) for b, _ in BANDS}
    band_hist['unknown'] = sum(1 for r in todo if band(r['size']) == 'unknown')
    if args.band:
        # Applied to the candidate set, before ranking: the queue still goes lowest leaf_rank then smallest
        # size, it just only considers units in one band. Restricting after sorting would hand out a band
        # slice of the same head of the queue and misrepresent what a band means.
        todo = [r for r in todo if band(r['size']) == args.band]
    if not todo:
        print('NOTHING TODO' if not args.json else '{"next":[]}')
        return 0
    ranks = collections.Counter(int(r['leaf_rank']) for r in todo)
    rank = args.rank if args.rank is not None else min(ranks)
    picked = sorted((r for r in todo if int(r['leaf_rank']) == rank),
                    key=lambda r: (int(r['size']), r['entry']))[:args.limit]
    if args.json:
        print(json.dumps({'rank': rank, 'todo_at_rank': ranks[rank], 'todo_total': len(todo),
                          'band': args.band or None,
                          # The whole queue's shape, not the filtered slice's - see the note above.
                          'bands_remaining': band_hist,
                          'next': [{'entry': r['entry'], 'size': r['size'], 'band': band(r['size']),
                                    'callees': r['callees'],
                                    'cycle': r['cycle'], 'name': r['name']} for r in picked]}, indent=1))
        return 0
    print('next unit: %s  (leaf_rank %d, %s, %d todo there, %d todo overall%s)'
          % (picked[0]['entry'], rank, band(picked[0]['size']), ranks[rank], len(todo),
             ', band=' + args.band if args.band else ''))
    for r in picked:
        print('  %s size=%-6s %-6s callees=%-3s cycle=%-5s %s'
              % (r['entry'], r['size'], band(r['size']), r['callees'], r['cycle'], r['name'] or ''))
    return 0


if __name__ == '__main__':
    sys.exit(main())
