"""Join ledger entries to the vendor disassembly tables - the evidence a review pass names from.

The loop books `placeholder` names for a bare `ret` because the code itself carries no evidence. The
vendor oracle does though: Disassembly_Tools/artifacts/ffximain_tables_v0.zip says *why* an address is a
function (seed = call or vtable), which vtables point at it, and which strings a function references.
This reads those tables straight out of the zip (nothing is extracted into the repo; the tables belong to
the vault and we cite them) and reports, per entry, what is joinable.

  python tools/cow/oracle_join.py --recent 60
  python tools/cow/oracle_join.py 0x1019bd40 0x1018c5e0 --json
  python tools/cow/oracle_join.py --recent 60 --apply     # writes oracle_refs via setstatus.py

`--apply` only fills the ledger's oracle_refs column (it calls tools/cow/setstatus.py, never the CSV
directly); it never renames and never changes a status, so a review pass cannot quietly mark something
verified that cowdiff did not prove.
"""
import argparse
import collections
import csv
import io
import json
import os
import re
import subprocess
import sys
import zipfile

if hasattr(sys.stdout, 'reconfigure'):
    sys.stdout.reconfigure(encoding='utf-8', errors='replace')

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
ZIP = os.path.join(ROOT, 'vendor', 'cow_ffxi_disassembly', 'Disassembly_Tools', 'artifacts',
                   'ffximain_tables_v0.zip')
LEDGER = os.path.join(ROOT, 'ledger', 'functions.csv')
SETSTATUS = os.path.join(ROOT, 'tools', 'cow', 'setstatus.py')


def table(member):
    with zipfile.ZipFile(ZIP) as zf:
        names = [n for n in zf.namelist() if n.endswith(('.csv', '.txt'))]
        key = next((n for n in names if n.endswith(member)), None)
        if key is None:
            raise SystemExit('%s not in zip (has: %s)' % (member, ', '.join(names)))
        with zf.open(key) as raw:
            text = raw.read().decode('utf-8', 'replace')
    return list(csv.reader(io.StringIO(text)))


def rows_of(member):
    rows = table(member)
    if not rows:
        return []
    header = [h.strip().lower() for h in rows[0]]
    out = []
    body = rows[1:] if any(h for h in header if h) else rows
    for r in body:
        if len(r) < len(header):
            continue
        out.append(dict(zip(header, [c.strip() for c in r[:len(header)]])))
    return out


def hexes(s):
    return [h.lower() for h in re.findall(r'1[0-9a-fA-F]{7}', s or '')]


def ledger_rows():
    with open(LEDGER, encoding='utf-8', newline='') as fh:
        return list(csv.DictReader(fh))


def build_index():
    """The four tables we can join against, keyed by address. Built once per run."""
    seeds = {}
    for r in rows_of('tables_functions.csv'):
        va = (r.get('va') or '').lower()
        if va:
            seeds.setdefault(va, r.get('seed', ''))

    slot_owner = collections.defaultdict(list)
    for r in rows_of('tables_vtables.csv'):
        vva = (r.get('vtable_va') or '').lower()
        for tgt in hexes(r.get('slot_targets_first8', '')):
            slot_owner['0x' + tgt].append((vva, r.get('section', '')))

    strs = collections.defaultdict(list)
    for r in rows_of('tables_strings.csv'):
        for frm in hexes(r.get('va', '')) + hexes(r.get('referenced_from_code', '')):
            strs['0x' + frm].append((r.get('va', ''), r.get('text', '')))

    class_hit = collections.defaultdict(list)
    for r in rows_of('tables_classnames.csv'):
        for frm in hexes(r.get('va', '')) + hexes(r.get('referenced_from_code', '')):
            class_hit['0x' + frm].append(r.get('name', ''))
    return {'seeds': seeds, 'slot_owner': slot_owner, 'strings': strs, 'classnames': class_hit}


def evidence_for(entry, index):
    """What the oracle says about one entry address, as ledger-safe citation strings.

    seed=vtable means the address is the target of a vtable slot in the vendor's own tables, i.e. it is a
    virtual method; that is the only evidence here that justifies a name beyond placeholder, and it is
    cited rather than copied.
    """
    key = entry.lower() if entry.startswith('0x') else '0x' + entry.lower()
    seed = index['seeds'].get(key[2:], '') or index['seeds'].get(key, '')
    vt = index['slot_owner'].get(key, [])
    hits = index['strings'].get(key, [])
    cname = index['classnames'].get(key, [])
    evidence = []
    if seed:
        evidence.append('oracle:tables_functions seed=%s' % seed)
    if vt:
        evidence.append('oracle:vtable_slot of=%s' % ','.join(sorted({v for v, _ in vt if v})[:3]))
    if cname:
        evidence.append('oracle:classname=%s' % cname[0])
    for va, text in hits[:2]:
        clean = re.sub(r'[^ -~]', '.', text)[:40]
        if clean:
            evidence.append('oracle:string@%s "%s"' % (va, clean))
    return {'entry': key, 'seed': seed, 'vtable_slots': len(vt), 'strings': len(hits),
            'classname': cname[0] if cname else '', 'evidence': evidence}


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('entries', nargs='*', help='0x10xxxxxx entries to look up')
    ap.add_argument('--recent', type=int, default=0, help='the last N done rows in the ledger')
    ap.add_argument('--name', default=None, help='only rows whose name matches this')
    ap.add_argument('--json', action='store_true')
    ap.add_argument('--apply', action='store_true', help='write oracle_refs with setstatus.py')
    args = ap.parse_args()

    rows = ledger_rows()
    done = [r for r in rows if r['status'] == 'done']
    if args.name:
        done = [r for r in done if r['name'] == args.name]
    picked = {r['entry'].lower(): r for r in done[-args.recent:] if args.recent}
    for e in args.entries:
        key = e.lower() if e.startswith('0x') else '0x' + e.lower()
        hit = next((r for r in rows if r['entry'].lower() == key), None)
        if hit is None:
            raise SystemExit('%s is not in the ledger' % key)
        picked[key] = hit
    if not picked:
        raise SystemExit('nothing to look up (pass entries or --recent N)')

    seeds = {}
    for r in rows_of('tables_functions.csv'):
        va = (r.get('va') or '').lower()
        if va:
            seeds.setdefault(va, r.get('seed', ''))

    # which function addresses appear as vtable slot targets, and in which vtable/section
    slot_owner = collections.defaultdict(list)
    for r in rows_of('tables_vtables.csv'):
        vva = (r.get('vtable_va') or '').lower()
        for tgt in hexes(r.get('slot_targets_first8', '')):
            slot_owner['0x' + tgt].append((vva, r.get('section', '')))

    # strings whose code reference points at one of our entries
    strs = collections.defaultdict(list)
    for r in rows_of('tables_strings.csv'):
        for frm in hexes(r.get('va', '')) + hexes(r.get('referenced_from_code', '')):
            strs['0x' + frm].append((r.get('va', ''), r.get('text', '')))

    classes = []
    for r in rows_of('tables_classnames.csv'):
        for frm in hexes(r.get('va', '')) + hexes(r.get('referenced_from_code', '')):
            classes.append(('0x' + frm, r.get('name', '')))
    class_hit = collections.defaultdict(list)
    for key, name in classes:
        class_hit[key].append(name)

    report = []
    for key, row in sorted(picked.items()):
        seed = seeds.get(key[2:], '') or seeds.get(key, '')
        vt = slot_owner.get(key, [])
        hits = strs.get(key, [])
        cname = class_hit.get(key, [])
        evidence = []
        if seed:
            evidence.append('oracle:tables_functions seed=%s' % seed)
        if vt:
            evidence.append('oracle:vtable_slot of=%s' % ','.join(sorted({v for v, _ in vt if v})[:3]))
        if cname:
            evidence.append('oracle:classname=%s' % cname[0])
        for va, text in hits[:2]:
            clean = re.sub(r'[^ -~]', '.', text)[:40]
            if clean:
                evidence.append('oracle:string@%s "%s"' % (va, clean))
        report.append({'entry': key, 'name': row['name'], 'file': row['file'],
                       'seed': seed, 'vtable_slots': len(vt), 'strings': len(hits),
                       'classname': cname[0] if cname else '', 'evidence': evidence,
                       'oracle_refs': row.get('oracle_refs', '')})

    if args.apply:
        for item in report:
            if not item['evidence']:
                continue
            refs = ';'.join(item['evidence'])
            subprocess.run([sys.executable, SETSTATUS, item['entry'], '--oracle', refs],
                           cwd=ROOT, capture_output=True, text=True)
            item['applied'] = refs

    if args.json:
        print(json.dumps(report, indent=1))
    else:
        tally = collections.Counter()
        for item in report:
            tally['with_evidence' if item['evidence'] else 'none'] += 1
            for line in item['evidence']:
                tally[line.split(':')[1]] += 1
        print('ORACLE JOIN: %d entries -> %s' % (len(report), dict(tally)))
        for item in report:
            if item['evidence']:
                print('  %s %-24s %s' % (item['entry'], item['name'], ' | '.join(item['evidence'][:4])))


if __name__ == '__main__':
    main()
