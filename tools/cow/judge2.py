"""judge2 - what a judge-v2 verdict MEANS. No build, no harness, no model: only decisions.

Everything that interprets a verdict lives here, so cowdiff.py, lift_proof.py, reverify.py, status.py and the
conveyor cannot each grow their own idea of it:

    the flags            what every judge-v2 run passes to cowdiff.exe
    the contract         which bits of eax/edx a unit's callers can see, and which stack words are its own
    one verdict line     COWDIFF PASS/FAIL ...          ->  a result
    the tier             gold / silver / weak / fail    ->  what may be counted
    the record           one unit's entry in the proof ledger, valid only for THIS file and THIS judge

    python tools/cow/judge2.py --selftest                  # every rule below against fixed cases
    python tools/cow/judge2.py --judge-id                  # the id of the judge that is on disk now
    python tools/cow/judge2.py --retuse DUMP.jsonl         # cow/retuse.json from the Ghidra dump
    python tools/cow/judge2.py --explain 0x1024c910        # the contract one unit is judged under, and why

EDITING THIS FILE CHANGES THE JUDGE'S ID (it is one of JUDGE_FILES), which voids every recorded proof and
costs a full re-baseline. Wording for people and models lives in tools/cow/conveyor.py, not here.

THE TIERS (the only definition; everything else imports it)

    gold     PASS under judge 2, at least GOLD_CLEAN states completed cleanly on both sides, and EVERY
             instruction site of the original reached in such a state. This is the only thing called proven.
    silver   PASS, at least SILVER_CLEAN clean states and SILVER_COV of the sites. Tested, not proven.
    weak     PASS with less than that, or a PASS from a run that was not judge 2. Counts for nothing.
    fail     a mismatch.      noisy   the harness disagrees with ITSELF on this unit (--self fails), so a
    failure says nothing about the unit.      nocompile / timeout / hang: as named.

THE CONTRACT (why a register may be ignored, and when it may not)

    The old comparison demanded that eax, edx and every stack byte match the original - including the
    scratch a `void` function leaves in eax and the dead frame below the returned esp, which no caller can
    read. That forced every unit to replay the original's frame and register traffic, and failed correct C.

    A register is ignored ONLY when all three hold:
      1. Ghidra's own signature for the function says the bits are not part of the result
         (void / float: all of eax and edx;  char: the upper 24 bits;  short: the upper 16;  not 64-bit: edx)
      2. at least one direct caller exists (a WITNESS), and
      3. no direct caller reads more than that (Ghidra spells such a read `extraout_EAX`, `extraout_var`...).
    Anything else - no dump row, no direct caller, a caller that reads the leftovers - is compared in full,
    exactly as before. A unit's own COW_CONTRACT line can only make its contract STRICTER, never looser.
"""
import argparse
import hashlib
import json
import os
import re
import sys
import tempfile
import time

STATES_MAX = 2000        # the most states one row may run
CLEAN_TARGET = 100       # a row stops early at this many clean states once every site is covered
GOLD_CLEAN = 100
SILVER_CLEAN = 30
SILVER_COV = 0.70
FUZZ_ARGS = 8            # stack argument words the state generator fills
ROW_CPU_SECS = 30        # per-row budgets for a judge-2 run (the old 6/8 were sized for 400 states)
ROW_WALL_SECS = 45

RETUSE_REL = os.path.join("cow", "retuse.json")
# The files that decide what a verdict means. A record made by a different judge is not a verdict of
# this one, so changing ANY of them invalidates every record (see judge_id / is_valid).
JUDGE_FILES = ["tools/cow/cowdiff.c", "tools/cow/cowdiff_batch.h", "tools/cow/judge2.py",
               "runtime/guest.h", "runtime/portable/gwin.c", "cow/retuse.json"]

# (eax bits nobody reads, edx nobody reads) for each kind of return value
RET_KINDS = {
    "void": (0xFFFFFFFF, 1),
    "u8": (0xFFFFFF00, 1),
    "u16": (0xFFFF0000, 1),
    "u32": (0x00000000, 1),
    "u64": (0x00000000, 0),
    "f32": (0xFFFFFFFF, 1),   # the value is in st(0), which is always compared
    "f64": (0xFFFFFFFF, 1),
    "strict": (0x00000000, 0),
}
CONTRACT_RE = re.compile(r"COW_CONTRACT\s+ret=(\w+)\s+stack_args=(\d+)")


def judge_flags():
    """What makes a run a judge-2 run. One place, so no runner can drift."""
    return ["--grade", "contract", "--stategen", "2", "--clean", str(CLEAN_TARGET)]


def harness_flags():
    """judge_flags() plus the default depth, for a caller that has no --states/--args of its own."""
    return judge_flags() + ["--states", str(STATES_MAX), "--args", str(FUZZ_ARGS)]


# ------------------------------------------------------------------------------------ Ghidra's signature

_GHIDRA_RET = (
    (re.compile(r"^void$"), "void"),
    (re.compile(r"^(bool|char|uchar|byte|sbyte|undefined1|BOOLEAN)$"), "u8"),
    (re.compile(r"^(short|ushort|word|undefined2|wchar_t|WORD)$"), "u16"),
    (re.compile(r"^(longlong|ulonglong|undefined8|__int64|__uint64|qword|int64|uint64)$"), "u64"),
    (re.compile(r"^float$"), "f32"),
    (re.compile(r"^(double|float10)$"), "f64"),
)
_SIG_RE = re.compile(r"([A-Za-z_][\w \t\*]*?)\s*(__\w+\s+)?(?:thunk_)?FUN_[0-9a-fA-F]{8}\s*\(([^)]*)\)")


def ghidra_sig(c_text):
    """{'kind', 'conv', 'params', 'stack_params'} read off `<type> [__conv] FUN_xxxxxxxx(<params>)`.

    A pointer, an `undefined4` or a type this does not know is a full 32-bit result: the strict reading,
    and therefore the safe one. stack_params is how many of the declared parameters travel on the stack
    (thiscall keeps one in ecx, fastcall up to two in ecx/edx); it caps what a unit may claim as its own
    argument slots.
    """
    head = (c_text or "").split("{", 1)[0]
    m = _SIG_RE.search(head)
    if not m:
        return {"kind": "u32", "conv": "", "params": 0, "stack_params": 0}
    t = " ".join(m.group(1).replace("\n", " ").split())
    kind = "u32"
    if "*" not in t:
        last = t.split()[-1] if t else ""
        for rx, k in _GHIDRA_RET:
            if rx.match(last):
                kind = k
                break
    conv = (m.group(2) or "").strip().lstrip("_")
    plist = m.group(3).strip()
    params = 0 if plist in ("", "void") else len([p for p in plist.split(",") if p.strip() and p.strip() != "..."])
    in_regs = 1 if conv == "thiscall" else 2 if conv == "fastcall" else 0
    return {"kind": kind, "conv": conv, "params": params, "stack_params": max(0, params - in_regs)}


def ghidra_ret_kind(c_text):
    return ghidra_sig(c_text)["kind"]


# ------------------------------------------------------------------------- who reads the return registers

_CALL_RE = re.compile(r"(?<![A-Za-z0-9_])(?:thunk_)?FUN_([0-9a-fA-F]{8})\s*\(")
_TAINT_EAX = re.compile(r"\bextraout_(?:EAX|AX|AL|AH|var)\w*")
_TAINT_EDX = re.compile(r"\bextraout_(?:EDX|DX|DL|DH)\w*")
_DECL_LINE = re.compile(r"^[ \t]*[A-Za-z_][\w \t\*]*\bextraout_\w+[ \t]*;[ \t]*$", re.M)


def scan_callers(c_text):
    """One decompiled function -> (callees it may be reading eax from, ...edx from, every callee it calls).

    Ghidra names a register that a call left behind and the callee's prototype does not declare
    `extraout_EAX` (or `extraout_var` for the upper bytes of a narrow result). Each such variable is the
    output of ONE call, and that call comes before the use in the text. Which one it is cannot be read off
    the C reliably, so EVERY call that textually precedes the last use is treated as read. That compares
    some units more than needed and can never compare one less than needed.
    """
    body = c_text or ""
    i = body.find("{")
    body = body[i:] if i >= 0 else ""
    body = _DECL_LINE.sub("", body)          # `undefined4 extraout_EAX;` is a declaration, not a use
    calls = [(m.start(), m.group(1).lower()) for m in _CALL_RE.finditer(body)]
    last_eax = max([m.start() for m in _TAINT_EAX.finditer(body)] or [-1])
    last_edx = max([m.start() for m in _TAINT_EDX.finditer(body)] or [-1])
    eax = {c for pos, c in calls if pos < last_eax}
    edx = {c for pos, c in calls if pos < last_edx}
    return eax, edx, {c for _pos, c in calls}


def build_retuse(records):
    """records: an iterable of {'addr': '0x...', 'c': '...'} (the Ghidra dump) -> the retuse table.

    {callee: [kind, stack_params, direct callers (not counting itself), taint]}   taint: 1 eax, 2 edx

    The taint is closed under one rule that the C cannot show directly: when a function is read for MORE
    than its own signature declares (a `void` whose eax a caller reads), the value came from somewhere
    inside it that the decompiler did not model - usually the last call it made - so every function it
    calls is treated as read too, and so on down.
    """
    sig, callees_of = {}, {}
    callers = {}
    taint = {}
    for d in records:
        a = (d.get("addr") or "").lower().replace("0x", "").zfill(8)
        if len(a) != 8:
            continue
        c = d.get("c") or ""
        sig[a] = ghidra_sig(c)
        eax, edx, called = scan_callers(c)
        callees_of[a] = called
        for x in called:
            if x != a:
                callers[x] = callers.get(x, 0) + 1
        for x in eax:
            taint[x] = taint.get(x, 0) | 1
        for x in edx:
            taint[x] = taint.get(x, 0) | 2
    # the closure: a function read beyond its declared result passes the read on to what it calls
    work = [a for a in taint]
    while work:
        a = work.pop()
        dead_eax, dead_edx = RET_KINDS[sig.get(a, {}).get("kind", "u32")]
        spill = (1 if (taint[a] & 1) and dead_eax else 0) | (2 if (taint[a] & 2) and dead_edx else 0)
        if not spill:
            continue
        for x in callees_of.get(a, ()):
            if (taint.get(x, 0) | spill) != taint.get(x, 0):
                taint[x] = taint.get(x, 0) | spill
                work.append(x)
    out = {}
    for a in set(sig) | set(callers) | set(taint):
        s = sig.get(a)
        if s is None:
            continue   # called but not in the dump: no signature, so no row, so judged in full
        out[a] = [s["kind"], s["stack_params"], callers.get(a, 0), taint.get(a, 0)]
    return out


_RETUSE_CACHE = {}


def load_retuse(root):
    """cow/retuse.json, or {} when it has not been built (every unit is then judged in full)."""
    path = os.path.join(root, RETUSE_REL)
    key = (path, os.path.getmtime(path) if os.path.isfile(path) else 0)
    if key not in _RETUSE_CACHE:
        _RETUSE_CACHE.clear()
        data = {}
        if os.path.isfile(path):
            with open(path, encoding="utf-8") as fh:
                data = json.load(fh)
        _RETUSE_CACHE[key] = data
    return _RETUSE_CACHE[key]


# ------------------------------------------------------------------------------------ the contract

def parse_contract(text):
    """The unit file's own claim: {'ret': kind, 'stack_args': n}, or None when it makes none.

        /* COW_CONTRACT ret=void stack_args=2 */
    """
    m = CONTRACT_RE.search(text or "")
    if not m or m.group(1) not in RET_KINDS:
        return None
    return {"ret": m.group(1), "stack_args": int(m.group(2))}


def _label(eax_dead, edx_dead, hint):
    if (eax_dead, edx_dead) == RET_KINDS["void"]:
        return hint if hint in ("f32", "f64") else "void"
    for k in ("u8", "u16", "u32"):
        if (eax_dead, edx_dead) == RET_KINDS[k]:
            return k
    return "u64" if hint == "u64" else "strict"


def effective_contract(text, use, derive):
    """(eax_dead, edx_dead, stack_args, label, why) - what the harness is told for one unit.

    text    the unit file (for its COW_CONTRACT line, if it has one)
    use     this function's row of the retuse table, or None
    derive  True for machine-written units (src/lifted): with no COW_CONTRACT line the contract is read
            from Ghidra's signature. False for hand units: no line means compare everything.
    """
    claim = parse_contract(text)
    if use is None:
        return 0, 0, 0, "strict", "no retuse row for this function: everything is compared"
    kind, stack_params, callers, taint = use[0], int(use[1]), int(use[2]), int(use[3])
    if claim is None and not derive:
        return 0, 0, 0, "strict", "no COW_CONTRACT line: everything is compared"
    eax_dead, edx_dead = RET_KINDS.get(kind, (0, 0))
    why = []
    if callers == 0:
        eax_dead, edx_dead = 0, 0
        why.append("no direct caller to witness the return contract")
    if taint & 1 and eax_dead:
        eax_dead = 0
        why.append("a direct caller reads eax after the call")
    if taint & 2 and edx_dead:
        edx_dead = 0
        why.append("a direct caller reads edx after the call")
    stack_args = 0
    if claim is not None:
        c_eax, c_edx = RET_KINDS[claim["ret"]]
        if (eax_dead & c_eax) != eax_dead or (edx_dead and not c_edx):
            why.append("the unit claims a wider result (%s) than the signature (%s)" % (claim["ret"], kind))
        eax_dead &= c_eax
        edx_dead = 1 if (edx_dead and c_edx) else 0
        stack_args = min(claim["stack_args"], stack_params)
        if claim["stack_args"] > stack_params:
            why.append("claims %d stack argument(s), the signature has %d" % (claim["stack_args"], stack_params))
    return eax_dead, edx_dead, stack_args, _label(eax_dead, edx_dead, kind), "; ".join(why)


# ------------------------------------------------------------------------------------ verdict lines

_PASS_RE = re.compile(r"^COWDIFF PASS (\w+) states=(\d+) blocks=(\d+)/(\d+)(.*)$")
_FAIL_RE = re.compile(r"^COWDIFF FAIL (\w+) (.*)$")
_KV_RE = re.compile(r"\b(clean|afault|asym|judge)=(\d+)")
_GRADE_RE = re.compile(r"\bgrade=(\w+)")
_WHY_RE = re.compile(r"first at state\s+(\d+)\s*\(([^)]*)\)")


def parse_line(line):
    """One line of cowdiff.exe output -> a result dict, or None when the line is not a verdict."""
    line = line.rstrip("\r\n")
    m = _PASS_RE.match(line)
    if m:
        kv = {k: int(v) for k, v in _KV_RE.findall(m.group(5))}
        g = _GRADE_RE.search(m.group(5))
        return {"entry": m.group(1).lower(), "pass": True, "states": int(m.group(2)),
                "cov": (int(m.group(3)), int(m.group(4))), "clean": kv.get("clean"),
                "afault": kv.get("afault"), "asym": kv.get("asym"), "judge": kv.get("judge", 1),
                "grade": g.group(1) if g else None, "why": "", "raw": line}
    m = _FAIL_RE.match(line)
    if m:
        kv = {k: int(v) for k, v in _KV_RE.findall(m.group(2))}
        w = _WHY_RE.search(m.group(2))
        return {"entry": m.group(1).lower(), "pass": False, "states": None, "cov": None,
                "clean": kv.get("clean"), "afault": kv.get("afault"), "asym": kv.get("asym"),
                "judge": kv.get("judge", 1), "grade": "none",
                "why": w.group(2).strip() if w else "other",
                "first_state": int(w.group(1)) if w else None, "raw": line}
    return None


def tier(res):
    """gold / silver / weak / fail / timeout for one parsed result (the rules are in the module docstring)."""
    if res is None:
        return "fail"
    if not res.get("pass"):
        return "timeout" if (res.get("why") or "") in ("timeout", "wall timeout") else "fail"
    clean, cov = res.get("clean"), res.get("cov")
    if res.get("judge") != 2 or clean is None or not cov or not cov[1]:
        return "weak"
    if clean >= GOLD_CLEAN and cov[0] == cov[1]:
        return "gold"
    if clean >= SILVER_CLEAN and cov[0] >= SILVER_COV * cov[1]:
        return "silver"
    return "weak"


# ------------------------------------------------------------------------------------ the record

def file_sha(path):
    """sha1 of a unit file with line endings normalised, so a CRLF checkout is the same file."""
    with open(path, "rb") as fh:
        data = fh.read().replace(b"\r\n", b"\n")
    return hashlib.sha1(data).hexdigest()


def judge_id(root):
    """12 hex digits naming the judge that is on disk right now (a missing file is part of the name)."""
    h = hashlib.sha1()
    for rel in JUDGE_FILES:
        p = os.path.join(root, rel)
        h.update(rel.encode() + b"\0")
        if os.path.isfile(p):
            with open(p, "rb") as fh:
                h.update(fh.read().replace(b"\r\n", b"\n"))
        h.update(b"\0")
    return h.hexdigest()[:12]


def make_record(res, src_sha, jid, label="strict", note=""):
    """What the proof ledger keeps for one unit. `pass` is True ONLY for gold, so every older reader of the
    ledger that counts `pass` now counts proven units and nothing else."""
    t = tier(res)
    cov = res.get("cov") or (0, 0)
    rec = {"pass": t == "gold", "tier": t, "verdict": "pass" if res.get("pass") else "fail",
           "grade": res.get("grade") or "none", "why": res.get("why") or "",
           "states": res.get("states") or 0, "blocks": "%d/%d" % (cov[0], cov[1]),
           "clean": res.get("clean") or 0, "afault": res.get("afault") or 0, "asym": res.get("asym") or 0,
           "contract": label, "src": src_sha, "judge": jid}
    if note:
        rec["note"] = note
    if not res.get("pass"):
        rec["raw"] = (res.get("raw") or "")[:700]
    return rec


def is_valid(rec, src_sha, jid):
    """A record counts only for the exact file and the exact judge that produced it."""
    return bool(rec) and rec.get("src") == src_sha and rec.get("judge") == jid


def write_json(path, data):
    """Atomic: a reader sees the old complete file or the new complete file, never half of one."""
    tmp = path + ".tmp"
    with open(tmp, "w", encoding="utf-8", newline="\n") as fh:
        json.dump(data, fh, indent=1, sort_keys=True)
    os.replace(tmp, path)


def update_ledger(path, changes, timeout=60.0):
    """Merge {entry: record} into the ledger at `path`, and return the merged ledger.

    TWO WRITERS. A baseline run and the conveyor may both be adding verdicts to cow/lift_proof_all.json.
    Each used to hold the whole ledger in memory and write all of it back, so whichever wrote second
    erased what the other had added since it started - verdicts lost with nothing wrong anywhere. A writer
    now states only the entries it is answering for; they are merged into whatever is on disk at that
    moment, under a lock that lives outside the repository (a stale lock, left by a process that died, is
    broken after `timeout` seconds).
    """
    lock = os.path.join(tempfile.gettempdir(),
                        "cow-ledger-%s.lock" % hashlib.sha1(os.path.abspath(path).lower().encode()).hexdigest()[:12])
    t0 = time.time()
    while True:
        try:
            os.close(os.open(lock, os.O_CREAT | os.O_EXCL | os.O_WRONLY))
            break
        except FileExistsError:
            if time.time() - t0 > timeout:
                try:
                    os.remove(lock)
                except OSError:
                    pass
                t0 = time.time()
            time.sleep(0.1)
    try:
        data = {}
        if os.path.isfile(path):
            try:
                with open(path, encoding="utf-8") as fh:
                    data = json.load(fh)
            except ValueError:
                data = {}
        data.update(changes)
        write_json(path, data)
        return data
    finally:
        try:
            os.remove(lock)
        except OSError:
            pass


# ------------------------------------------------------------------------------------ selftest

def _selftest():
    ok = [0, 0]

    def check(cond, what):
        ok[0 if cond else 1] += 1
        if not cond:
            print("SELFTEST FAIL: " + what)

    V = "/* COW_CONTRACT ret=void stack_args=2 */"
    # ---- signatures
    for sig, want in (("void __thiscall FUN_1024c910(int param_1,int param_2)\n{", ("void", "thiscall", 2, 1)),
                      ("undefined4 FUN_10010120(int param_1)\n\n{", ("u32", "", 1, 1)),
                      ("bool __fastcall FUN_10001234(void)\n{", ("u8", "fastcall", 0, 0)),
                      ("char * FUN_10001234(void)\n{", ("u32", "", 0, 0)),
                      ("longlong __cdecl FUN_10001234(int a,int b,int c)\n{", ("u64", "cdecl", 3, 3)),
                      ("float10 FUN_10001234(float param_1)\n{", ("f64", "", 1, 1)),
                      ("ushort FUN_10001234(void)\n{", ("u16", "", 0, 0)),
                      ("undefined FUN_10001234(void)\n{", ("u32", "", 0, 0)),
                      ("void thunk_FUN_10057160(void)\n{", ("void", "", 0, 0)),
                      ("void __fastcall FUN_10001234(int a,int b,int c)\n{", ("void", "fastcall", 3, 1)),
                      ("int __cdecl FUN_10001234(char *fmt,...)\n{", ("u32", "cdecl", 1, 1)),
                      ("garbage", ("u32", "", 0, 0))):
        s = ghidra_sig(sig)
        check((s["kind"], s["conv"], s["params"], s["stack_params"]) == want, "ghidra_sig %r -> %r" % (sig[:34], s))
    # ---- callers
    plain = "void FUN_10000000(int param_1)\n{\n  FUN_10000010(param_1);\n  FUN_10000020();\n  return;\n}"
    eax, edx, called = scan_callers(plain)
    check(not eax and not edx and called == {"10000010", "10000020"}, "plain caller reads nothing")
    reads = ("void FUN_10000100(void)\n{\n  int extraout_EAX;\n  undefined4 extraout_EDX;\n  FUN_10000010();\n"
             "  FUN_10000030(extraout_EAX);\n  FUN_10000040();\n  return;\n}")
    eax, edx, called = scan_callers(reads)
    check(eax == {"10000010", "10000030"}, "calls before the last use are read; the one after is not: %r" % eax)
    check(not edx, "a declaration alone is not a use")
    check("10000100" not in called, "the signature's own name is not a call")
    upper = "void FUN_10000200(void)\n{\n  undefined3 extraout_var;\n  char cVar1;\n  cVar1 = FUN_10000050();\n  FUN_10000060(CONCAT31(extraout_var,cVar1));\n}"
    check(scan_callers(upper)[0] == {"10000050", "10000060"}, "extraout_var is a read of the upper bytes")
    # ---- the table and its closure
    recs = [{"addr": "0x10000000", "c": plain},
            {"addr": "0x10000100", "c": reads},
            {"addr": "0x10000010", "c": "void FUN_10000010(int param_1)\n{\n  FUN_10000070();\n  return;\n}"},
            {"addr": "0x10000020", "c": "void FUN_10000020(void)\n{\n  return;\n}"},
            {"addr": "0x10000030", "c": "int FUN_10000030(int a)\n{\n  FUN_10000080();\n  return a;\n}"},
            {"addr": "0x10000070", "c": "void FUN_10000070(void)\n{\n  return;\n}"},
            {"addr": "0x10000080", "c": "void FUN_10000080(void)\n{\n  return;\n}"},
            {"addr": "0x10000090", "c": "void __cdecl FUN_10000090(int a,int b)\n{\n  return;\n}"}]
    use = build_retuse(recs)
    check(use["10000010"] == ["void", 1, 2, 1], "void, read by a caller: %r" % use["10000010"])
    check(use["10000070"][3] == 1, "the read passes down through a void function to what it calls")
    check(use["10000030"][3] == 1 and use["10000080"][3] == 0,
          "a function whose signature already declares eax does not pass the read on")
    check(use["10000020"] == ["void", 0, 1, 0], "void, one caller, nobody reads it")
    check(use["10000090"] == ["void", 2, 0, 0], "no caller at all")
    check("10000040" not in use, "called but not in the dump: no row")
    # ---- contracts
    check(effective_contract(V, None, True)[:4] == (0, 0, 0, "strict"), "no row: strict")
    check(effective_contract("x", use["10000020"], False)[:4] == (0, 0, 0, "strict"), "hand unit, no line: strict")
    check(effective_contract("x", use["10000020"], True)[:4] == (0xFFFFFFFF, 1, 0, "void"), "lifted void, derived")
    check(effective_contract("x", use["10000010"], True)[:4] == (0, 1, 0, "u32"), "void but a caller reads eax")
    check(effective_contract(V, use["10000090"], True)[:4] == (0, 0, 2, "strict"),
          "no witness: registers in full, own argument slots still its own")
    check(effective_contract(V, ["void", 1, 3, 0], True)[2] == 1, "stack_args capped by the signature")
    check(effective_contract("/* COW_CONTRACT ret=u32 stack_args=0 */", use["10000020"], True)[:4] == (0, 1, 0, "u32"),
          "a claim may be stricter than the signature")
    check(effective_contract(V, ["u32", 2, 3, 0], True)[:4] == (0, 1, 2, "u32"),
          "a claim may NOT be looser than the signature")
    check(effective_contract("x", ["u8", 0, 2, 0], True)[:4] == (0xFFFFFF00, 1, 0, "u8"), "char result")
    check(effective_contract("x", ["u8", 0, 2, 1], True)[:4] == (0, 1, 0, "u32"), "char result, upper bytes read")
    check(effective_contract("x", ["u64", 0, 2, 0], True)[:4] == (0, 0, 0, "u64"), "64-bit result")
    check(effective_contract("x", ["f64", 1, 2, 0], True)[:4] == (0xFFFFFFFF, 1, 0, "f64"), "float result")
    check(effective_contract("x", ["u32", 0, 2, 2], True)[:4] == (0, 0, 0, "strict"), "edx read by a caller")
    # ---- verdict lines
    p = parse_line("COWDIFF PASS 10010120 states=165 blocks=7/7 clean=100 afault=65 asym=0 grade=contract judge=2")
    check(p and p["pass"] and p["clean"] == 100 and p["cov"] == (7, 7) and p["grade"] == "contract", "parse PASS")
    check(tier(p) == "gold", "gold")
    L = "COWDIFF PASS 1 states=2000 blocks=%s clean=%d afault=0 asym=0 grade=exact judge=%d"
    check(tier(parse_line(L % ("6/7", 400, 2))) == "silver", "silver: a site missing")
    check(tier(parse_line(L % ("7/7", 40, 2))) == "silver", "silver: few clean states")
    check(tier(parse_line(L % ("4/112", 900, 2))) == "weak", "weak: 4 of 112 sites")
    check(tier(parse_line(L % ("7/7", 3, 2))) == "weak", "weak: 3 clean states")
    check(tier(parse_line(L % ("7/7", 2000, 1))) == "weak", "a PASS that is not judge 2 is weak")
    check(tier(parse_line("COWDIFF PASS 10010120 states=400 blocks=7/7")) == "weak", "an old-format PASS is weak")
    fl = ("COWDIFF FAIL 10010350 1 mismatch(es), first at state 3 (eax) fault 0/0 @00000000 00000000/00000000 x0 - "
          "store=missing A:0/00000000 B:0/00000000 reg=eax 00000007/00000009 esp=001937e4/001937e4 clean=2 "
          "afault=1 asym=0 judge=2 call=0:00000000/00000000 in=eax:00000001,ecx:00000000,edx:001829a4,"
          "ebx:07070707,esi:0018edac,edi:10001234,ebp:00000000,esp:001937e4 args=000001f4,00000000,00000001,ffffffff")
    f = parse_line(fl)
    check(f and not f["pass"] and f["why"] == "eax" and f["first_state"] == 3 and tier(f) == "fail", "parse FAIL")
    check(tier(parse_line("COWDIFF FAIL 1 1 mismatch(es), first at state 9 (timeout) fault 0/0")) == "timeout", "timeout")
    check(parse_line("[cowdiff] tracking 12 region(s), 17000 KB of guest memory") is None, "noise is not a verdict")
    # ---- the record
    rec = make_record(p, "abc", "j1", "void")
    check(rec["pass"] and rec["tier"] == "gold" and rec["blocks"] == "7/7" and is_valid(rec, "abc", "j1"), "record")
    check(not make_record(parse_line(L % ("6/7", 400, 2)), "a", "j")["pass"], "silver is not `pass`")
    check(not is_valid(rec, "abd", "j1") and not is_valid(rec, "abc", "j2") and not is_valid(None, "a", "b"), "stale")
    check(harness_flags()[:4] == ["--grade", "contract", "--stategen", "2"], "harness flags")
    d = tempfile.mkdtemp()
    led = os.path.join(d, "ledger.json")
    update_ledger(led, {"a": {"tier": "gold"}, "b": {"tier": "fail"}})
    other = update_ledger(led, {"c": {"tier": "gold"}})          # a second writer adds its own entry
    mine = update_ledger(led, {"b": {"tier": "gold"}})           # the first writer answers only for b
    check(mine == {"a": {"tier": "gold"}, "b": {"tier": "gold"}, "c": {"tier": "gold"}} and "c" in other,
          "update_ledger merges: neither writer erases the other's entries")
    print("judge2 selftest: %d passed, %d failed" % (ok[0], ok[1]))
    return 1 if ok[1] else 0


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--selftest", action="store_true")
    ap.add_argument("--judge-id", action="store_true")
    ap.add_argument("--retuse", help="the Ghidra dump (functions_all.jsonl): write cow/retuse.json")
    ap.add_argument("--explain", help="an entry: print the contract it is judged under")
    a = ap.parse_args()
    root = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    if a.selftest:
        return _selftest()
    if a.judge_id:
        print(judge_id(root))
        return 0
    if a.retuse:
        def records():
            with open(a.retuse, encoding="utf-8", errors="replace") as fh:
                for line in fh:
                    line = line.strip()
                    if line:
                        try:
                            yield json.loads(line)
                        except ValueError:
                            continue
        use = build_retuse(records())
        if len(use) < 1000:
            print("RETUSE FAIL: only %d function(s) read from the dump - wrong path or wrong format" % len(use))
            return 2
        out = os.path.join(root, RETUSE_REL)
        tmp = out + ".tmp"
        with open(tmp, "w", encoding="utf-8", newline="\n") as fh:
            fh.write("{\n" + ",\n".join('"%s":%s' % (k, json.dumps(use[k], separators=(",", ":")))
                                        for k in sorted(use)) + "\n}\n")
        os.replace(tmp, out)
        by = {}
        for k, u in use.items():
            lab = effective_contract("", u, True)[3]
            by[lab] = by.get(lab, 0) + 1
        n_void = sum(1 for u in use.values() if u[0] == "void")
        n_wit = sum(1 for u in use.values() if u[0] == "void" and u[2] == 0)
        n_taint = sum(1 for u in use.values() if u[0] == "void" and u[2] > 0 and u[3] & 1)
        print("RETUSE OK: %d functions -> %s" % (len(use), os.path.relpath(out, root)))
        print("  judged as: " + ", ".join("%s %d" % (k, by[k]) for k in sorted(by)))
        print("  void per Ghidra: %d   of those: no direct caller %d, a caller reads eax %d, relaxed %d"
              % (n_void, n_wit, n_taint, n_void - n_wit - n_taint))
        return 0
    if a.explain:
        e = a.explain.lower().replace("0x", "")
        use = load_retuse(root).get(e)
        path = os.path.join(root, "src", "lifted", "cow_%s.c" % e)
        text = open(path, encoding="utf-8", errors="replace").read() if os.path.isfile(path) else ""
        eax_dead, edx_dead, sargs, label, why = effective_contract(text, use, True)
        print("0x%s  retuse=%s  claim=%s" % (e, use, parse_contract(text)))
        print("  judged as %s: eax_dead=0x%08x edx_dead=%d stack_args=%d%s"
              % (label, eax_dead, edx_dead, sargs, ("  (" + why + ")") if why else ""))
        return 0
    ap.print_help()
    return 2


if __name__ == "__main__":
    sys.exit(main())
