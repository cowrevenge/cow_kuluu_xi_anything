"""Find every continuation/callback address stored inside a function.

This function (0x102DBBA0-0x102DBE10) registers async continuations by storing
their guest addresses as instruction immediates:  mov [ebp-0x274], 0x102dbb3e
Those must each be registered as a host->guest entry, or the bridge dies with
"indirect call/jump to an address with no translation" when the continuation fires.
"""
import json
import re
import capstone
import pefile

meta = json.load(open(r'meta\FFXiMain.2026-10-05.meta.json'))
base = meta['image_base']
pe = pefile.PE(r'generated\FFXiMain.unpacked.dll', fast_load=True)
img = pe.get_memory_mapped_image()
entries = {f['entry'] for f in meta['functions']}
switch_targets = {t for s in meta['switches'] for t in s['targets']}
tail = set(meta['tail_jumps'])
md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)

IMM = re.compile(r'\b0x(1[0-3][0-9a-fA-F]{6})\b')

lo, hi = 0x102DBBA0, 0x102DBE10
print('scanning function 0x%x - 0x%x for stored code pointers\n' % (lo, hi))
stored = []
for i in md.disasm(bytes(img[lo - base:hi - base]), lo):
    if i.mnemonic != 'mov':
        continue
    dst, _, src = i.op_str.partition(',')
    if '[' not in dst:
        continue
    for mm in IMM.finditer(src):
        v = int(mm.group(1), 16)
        if lo <= v < hi:
            stored.append((i.address, v))
            print('  store %08x -> 0x%08x   %s,%s   [registered entry=%s switch=%s tailjump=%s]' % (
                i.address, v, dst.strip(), src.strip(),
                v in entries, v in switch_targets, v in tail))

print('\nstored mid-function addresses: %d' % len(stored))
missing = sorted({v for _, v in stored if v not in entries})
print('NOT registered as entries (these can fatal): %s' % [hex(v) for v in missing])
print('target 0x102dbbe4 among them: %s' % (0x102DBBE4 in missing))

# Also: where do the 0x102EF1xx callbacks from the FATAL stack live, and are they registered?
print('\ncontinuations seen on the FATAL guest stack:')
for v in (0x102EF059, 0x102EF08A, 0x102EF121, 0x102DBB3E, 0x102DBB5A):
    owner = max((f['entry'] for f in meta['functions'] if f['entry'] <= v), default=None)
    inside = any(a <= v < b for f in meta['functions'] if f['entry'] == owner for a, b in f['ranges'])
    print('  0x%08x  entry=%-5s inside-its-function=%-5s (function at 0x%x)' % (
        v, v in entries, inside, owner or 0))
