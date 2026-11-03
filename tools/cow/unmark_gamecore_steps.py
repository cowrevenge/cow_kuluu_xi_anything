"""Remove the temporary 'gamecore step A..F' markers from host/ffximain.c.

They were there to find out which of the gamecore install calls faulted (answer: none, once
gwin_init/plat_commit could actually commit memory). The permanent log line is the one gamecore.c
already prints - 'gamecore: object ..., function table ..., N slots implemented' - so the scaffolding
goes back out before the commit.

  python tools/cow/unmark_gamecore_steps.py            # show
  python tools/cow/unmark_gamecore_steps.py --apply
"""
import sys

P = 'host/ffximain.c'
s = open(P, encoding='utf-8', newline='').read()
kept, dropped = [], []
for line in s.splitlines(True):
    (dropped if 'gamecore step' in line else kept).append(line)
print('removing %d marker line(s)' % len(dropped))
for d in dropped:
    print('   -', d.strip())
if '--apply' in sys.argv:
    open(P, 'w', encoding='utf-8', newline='').write(''.join(kept))
    print('patched %s' % P)
