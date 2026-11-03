"""Print esi/edi and a guest stack dump in the stand-in's crash log.

crash_handler() reports eax..ebp only, and blames 'the translation of guest function X' where X is
merely the nearest table entry below the host instruction - host code and translated code are not
laid out in guest order, so that attribution misleads exactly when we need it. Guest* has no eip,
but esp is live, and in this flat (32-bit) build guest addresses are host addresses: the words at
esp are the return-address chain, which is what names the caller that passed a bad pointer, and
esi/edi is what the faulting guest instruction was dereferencing (the 102EEC20 AV read [esi+0x178]
with esi=5).

  python tools/cow/richer_crash_log.py            # show the replacement
  python tools/cow/richer_crash_log.py --apply
"""
import sys

P = 'host/ffximain.c'
OLD_LINE = 'rt_log("  guest state at the last call boundary: eax=%08x'
NEW = '''    rt_log("  guest state at the last call boundary: eax=%08x ebx=%08x ecx=%08x edx=%08x\\n"
           "                                       esi=%08x edi=%08x esp=%08x ebp=%08x\\n",
        g->eax, g->ebx, g->ecx, g->edx, g->esi, g->edi, g->esp, g->ebp);
    rt_log("  guest stack:"); /* guest addresses are host addresses in the flat build */
    for (int i = 0; i < 24; ++i)
    {
        uint32_t w = 0;
        if (IsBadReadPtr((const void*)(uintptr_t)(g->esp + 4 * i), 4))
            break;
        memcpy(&w, (const void*)(uintptr_t)(g->esp + 4 * i), 4);
        rt_log(" %08x", w);
    }
    rt_log("\\n");'''


def main():
    s = open(P, encoding='utf-8', newline='').read()
    nl = '\r\n' if '\r\n' in s else '\n'
    lines = s.splitlines(True)
    start = next((i for i, l in enumerate(lines) if OLD_LINE in l), None)
    if start is None:
        print('anchor not found')
        return 1
    end = start
    while 'g->ebp);' not in lines[end] and end - start < 6:
        end += 1
    print('replacing lines %d-%d:' % (start + 1, end + 1))
    print(''.join(lines[start:end + 1]))
    if '--apply' in sys.argv:
        body = (NEW.replace('\n', nl) if nl == '\r\n' else NEW) + nl
        lines[start:end + 1] = [body]
        open(P, 'w', encoding='utf-8', newline='').write(''.join(lines))
        print('patched %s' % P)
    return 0


if __name__ == '__main__':
    sys.exit(main())
