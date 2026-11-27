"""Property test for cycle.settle_unanswered - the lifts step 6 made and the provers never answered.

Runs the function against a temp ROOT/WORK with fan_out stubbed, so nothing compiles and the real
tree is not touched. Checks the bookkeeping: who is asked, with what prover shape, what is kept,
what leaves the list, what stays on it.
"""
import json
import os
import shutil
import sys

REPO = r'D:\Projects\ffxi_disassembly\Cow_kuluu_xi_anything'
sys.path.insert(0, os.path.join(REPO, 'tools', 'cow'))
import cycle                                      # noqa: E402
import par_prove as P                             # noqa: E402

TMP = os.path.join(REPO, 'build', 'test_unanswered_tmp')
JID = '401ff8958bf8'
ENTS = ['1026be74', '101c4d80', '102480e0', '100575a0', '100d8520', '1007cba0']


def lift_path(tree, e):
    """the lifted text: the real one from this cycle's tree if it is there, a synthetic one otherwise"""
    p = os.path.join(tree, 'cow_%s.c' % e)
    if not os.path.isfile(p):
        with open(p, 'w', encoding='utf-8') as fh:
            fh.write('/* f_0x%s - RISE UNIT */\nvoid cow_fn_%s(Guest* g){ (void)g; }\n' % (e, e))
    return p


def setup(entries, ledger=None, units=()):
    shutil.rmtree(TMP, ignore_errors=True)
    for d in ('src/lifted', 'ledger', 'cow', 'build/cycle/rise_tree'):
        os.makedirs(os.path.join(TMP, *d.split('/')))
    tree = os.path.join(TMP, 'build', 'cycle', 'rise_tree')
    wanted = {}
    for e in entries:
        real = os.path.join(REPO, 'build', 'cycle', 'rise_tree', 'cow_%s.c' % e)
        if os.path.isfile(real):
            shutil.copyfile(real, os.path.join(tree, 'cow_%s.c' % e))
        wanted[e] = lift_path(tree, e)
    for e in units:                                   # a unit that is already in src/lifted
        with open(os.path.join(TMP, 'src', 'lifted', 'cow_%s.c' % e), 'w', encoding='utf-8') as fh:
            fh.write('/* the unit there now */\nvoid cow_fn_%s(Guest* g){ (void)g; }\n' % e)
    with open(os.path.join(TMP, 'cow', 'lift_proof_all.json'), 'w', encoding='utf-8') as fh:
        json.dump(ledger or {}, fh)
    with open(os.path.join(TMP, 'build', 'cycle', 'rise_unanswered.json'), 'w', encoding='utf-8') as fh:
        json.dump(wanted, fh)
    cycle.ROOT = TMP
    cycle.WORK = os.path.join(TMP, 'build', 'cycle')
    cycle.RISE_UNANSWERED = os.path.join(cycle.WORK, 'rise_unanswered.json')
    return tree, wanted


calls = []
ANSWERS = {}


def stub_fan_out(repo, todo, shas, jid, workers, chunk, name, src=None, budget=1):
    calls.append({'todo': list(todo), 'workers': workers, 'chunk': chunk, 'name': name,
                  'src': src, 'jid': jid, 'shas': dict(shas)})
    return dict(ANSWERS.get('_next', {}))


P.fan_out = stub_fan_out

fails = []


def check(cond, msg):
    print(('  ok   ' if cond else '  FAIL ') + msg)
    if not cond:
        fails.append(msg)


def run(entries, ledger=None, units=(), answers=None):
    calls[:] = []
    ANSWERS.clear()
    ANSWERS['_next'] = answers or {}
    tree, wanted = setup(entries, ledger, units)
    if not entries:
        os.remove(cycle.RISE_UNANSWERED)
    n = cycle.settle_unanswered(9, JID)
    return n, cycle._unanswered_load(), (calls[0] if calls else None), tree


def rec(e, tier, tree):
    return {'tier': tier, 'judge': JID, 'blocks': '4/4', 'clean': 10,
            'src': P.file_sha(os.path.join(tree, 'cow_%s.c' % e))}


print('A. nothing on the list')
n, left, call, tree = run([])
check(n == 0 and call is None and left == {}, 'no file / no entries: asks nobody, keeps nothing')

print('B. six lifts, the provers answer none of them')
n, left, call, tree = run(ENTS)
check(call is not None and (call['workers'], call['chunk']) == (1, 1),
      'asks on ONE prover, ONE unit per chunk (the contention that lost the answer): %s/%s'
      % ((call or {}).get('workers'), (call or {}).get('chunk')))
check(call['name'] == 'u1' and call['src'] == os.path.join('build', 'cycle', 'rise_tree'),
      'its own prover tag, and reads the scratch tree, not src/lifted')
check(call['todo'] == sorted(ENTS), 'asks every one of them: %d' % len(call['todo']))
check(all(call['shas'][e] == P.file_sha(os.path.join(tree, 'cow_%s.c' % e)) for e in ENTS),
      'the sha handed over is the sha of that very file (that is what answered() compares)')
check(call['jid'] == JID, 'the current judge, so a stale row cannot count as an answer')
check(n == 0 and len(left) == 6, 'nothing kept, all six stay on the list for a later cycle')

print('C. two better, two answered-worse, one timeout, one silent (none had a unit before)')
ans = {ENTS[0]: rec(ENTS[0], 'gold', tree), ENTS[1]: rec(ENTS[1], 'silver', tree),
       ENTS[2]: rec(ENTS[2], 'fail', tree), ENTS[3]: rec(ENTS[3], 'fail', tree),
       ENTS[4]: {'tier': 'timeout', 'judge': JID, 'src': 'deadbeef'}}
n, left, call, tree = run(ENTS, answers=ans)
check(n == 2, 'keeps the gold and the silver only (fail ranks no higher than no unit at all): %d' % n)
check(os.path.isfile(os.path.join(TMP, 'src', 'lifted', 'cow_%s.c' % ENTS[0])),
      'a kept lift is copied into src/lifted')
check(not os.path.isfile(os.path.join(TMP, 'src', 'lifted', 'cow_%s.c' % ENTS[2])),
      'an answered-but-worse verdict writes no unit')
led = P.read_ledger(TMP)
check(led.get(ENTS[0], {}).get('tier') == 'gold', 'the kept verdict reaches the ledger')
check(ENTS[2] not in left and ENTS[3] not in left, 'what the judge ANSWERED leaves the list, kept or not')
check(ENTS[4] in left and ENTS[5] in left, 'the timeout row (not an answer) and the silent one stay on it')

print('D. what is already settled is not asked again')
tree, wanted = setup(ENTS)
u = os.path.join(TMP, 'src', 'lifted', 'cow_%s.c' % ENTS[0])
open(u, 'w', encoding='utf-8').write('/* judged already */\n')
ledger = {ENTS[0]: {'tier': 'gold', 'judge': JID, 'src': P.file_sha(u)}}
with open(os.path.join(TMP, 'cow', 'lift_proof_all.json'), 'w', encoding='utf-8') as fh:
    json.dump(ledger, fh)
wanted['deaddead'] = os.path.join(tree, 'cow_deaddead.c')     # a lift whose file is gone
with open(cycle.RISE_UNANSWERED, 'w', encoding='utf-8') as fh:
    json.dump(wanted, fh)
calls[:] = []
ANSWERS['_next'] = {}
n = cycle.settle_unanswered(9, JID)
check(calls and ENTS[0] not in calls[0]['todo'],
      'a unit somebody judged since is not asked again')
check('deaddead' not in cycle._unanswered_load(),
      'a lift whose file no longer exists is dropped from the list')

print('E. a worse lift for a function that already has a unit')
tree, wanted = setup([ENTS[0]])
u = os.path.join(TMP, 'src', 'lifted', 'cow_%s.c' % ENTS[0])
open(u, 'w', encoding='utf-8').write('/* the silver unit there now */\n')
with open(os.path.join(TMP, 'cow', 'lift_proof_all.json'), 'w', encoding='utf-8') as fh:
    json.dump({ENTS[0]: {'tier': 'silver', 'judge': JID, 'src': P.file_sha(u)}}, fh)
with open(cycle.RISE_UNANSWERED, 'w', encoding='utf-8') as fh:
    json.dump({ENTS[0]: wanted[ENTS[0]]}, fh)
calls[:] = []
ANSWERS['_next'] = {ENTS[0]: rec(ENTS[0], 'weak', tree)}       # weaker than the silver in place
before = P.file_sha(u)
n = cycle.settle_unanswered(9, JID)
check(n == 0 and P.file_sha(u) == before, 'a lift weaker than the unit in place never overwrites it')
check(ENTS[0] not in cycle._unanswered_load(), 'but its answer was had, so it leaves the list')

print('F. the bound')
n, left, call, tree = run(['%08x' % (0x10000000 + i) for i in range(cycle.UNANSWERED_ASK + 7)])
check(len(call['todo']) == cycle.UNANSWERED_ASK,
      'asks at most UNANSWERED_ASK (%d) in one cycle: %d' % (cycle.UNANSWERED_ASK, len(call['todo'])))
check(len(left) == cycle.UNANSWERED_ASK + 7, 'what it did not ask is still on the list: %d' % len(left))

print()
print('FAILURES: %d' % len(fails))
for f in fails:
    print('  - ' + f)
shutil.rmtree(TMP, ignore_errors=True)
sys.exit(1 if fails else 0)
