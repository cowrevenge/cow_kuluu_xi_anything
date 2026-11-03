"""Disassemble a guest range of the retail FFXiMain.dll.

The recompiler's FATAL lines give a guest EIP but not what is there. This decodes a range so we
can see instruction boundaries (the recurring off-by-one class of bug: 0x102DBB59 vs 0x102DBB5A vs
0x102DBB5B), which register an indirect jump/call uses, and where the target pointer comes from.

  python tools/cow/disasm.py 0x102DBB00 0x102DBC00
  python tools/cow/disasm.py 0x102DBB00 0x102DBC00 --meta      # also show meta coverage
"""
import json
import os
import sys

try:
    from capstone import Cs, CS_ARCH_X86, CS_MODE_32
except ImportError:
    sys.exit('capstone missing: pip install capstone')

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
DLL = os.path.join(ROOT, 'generated', 'FFXiMain.unpacked.dll')
META = os.path.join(ROOT, 'meta', 'FFXiMain.2026-10-05.meta.json')
BASE = 0x10000000


def main():
    lo = int(sys.argv[1], 16)
    hi = int(sys.argv[2], 16)
    show_meta = '--meta' in sys.argv

    data = open(DLL, 'rb').read()
    # .text: find the section holding BASE
    import struct
    pe = struct.unpack_from('<I', data, 0x3C)[0]
    nsec = struct.unpack_from('<H', data, pe + 6)[0]
    secsz = struct.unpack_from('<H', data, pe + 20)[0]
    secs = []
    for i in range(nsec):
        o = pe + 24 + secsz + i * 40
        name = data[o:o + 8].rstrip(b'\0').decode('latin-1')
        vsz, va, rsz, raw = struct.unpack_from('<IIII', data, o + 8)
        secs.append((name, BASE + va, vsz, raw, rsz))
    for name, va, vsz, raw, rsz in secs:
        if va <= lo < va + max(vsz, rsz):
            off = raw + (lo - va)
            imgbase = va - lo + lo  # keep section base
            break
    else:
        raise SystemExit('no section contains %08X' % lo)
    off = None
    for name, va, vsz, raw, rsz in secs:
        if va <= lo < va + max(vsz, rsz):
            off = raw + (lo - va)
            print('section %s va=%08X raw=%08X' % (name, va, raw))
            break
    blob = data[off:off + (hi - lo)]

    md = Cs(CS_ARCH_X86, CS_MODE_32)
    md.detail = False
    meta = json.load(open(META, encoding='utf-8')) if show_meta else None
    covered = []
    if meta:
        for f in meta['functions']:
            for r in f['ranges']:
                covered.append((r[0], r[1]))
        covered.sort()

    import bisect
    starts = [c[0] for c in covered]
    for ins in md.disasm(blob, lo):
        mark = ''
        if meta:
            i = bisect.bisect_right(starts, ins.address) - 1
            if i >= 0 and covered[i][0] <= ins.address < covered[i][1]:
                mark = 'covered(%08X,%08X)' % covered[i]
            else:
                mark = 'HOLE'
        flag = '  <== ' if ins.mnemonic.startswith(('jmp', 'call')) and '[' in ins.op_str else ''
        print('%08X  %-22s %-28s %s%s' % (ins.address, ins.bytes.hex(), ins.mnemonic + ' ' + ins.op_str, mark, flag))


if __name__ == '__main__':
    main()
