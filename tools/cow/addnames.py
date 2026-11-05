"""Append rows to cow/names.csv from a JSON list, refusing to duplicate a name.

    python tools/cow/addnames.py build/names_103165a8.json

The loop registers every identifier it invents (docs/cow/STYLE.md); a hand-written conversion has the
same duty as the generators, and this is how it discharges it without a throwaway `python -c`. Each
entry is [kind, id, name, confidence, evidence]. A name that is already in the ledger of names is
skipped, so re-running a unit's registration is safe.
"""
import argparse
import csv
import json
import os
import sys

if hasattr(sys.stdout, 'reconfigure'):
    sys.stdout.reconfigure(encoding='utf-8', errors='replace')

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(HERE))
PATH = os.path.join(ROOT, 'cow', 'names.csv')


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('json_file', help='a JSON array of [kind, id, name, confidence, evidence]')
    ap.add_argument('--commit', default='head', help='first_seen_commit column (default: head)')
    args = ap.parse_args()

    with open(args.json_file, encoding='utf-8') as fh:
        rows = json.load(fh)

    with open(PATH, newline='', encoding='utf-8') as fh:
        seen_names = {r['name'] for r in csv.DictReader(fh)}

    added = 0
    with open(PATH, 'a', newline='', encoding='utf-8') as fh:
        w = csv.writer(fh, quoting=csv.QUOTE_MINIMAL, lineterminator='\n')
        for kind, ident_id, name, confidence, evidence in rows:
            if name in seen_names:
                print('  skip (already registered): %s' % name)
                continue
            w.writerow([kind, ident_id, name, confidence, evidence, args.commit])
            seen_names.add(name)
            added += 1
            print('  + %s %s [%s]' % (kind, name, confidence))
    print('names.csv: %d row(s) added' % added)


if __name__ == '__main__':
    main()
