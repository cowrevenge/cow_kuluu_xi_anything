"""Read the live image values the f_1015ee40 gates look at, so cow/seeds/1015ee40.json can pin them."""
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import vtable_model as vm


def word(va):
    d = vm.u32(va)
    return None if d is None else d & 0xffff


def byte(va):
    d = vm.u32(va)
    return None if d is None else d & 0xff


def main():
    g = vm.u32(0x1057876c)
    p = vm.u32(0x10662d40)
    c = vm.u32(0x106631d4)
    print('G=%08x P=%08x C=%08x' % (g or 0, p or 0, c or 0))
    if g:
        print('  byte_59 = %s  word_68 = %s  dword_c4 = %s' %
              (hex(byte(g + 0x59)) if byte(g + 0x59) is not None else None,
               hex(word(g + 0x68)) if word(g + 0x68) is not None else None,
               hex(vm.u32(g + 0xc4)) if vm.u32(g + 0xc4) is not None else None))
    if p:
        print('  P+0xf108 = %s' % (hex(vm.u32(p + 0xf108)) if vm.u32(p + 0xf108) is not None else None))
    if c:
        print('  word_1c = %s' % (hex(word(c + 0x1c)) if word(c + 0x1c) is not None else None))


if __name__ == '__main__':
    main()
