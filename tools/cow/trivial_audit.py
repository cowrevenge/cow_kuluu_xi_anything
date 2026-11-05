"""Histogram of what the trivial (<= 8 byte) done entries ACTUALLY are, read from generated/all.

The table in src/tables/ may only contain a shape this tool has seen in the bytes, so the first step of
any change to the shared runner is to run this and read the list. It also reports the entries that are
trivial-sized but whose shape is NOT in the shared vocabulary - those are not stubs, they are units that
were booked without being read, and they go back to the queue.

    python tools/cow/trivial_audit.py            # histogram + the unclassified list
    python tools/cow/trivial_audit.py --json     # machine-readable, for tools/cow/mktable.py
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
sys.path.insert(0, HERE)
import cowdiff  # noqa: E402  (find_generated_source, SITE_RE)

LEDGER = os.path.join(ROOT, 'ledger', 'functions.csv')
TRIVIAL_MAX_BYTES = 8
GEN = os.path.join(ROOT, 'generated', 'all')

HEAD_RE = re.compile(r'^void f_([0-9a-f]{8})(_body)?\(Guest\* g\)$')
_index = None


def body_index():
    """Every generated body in the image, entry -> lines, in ONE pass over generated/all.

    cowdiff.find_generated_source re-reads all 60-odd files per entry; asking it 943 times is an hour.
    The table tooling needs the whole population at once, so it scans once and caches.
    """
    global _index
    if _index is not None:
        return _index
    found = {}
    for name in sorted(os.listdir(GEN)):
        if not name.endswith('.c') or name == 'table.c':
            continue
        with open(os.path.join(GEN, name), encoding='utf-8', errors='replace') as fh:
            lines = fh.read().splitlines()
        for i, line in enumerate(lines):
            m = HEAD_RE.match(line)
            if not m:
                continue
            j = i + 1
            while j < len(lines) and lines[j] != '}':
                j += 1
            key, is_body = m.group(1), bool(m.group(2))
            # a wrapped entry has f_<hex> (the dispatcher, one line) and f_<hex>_body (the instructions);
            # the body is the one with the instruction comments, so prefer it, else keep the head
            have = found.get(key)
            if have is None or (is_body and not have[1]):
                found[key] = (lines[i:j + 1], is_body)
    _index = {k: v[0] for k, v in found.items()}
    return _index


def shape(entry):
    """(texts, argbytes) - the instruction texts of the generated body and what its `ret` pops."""
    body = body_index().get(entry.lower().replace('0x', ''))
    if body is None:
        return None, None
    sites = [cowdiff.SITE_RE.match(l) for l in body]
    texts = [m.group(2).strip().lower() for m in sites if m]
    if not texts:
        return None, None
    m = re.match(r'^ret(?:\s+(0x[0-9a-fA-F]+|\d+))?$', texts[-1])
    return texts, (int(m.group(1) or '0', 0) if m else None)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--json', action='store_true')
    ap.add_argument('--max-bytes', type=int, default=TRIVIAL_MAX_BYTES)
    ap.add_argument('--status', default='done', help='which ledger rows to histogram (done|todo|*)')
    a = ap.parse_args()

    with open(LEDGER, encoding='utf-8', newline='') as fh:
        rows = [r for r in csv.DictReader(fh)
                if a.status == '*' or r['status'] == a.status]
    trivial = []
    for r in rows:
        try:
            if int(r['size']) > a.max_bytes:
                continue
        except (TypeError, ValueError):
            continue
        trivial.append(r)

    hist, unknown = {}, []
    for r in trivial:
        entry = r['entry'].lower().replace('0x', '')
        texts, argbytes = shape(entry)
        if texts is None:
            unknown.append({'entry': '0x' + entry, 'texts': None, 'file': r['file']})
            continue
        # fold the immediate/address out of the key so the histogram counts SHAPES, not values
        key = ' / '.join(re.sub(r'0x[0-9a-f]+', 'N', t) for t in texts)
        hist[key] = hist.get(key, 0) + 1
        if argbytes is None:
            unknown.append({'entry': '0x' + entry, 'texts': texts, 'file': r['file'],
                            'why': 'the last instruction is not a ret'})
    if a.json:
        print(json.dumps({'trivial': len(trivial), 'hist': hist, 'unknown': unknown}, indent=1))
        return 0
    print('trivial done entries: %d' % len(trivial))
    for k, n in sorted(hist.items(), key=lambda kv: -kv[1]):
        print('%5d  %s' % (n, k))
    print('\nnot expressible in the shared vocabulary: %d' % len(unknown))
    for u in unknown[:40]:
        print('  %s %s %s' % (u['entry'], u.get('texts'), u.get('why', '')))
    return 0


if __name__ == '__main__':
    sys.exit(main())
