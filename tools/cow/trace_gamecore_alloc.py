"""Temporarily trace the allocations inside gamecore_init so we can see which one fails.

The 32-bit host takes the flat guest-memory model (RT_GUEST_WINDOW is only in CFLAGS64), so
gheap_alloc must give back an address the guest can use as a pointer. The AV 'writing 00000000'
right after step F says one of the three allocations came back 0. This prints them.

  python tools/cow/trace_gamecore_alloc.py           # patch in
  python tools/cow/trace_gamecore_alloc.py --revert  # take them out again
"""
import sys

P = 'runtime/portable/gamecore.c'
s = open(P, encoding='utf-8', newline='').read()

if '--revert' in sys.argv:
    out = []
    for line in s.splitlines(True):
        if '[recomp] gamecore alloc' in line:
            continue
        out.append(line)
    open(P, 'w', encoding='utf-8', newline='').write(''.join(out))
    print('alloc traces removed')
    sys.exit(0)

if '[recomp] gamecore alloc' in s:
    print('already tracing')
    sys.exit(0)

pairs = [
    ('uint32_t vtbl = gheap_alloc(4 * 36, 1);',
     '\n    rt_log("[recomp] gamecore alloc vtbl=%08x\\n", vtbl);'),
    ('g_object = gheap_alloc(16, 1);',
     '\n    rt_log("[recomp] gamecore alloc object=%08x\\n", g_object);'),
    ('g_table = gheap_alloc(4 * GAMECORE_SLOTS, 1);',
     '\n    rt_log("[recomp] gamecore alloc table=%08x\\n", g_table);'),
]
for anchor, add in pairs:
    if s.count(anchor) != 1:
        print('WARN anchor x%d: %s' % (s.count(anchor), anchor))
        continue
    s = s.replace(anchor, anchor + add, 1)
open(P, 'w', encoding='utf-8', newline='').write(s)
print('alloc traces added')
for i, line in enumerate(s.splitlines(), 1):
    if 'gamecore alloc' in line:
        print('%4d | %s' % (i, line.strip()))
