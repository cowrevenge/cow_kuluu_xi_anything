"""Find every reference to a guest address in the image: calls, pushes and jump-table entries.

callers_of.py only walks `call rel32`. When a translated function is entered indirectly the address
appears some other way - pushed as an immediate, stored in a vtable/struct, or as a jump-table
entry - and that is where the bad argument comes from. This greps the raw .text and .rdata for the
32-bit little-endian value and disassembles around each hit.

  python tools/cow/refs_to.py 0x102EEC20
"""
import os
import struct
import sys

import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_32

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
md = Cs(CS_ARCH_X86, CS_MODE_32)

pe = pefile.PE(os.path.join(ROOT, 'generated', 'FFXiMain.unpacked.dll'), fast_load=True)
BASE = pe.OPTIONAL_HEADER.ImageBase
SECS = []
for s in pe.sections:
    SECS.append((s.Name.rstrip(b'\0').decode('latin-1'), BASE + s.VirtualAddress, s.get_data()))
PAT = struct.pack('<I', 0)


def offsets(target):
    pat = struct.pack('<I', target)
    out = []
    for name, va, data in SECS:
        i = data.find(pat)
        while i != -1:
            out.append((name, va + i, i, data))
            i = data.find(pat, i + 1)
    return out


def main():
    target = int(sys.argv[1], 16)
    window = int(sys.argv[2], 16) if len(sys.argv) > 2 else 0x20
    hits = offsets(target)
    print('references to %08X: %d' % (target, len(hits)))
    for name, addr, off, data in hits[:30]:
        print('\n%s @ %08X (file off %X)' % (name, addr, off))
        if name == '.text':
            start = addr - window
            blob = data[start - (addr - off) - (addr - start):][: window * 2]
            try:
                for ins in md.disasm(data[off - window - (addr - off) - (addr - start) + (addr - off) - (addr - off):], 0):
                    break
            except Exception:
                pass
            lo = addr - window
            try:
                for ins in md.disasm(data[(lo - (addr - off)):(off + window)], lo):
                    tag = '  <== ref' if ins.address <= addr < ins.address + max(1, ins.size) else ''
                    print('   %08X  %-18s %s %s%s' % (ins.address, ins.bytes.hex(), ins.mnemonic, ins.op_str, tag))
            except Exception as e:
                print('   (disasm failed: %s)' % e)
        else:
            blob = data[max(0, off - 12):off + 16]
            print('   bytes: %s' % blob.hex())


if __name__ == '__main__':
    main()
