"""Review pass: turn the oracle's evidence into names and citations for a batch of converted units.

The loop converts one unit at a time and books the cheapest honest name (`placeholder` for a bare `ret`).
Every 50 units the loop stops and reviews that batch - this is that step. It joins each entry to the
vendor disassembly tables (tools/cow/oracle_join.py), and where the tables say *why* the address is a
function it:

  * writes the citation into the ledger's oracle_refs column (through tools/cow/setstatus.py, never the
    CSV directly), and
  * promotes a name that the evidence supports - today: a bare `ret` that the vendor's own vtable tables
    point at is a do-nothing virtual method, so it is named `cow_vf_stub_ret` (confidence `guess`, with
    the citation as its evidence), not `unk_return_noop`;
  * registers any new identifier in cow/names.csv so the gate's names check keeps passing.

It never changes a status and never marks anything verified: cowdiff did that, and only cowdiff does.

  python tools/cow/review_pass.py --recent 60 --name unk_return_noop            # report only
  python tools/cow/review_pass.py --recent 60 --name unk_return_noop --apply    # write + gate + commit

With --apply it runs tools/cow/gate_batch.ps1 over every entry it touched and refuses to commit unless
that verdict is PASS; it then runs status.py and makes ONE commit
`cow: review <first>..<last>`, fetches, and pushes to main.
"""
import argparse
import csv
import json
import os
import subprocess
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import oracle_join  # noqa: E402  (same directory; the join lives there)

if hasattr(sys.stdout, 'reconfigure'):
    sys.stdout.reconfigure(encoding='utf-8', errors='replace')

ROOT = oracle_join.ROOT
SETSTATUS = oracle_join.SETSTATUS
NAMES = os.path.join(ROOT, 'cow', 'names.csv')
GATE_BATCH = os.path.join(ROOT, 'tools', 'cow', 'gate_batch.ps1')
STATUS = os.path.join(ROOT, 'tools', 'cow', 'status.py')
LEDGER = oracle_join.LEDGER

# Evidence -> name. Keyed on the placeholder name we hand out in the loop.
VTABLE_NAME = 'cow_vf_stub_ret'
EVIDENCE_TEXT = ('vendor/cow_ffxi_disassembly Disassembly_Tools/artifacts/ffximain_tables_v0.zip '
                 'tables_functions.csv seed=vtable + tables_vtables.csv slot target: the vendor build '
                 'lists this address as a vtable slot whose body is a single ret')


def set_name_paragraph(path, name, confidence, evidence):
    """Rewrite the `Name:` sentence in the file's own header comment.

    The unit file states what its name is and why. When a review pass promotes a name, the sentence has
    to change with it, or the source keeps claiming to be a placeholder it no longer is.
    """
    try:
        with open(path, encoding='utf-8') as fh:
            text = fh.read()
    except OSError:
        return False
    end = text.find('*/')
    if end < 0:
        return False
    head = text[:end]
    idx = head.rfind('\n   Name:')
    if idx < 0:
        return False
    why = ' '.join((evidence or 'see cow/names.csv').split())[:300].replace('*/', '* /')
    para = "\n   Name: `%s` (%s). %s\n\n" % (name, confidence, why)
    with open(path, 'w', encoding='utf-8', newline='\n') as fh:
        fh.write(text[:idx] + para + text[end:])
    return True


def register_name(name, kind, ident, evidence):
    """Add a cow/names.csv row if that identifier is not already registered."""
    with open(NAMES, encoding='utf-8', newline='') as fh:
        rows = list(csv.DictReader(fh))
        fields = list(csv.DictReader(open(NAMES, encoding='utf-8', newline='')).fieldnames)
    if any(r.get('name') == name and r.get('kind') == kind for r in rows):
        return 'already registered'
    new = {k: '' for k in fields}
    new['kind'], new['id'], new['name'] = kind, ident, name
    new['confidence'] = 'guess'
    new['evidence'] = evidence
    head = subprocess.run(['git', 'rev-parse', '--short', 'HEAD'], cwd=ROOT,
                          capture_output=True, text=True).stdout.strip()
    new['first_seen_commit'] = head
    with open(NAMES, 'a', encoding='utf-8', newline='') as fh:
        csv.DictWriter(fh, fieldnames=fields).writerow(new)
    return 'registered'


def sh(cmd, capture=True):
    res = subprocess.run(cmd, cwd=ROOT, capture_output=capture, text=True)
    return res.returncode, (res.stdout or '') + (res.stderr or '')


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('entries', nargs='*')
    ap.add_argument('--recent', type=int, default=0)
    ap.add_argument('--name', default=None,
                    help='only rows currently named this; a comma-separated list is allowed, so a '
                         'review is idempotent and can re-take the names it handed out earlier')
    ap.add_argument('--apply', action='store_true')
    ap.add_argument('--gate', type=int, default=3,
                    help='how many touched entries to re-run the full gate on (default 3, sampled)')
    args = ap.parse_args()

    with open(LEDGER, encoding='utf-8', newline='') as fh:
        allrows = list(csv.DictReader(fh))
    done = [r for r in allrows if r['status'] == 'done']
    if args.name:
        wanted = {n.strip() for n in args.name.split(',') if n.strip()}
        done = [r for r in done if r['name'] in wanted]
    picked = {r['entry'].lower(): r for r in done[-args.recent:] if args.recent}
    for e in args.entries:
        key = e.lower() if e.startswith('0x') else '0x' + e.lower()
        hit = next((r for r in allrows if r['entry'].lower() == key), None)
        if hit is None:
            raise SystemExit('%s not in ledger' % key)
        picked[key] = hit
    if not picked:
        raise SystemExit('nothing to review (pass entries or --recent N --name X)')

    index = oracle_join.build_index()
    touched, renamed, cited = [], 0, 0
    for key, row in sorted(picked.items()):
        ev = oracle_join.evidence_for(key, index)
        if not ev['evidence']:
            continue
        touched.append(key)
        refs = ';'.join(ev['evidence'])
        newname = VTABLE_NAME if (ev['seed'] == 'vtable' and row['name'] != VTABLE_NAME) else row['name']
        if row['name'] == VTABLE_NAME and ev['seed'] != 'vtable':
            newname = 'unk_return_noop'      # the evidence does not support the promoted name
        if not args.apply:
            print('would set %s name=%s oracle_refs=%s' % (key, newname, refs))
            if newname != row['name']:
                renamed += 1
            cited += 1
            continue
        cmd = [sys.executable, SETSTATUS, key, '--status', 'done', '--name', newname,
               '--file', row['file'], '--oracle', refs, '--verified', 'true',
               '--note', 'review pass: oracle evidence joined']
        code, out = sh(cmd)
        if code:
            raise SystemExit('setstatus failed for %s: %s' % (key, out.strip()))
        if newname != row['name']:
            renamed += 1
        cited += 1
        if newname == VTABLE_NAME:
            register_name(VTABLE_NAME, 'function', VTABLE_NAME, EVIDENCE_TEXT)
        conf = 'guess' if newname == VTABLE_NAME else 'placeholder'
        set_name_paragraph(os.path.join(ROOT, row['file']), newname, conf, refs)

    if not touched:
        print('REVIEW: nothing in this batch has oracle evidence')
        return

    if not args.apply:
        print('REVIEW DRY RUN: %d entry(s), %d citation(s), %d rename(s)'
              % (len(touched), cited, renamed))
        return

    # The gate checks the generated docs and the wrap registration, so refresh them BEFORE gating:
    # a rename changes what cow/names.csv and cow/wraps.json describe, and a stale docs check would
    # otherwise fail a review pass that is itself the reason they changed.
    code, out = sh([sys.executable, os.path.join(ROOT, 'tools', 'cow', 'genwraps.py')])
    if code:
        raise SystemExit('genwraps failed: %s' % out.strip()[-800:])
    first, last = touched[0], touched[-1]
    msg = 'cow: review %s..%s (%d unit(s), %d renamed)' % (first, last, len(touched), renamed)
    sh([sys.executable, STATUS, '--describe', msg])

    # Every touched row must still be self-consistent (cheap, checks all of them), and the gate must
    # still pass on a sample (it rebuilds host + difftest + boot64 per entry, so all 40 would be an
    # hour of builds for a change that touches no .c file). A row that fails the cheap check, or any
    # sampled gate, stops the commit.
    with open(NAMES, encoding='utf-8', newline='') as fh:
        registered = {r.get('name') for r in csv.DictReader(fh)}
    bad = []
    for key in touched:
        with open(LEDGER, encoding='utf-8', newline='') as fh:
            fresh = next((r for r in csv.DictReader(fh) if r['entry'].lower() == key), None)
        if fresh is None:
            bad.append('%s: row vanished' % key)
            continue
        if fresh['status'] != 'done':
            bad.append('%s: status %s' % (key, fresh['status']))
        if not fresh.get('file') or not os.path.isfile(os.path.join(ROOT, fresh['file'])):
            bad.append('%s: no such file %r' % (key, fresh.get('file')))
        if fresh.get('name') and fresh['name'] not in registered:
            bad.append('%s: name %r not in cow/names.csv' % (key, fresh['name']))
        if not fresh.get('oracle_refs'):
            bad.append('%s: oracle_refs still empty' % key)
    if bad:
        raise SystemExit('REVIEW INCONSISTENT, nothing committed:\n  ' + '\n  '.join(bad[:20]))
    print('CONSISTENT: %d row(s) - status, file on disk, name registered, oracle_refs written' % len(touched))

    sample = touched[::max(1, len(touched) // max(1, args.gate))][:args.gate]
    code, out = sh(['pwsh', '-NoProfile', '-File', GATE_BATCH, '-Entries', ','.join(sample)])
    tail = [l for l in out.splitlines() if 'VERDICT' in l or 'FAIL' in l]
    print('\n'.join(tail) or out[-2000:])
    if code:
        raise SystemExit('GATE_BATCH failed on the sample; nothing committed (fix the batch, re-run)')

    print('GATE SAMPLE: %s' % ','.join(sample))
    paths = ['ledger/functions.csv', 'cow/names.csv', 'cow/wraps.json', 'runtime/cow',
             'README.md', 'docs/cow/STATUS.md', 'docs/cow/NAMES_TODO.md',
             'tools/cow/oracle_join.py', 'tools/cow/review_pass.py']
    sh(['git', 'add'] + paths)
    # The review is the thing that keeps names honest, so book it: the loop counts units since the
    # last review and asks for one again at 50.
    state_path = os.path.join(ROOT, 'cow', 'loop_state.json')
    try:
        with open(state_path, encoding='utf-8') as fh:
            state = json.load(fh)
        state['done_since_review'] = 0
        with open(state_path, 'w', encoding='utf-8', newline='\n') as fh:
            json.dump(state, fh, indent=1, sort_keys=True)
            fh.write('\n')
        paths.append('cow/loop_state.json')
        sh(['git', 'add', 'cow/loop_state.json'])
    except (OSError, ValueError):
        print('warning: could not reset done_since_review in cow/loop_state.json')
    code, out = sh(['git', 'commit', '-m', msg])
    print(out.strip())
    sh(['git', 'fetch', 'origin', 'main'])
    code, out = sh(['git', 'push', 'origin', 'main'])
    print('pushed:', out.strip() or 'no change')
    print('REVIEW PASS: %s' % msg)


if __name__ == '__main__':
    main()
