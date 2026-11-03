"""Prove tools/cow/who_locks.py really detects a holder instead of only printing 0.

Against a file nobody has open, "0 holder(s)" is indistinguishable from a broken call - which is
exactly how the Restart Manager bugs in who_locks.py hid for two rounds. Two cases:

  module  start `ping -t 127.0.0.1` and ask who holds ping.exe. The Toolhelp module scan must name
          that pid, and after killing it the answer must go back to empty.
  handle  start tools/cow/hold_file.py on a scratch file under build/ and query it. The Restart
          Manager owns this case; if SessionEnv is stopped it cannot enumerate, and who_locks has
          to say so in diagnostics instead of claiming nobody.

  python tools/cow/who_locks_selftest.py
  python tools/cow/who_locks_selftest.py --keep     # leave the scratch file behind
"""
import argparse
import os
import subprocess
import sys
import time

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(HERE))
sys.path.insert(0, HERE)
import who_locks  # noqa: E402

PING = os.path.join(os.environ.get('SystemRoot', r'C:\Windows'), 'System32', 'ping.exe')


def wait_for(predicate, tries=60, delay=0.25):
    for _ in range(tries):
        if predicate():
            return True
        time.sleep(delay)
    return False


def case_module():
    """A loaded image is the case that locks FFXiMain.dll."""
    if not os.path.isfile(PING):
        print('MODULE  SKIP (no %s)' % PING)
        return True
    proc = subprocess.Popen([PING, '-t', '127.0.0.1'],
                            stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    try:
        seen = wait_for(lambda: proc.pid in {p for h in who_locks.scan(PING)['holders']
                                             for p in h['pids']})
        if not seen:
            print('MODULE  FAIL pid=%d never reported: %s' % (proc.pid, who_locks.scan(PING)))
            return False
        held = [h for h in who_locks.scan(PING)['holders'] if proc.pid in h['pids']]
        print('MODULE  PASS pid=%d reported by %s' % (proc.pid, [h['source'] for h in held]))
    finally:
        proc.terminate()
        try:
            proc.wait(timeout=15)
        except subprocess.TimeoutExpired:
            proc.kill()
            proc.wait(timeout=15)
    gone = wait_for(lambda: proc.pid not in {p for h in who_locks.scan(PING)['holders']
                                             for p in h['pids']})
    if not gone:
        print('MODULE  FAIL pid=%d still reported after terminate' % proc.pid)
        return False
    return True


def case_handle(keep):
    """A plain file handle is Restart Manager's job; the fallback must at least be honest."""
    scratch = os.path.join(ROOT, 'build', 'who-locks-target.bin')
    open(scratch, 'ab').close()
    holder = subprocess.Popen([sys.executable, os.path.join(HERE, 'hold_file.py'),
                               scratch, '--seconds', '25'],
                              stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    try:
        result = None
        for _ in range(40):
            time.sleep(0.25)
            result = who_locks.scan(scratch)
            if result['holders'] or result['diagnostics']:
                break
        if result is None:
            print('HANDLE  FAIL no answer at all')
            return False
        if result['error']:
            print('HANDLE  FAIL %s' % result['error'])
            return False
        named = {p for h in result['holders'] for p in h['pids']}
        if holder.pid in named:
            print('HANDLE  PASS pid=%d named by %s'
                  % (holder.pid, [h['source'] for h in result['holders']]))
            return True
        diag = ' | '.join(result['diagnostics'])
        if 'SessionEnv' in diag or 'ERROR_MORE_DATA' in diag:
            print('HANDLE  PASS(noted) Restart Manager cannot enumerate here: %s' % diag)
            return True
        print('HANDLE  FAIL holder pid=%d invisible and unexplained: %s' % (holder.pid, diag))
        return False
    finally:
        if holder.poll() is None:
            holder.kill()
        try:
            holder.wait(timeout=15)
        except Exception as exc:                                   # noqa: BLE001
            print('note: holder did not exit cleanly (%s)' % exc)
        if not keep:
            for _ in range(20):
                try:
                    os.remove(scratch)
                    break
                except OSError as exc:
                    err = exc
                    time.sleep(0.25)
            else:
                print('note: could not remove %s (%s)' % (scratch, err))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--keep', action='store_true', help='do not delete the scratch file')
    args = ap.parse_args()

    results = {'module': case_module(), 'handle': case_handle(args.keep)}
    print('WHO_LOCKS_SELFTEST %s (%s)'
          % ('PASS' if all(results.values()) else 'FAIL',
             ', '.join('%s=%s' % kv for kv in results.items())))
    return 0 if all(results.values()) else 1


if __name__ == '__main__':
    sys.exit(main())
