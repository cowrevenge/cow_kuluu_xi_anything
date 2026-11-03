"""Who calls a guest function, and with what argument?

An access violation inside a translated function is usually not that function's fault: a caller
passed garbage where a pointer belonged (here f(esi=[esp+0xc]) ran with esi=5). This finds every
`call rel32` whose target is the given guest address, plus every `push imm32; call` that would hand
it a constant, and shows the surrounding instructions so the source of the bad argument is visible.

  python tools/cow/callers_of.py 0x102EEC20 [window]
"""
import os
import struct
import sys

import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_32

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
md = Cs(CS_ARCH_X86, CS_MODE_32)

pe = pefile.PE(os.path.join(ROOT, 'generated', 'FFXiMain.unpacked.dll'), fast_load=True)
text = next(s for s in pe.sections if s.Name.rstrip(b'\0') == b'.text')
BASE = pe.OPTIONAL_HEADER.ImageBase
VA = BASE + text.VirtualAddress
DATA = text.get_data()


def callers(target, window=40):
    hits = []
    n = len(DATA)
    for i in range(n - 5):
        if DATA[i] != 0xE8:
            continue
        rel = struct.unpack_from('<i', DATA, i + 1)[0]
        if VA + i + 5 + rel == target:
            hits.append(VA + i)
    return hits


def show(addr, window):
    start = addr - window
    blob = DATA[start - VA:start - VA + window + 12]
    for ins in md.disasm(blob, start):
        if ins.address > addr + 6:
            break
        mark = '  <== call' if ins.address == addr else ''
        print('   %08X  %-20s %s %s%s' % (ins.address, ins.bytes.hex(), ins.mnemonic, ins.op_str, mark))


def main():
    target = int(sys.argv[1], 16)
    window = int(sys.argv[2], 16) if len(sys.argv) > 2 else 0x28
    hs = callers(target)
    print('callers of %08X: %d' % (target, len(hs)))
    for a in hs[:24]:
        print('\ncall site %08X' % a)
        show(a, window)


if __name__ == '__main__':
    main()
