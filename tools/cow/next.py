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


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--ledger', default=os.path.join(ROOT, 'ledger', 'functions.csv'))
    ap.add_argument('--rank', type=int, default=None, help='force a leaf_rank (default: the lowest with work)')
    ap.add_argument('--limit', type=int, default=4)
    ap.add_argument('--cycle', action='store_true', help='only rows in a call cycle')
    ap.add_argument('--json', action='store_true')
    args = ap.parse_args()

    with open(args.ledger, newline='', encoding='utf-8') as fh:
        rows = list(csv.DictReader(fh))
    todo = [r for r in rows if r['status'] == 'todo' and r['thunk'].lower() != 'true']
    if args.cycle:
        todo = [r for r in todo if r['cycle'] == 'true']
    if not todo:
        print('NOTHING TODO' if not args.json else '{"next":[]}')
        return 0
    ranks = collections.Counter(int(r['leaf_rank']) for r in todo)
    rank = args.rank if args.rank is not None else min(ranks)
    picked = sorted((r for r in todo if int(r['leaf_rank']) == rank),
                    key=lambda r: (int(r['size']), r['entry']))[:args.limit]
    if args.json:
        print(json.dumps({'rank': rank, 'todo_at_rank': ranks[rank], 'todo_total': len(todo),
                          'next': [{'entry': r['entry'], 'size': r['size'], 'callees': r['callees'],
                                    'cycle': r['cycle'], 'name': r['name']} for r in picked]}, indent=1))
        return 0
    print('next unit: %s  (leaf_rank %d, %d todo there, %d todo overall)'
          % (picked[0]['entry'], rank, ranks[rank], len(todo)))
    for r in picked:
        print('  %s size=%-6s callees=%-3s cycle=%-5s %s'
              % (r['entry'], r['size'], r['callees'], r['cycle'], r['name'] or ''))
    return 0


if __name__ == '__main__':
    sys.exit(main())
