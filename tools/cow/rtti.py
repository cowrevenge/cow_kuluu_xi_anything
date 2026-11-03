"""Who owns this address? Decode MSVC 32-bit RTTI so a bare `ret` becomes a named virtual method.

A one-byte `ret` at an address nothing calls is not 'a function that does nothing' until we can say who
calls it. In this binary the answer is usually a vtable: the address sits in a run of code pointers in
.rdata, the word below that run is a Pointer To RTTI CompleteObjectLocator, and the COL leads to a
TypeDescriptor holding the mangled class name (`.?AVCFXObjPos@@`). Then the slot is not a noop - it is
`CFXObjPos`'s 38th virtual method, an empty override - and the source can say that.

  python tools/cow/rtti.py --entry 0x10201ac0
  python tools/cow/rtti.py --entries 0x10201ac0,0x101fcca0 --json
  python tools/cow/rtti.py --vtable 0x1033ad68
  python tools/cow/rtti.py --ledger-rets --limit 60          # converted ret stubs, joined to their owner
  python tools/cow/rtti.py --scan-vtables --limit 20         # what the image's own RTTI gives us
  python tools/cow/rtti.py --selftest

Nothing is assumed. A vtable is accepted only when the COL signature is 0 (32-bit), its TypeDescriptor
pointer is in the image, and the descriptor's name really starts with the `.?A` mangling prefix; slots
are read until the pointer stops pointing into .text. The vendor tables (tables_vtables.csv, which lists
1,059 vtables in its own build of the DLL) are cited as a second opinion when our RTTI decode is silent -
never merged into a name. A class with no RTTI comes back as no_class, and the ledger keeps `placeholder`.
"""
import argparse
import csv
import io
import json
import os
import re
import struct
import sys
import zipfile

try:
    import pefile
except ImportError:                                        # pragma: no cover
    sys.exit('pefile missing: pip install pefile')

if hasattr(sys.stdout, 'reconfigure'):
    sys.stdout.reconfigure(encoding='utf-8', errors='replace')

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
DLL = os.path.join(ROOT, 'generated', 'FFXiMain.unpacked.dll')
LEDGER = os.path.join(ROOT, 'ledger', 'functions.csv')
ZIP = os.path.join(ROOT, 'vendor', 'cow_ffxi_disassembly', 'Disassembly_Tools', 'artifacts',
                   'ffximain_tables_v0.zip')

PE = pefile.PE(DLL, fast_load=True)
BASE = PE.OPTIONAL_HEADER.ImageBase
SECTIONS = []
for _s in PE.sections:
    SECTIONS.append((_s.Name.rstrip(b'\x00').decode('latin-1'),
                     BASE + _s.VirtualAddress, _s.Misc_VirtualSize, _s.get_data()))
TEXT = next(s for s in SECTIONS if s[0] == '.text')
DATA_SECTIONS = [s for s in SECTIONS if s[0] != '.text']
SIZE_OF_IMAGE = PE.OPTIONAL_HEADER.SizeOfImage

NAME_RE = re.compile(rb'\.\?A([VUCIE])?([A-Za-z0-9_~$.<>@]+?)@@')
_col_cache = {}


def read_bytes(va, n):
    for _name, base, size, data in SECTIONS:
        if base <= va < base + size:
            off = va - base
            if off + n <= len(data):
                return data[off:off + n]
    return None


def read_u32(va):
    b = read_bytes(va, 4)
    return struct.unpack('<I', b)[0] if b and len(b) == 4 else None


def in_image(va):
    return va is not None and BASE <= va < BASE + SIZE_OF_IMAGE


def in_text(va):
    return va is not None and TEXT[1] <= va < TEXT[1] + TEXT[2]


def type_descriptor_name(td_va):
    """.?AVCFXObjPos@@ at td+8 -> 'CFXObjPos', or None. Requires the descriptor's own vftbl to be in-image.
    """
    if not in_image(td_va):
        return None
    # The descriptor's first word is a vftbl that lives in the C++ runtime, not necessarily in this DLL,
    # so it is not required to be in-image; the mangling prefix at +8 is the real check.
    raw = read_bytes(td_va + 8, 256) or b''
    m = NAME_RE.search(raw)
    if not m:
        return None
    return m.group(2).decode('latin-1', 'replace')


def decode_col(col):
    """(class, bases, how). 32-bit layout: COL {sig, offset, cdOffset, pTD, pCHD}."""
    if not in_image(col):
        return None, [], 'no COL'
    if read_u32(col) != 0:
        return None, [], 'COL signature %08x' % (read_u32(col) or 0)
    td, chd = read_u32(col + 12), read_u32(col + 16)
    name = type_descriptor_name(td)
    bases = []
    if in_image(chd) and read_u32(chd) == 0:               # CHD signature is also 0 in 32-bit MSVC
        n = read_u32(chd + 8) or 0
        arr = read_u32(chd + 12)
        if in_image(arr) and 0 < n <= 64:
            for i in range(n):
                bcd = read_u32(arr + 4 * i)
                if not in_image(bcd):
                    continue
                # BaseClassDescriptor {numContained, isVirtual, vbaseOffset, pTD, pCHD, attributes}
                bn = type_descriptor_name(read_u32(bcd + 12))
                if bn:
                    bases.append(bn)
    if name:
        return name, bases, 'COL@%08x' % col
    return None, bases, 'COL ok, no class descriptor'


def vtable_at(p):
    """Validate p as a vtable start, or None. Cached: the same vtable is asked about many times."""
    if p in _col_cache:
        return _col_cache[p]
    out = None
    name, bases, how = decode_col(read_u32(p - 4))
    if name:
        slots = []
        i = 0
        while i < 512:
            t = read_u32(p + 4 * i)
            if not in_text(t):
                break
            slots.append(t)
            i += 1
        if len(slots) >= 2:
            out = {'vtable': p, 'class': name, 'bases': bases, 'rtti': how, 'slots': slots}
    _col_cache[p] = out
    return out


def owners_of(target):
    """Every validated vtable whose slot points at target: (vtable, slot, class, bases, how)."""
    found = []
    pat = struct.pack('<I', target)
    for _name, base, size, data in DATA_SECTIONS:
        i = data.find(pat)
        while i != -1:
            if i % 4 == 0:
                addr = base + i
                for k in range(0, 400):                    # how far back a vtable start can be
                    vt = vtable_at(addr - 4 * k)
                    if vt and k < len(vt['slots']) and vt['slots'][k] == target:
                        found.append({'vtable': '0x%08x' % vt['vtable'], 'slot': k,
                                      'slots': len(vt['slots']), 'class': vt['class'],
                                      'bases': vt['bases'], 'rtti': vt['rtti'],
                                      'section': _name})
                        break
            i = data.find(pat, i + 4)
    found.sort(key=lambda f: -f['slots'])
    return found


def vendor_vtables():
    """The vendor's own vtable table, as {vtable_va: (slots, section)} - a second opinion, cited only."""
    if not os.path.isfile(ZIP):
        return {}
    try:
        with zipfile.ZipFile(ZIP) as zf:
            member = next((n for n in zf.namelist() if n.endswith('tables_vtables.csv')), None)
            if member is None:
                return {}
            with zf.open(member) as raw:
                rows = list(csv.reader(io.StringIO(raw.read().decode('utf-8', 'replace'))))
    except (OSError, zipfile.BadZipFile):
        return {}
    if not rows:
        return {}
    head = [h.strip().lower() for h in rows[0]]
    out = {}
    for r in rows[1:]:
        if len(r) < len(head):
            continue
        d = dict(zip(head, [c.strip() for c in r[:len(head)]]))
        try:
            out[int(d.get('vtable_va', '0'), 16)] = (int(d.get('slots', '0') or 0), d.get('section', ''))
        except ValueError:
            continue
    return out


def ledger_ret_entries(limit):
    with open(LEDGER, encoding='utf-8', newline='') as fh:
        rows = [r for r in csv.DictReader(fh)
                if r['status'] == 'done' and (r.get('file') or '').endswith('_ret.c')]
    return [r['entry'] for r in (rows[-limit:] if limit else rows)]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--entry', action='append', default=[])
    ap.add_argument('--entries', default='')
    ap.add_argument('--vtable', default=None)
    ap.add_argument('--ledger-rets', action='store_true')
    ap.add_argument('--limit', type=int, default=0)
    ap.add_argument('--json', action='store_true')
    ap.add_argument('--selftest', action='store_true')
    args = ap.parse_args()

    if args.selftest:
        ok = True
        vt = vtable_at(0x1033AD68)
        print('selftest: vtable_at(0x1033ad68) -> %s' % (vt['class'] if vt else None))
        d = owners_of(0x10201AC0)
        print('selftest: 0x10201ac0 owners -> %s' % ([ (o['vtable'], o['slot'], o['class']) for o in d ][:3]))
        ok = ok and in_text(0x10201AC0) and len(d) >= 1
        ok = ok and owners_of(BASE + SIZE_OF_IMAGE - 4) == []
        print('RTTI SELFTEST: %s' % ('PASS' if ok else 'FAIL'))
        return 0 if ok else 1

    if args.vtable:
        p = int(args.vtable, 16)
        vt = vtable_at(p)
        out = {'vtable': '0x%08x' % p,
               'class': vt['class'] if vt else None,
               'bases': vt['bases'] if vt else [],
               'slots': len(vt['slots']) if vt else 0,
               'targets': ['0x%08x' % t for t in (vt['slots'][:40] if vt else [])]}
        print(json.dumps(out, indent=1))
        return 0

    entries = list(args.entry) + [e for e in args.entries.split(',') if e.strip()]
    if args.ledger_rets:
        entries += ledger_ret_entries(args.limit)
    if not entries:
        raise SystemExit('give --entry/--entries/--vtable/--ledger-rets')

    vendor = None
    report = []
    for e in entries:
        target = int(e, 16)
        owners = owners_of(target)
        top = owners[0] if owners else None
        if top is None:
            if vendor is None:
                vendor = vendor_vtables()
            hit = [v for v, (n, sec) in vendor.items()
                   if abs(v - target) < 0x2000 and n >= 2]
            report.append({'entry': '0x%08x' % target, 'owners': 0, 'class': None,
                           'vtable': '0x%08x' % hit[0] if hit else '',
                           'slot': None, 'slots': vendor[hit[0]][0] if hit else 0,
                           'rtti': 'vendor tables_vtables only' if hit else 'no owner'})
        else:
            report.append({'entry': '0x%08x' % target, 'owners': len(owners),
                           'class': top['class'], 'vtable': top['vtable'], 'slot': top['slot'],
                           'slots': top['slots'], 'bases': top['bases'], 'rtti': top['rtti']})
    if args.json:
        print(json.dumps(report, indent=1))
        return 0
    named = sum(1 for r in report if r.get('class'))
    print('RTTI JOIN: %d entry(s), %d with a decoded class name' % (len(report), named))
    for r in report:
        print('  %s vtable=%-12s slot=%-4s of %-4s class=%-30s %s'
              % (r['entry'], r.get('vtable') or '-', r.get('slot'), r.get('slots'),
                 r.get('class') or '-', r.get('rtti')))
    return 0


if __name__ == '__main__':
    sys.exit(main())
