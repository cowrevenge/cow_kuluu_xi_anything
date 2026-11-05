"""Phase timing for the loop, so 'where does the time actually go?' is answered with numbers.

    python tools/cow/phase.py mark start      --cluster 0x100dbeb0
    python tools/cow/phase.py mark read_done  --cluster 0x100dbeb0
    python tools/cow/phase.py mark write_done --cluster 0x100dbeb0
    python tools/cow/phase.py report --cluster 0x100dbeb0

Phases are the ones the speed rework cares about:

    read         what it cost to read the cluster (generated bodies, oracles, layout)
    write        what it cost to write the C
    cowdiff      the differential runs
    gate         gate.ps1, including its builds
    bookkeeping  genwraps + status docs + commit + push

It is a log, not a stopwatch you have to hold: `mark` stamps the instant and `report` does the
arithmetic over consecutive stamps. Deliberately outside git (build/ is ignored) - it measures the loop,
it is not part of the conversion, and a timing file that changes on every commit would make every commit
dirty behind itself.
"""
import argparse
import json
import os
import sys
import time
from datetime import datetime, timezone

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
LOG = os.path.join(ROOT, 'build', 'phases.jsonl')

# the phases in order; report() pairs consecutive ones
ORDER = ['start', 'read_done', 'write_done', 'cowdiff_done', 'gate_done', 'committed']
PAIRS = [('read', 'start', 'read_done'),
         ('write', 'read_done', 'write_done'),
         ('cowdiff', 'write_done', 'cowdiff_done'),
         ('gate', 'cowdiff_done', 'gate_done'),
         ('bookkeeping', 'gate_done', 'committed')]


def now():
    return datetime.now(timezone.utc).strftime('%Y-%m-%dT%H:%M:%SZ')


def load():
    out = {}
    if not os.path.isfile(LOG):
        return out
    for line in open(LOG, encoding='utf-8', errors='replace'):
        line = line.strip()
        if not line:
            continue
        try:
            e = json.loads(line)
        except ValueError:
            continue
        out.setdefault(e.get('cluster', '?'), []).append(e)
    return out


def main():
    ap = argparse.ArgumentParser(prog='phase.py')
    sub = ap.add_subparsers(dest='cmd', required=True)
    m = sub.add_parser('mark')
    m.add_argument('phase', choices=ORDER)
    m.add_argument('--cluster', required=True)
    m.add_argument('--note', default='')
    r = sub.add_parser('report')
    r.add_argument('--cluster', default=None)
    r.add_argument('--last', type=int, default=3)
    a = ap.parse_args()

    if a.cmd == 'mark':
        os.makedirs(os.path.dirname(LOG), exist_ok=True)
        rec = {'when': now(), 'cluster': a.cluster.lower(), 'phase': a.phase, 'note': a.note}
        with open(LOG, 'a', encoding='utf-8', newline='\n') as fh:
            fh.write(json.dumps(rec) + '\n')
        print(json.dumps(rec))
        return 0

    groups = load()
    # A cluster only counts if the loop ever opened it: the gate stamps gate_done for whatever it is
    # pointed at, including a unit that was never handed out, and those bare records would otherwise
    # show up as all-dash "clusters" in the --last listing.
    groups = {k: v for k, v in groups.items() if any(e['phase'] == 'start' for e in v)}
    keys = [a.cluster.lower()] if a.cluster else sorted(groups)[-a.last:]
    if not keys:
        print('no phases recorded yet - mark start when a cluster is handed out')
        return 0
    for k in keys:
        ev = [e for e in groups.get(k, []) if e['phase'] in ORDER]
        ev.sort(key=lambda e: e['when'])
        stamps = {e['phase']: e['when'] for e in ev}

        def ts(p):
            v = stamps.get(p)
            if not v:
                return None
            return time.mktime(datetime.strptime(v, '%Y-%m-%dT%H:%M:%SZ').timetuple())

        print('cluster %s' % k)
        total = 0.0
        for name, frm, to in PAIRS:
            t0, t1 = ts(frm), ts(to)
            if t0 is None or t1 is None:
                print('   %-12s -' % name)
                continue
            secs = max(0.0, t1 - t0)
            total += secs
            print('   %-12s %6.0fs' % (name, secs))
        t0, t1 = ts('start'), ts('committed')
        if t0 and t1:
            print('   %-12s %6.0fs  (wall)' % ('total', t1 - t0))
        missing = [p for p in ORDER if p not in stamps]
        if missing:
            print('   (unmarked: %s)' % ', '.join(missing))
    return 0


if __name__ == '__main__':
    sys.exit(main())
