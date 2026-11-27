"""Replay 0x101b00b0's call-args reproducer out-of-tree and ask the harness what the ORIGINAL did.

The shed rule kept the state that failed (index 7, why "call args"): the second call goes to 0x101b5d10 on
both sides, and its third argument word is 0xe36ac8d3 on the original against 0x52b83703 in the unit. The
state starts MID-FUNCTION (0x101b0c70), so the prologue that does the big `sub esp` never ran - which makes
the frame displacements the interesting thing about it. Nothing here writes into build/aim, which the live
aim step owns: the state is copied into my own seeds dir and the unit into my own lift tree.
"""
import json, os, shutil, subprocess, sys

REPO = r'D:\Projects\ffxi_disassembly\Cow_kuluu_xi_anything'
E = '101b00b0'
SEEDS = os.path.join(REPO, 'build', 'dbg_seeds')
TREE = os.path.join(REPO, 'build', 'dbg_lift11')

d = json.load(open(os.path.join(REPO, 'build', 'aim', 'seeds_fail', E + '.json'), encoding='utf-8'))
drop = [s for s in d['dropped'] if s.get('why') == 'call args'][0]
state = drop['state']
print('reproducing index %s (%s): entry=%s note=%s' % (drop['index'], drop['why'], state['entry'], state['note']))
print('  stubs:', [(s['target'], s.get('pop'), s.get('nargs')) for s in state['stubs']])
print('  mem  :', state['mem'])

for p in (SEEDS, TREE):
    shutil.rmtree(p, ignore_errors=True)
    os.makedirs(p)
json.dump({'states': [state]}, open(os.path.join(SEEDS, E + '.json'), 'w', encoding='utf-8'), indent=1)
for f in os.listdir(os.path.join(REPO, 'layout')):
    shutil.copy2(os.path.join(REPO, 'layout', f), os.path.join(TREE, f))
shutil.copy2(os.path.join(REPO, 'src', 'lifted', 'cow_%s.c' % E), os.path.join(TREE, 'cow_%s.c' % E))

env = dict(os.environ)
env['COW_SEEDS_AUTO'] = SEEDS
env['COW_LIFT_SRC'] = TREE
env['PYTHONIOENCODING'] = 'utf-8'
env['COWDIFF_TRACE_STATE'] = '0'          # the only pinned state in my own seeds dir
out = os.path.join(REPO, 'build', 'dbg_proof_repro.json')
if os.path.isfile(out):
    os.remove(out)
p = subprocess.run([sys.executable, os.path.join(REPO, 'tools', 'cow', 'ghidra', 'lift_proof.py'),
                    '--entries', E, '--out', out, '--rerun', '--solo'],
                   cwd=REPO, capture_output=True, text=True, encoding='utf-8', errors='replace', env=env)
rec = json.load(open(out, encoding='utf-8')).get(E, {}) if os.path.isfile(out) else {}
print('\ntier=%s why=%s clean=%s afault=%s' % (rec.get('tier'), rec.get('why'), rec.get('clean'), rec.get('afault')))
print('raw: %s' % (rec.get('raw') or '')[:420])
