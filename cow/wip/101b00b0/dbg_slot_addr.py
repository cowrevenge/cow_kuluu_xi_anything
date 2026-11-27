"""Decide, by measurement, which address the original means by `[esp + 0x23dc]`.

The emitted unit reads sp0 - 0x23dc; the guest instruction says [esp + 0x23dc] with the esp of that moment.
Those are the same three slots or they are not, and my arithmetic has already been wrong once here, so the
unit is asked instead: print every candidate word at the call, and see which one equals what side A passed.
Scratch copy only; build/aim and src/lifted are not touched.
"""
import json, os, shutil, subprocess, sys

REPO = r'D:\Projects\ffxi_disassembly\Cow_kuluu_xi_anything'
E = '101b00b0'
SEEDS = os.path.join(REPO, 'build', 'dbg_seeds')
TREE = os.path.join(REPO, 'build', 'dbg_lift11')
CALL = '    t369 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, loc_23dc, loc_23d8, loc_23d4);'

d = json.load(open(os.path.join(REPO, 'build', 'aim', 'seeds_fail', E + '.json'), encoding='utf-8'))
state = [s for s in d['dropped'] if s.get('why') == 'call args'][0]['state']

for p in (SEEDS, TREE):
    shutil.rmtree(p, ignore_errors=True)
    os.makedirs(p)
json.dump({'states': [state]}, open(os.path.join(SEEDS, E + '.json'), 'w', encoding='utf-8'), indent=1)
for f in os.listdir(os.path.join(REPO, 'layout')):
    shutil.copy2(os.path.join(REPO, 'layout', f), os.path.join(TREE, f))
unit = os.path.join(TREE, 'cow_%s.c' % E)
t = open(os.path.join(REPO, 'src', 'lifted', 'cow_%s.c' % E), encoding='utf-8').read()
assert t.count(CALL) == 1, 'the call site is not unique: %d' % t.count(CALL)
t = t.replace('#include "cow.h"', '#include "cow.h"\n#include <stdio.h>', 1)
PROBE = '''
    {
        FILE* f_ = fopen("build/dbg_slot.txt", "a");
        if (f_)
        {
            fprintf(f_, "esp=%08x sp0=%08x loc=%08x,%08x,%08x | lift reads(sp0-0x23d?): %08x %08x %08x",
                    g->esp, sp0, loc_23dc, loc_23d8, loc_23d4,
                    rd32(sp0 - 0x23dcu), rd32(sp0 - 0x23d8u), rd32(sp0 - 0x23d4u));
            fprintf(f_, " | above sp0: %08x %08x %08x %08x",
                    rd32(sp0 + 0x18u), rd32(sp0 + 0x14u), rd32(sp0 + 0x10u), rd32(sp0 + 0xcu));
            fprintf(f_, " | from esp: %08x %08x %08x",
                    rd32(g->esp + 0x23dcu), rd32(g->esp + 0x23d8u), rd32(g->esp + 0x14u));
            fprintf(f_, " | argslots[esp+4,8,c]: %08x %08x %08x",
                    rd32(g->esp + 4u), rd32(g->esp + 8u), rd32(g->esp + 0xcu));
            fprintf(f_, "\\n");
            fclose(f_);
        }
    }
'''
t = t.replace(CALL, PROBE + CALL)
open(unit, 'w', encoding='utf-8').write(t)

for cand in (os.path.join(REPO, 'build', 'dbg_slot.txt'), os.path.join(REPO, 'dbg_slot.txt')):
    if os.path.isfile(cand):
        os.remove(cand)

env = dict(os.environ)
env['COW_SEEDS_AUTO'] = SEEDS
env['COW_LIFT_SRC'] = TREE
env['PYTHONIOENCODING'] = 'utf-8'
out = os.path.join(REPO, 'build', 'dbg_proof_slot.json')
if os.path.isfile(out):
    os.remove(out)
subprocess.run([sys.executable, os.path.join(REPO, 'tools', 'cow', 'ghidra', 'lift_proof.py'),
                '--entries', E, '--out', out, '--rerun', '--solo'],
               cwd=REPO, capture_output=True, text=True, encoding='utf-8', errors='replace', env=env)
rec = json.load(open(out, encoding='utf-8')).get(E, {}) if os.path.isfile(out) else {}
print('tier=%s why=%s' % (rec.get('tier'), rec.get('why')))
print('raw: %s' % (rec.get('raw') or '')[:300])
p_ = os.path.join(REPO, 'build', 'dbg_slot.txt')
print('\n=== what the unit saw at the call ===')
print(open(p_, encoding='utf-8', errors='replace').read()[:2000] if os.path.isfile(p_) else 'no probe file')
