"""The 32-bit host never set up the guest window/heap either (host64.c:1303 does).

gamecore_init allocates its ICoreCom object and the 1560-slot function table from the guest heap
(gheap_alloc). With gwin_init never called, that allocator hands back 0 and the first wr32 writes
through NULL - the c0000005 'writing 00000000' the boot self-test reported. Insert the call in the
same order host64 uses: window first, then the gamecore services.
"""
P = 'host/ffximain.c'
s = open(P, encoding='utf-8', newline='').read()
if 'gwin_init();' in s:
    print('already there')
else:
    if '#include "gwin.h"' not in s:
        s = s.replace('#include "k32.h" /* ole_register_class */',
                      '#include "gwin.h"\n#include "k32.h" /* ole_register_class */', 1)
    anchor = '    rt_log("[recomp] gamecore step A slots\\n");'
    if s.count(anchor) != 1:
        # the markers may not be present: anchor on the first gamecore call instead
        anchor = '    gamecore_slots_init();'
    assert s.count(anchor) == 1, s.count(anchor)
    s = s.replace(anchor,
                  '    /* The guest heap lives in the low window gwin_init reserves; gamecore_init allocates\n'
                  '     * the ICoreCom object and the common function table from it (host64.c:1303 does the\n'
                  '     * same before it builds the gamecore). */\n'
                  '    gwin_init();\n\n' + anchor, 1)
    open(P, 'w', encoding='utf-8', newline='').write(s)
    print('gwin_init() inserted')
for i, line in enumerate(s.splitlines(), 1):
    if 'gwin' in line or 'gamecore' in line:
        print('%4d | %s' % (i, line.strip()))
