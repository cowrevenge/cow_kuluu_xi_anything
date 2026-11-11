"""The key-format trap, demonstrated instead of asserted.

`cow/lift_proof_all.json` is keyed by BARE hex (`103134c6`). A lookup written as
`proof.get("0x" + a)` returns None for EVERY unit, which is indistinguishable - to a script that only
prints a count - from "none of them pass". That is how the register-argument census reported
"recorded pass=True: 0 of 366" and how a re-lift join reported all 206 rows as NEVER RECORDED,
including 40 controls that the runner had just validated as passing from the same file.

This module makes the correct lookup the only convenient one, and provides the tripwire that would
have caught both: any function that consults the map must FIRST show that it can retrieve a row for a
unit known to be in it. `resolve_key` accepts either spelling; `assert_can_fire` refuses a map shape
the caller does not understand.
"""
import io
import json
import os
import re

ROOT = os.path.abspath(os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "..", ".."))
MAP = os.path.join(ROOT, "cow", "lift_proof_all.json")


def strip0x(a):
    a = str(a).strip().lower()
    return a[2:] if a.startswith("0x") else a


def load_map(path=MAP):
    if not os.path.isfile(path):
        raise SystemExit("REFUSING: %s is missing - no pass/fail claim may be made without it" % path)
    with io.open(path, encoding="utf-8") as fh:
        pm = json.load(fh)
    if not isinstance(pm, dict) or not pm:
        raise SystemExit("REFUSING: the proof map is %s - refusing to read a verdict out of it"
                         % type(pm).__name__)
    return pm


def can_fire(pm):
    """Return the key spelling the map actually uses, or refuse.

    The point is not the normalisation, it is that this function CANNOT SUCCEED on a map whose keys it
    does not understand: it demands that at least one key resolves to a dict with a `pass` field. A
    caller that skipped it and looked up the wrong spelling would report zero, and zero looks like an
    answer.
    """
    sample = [k for k, v in pm.items() if isinstance(v, dict) and "pass" in v]
    if not sample:
        raise SystemExit("REFUSING: no row in the proof map has a `pass` field - whatever the counts"
                         " say, this code cannot read them")
    want = strip0x(sample[0])
    if want not in pm:
        raise SystemExit("REFUSING: cannot round-trip a key through strip0x (%r)" % sample[0])
    return len(sample)


def lookup(pm, addr, _checked=[]):
    """The one lookup that is allowed to answer a pass/fail question."""
    if not _checked:
        can_fire(pm)
        _checked.append(True)
    row = pm.get(strip0x(addr))
    return row if isinstance(row, dict) else None


def is_pass(pm, addr):
    row = lookup(pm, addr)
    return bool(row) and row.get("pass") is True
