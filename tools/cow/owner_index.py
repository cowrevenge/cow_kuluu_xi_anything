"""Who reaches each ledger entry - in ONE bulk pass, cached.

Two clusters on 2026-11-05 ended in a `failed` commit for "a body nobody reaches": the queue hands out
the smallest leaf first, and the smallest leaves include functions that nothing in the image enters at
all. callers_of.py and refs_to.py answer that question per address, each with its own scan of .text;
picking a unit needs the answer for 20,000 entries at once, which is what this builds and caches.

  python tools/cow/owner_index.py            # build/refresh the index, print the summary
  python tools/cow/owner_index.py 0x1000d660 # look one entry up (no rescan if the cache is fresh)

An entry is OWNED when some code or data in the image names it:
  e8/e9 rel32      a direct call or jmp (this is what callers_of.py finds)
  aligned dword    the address as an immediate, a push, a vtable slot or a jump-table entry
                   (this is what refs_to.py finds, per address)
Owned-but-not-by-a-call is normal for a class method: it is entered through its vtable. Zero of both
means nothing anywhere jumps to it and no pointer to it is stored - the entry is reached, if at all,
through a computed address, and a unit verified only against a synthesised pin state is the kind of
unit that later turns out to matter to nobody.

The cache lives in build/ (gitignored) and is keyed on the size and mtime of the DLL it was read from,
so a re-unpacked build invalidates it. cluster.py's --next consults it when present and ignores it when
not: the queue must still work on a fresh clone with no index built.
"""
import argparse
import csv
import json
import os
import struct
import sys
import time

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
LEDGER = os.path.join(ROOT, 'ledger', 'functions.csv')
DLL = os.path.join(ROOT, 'generated', 'FFXiMain.unpacked.dll')
CACHE = os.path.join(ROOT, 'build', 'owner_index.json')


def _sections():
    import pefile
    pe = pefile.PE(DLL, fast_load=True)
    base = pe.OPTIONAL_HEADER.ImageBase
    out = []
    for s in pe.sections:
        data = s.get_data()
        if data:
            out.append((s.Name.rstrip(b'\0').decode('latin-1'), base + s.VirtualAddress, data))
    pe.close()
    return out


def build():
    entries = set()
    with open(LEDGER, newline='', encoding='utf-8') as fh:
        for r in csv.DictReader(fh):
            try:
                entries.add(int(r['entry'], 16))
            except ValueError:
                pass
    started = time.time()
    # entry -> how many places name it, plus up to MAX_SITES of them, so a unit header can cite who
    # reaches it without running refs_to.py per address (the no-stub rule asks that for every booking)
    MAX_SITES = 8
    counts = {}
    sites = {}

    def bump(a, where):
        if a not in entries:
            return
        counts[a] = counts.get(a, 0) + 1
        s = sites.get(a)
        if s is None:
            sites[a] = [where]
        elif len(s) < MAX_SITES:
            s.append(where)

    for _name, va, data in _sections():
        # direct call / jmp rel32, every byte a candidate opcode, exactly as callers_of.py does it. An
        # earlier version of this skipped the four bytes after each opcode so operand bytes could not
        # read as calls; it lost more than it gained. The f_100dbeb0 cluster is the proof: `push 0x3e8`
        # at 0x100dbec2 is 6A E8, that E8 was taken for an opcode, and the `call 0x100dbf00` at
        # 0x100dbec7 vanished from the index. A false positive here only inflates a count nobody acts
        # on except "is it zero", and it has to name a real ledger entry to count at all.
        for i in range(len(data) - 5):
            op = data[i]
            if op == 0xE8 or op == 0xE9:
                bump(va + i + 5 + struct.unpack_from('<i', data, i + 1)[0],
                     'call/jmp from 0x%x' % (va + i))
        # the address as a stored dword (immediate, push, vtable slot, jump table)
        pack = struct.Struct('<I')
        unpack_from = pack.unpack_from
        for off in range(0, len(data) - 3, 4):
            bump(unpack_from(data, off)[0], 'stored at 0x%x' % (va + off))

    st = os.stat(DLL)
    doc = {'built': time.strftime('%Y-%m-%dT%H:%M:%S%z'),
           'dll': os.path.basename(DLL), 'size': st.st_size, 'mtime': int(st.st_mtime),
           'entries': len(entries),
           'counts': {'%08x' % k: v for k, v in counts.items()},
           'sites': {'%08x' % k: v for k, v in sites.items()}}
    os.makedirs(os.path.dirname(CACHE), exist_ok=True)
    with open(CACHE, 'w', encoding='utf-8') as fh:
        json.dump(doc, fh)
    return doc, time.time() - started


def _doc(build_if_stale=True):
    """The cached document, rebuilt when the DLL it was read from has changed. None if unusable."""
    if os.path.isfile(CACHE):
        try:
            with open(CACHE, encoding='utf-8') as fh:
                doc = json.load(fh)
            st = os.stat(DLL)
            if doc.get('size') == st.st_size and doc.get('mtime') == int(st.st_mtime):
                return doc
        except (ValueError, KeyError, OSError):
            pass
    if not build_if_stale or not os.path.isfile(DLL):
        return None
    doc, _secs = build()
    return doc


def load(build_if_stale=True):
    """entry -> reference count. Keys are 8-hex entry strings; a missing key means nothing names it.
    This is what the queue filters on, so it stays a plain dict of ints."""
    doc = _doc(build_if_stale)
    return doc['counts'] if doc else None


def sites(entry):
    """The places that name `entry` ('call/jmp from 0x…' / 'stored at 0x…'), capped at MAX_SITES.
    The header of a unit cites these to answer the no-stub rule's question, who calls it."""
    doc = _doc()
    if not doc:
        return []
    return (doc.get('sites') or {}).get(entry.lower().replace('0x', ''), [])


def main():
    ap = argparse.ArgumentParser(prog='owner_index.py')
    ap.add_argument('entry', nargs='?', help='look this up instead of rebuilding')
    ap.add_argument('--rebuild', action='store_true')
    a = ap.parse_args()

    if a.rebuild and os.path.isfile(CACHE):
        os.remove(CACHE)
    doc = _doc()
    if not doc:
        print('no index and no %s to build one from (run the unpack first)' % os.path.basename(DLL))
        return 1

    if a.entry:
        e = a.entry.lower().replace('0x', '')
        n = (doc['counts'] or {}).get(e, 0)
        print('0x%s: %d reference(s) - %s' % (e, n, 'owned' if n else 'NO OWNER'))
        for w in sites(e):
            print('    ', w)
        return 0
    total = doc['entries']
    owned = len(doc['counts'])
    print('%d ledger entries indexed, %d owned, %d with no owner (index %s)'
          % (total, owned, total - owned, doc.get('built', '?')))
    return 0


if __name__ == '__main__':
    sys.exit(main())
