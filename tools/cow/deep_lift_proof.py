#!/usr/bin/env python3
"""The prover (tools/cow/ghidra/lift_proof.py) with more states for each row: COW_DEEP_STATES of them where
the judge's own count is judge2.STATES_MAX. THE SAME JUDGE: its files are not touched, its id is the same,
its flags and its comparison are the same - `--states` is the prover's own option. A row still stops as soon
as it is proven (every site reached, the clean states it needs), and the states come in the same order, so a
unit that is gold at the judge's count is gold here in the very same states. What changes is how long a row
that is NOT proven keeps looking: the judge's states are coverage-guided (tools/cow/cowdiff.c,
COVERAGE-GUIDED STATES), and they were stopped at 2000 with the corpus still growing. On 31 weak and silver
units, 40000 states and four times the row's time: 2 gold, 5 weak to silver, the blocks reached grew in 16.

Started by tools/cow/cycle.py (the grind) through par_prove.fan_out, which finds it in COWPAR_PROVER and
raises the row's time and the watchdogs to match.

    COW_DEEP_STATES=40000 python tools/cow/deep_lift_proof.py --list L --out scratch.json --rerun
"""
import os
import runpy
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
PROVER = os.path.join(HERE, "ghidra", "lift_proof.py")


def main():
    states = os.environ.get("COW_DEEP_STATES", "")
    if states.isdigit() and "--states" not in sys.argv:
        sys.argv += ["--states", states]
    sys.argv[0] = PROVER
    runpy.run_path(PROVER, run_name="__main__")


if __name__ == "__main__":
    main()
