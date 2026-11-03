"""Hold a file open so tools/cow/who_locks.py has a real holder to find.

Test fixture only: against a file nobody has open, who_locks.py printing "0 holder(s)" proves
nothing. Run this in the background, then who_locks_selftest.py (or who_locks.py by hand).

  python tools/cow/hold_file.py build/who-locks-target.bin --seconds 30
"""
import argparse
import os
import sys
import time


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('path')
    ap.add_argument('--seconds', type=float, default=20.0)
    args = ap.parse_args()

    path = os.path.abspath(args.path)
    parent = os.path.dirname(path)
    if parent:
        os.makedirs(parent, exist_ok=True)
    handle = open(path, 'ab')
    handle.write(b'\0')
    handle.flush()
    print('pid=%d holding %s for %.0fs' % (os.getpid(), path, args.seconds), flush=True)
    try:
        time.sleep(args.seconds)
    finally:
        handle.close()
    return 0


if __name__ == '__main__':
    sys.exit(main())
