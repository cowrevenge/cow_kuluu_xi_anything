"""Why does the RTTI decode say nothing? Dump the words a vtable's COL should be made of.

tools/cow/rtti.py refuses to invent a class name, so when it returns None we have to find out which of
its checks is the one that failed - no COL below the run, the run is not actually a vtable, the COL
signature is not 0, or the TypeDescriptor mangling is not where the 32-bit layout says it is (+8).

  python tools/cow/rtti_probe.py 0x10201ac0            # dump around an address and every COL candidate
  python tools/cow/rtti_probe.py --vtable 0x1033ad68
  python tools/cow/rtti_probe.py --count-typedescriptors
"""
import argparse
import os
import re
import struct
import sys

try:
    import pefile
except ImportError:
    sys.exit('pefile missing: pip install pefile')

if hasattr(sys.stdout, 'reconfigure'):
    sys.stdout.reconfigure(encoding='utf-8', errors='replace')

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
DLL = os.path.join(ROOT, 'generated', 'FFXiMain.unpacked.dll')

PE = pefile.PE(DLL, fast_load=True)
BASE = PE.OPTIONAL_HEADER.ImageBase
SECTIONS = [(s.Name.rstrip(b'\x00').decode('latin-1'), BASE + s.VirtualAddress, s.Misc_VirtualSize,
             s.get_data()) for s in PE.sections]
TEXT = next(s for s in SECTIONS if s[0] == '.text')
NAME_RE = re.compile(rb'\.\?A[A-Za-z0-9_~$.<>@]{3,120}?@@')


def rd(va, n):
    for _n, base, size, data in SECTIONS:
        if base <= va < base + size:
            off = va - base
            return data[off:off + n]
    return None


def u32(va):
    b = rd(va, 4)
    return struct.unpack('<I', b)[0] if b and len(b) == 4 else None


def in_text(va):
    return va is not None and TEXT[1] <= va < TEXT[1] + TEXT[2]


def dump(label, va, count=12):
    words = []
    for i in range(count):
        v = u32(va + 4 * i)
        words.append('%s%08x' % ('*' if in_text(v) else ' ', v or 0))
    print('  %-14s %08x: %s' % (label, va, ' '.join(words)))


def td_looks_right(td):
    if td is None or not (BASE <= td < BASE + PE.OPTIONAL_HEADER.SizeOfImage):
        return None
    for off in (0, 4, 8, 12):
        raw = rd(td + off, 200) or b''
        m = NAME_RE.search(raw[:80])
        if m:
            return off, m.group(0).decode('latin-1', 'replace')
    return None


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('addr', nargs='?')
    ap.add_argument('--vtable', default=None)
    ap.add_argument('--count-typedescriptors', action='store_true')
    args = ap.parse_args()

    if args.count_typedescriptors:
        total = 0
        for name, base, size, data in SECTIONS:
            hits = [m.start() for m in NAME_RE.finditer(data)]
            print('  %-8s %d .?A..@@ strings' % (name, len(hits)))
            if hits[:3]:
                for h in hits[:3]:
                    print('     %s @ %08x' % (data[h:h + 40].split(b'\0')[0].decode('latin-1', 'replace'),
                                              base + h))
            total += len(hits)
        print('TOTAL .?A mangling strings in the image: %d' % total)
        return 0

    target = int((args.addr or args.vtable), 16)
    print('target %08x (in .text: %s)' % (target, in_text(target)))
    dump('at target', target - 8, 8)
    starts = [int(args.vtable, 16)] if args.vtable else []
    if not starts:
        # every candidate vtable start whose slots could contain target
        for k in range(0, 48):
            s = target - 4 * k if args.addr else target
            if u32(s) == target or k == 0:
                starts.append(s)
        starts.append(target)
    for vt in starts[:6]:
        print('\nvtable candidate %08x' % vt)
        dump('slots', vt, 10)
        col = u32(vt - 4)
        print('  COL candidate at vtable-4 = %s' % ('%08x' % col if col else 'None'))
        if col:
            dump('COL+0', col, 8)
            for off in (8, 12, 16, 20):
                td = u32(col + off)
                got = td_looks_right(td)
                print('    COL+%2d -> %s  %s' % (off, '%08x' % td if td else 'None',
                                                 ('TYPEDESCRIPTOR at +%d: %s' % got) if got else ''))
        # is the run above it code pointers?
        n = 0
        while in_text(u32(vt + 4 * n)) and n < 200:
            n += 1
        print('  run of .text pointers from here: %d' % n)
    return 0


if __name__ == '__main__':
    sys.exit(main())
