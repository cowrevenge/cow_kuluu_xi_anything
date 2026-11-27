"""Append rows to cow/names.csv from a JSON list, refusing to duplicate a name.

    python tools/cow/addnames.py build/names_103165a8.json

The loop registers every identifier it invents (docs/cow/STYLE.md); a hand-written conversion has the
same duty as the generators, and this is how it discharges it without a throwaway `python -c`. Each
entry is [kind, id, name, confidence, evidence]. A name that is already in the ledger of names is
skipped, so re-running a unit's registration is safe.

    python tools/cow/addnames.py build/names_dead.json --remove

and the same file removes rows, which is what the ledger's `dead` entries need: a placeholder name for a body
that nothing in the image reaches is not a placeholder, it is a claim about a function that is not the user's
code. `--remove` takes [kind, id, name] and refuses anything still cited by the ledger or the C it ships.
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
PATH = os.path.join(ROOT, 'cow', 'names.csv')


def _cited(name):
    """True when an identifier is still used: the ledger names a live row after it, or its text appears as a
    whole word in the C we ship. A name that is in use must never be dropped from names.csv: the names check in
    gate.ps1 reads that file, and an identifier without a row there is a build failure with a confusing reason."""
    with open(os.path.join(ROOT, 'ledger', 'functions.csv'), newline='', encoding='utf-8') as fh:
        for r in csv.DictReader(fh):
            if r.get('name') == name and r.get('status') not in ('', 'todo', 'dead'):
                return 'ledger row %s (%s)' % (r['entry'], r['status'])
    for d in ('src', 'layout'):
        base = os.path.join(ROOT, d)
        if not os.path.isdir(base):
            continue
        word = name.encode()
        for _root, _dirs, files in os.walk(base):
            for f in files:
                if not f.endswith(('.c', '.h')):
                    continue
                try:
                    with open(os.path.join(_root, f), 'rb') as fh:
                        if re.search(rb'(?<![A-Za-z0-9_])' + re.escape(word) + rb'(?![A-Za-z0-9_])',
                                     fh.read()) is not None:
                            return os.path.join(d, f)
                except OSError:
                    continue
    return None


def remove(json_file):
    """Drop the rows a JSON list names, and refuse any that is still in use.

    This exists because the trivial table and the `dead` entries left behind names for functions that are not
    the user's code (`unk_return_noop` on entries nothing in the image reaches). A name for a body that does
    not exist is not a placeholder, it is a claim, and claims have to go when the thing they claim is gone."""
    with open(json_file, encoding='utf-8') as fh:
        want = json.load(fh)
    want = {tuple(str(x) for x in row[:3]) for row in want}
    with open(PATH, newline='', encoding='utf-8') as fh:
        reader = csv.DictReader(fh)
        fields = reader.fieldnames
        rows = list(reader)
    kept, gone, refused = [], 0, []

    def ident(v):
        """the id as the caller means it: names.csv writes 0x100035a0, a caller may say either form"""
        return str(v).strip().lower().removeprefix("0x")
    want = {(k, ident(i), n) for k, i, n in want}
    for r in rows:
        key = (str(r['kind']), ident(r['id']), str(r['name']))
        if key not in want:
            kept.append(r)
            continue
        why = _cited(r['name'])
        if why:
            refused.append((r['name'], why))
            kept.append(r)
            continue
        gone += 1
        print('  - %s %s [%s]' % (r['kind'], r['name'], r['id']))
    if refused:
        for name, why in refused:
            print('  REFUSED %s: still cited by %s' % (name, why))
    tmp = PATH + '.tmp'
    with open(tmp, 'w', newline='', encoding='utf-8') as fh:
        w = csv.DictWriter(fh, fieldnames=fields, lineterminator='\n', quoting=csv.QUOTE_MINIMAL)
        w.writeheader()
        w.writerows(kept)
    os.replace(tmp, PATH)
    print('names.csv: %d row(s) removed, %d refused, %d remain' % (gone, len(refused), len(kept)))
    return 1 if refused else 0


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('json_file', nargs='?', help='a JSON array of [kind, id, name, confidence, evidence]')
    ap.add_argument('--commit', default='head', help='first_seen_commit column (default: head)')
    ap.add_argument('--remove', action='store_true',
                    help='instead of appending, drop the rows this JSON list names ([kind, id, name]); a name'
                         ' still used by the ledger or the C is refused, not dropped')
    args = ap.parse_args()
    if not args.json_file:
        ap.error('a JSON file is needed (the rows to add, or with --remove the rows to drop)')
    if args.remove:
        return remove(args.json_file)

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
