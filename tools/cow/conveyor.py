"""conveyor - convert functions by the hundred: the local model drafts, judge v2 decides, gold is kept.

    python tools/cow/conveyor.py llm-check              # one round trip to the local model; prints tokens/s
    python tools/cow/conveyor.py status                 # the scoreboard (also written to docs/cow/SCOREBOARD.md)
    python tools/cow/conveyor.py pick --n 20            # what the next batch would be, and why
    python tools/cow/conveyor.py one 0x1001cfa0 --show  # one unit end to end, printing prompt, reply, verdict
    python tools/cow/conveyor.py run --hours 8          # the loop
    python tools/cow/conveyor.py stop                   # ask a running loop to finish its batch and exit
    python tools/cow/conveyor.py audit --n 30           # break gold units on purpose; the judge must notice
    python tools/cow/conveyor.py recheck --n 200        # prove a sample of gold again; the verdict must repeat
    python tools/cow/conveyor.py --selftest             # the parts that need no build and no model

WHY THIS EXISTS (docs/cow/SYSTEM2.md has the whole argument)

The old loop converted one function per conversation turn, by hand, and a rule-based lifter covered the
rest by adding a rule per failure. Both are bounded by attention. This is a production line instead:

    pick      the smallest functions that are not proven yet
    draft     the model writes ONE C function + a three-line adapter from the original's instructions
              (the recompiler's own listing) and the decompiler's reading
    judge     tools/cow/ghidra/lift_proof.py proves the whole batch in a scratch tree (judge v2)
    keep      gold -> the file moves into src/lifted and its record into cow/lift_proof_all.json
    retry     not gold -> the judge's verdict, in words, goes back to the model; three rounds, then parked

Nothing a model writes is trusted. A unit exists in the tree only because the judge proved it gold, and
the record says which file and which judge - change either and the proof is void and is redone.

STATIONS
    draft   a function with no proven unit (never lifted, or its lift fails): written from scratch
    clean   a machine-lifted unit that IS gold: rewritten as readable C, kept only if it is gold again
"""
import argparse
import concurrent.futures
import csv
import datetime
import json
import os
import random
import re
import shutil
import subprocess
import sys
import time
import urllib.error
import urllib.request

if hasattr(sys.stdout, "reconfigure"):
    sys.stdout.reconfigure(encoding="utf-8", errors="replace")

HERE = os.path.dirname(os.path.abspath(__file__))                 # tools/cow
ROOT = os.path.dirname(os.path.dirname(HERE))
sys.path.insert(0, HERE)
sys.path.insert(0, os.path.join(HERE, "ghidra"))

import judge2  # noqa: E402

LEDGER_CSV = os.path.join(ROOT, "ledger", "functions.csv")
PROOF = os.path.join(ROOT, "cow", "lift_proof_all.json")
LIFTED = os.path.join(ROOT, "src", "lifted")
LAYOUT = os.path.join(ROOT, "layout")
CONV = os.path.join(ROOT, "cow", "conveyor")
ATTEMPTS = os.path.join(CONV, "attempts")
PARKED = os.path.join(CONV, "parked.tsv")
DAILY = os.path.join(CONV, "daily.tsv")
CONFIG = os.path.join(CONV, "config.json")
WORK = os.path.join(ROOT, "build", "conveyor")
HEARTBEAT = os.path.join(WORK, "heartbeat.json")
STOPFILE = os.path.join(WORK, "STOP")
SCOREBOARD = os.path.join(ROOT, "docs", "cow", "SCOREBOARD.md")
LIFT_PROOF = os.path.join(HERE, "ghidra", "lift_proof.py")
COMMIT = os.path.join(HERE, "commit.py")

# Settings a process started outside the shell cannot inherit (a line launched through WMI gets the
# machine's environment, not the shell's): build/conveyor/env.json, {"COW_LLM_KEY": "...", "COW_LIFT_DUMP":
# "...", "COW_LLM_URL": "...", "COW_LLM_MODEL": "..."}. build/ is not committed, so nothing put there can
# reach the public repository. A variable that IS set in the environment wins.
try:
    with open(os.path.join(WORK, "env.json"), encoding="utf-8") as _fh:
        for _k, _v in json.load(_fh).items():
            if _k.startswith("COW_") and isinstance(_v, str):
                os.environ.setdefault(_k, _v)
except (OSError, ValueError):
    pass

PROMPT_VERSION = "p1"          # bump when the prompt changes materially: parked units become eligible again
FUNC_SIZE_CAP = 32768          # a ledger row larger than this is data the disassembler called a function
OWNER_MARK = "COW_OWNER: conveyor"

DEFAULTS = {
    "size_max": 128,           # bytes of original code; raise as the pilot numbers allow (256, 512, ...)
    "batch": 40,               # units per batch (one harness build)
    "rounds": 3,               # attempts per unit per batch, each with the previous verdict
    "clean_share": 0.0,        # fraction of each batch spent rewriting gold machine lifts as readable C
    "allow_x87": False,        # functions with x87 instructions (floats) wait until integers flow
    "parallel": 1,             # concurrent requests to the model
    "commit_minutes": 30,      # commit (through tools/cow/commit.py) at most this often; 0 = never
    "max_prompt_body_lines": 260,
    "temperature": [0.2, 0.5, 0.8],
    "effort": ["", "", "high"],    # reasoning_effort per round ("" = do not send the field)
    "max_tokens": 6000,
    "request_timeout": 900,
}


def cfg():
    c = dict(DEFAULTS)
    if os.path.isfile(CONFIG):
        with open(CONFIG, encoding="utf-8") as fh:
            c.update(json.load(fh))
    return c


def now():
    return datetime.datetime.now().strftime("%Y-%m-%d %H:%M:%S")


def today():
    return datetime.date.today().isoformat()


def log(msg):
    line = "%s  %s" % (now(), msg)
    print(line, flush=True)
    try:
        os.makedirs(WORK, exist_ok=True)
        with open(os.path.join(WORK, "conveyor.log"), "a", encoding="utf-8") as fh:
            fh.write(line + "\n")
    except OSError:
        pass


def beat(phase, **extra):
    """Say we are alive. The loop is hours long and silent; this file is how anyone tells slow from dead."""
    os.makedirs(WORK, exist_ok=True)
    _BEAT["phase"], _BEAT["extra"] = phase, dict(extra)
    data = {"pid": os.getpid(), "when": time.time(), "at": now(), "phase": phase}
    data.update(extra)
    tmp = HEARTBEAT + ".tmp"
    with open(tmp, "w", encoding="utf-8") as fh:
        json.dump(data, fh)
    os.replace(tmp, HEARTBEAT)


_BEAT = {"phase": "starting", "extra": {}}


def start_beat_thread():
    """Refresh the heartbeat every 30 s for as long as this process lives. A model reply can take many
    minutes; without this a healthy line looks dead in the middle of one, and a second line gets started
    on top of it."""
    import threading

    def loop():
        while True:
            time.sleep(30)
            try:
                beat(_BEAT["phase"], **_BEAT["extra"])
            except Exception:
                pass
    threading.Thread(target=loop, daemon=True).start()


def hex8(s):
    s = str(s).strip().lower()
    return (s[2:] if s.startswith("0x") else s).zfill(8)


# ------------------------------------------------------------------------------------ what exists

_TAKEN = None


def taken_entries():
    """Entries that already have an adapter OUTSIDE src/lifted: a hand unit (finished or not) or a row of
    the trivial table. The conveyor must never write a second `cow_adapter_<hex>` for one of these - two
    definitions of one symbol break the link of every build that carries both."""
    global _TAKEN
    if _TAKEN is None:
        _TAKEN = set()
        rx = re.compile(r"\bcow_adapter_([0-9a-f]{8})\b")
        for top in ("src", "layout"):
            for dirpath, dirs, files in os.walk(os.path.join(ROOT, top)):
                dirs[:] = [d for d in dirs if not (top == "src" and os.path.join(dirpath, d) == LIFTED)]
                for f in files:
                    if not f.endswith((".c", ".h", ".def")):
                        continue
                    try:
                        with open(os.path.join(dirpath, f), encoding="utf-8", errors="replace") as fh:
                            text = fh.read()
                    except OSError:
                        continue
                    _TAKEN.update(rx.findall(text))
                    _TAKEN.update(m.lower() for m in re.findall(r"COW_TRIVIAL_ROW\(\s*([0-9a-fA-F]{8})\s*,", text))
    return _TAKEN


def load_functions():
    """[{entry, size, hand}] - every real function: not a thunk, sane size. `hand` marks the ones that are
    somebody else's (a hand unit in any state, a table row): counted on the scoreboard, never picked."""
    out = []
    taken = taken_entries()
    with open(LEDGER_CSV, encoding="utf-8", newline="") as fh:
        for r in csv.DictReader(fh):
            if str(r.get("thunk", "")).lower() == "true" or r.get("status") == "thunk":
                continue
            try:
                size = int(r.get("size") or 0)
            except ValueError:
                continue
            if size <= 0 or size > FUNC_SIZE_CAP:
                continue
            e = hex8(r["entry"])
            out.append({"entry": e, "size": size, "done": r.get("status") == "done",
                        "hand": r.get("status") != "todo" or bool((r.get("file") or "").strip()) or e in taken})
    return out


def load_proof():
    if not os.path.isfile(PROOF):
        return {}
    with open(PROOF, encoding="utf-8") as fh:
        d = json.load(fh)
    return d.get("results", d) if isinstance(d, dict) else {}


def unit_path(entry):
    return os.path.join(LIFTED, "cow_%s.c" % entry)


def unit_text(entry):
    p = unit_path(entry)
    if not os.path.isfile(p):
        return None
    with open(p, encoding="utf-8", errors="replace") as fh:
        return fh.read()


def state_of(entry, proof, jid):
    """The tier this entry has under the judge on disk: gold/silver/weak/fail/..., 'stale' when the record
    is about another file or another judge, 'none' when there is no unit at all."""
    p = unit_path(entry)
    if not os.path.isfile(p):
        return "none"
    rec = proof.get(entry)
    if not rec or not judge2.is_valid(rec, judge2.file_sha(p), jid):
        return "stale"
    return rec.get("tier") or ("gold" if rec.get("pass") else "fail")


def load_parked():
    out = {}
    if os.path.isfile(PARKED):
        with open(PARKED, encoding="utf-8") as fh:
            for line in fh:
                f = line.rstrip("\n").split("\t")
                if len(f) >= 4 and not line.startswith("#"):
                    out[f[0]] = {"reason": f[1], "when": f[2], "key": f[3]}
    return out


def park(entry, reason, key):
    os.makedirs(CONV, exist_ok=True)
    rows = load_parked()
    rows[entry] = {"reason": reason.replace("\t", " ").replace("\n", " ")[:160], "when": today(), "key": key}
    tmp = PARKED + ".tmp"
    with open(tmp, "w", encoding="utf-8", newline="\n") as fh:
        fh.write("# entry\treason\twhen\tjudge/prompt it was parked under (a new judge or prompt retries it)\n")
        for e in sorted(rows):
            fh.write("%s\t%s\t%s\t%s\n" % (e, rows[e]["reason"], rows[e]["when"], rows[e]["key"]))
    os.replace(tmp, PARKED)


def attempts_of(entry):
    p = os.path.join(ATTEMPTS, entry + ".json")
    if not os.path.isfile(p):
        return []
    try:
        with open(p, encoding="utf-8") as fh:
            return json.load(fh)
    except ValueError:
        return []


def add_attempt(entry, item, keep=True):
    if not keep:
        return                      # a look (`one` without --promote) is not an attempt
    os.makedirs(ATTEMPTS, exist_ok=True)
    items = attempts_of(entry)
    items.append(item)
    judge2.write_json(os.path.join(ATTEMPTS, entry + ".json"), items[-12:])


# ------------------------------------------------------------------------------------ the two sources

_BODIES = None
_DUMP = None
_IMPORTS = None
INS_RE = re.compile(r"^\s*/\* ([0-9a-f]{8}): (.+?)\s*\*/\s*$")


def bodies():
    """entry -> the generated body's lines (the recompiler's translation: one comment per instruction)."""
    global _BODIES
    if _BODIES is None:
        import trivial_audit
        _BODIES = trivial_audit.body_index()
    return _BODIES


def dump():
    """entry -> Ghidra's decompiled C, from the dump lift.py reads (COW_LIFT_DUMP)."""
    global _DUMP
    if _DUMP is None:
        path = os.environ.get("COW_LIFT_DUMP") or "D:/projects/ghidra/ghidra_out/functions_all.jsonl"
        _DUMP = {}
        if os.path.isfile(path):
            with open(path, encoding="utf-8", errors="replace") as fh:
                for line in fh:
                    line = line.strip()
                    if not line:
                        continue
                    try:
                        d = json.loads(line)
                    except ValueError:
                        continue
                    a = d.get("addr")
                    if a and d.get("c"):
                        _DUMP[hex8(a)] = d["c"]
        else:
            log("WARNING: no Ghidra dump at %s (set COW_LIFT_DUMP) - prompts will carry the listing only" % path)
    return _DUMP


def imports():
    """IAT slot address -> dll!name, best effort (tools/cow/iat_slot.py --dump). Empty when it cannot be read."""
    global _IMPORTS
    if _IMPORTS is None:
        _IMPORTS = {}
        try:
            p = subprocess.run([sys.executable, os.path.join(HERE, "iat_slot.py"), "--dump"], cwd=ROOT,
                               capture_output=True, text=True, encoding="utf-8", errors="replace", timeout=120)
            for line in (p.stdout or "").splitlines():
                m = re.search(r"\b(?:0x)?(10[0-9a-fA-F]{6})\b.*?([A-Za-z0-9_.\-]+\.(?:dll|DLL|drv|ocx)!\w+)", line)
                if m:
                    _IMPORTS[m.group(1).lower()] = m.group(2)
        except Exception:
            pass
    return _IMPORTS


def listing(body):
    return [(m.group(1), m.group(2)) for m in (INS_RE.match(ln) for ln in body) if m]


def facts(entry):
    """What can be read off the instructions without interpreting them."""
    body = bodies().get(entry)
    if body is None:
        return None
    ins = listing(body)
    rets, calls, slots = set(), [], set()
    x87 = False
    own = {a for a, _t in ins}
    for i, (addr, text) in enumerate(ins):
        mnem, _, op = text.partition(" ")
        mnem, op = mnem.lower(), op.strip()
        if mnem == "jmp":
            # a jump to a function that is not part of this one is a TAIL CALL: the target's own `ret`
            # returns to this function's caller
            d = re.match(r"0x(1[0-9a-f]{7})$", op.lower())
            if d and d.group(1) not in own:
                calls.append({"at": addr, "op": op, "callee": d.group(1), "caller_pops": 0, "tail": True})
            elif not d and "[" in op and i == len(ins) - 1:
                calls.append({"at": addr, "op": op, "callee": None, "caller_pops": 0, "tail": True})
        if mnem == "ret":
            try:
                rets.add(int(op, 0) if op else 0)
            except ValueError:
                rets.add(-1)
        elif mnem.startswith("f") and mnem not in ("fs",):
            x87 = True
        for s in re.findall(r"\[0x(10[0-9a-f]{6})\]", text.lower()):
            slots.add(s)
        if mnem == "call":
            nxt = ins[i + 1][1] if i + 1 < len(ins) else ""
            m = re.match(r"add esp, (0x[0-9a-f]+|\d+)$", nxt.strip().lower())
            d = re.match(r"0x(1[0-9a-f]{7})$", op.lower())
            calls.append({"at": addr, "op": op, "callee": d.group(1) if d else None, "tail": False,
                          "caller_pops": int(m.group(1), 0) if m else (4 if nxt.strip().lower() == "pop ecx" else 0)})
    return {"ins": ins, "lines": len(body), "rets": sorted(rets), "calls": calls, "x87": x87,
            "slots": sorted(slots)}


def callee_note(callee):
    """One line about a direct callee: its signature per the decompiler and how it returns."""
    c = dump().get(callee, "")
    sig = " ".join(c.split("{", 1)[0].split()) if c else "(not in the decompiler dump)"
    body = bodies().get(callee)
    how = ""
    if body:
        cins = listing(body)
        if len(cins) == 1 and cins[0][1].lower().startswith("jmp") and "[0x" in cins[0][1]:
            m = re.search(r"\[0x(10[0-9a-f]{6})\]", cins[0][1].lower())
            name = imports().get(m.group(1), "") if m else ""
            return sig, ("is a one-instruction thunk to an IMPORTED function%s: the convention is the import's "
                         "(Windows API: stdcall, the callee pops; C runtime: cdecl, the caller pops)"
                         % ((" (" + name + ")") if name else ""))
        if len(cins) <= 16 and any("fs:" in t.lower() for _a, t in cins):
            return sig, ("is a compiler FRAME HELPER (it only builds or removes an exception frame through fs:[0]): "
                         "do NOT call it - frame plumbing is not behaviour")
        rets = set()
        for _a, t in cins:
            if t.lower().startswith("ret"):
                op = t[3:].strip()
                try:
                    rets.add(int(op, 0) if op else 0)
                except ValueError:
                    pass
        if rets == {0}:
            how = "ends in a bare `ret`: the CALLER pops the arguments (cow_cdecl; cow_thiscall_cdecl if it takes `this`)"
        elif len(rets) == 1:
            n = rets.pop()
            how = ("ends in `ret %d`: the CALLEE pops %d argument word(s) (cow_stdcall; cow_thiscall if it takes `this`)"
                   % (n, n // 4))
        elif not rets:
            how = "has no `ret` of its own (it ends in a jump): take the convention from the call site"
    return sig, how


# ------------------------------------------------------------------------------------ picking

def pick(n, station=None, c=None, only=None):
    c = c or cfg()
    proof, jid = load_proof(), judge2.judge_id(ROOT)
    parked, key = load_parked(), "%s/%s" % (jid, PROMPT_VERSION)
    funcs = sorted(load_functions(), key=lambda f: (f["size"], f["entry"]))
    draft, clean = [], []
    n_clean = int(round(n * float(c["clean_share"]))) if station is None else (n if station == "clean" else 0)
    n_draft = n - n_clean if station is None else (n if station == "draft" else 0)
    cap = 2 * int(c["rounds"])

    def usable(e):
        """Has a body, is a kind of function the line takes today, and has not used up its attempts."""
        fc = facts(e)
        if fc is None or (fc["x87"] and not c["allow_x87"]):
            return False
        spent = sum(1 for a in attempts_of(e) if a.get("judge") == jid and a.get("prompt") == PROMPT_VERSION
                    and a.get("tier") not in ("error", "none"))
        if spent >= cap:
            # a ceiling on real verdicts, whatever they were: nothing is retried for ever
            park(e, "attempt cap: %d attempts under this judge and prompt without a gold" % spent, key)
            return False
        return True

    for f in funcs:
        e = f["entry"]
        if only is not None and e not in only:
            continue
        if f["hand"] or f["size"] > int(c["size_max"]):
            continue
        if e in parked and parked[e]["key"] == key:
            continue
        st = state_of(e, proof, jid)
        if st in ("none", "fail", "nocompile"):
            if len(draft) < n_draft and usable(e):
                draft.append((e, "draft", f["size"], st))
        elif st == "gold":
            if len(clean) < n_clean and OWNER_MARK not in (unit_text(e) or OWNER_MARK) and usable(e):
                clean.append((e, "clean", f["size"], st))
        # stale: the baseline run has not judged this file under this judge yet - not the conveyor's call
        # silver / weak: the unit agrees wherever the judge looked; rewriting it cannot make the judge look
        # further, so no model time is spent on it
        # noisy / hang / timeout: not the unit's fault, or not fixable by rewriting
        if len(draft) >= n_draft and len(clean) >= n_clean:
            break
    return [{"entry": e, "station": st, "size": size, "state": state} for e, st, size, state in draft + clean]


# ------------------------------------------------------------------------------------ the prompt

SYSTEM = """You convert one function of a 32-bit x86 Windows program (compiled with Visual C++ 6) into plain C.

Your C does not run on a real x86. It runs on a "guest" model, and it is checked by a machine: a differential
judge runs the ORIGINAL and YOUR function on thousands of generated inputs and compares everything a caller
could observe. Only an exact behavioural match is kept. Plausible is worthless; equivalent is the job.

THE GUEST MODEL
- Guest memory is NOT host memory. A guest address is a uint32_t. Read and write it ONLY with:
      rd8(a) rd16(a) rd32(a)      wr8(a, v) wr16(a, v) wr32(a, v)      rdf32(a) rdf64(a) wrf32(a, v) wrf64(a, v)
  Never cast a guest address to a C pointer. Never hand the address of a C variable to guest code.
- A constant that is an address INSIDE the program image (0x10000000 to 0x10C15000: a global, a table, a
  string, a function) must be written COW_IMG(0x10xxxxxxu). A bare 0x10xxxxxx address is always a bug.
  (In the recompiler's C below, such a constant is written `0x10xxxxxxu + RD`: that is the same thing.)
- `Guest* g` holds the registers (g->eax, g->ecx, g->edx, g->ebx, g->esi, g->edi, g->ebp, g->esp). Your
  function takes ordinary C parameters. ONLY the adapter reads arguments out of g and the guest stack.

WHAT YOU WRITE (exactly this shape, nothing else)

/* SUMMARY: one sentence - what the function does. */
/* COW_CONTRACT ret=... stack_args=... */        <- the exact line is given to you with the function
<return type> cow_fn_<ENTRY>(Guest* g, <parameters>)
{
    ...
}

/* COW_ADAPTER BEGIN */
void cow_adapter_<ENTRY>(Guest* g)
{
    const uint32_t sp0 = g->esp;      /* [sp0] is the return address; stack argument i is rd32(sp0 + 4 + 4*i) */
    <read the arguments: g->ecx for `this` / a register argument, rd32(sp0 + 4u + 4u * i) for stack arguments>
    <call cow_fn_<ENTRY>>
    g->esp = sp0;
    rt_return(g, <the result, or g->eax when the function returns nothing>, <N>);   /* N: the original's `ret N` */
}
/* COW_ADAPTER END */

RULES THE JUDGE ENFORCES
1. The return value (when the function has one), every byte of memory the original leaves different, the
   stack pointer after return, ebx/esi/edi/ebp, and every call to an imported function (which, in what
   order, with what arguments) must equal the original's.
2. You do NOT reproduce the original's stack frame, its pushes and pops, or what it leaves in scratch
   registers. Dead stack below the returned esp is not compared. Write the logic, not the plumbing.
3. Never read or write memory the original does not touch on the same path: if you fault where the original
   does not, you fail. Keep the original's order of null checks and bounds checks.
4. rt_return's last argument is the number of ARGUMENT BYTES the original pops itself: `ret 8` -> 8, a bare
   `ret` -> 0.
5. Signedness comes from the instructions, not from the decompiler's types:
      jl jle jg jge, sar, idiv, imul (widening), movsx, cdq   -> signed   (cast to int32_t / int16_t / int8_t)
      jb jbe ja jae, shr, div, mul, movzx                     -> unsigned
   A write to al/ax leaves the rest of eax as it was.
6. Calling other code: use the helpers, with the callee's convention (stated for each call below).
      cow_cdecl(g, target, nargs, a, b, ...)            the caller pops
      cow_stdcall(g, target, nargs, a, b, ...)          the callee pops
      cow_thiscall(g, target, self, nargs, a, b, ...)   ecx = self, the callee pops
      cow_thiscall_cdecl(g, target, self, nargs, ...)   ecx = self, the caller pops
      cow_fastcall(g, target, ecx, edx, nargs, ...)     two register arguments, the callee pops
   target is a runtime address: COW_IMG(0x10xxxxxxu) for a function of the program; rd32(COW_IMG(0x10xxxxxxu))
   for an imported function reached through its import slot (`call dword ptr [0x10xxxxxx]`); rd32(vtable + n)
   for a virtual call. Every argument is a uint32_t. Arguments are listed in source order: the LAST value
   pushed before the call is the FIRST argument.
7. A local buffer or struct whose address the original passes to a callee must live in guest memory:
      const uint32_t buf = cow_frame(g, sp0, <bytes below sp0>);    /* [ebp - X] is sp0 - 4 - X */
   Pass sp0 from the adapter as a parameter when you need it.
8. Helpers you add must be `static`. No #include lines, no globals, no host library calls, no assembly.
   Exception-frame plumbing is not behaviour and is left out: reads and writes of fs:[0], the `push -1` and
   handler-address pushes that go with them, and calls to helpers that only build or remove that frame.
   So are stack probes. Everything else the original does, you do.
9. If the function returns nothing, declare it void and end the adapter with rt_return(g, g->eax, N).
   A function that returns a byte or a word returns it zero-extended from cow_fn (uint32_t).

Answer with ONE fenced C block and nothing after it."""

EXAMPLE = """EXAMPLE (a different function, to show the shape)

Contract line given: /* COW_CONTRACT ret=u32 stack_args=1 */
Original instructions:
  10012340: mov eax, dword ptr [esp + 4]
  10012344: cmp eax, dword ptr [ecx + 0x10]
  10012347: jae 0x10012354
  10012349: mov edx, dword ptr [ecx + 0xc]
  1001234c: movsx eax, word ptr [edx + eax*2]
  10012350: ret 4
  10012354: or eax, 0xffffffff
  10012357: ret 4

```c
/* SUMMARY: returns the signed 16-bit table entry at `index`, or -1 when the index is out of range. */
/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10012340(Guest* g, uint32_t self, uint32_t index)
{
    (void)g;
    if (index >= rd32(self + 0x10u))        /* jae: unsigned */
    {
        return 0xFFFFFFFFu;
    }
    return (uint32_t)(int32_t)(int16_t)rd16(rd32(self + 0xcu) + index * 2u);   /* movsx: sign-extended */
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10012340(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10012340(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);   /* ret 4 */
}
/* COW_ADAPTER END */
```"""


COMPARES = {
    "void": "The function returns nothing: eax and edx are NOT compared. Declare cow_fn void.",
    "u8": "Only the low byte of eax (al) is compared: the function returns a byte.",
    "u16": "Only the low word of eax (ax) is compared: the function returns a 16-bit value.",
    "u32": "All of eax is compared (a 32-bit result or a pointer). edx is not.",
    "u64": "eax AND edx are compared (a 64-bit result: low half in eax, high half in edx - set g->edx in the "
           "adapter after cow_fn returns).",
    "f32": "The x87 result st(0) is compared (cow_ret_float as the last thing); eax and edx are not.",
    "f64": "The x87 result st(0) is compared (cow_ret_float as the last thing); eax and edx are not.",
    "strict": "ALL of eax and edx are compared for this function, even if it looks like it returns nothing "
              "(no direct caller shows them unused, or a caller reads them after the call). Leave in eax and "
              "edx exactly what the original leaves - including a leftover from the last instruction or the "
              "last call that wrote them. Work out from the instructions what each of the two registers "
              "holds at every `ret`: return eax's value from cow_fn (declare it uint32_t) and assign "
              "g->edx = <value> in cow_fn before returning. If the original never writes a register, leave "
              "it alone (eax: return g->eax as it was on entry).",
}


def contract_for(entry):
    """(the COW_CONTRACT line to use, one sentence on what the judge compares)."""
    use = judge2.load_retuse(ROOT).get(entry)
    _eax, _edx, _sargs, label, why = judge2.effective_contract("", use, True)
    sargs = int(use[1]) if use else 0
    line = "/* COW_CONTRACT ret=%s stack_args=%d */" % (label, sargs)
    text = COMPARES.get(label, COMPARES["strict"])
    if why and label not in ("strict",):
        text += " (%s.)" % why
    return line, text


def build_prompt(entry, station, history, c):
    fc = facts(entry)
    cline, ctext = contract_for(entry)
    lines = ["FUNCTION 0x%s   (use %s wherever the shape above says <ENTRY>)" % (entry, entry), "",
             "WHAT THE JUDGE COMPARES FOR THIS FUNCTION", "  " + ctext,
             "  Use exactly this contract line:  " + cline, ""]
    lines.append("ORIGINAL INSTRUCTIONS - this is the ground truth")
    for addr, text in fc["ins"]:
        lines.append("  %s: %s" % (addr, text))
    lines.append("")
    rets = fc["rets"]
    if rets == [0]:
        lines.append("It returns with a bare `ret`: rt_return(g, ..., 0u).")
    elif len(rets) == 1 and rets[0] > 0:
        lines.append("It returns with `ret %d`: it pops %d argument word(s) itself -> rt_return(g, ..., %du)."
                     % (rets[0], rets[0] // 4, rets[0]))
    elif not rets:
        lines.append("It has no `ret`: it ends by JUMPING to another function (a tail call). Call that function "
                     "with this function's own arguments and return what it returns; the stack must end up as "
                     "that callee's `ret` would leave it.")
    else:
        lines.append("Its returns disagree (%s): follow each path's own `ret`." % ", ".join(str(r) for r in rets))
    if fc["calls"]:
        lines += ["", "CALLS IT MAKES"]
        imp = imports()
        for cl in fc["calls"]:
            if cl.get("tail"):
                lines.append("  at %s: jmp %s   <- a TAIL CALL: this function ends by jumping there; the target's "
                             "own `ret` returns to this function's caller, so call it with this function's "
                             "arguments, return its result, and give rt_return the bytes the TARGET pops"
                             % (cl["at"], cl["op"]))
            else:
                lines.append("  at %s: call %s" % (cl["at"], cl["op"]))
            if cl["callee"]:
                sig, how = callee_note(cl["callee"])
                lines.append("      callee per the decompiler: %s" % sig)
                if how:
                    lines.append("      the callee %s" % how)
                if "do NOT call it" not in how:
                    lines.append("      target: COW_IMG(0x%su)" % cl["callee"])
            else:
                m = re.search(r"\[0x(10[0-9a-f]{6})\]", cl["op"].lower())
                if m:
                    name = imp.get(m.group(1), "")
                    lines.append("      an import slot%s: target is rd32(COW_IMG(0x%su)). Windows API functions "
                                 "are stdcall (the callee pops); C runtime functions are cdecl."
                                 % ((" (" + name + ")") if name else "", m.group(1)))
                else:
                    lines.append("      an indirect call: the target is the value of that operand at that moment")
            if cl["caller_pops"]:
                lines.append("      here the caller pops %d byte(s) right after the call" % cl["caller_pops"])
    gh = dump().get(entry)
    if gh:
        lines += ["", "THE DECOMPILER'S READING (Ghidra) - useful for structure; its types, signedness and "
                      "argument list are guesses and are sometimes wrong. The instructions win.", gh.strip()]
    body = bodies().get(entry) or []
    if len(body) <= int(c["max_prompt_body_lines"]):
        lines += ["", "THE SAME INSTRUCTIONS LOWERED TO C BY THE RECOMPILER (exact semantics of every instruction, "
                      "including flags; registers are locals here)", "\n".join(body)]
    if station == "clean":
        cur = unit_text(entry) or ""
        lines += ["", "A MACHINE TRANSLATION OF THIS FUNCTION THAT THE JUDGE HAS ALREADY PROVEN CORRECT. It is right "
                      "but unreadable: it replays register traffic the judge no longer requires. Use it as a "
                      "reference for behaviour; write the function the way a programmer would, in the shape above.",
                  cur.strip()]
    for h in history:
        lines += ["", "YOUR PREVIOUS ATTEMPT (round %d) WAS REJECTED" % h["round"], "```c", h["code"].strip(), "```",
                  "THE JUDGE'S VERDICT", h["verdict"].strip(),
                  "Find the cause in the ORIGINAL INSTRUCTIONS, fix it, and answer with the whole corrected unit."]
    lines += ["", "Now write the unit for 0x%s." % entry]
    return SYSTEM, EXAMPLE + "\n\n" + "\n".join(lines)


# ------------------------------------------------------------------------------------ the model

_LLM = {}


def _llm_key():
    for k in ("COW_LLM_KEY", "STRATA_API_KEY"):
        if os.environ.get(k):
            return os.environ[k].split(",")[0].strip()
    appdata = os.environ.get("APPDATA", "")
    cand = []
    d = os.path.join(appdata, "Block", "goose", "config", "custom_providers")
    if os.path.isdir(d):
        cand += [os.path.join(d, f) for f in sorted(os.listdir(d)) if f.endswith(".json")]
    for p in cand:                      # the provider Goose itself uses for this server
        try:
            with open(p, encoding="utf-8") as fh:
                j = json.load(fh)
            auth = (j.get("headers") or {}).get("Authorization", "")
            if auth.lower().startswith("bearer ") and "8080" in json.dumps(j):
                return auth[7:].strip()
        except Exception:
            continue
    sd = os.environ.get("STRATA_HOME", "C:\\Strata")
    if os.path.isdir(sd):               # the server's own run config
        for f in sorted(os.listdir(sd)):
            if f.startswith("strata-") and f.endswith(".json") and "shared-settings" not in f:
                try:
                    with open(os.path.join(sd, f), encoding="utf-8") as fh:
                        k = json.load(fh).get("api_key")
                    if k and k != "none":
                        return str(k).split(",")[0].strip()
                except Exception:
                    continue
    return ""


def _http(url, payload=None, timeout=60):
    """One request to the local server. The key travels in the header and is never logged or stored."""
    if "key" not in _LLM:
        _LLM["key"] = _llm_key()
    headers = {"Content-Type": "application/json"}
    if _LLM["key"]:
        headers["Authorization"] = "Bearer " + _LLM["key"]
    data = json.dumps(payload).encode("utf-8") if payload is not None else None
    req = urllib.request.Request(url, data=data, headers=headers, method="POST" if data else "GET")
    opener = urllib.request.build_opener(urllib.request.ProxyHandler({}))    # never through a system proxy
    with opener.open(req, timeout=timeout) as r:
        return json.loads(r.read().decode("utf-8", errors="replace"))


def llm_base():
    return (os.environ.get("COW_LLM_URL") or "http://127.0.0.1:8080/v1").rstrip("/")


def llm_model(wait=True):
    """The id of the text model the server offers (never the image model). Waits for a server that is away."""
    delay = 15
    while "model" not in _LLM:
        m = os.environ.get("COW_LLM_MODEL")
        if not m:
            try:
                ids = [x.get("id", "") for x in _http(llm_base() + "/models").get("data", [])]
            except urllib.error.HTTPError as exc:
                if exc.code in (401, 403):
                    raise SystemExit("the model server refused the key (HTTP %d). Set COW_LLM_KEY, or check the "
                                     "Authorization header in Goose's custom provider file." % exc.code)
                ids, err = None, "HTTP %d" % exc.code
            except Exception as exc:
                ids, err = None, "%s: %s" % (type(exc).__name__, str(exc)[:160])
            if ids is None:
                if not wait:
                    raise RuntimeError(err)
                log("model server not answering (%s); retrying in %ds" % (err, delay))
                beat("waiting for the model", error=err)
                if os.path.isfile(STOPFILE):
                    raise KeyboardInterrupt()
                time.sleep(delay)
                delay = min(delay * 2, 300)
                continue
            text = [i for i in ids if i and "image" not in i.lower()]
            m = (text or ids or [""])[0]
        _LLM["model"] = m
    return _LLM["model"]


def llm(system, user, round_index, c, wait_forever=True, max_tokens=None):
    """The model's reply text. Waits out a server that is down or busy (someone switched models, a restart):
    the line stops, it does not crash."""
    temps, efforts = c["temperature"], c["effort"]
    payload = {"model": llm_model(wait_forever), "stream": False,
               "max_tokens": int(max_tokens or c["max_tokens"]),
               "temperature": temps[min(round_index, len(temps) - 1)],
               "messages": [{"role": "system", "content": system}, {"role": "user", "content": user}]}
    effort = efforts[min(round_index, len(efforts) - 1)]
    if effort and not _LLM.get("no_effort"):
        payload["reasoning_effort"] = effort
    delay = 15
    while True:
        try:
            t0 = time.time()
            j = _http(llm_base() + "/chat/completions", payload, timeout=int(c["request_timeout"]))
            msg = (j.get("choices") or [{}])[0].get("message") or {}
            text = msg.get("content") or ""
            usage = j.get("usage") or {}
            _LLM["calls"] = _LLM.get("calls", 0) + 1
            _LLM["secs"] = _LLM.get("secs", 0.0) + (time.time() - t0)
            _LLM["out_tokens"] = _LLM.get("out_tokens", 0) + int(usage.get("completion_tokens") or 0)
            return re.sub(r"<think>.*?</think>", "", text, flags=re.S)
        except urllib.error.HTTPError as exc:
            body = ""
            try:
                body = exc.read().decode("utf-8", errors="replace")[:300]
            except Exception:
                pass
            if exc.code == 400 and "reasoning_effort" in payload:
                payload.pop("reasoning_effort")          # this server does not take the field: never send it again
                _LLM["no_effort"] = True
                continue
            if exc.code in (401, 403):
                raise SystemExit("the model server refused the key (HTTP %d). Set COW_LLM_KEY, or check the "
                                 "Authorization header in Goose's custom provider file." % exc.code)
            err = "HTTP %d %s" % (exc.code, body.replace("\n", " "))
        except Exception as exc:                          # refused, reset, timed out: the server is away
            err = "%s: %s" % (type(exc).__name__, str(exc)[:200])
        if not wait_forever:
            raise RuntimeError(err)
        log("model not answering (%s); retrying in %ds" % (err, delay))
        beat("waiting for the model", error=err)
        if os.path.isfile(STOPFILE):
            raise KeyboardInterrupt()
        time.sleep(delay)
        delay = min(delay * 2, 300)


FORBIDDEN = re.compile(r"#\s*include|\b(system|popen|fopen|freopen|remove|rename|unlink|exec[lv]\w*|"
                       r"CreateFile\w*|DeleteFile\w*|WinExec|ShellExecute\w*|CreateProcess\w*|LoadLibrary\w*|"
                       r"socket|connect|malloc|calloc|realloc|free|GUEST_PTR|__asm|_asm|asm)\s*\(|__declspec|#\s*pragma")


_DEF_RE = re.compile(r"^(?!static\b|typedef\b|struct\b|union\b|enum\b|#|/|\*|\s|\}|\{)"
                     r"[A-Za-z_][\w \t\*]*?\b([A-Za-z_]\w*)[ \t]*\([^;]*$")


def force_static(code, entry):
    """Every function the model defines besides the two that must be visible becomes `static`.

    Forty units are linked into one harness, and thousands into the program. A helper called `clamp` in
    two of them is a duplicate symbol, and a duplicate symbol fails the LINK - for all forty.
    """
    keep = ("cow_fn_%s" % entry, "cow_adapter_%s" % entry)
    out, depth = [], 0
    for line in code.split("\n"):
        if depth == 0:
            m = _DEF_RE.match(line)
            if m and m.group(1) not in keep and m.group(1) not in ("if", "for", "while", "switch", "return"):
                line = "static " + line
        depth += line.count("{") - line.count("}")
        depth = max(depth, 0)
        out.append(line)
    return "\n".join(out)


def extract_unit(reply, entry):
    """(code, summary, problem). The model's unit, or why its reply cannot be one."""
    blocks = re.findall(r"```(?:c|C|cpp|c\+\+)?[ \t]*\r?\n(.*?)```", reply or "", flags=re.S)
    code = max(blocks, key=len) if blocks else (reply or "")
    code = code.replace("\r\n", "\n").strip()
    code = "\n".join(ln for ln in code.split("\n") if not re.match(r"\s*#\s*include\b", ln))
    if not code:
        return None, "", "the reply had no code in it"
    if not re.search(r"\bvoid\s+cow_adapter_%s\s*\(\s*Guest\s*\*\s*g\s*\)" % entry, code):
        return None, "", "the reply has no `void cow_adapter_%s(Guest* g)`" % entry
    if not judge2.parse_contract(code):
        return None, "", "the reply has no valid `/* COW_CONTRACT ret=... stack_args=... */` line"
    m = FORBIDDEN.search(code)
    if m:
        return None, "", "the reply uses something a unit may not use: `%s`" % m.group(0).strip()
    if "COW_ADAPTER BEGIN" not in code or "COW_ADAPTER END" not in code:
        code = re.sub(r"(\bvoid\s+cow_adapter_%s\b)" % entry, r"/* COW_ADAPTER BEGIN */\n\1", code, count=1)
        code = code.rstrip() + "\n/* COW_ADAPTER END */"
    s = re.search(r"/\*\s*SUMMARY:\s*(.*?)\s*\*/", code, flags=re.S)
    summary = " ".join(s.group(1).split())[:200] if s else ""
    code = re.sub(r"/\*\s*SUMMARY:.*?\*/\s*", "", code, count=1, flags=re.S)
    # plain ASCII only: the compiler reads these files in the machine's code page, and an arrow or a curly
    # quote in a comment is a warning on one machine and a broken token on another
    code = force_static(code.encode("ascii", "replace").decode("ascii"), entry)
    summary = summary.encode("ascii", "replace").decode("ascii").replace("*/", "* /").replace("/*", "/ *")
    return code.strip() + "\n", summary, ""


def assemble(entry, station, round_no, code, summary):
    head = ("/* f_0x%s - CONVEYOR UNIT. %s   station: %s   attempt: %d\n\n"
            "   %s\n\n"
            "   Written by the local model from the original's instructions and kept ONLY because judge v2\n"
            "   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the\n"
            "   summary above and every name below are the model's guess. Naming and structs come later.\n"
            "*/\n"
            '#include "cow.h"\n'
            '#include "cow_call.h"\n\n') % (entry, OWNER_MARK, station, round_no,
                                             summary or "(no summary given)")
    return head + code


# ------------------------------------------------------------------------------------ a verdict, in words

_FAIL_FIELDS = re.compile(
    r"fault (-?\d+)/(-?\d+) @([0-9a-f]{8}) ([0-9a-f]{8})/([0-9a-f]{8}) x(\d+) (\S+)"
    r"(?: store=(\w+) A:(\d+)/([0-9a-f]{8}) B:(\d+)/([0-9a-f]{8}) reg=(\S+) ([0-9a-f]{8})/([0-9a-f]{8})"
    r" esp=([0-9a-f]{8})/([0-9a-f]{8}))?")
_IN_RE = re.compile(r"\bin=(\S+)")
_ARGS_RE = re.compile(r"\bargs=(\S+)")
_CALL_INFO = re.compile(r"\bcall=(\d+):([0-9a-f]{8})/([0-9a-f]{8})")


def explain_failure(res):
    """A FAIL line as sentences a person (or a model repairing the unit) can act on."""
    if not res or res.get("pass"):
        return ""
    raw, why = res.get("raw") or "", res.get("why") or "other"
    f = _FAIL_FIELDS.search(raw)
    out = ["The judge compared the original with this unit on generated input states; the first state that "
           "differs is state %s." % res.get("first_state")]
    if f:
        fb, addr, va, vb, n, cls = f.group(2), f.group(3), f.group(4), f.group(5), f.group(6), f.group(7)
        reg, ra, rb, ea, eb = f.group(13), f.group(14), f.group(15), f.group(16), f.group(17)
    else:
        fb = addr = va = vb = n = cls = reg = ra = rb = ea = eb = None
    if why == "eax":
        out.append("RETURN VALUE differs: the original returns eax=0x%s, the unit returns eax=0x%s." % (ra, rb))
        try:
            x = int(ra, 16) ^ int(rb, 16)
        except (TypeError, ValueError):
            x = 0
        if x and not (x & 0xFF):
            out.append("The low byte (al) AGREES and only the upper bits differ: the original writes just %s and "
                       "leaves the rest of eax as it was at that point. Reproduce that: build the result from "
                       "the value eax holds there (g->eax on entry, or what the last call returned), e.g. "
                       "(old_eax & 0x%s) | value." % (("al", "FFFFFF00u") if (x & 0xFF00) else ("ax", "FFFF0000u")))
    elif why == "edx":
        out.append("EDX differs on return (a 64-bit result's high half): original 0x%s, unit 0x%s." % (ra, rb))
    elif why == "esp":
        out.append("STACK POINTER differs on return: original esp=0x%s, unit esp=0x%s. The unit pops the wrong "
                   "number of argument bytes in rt_return (callee cleanup: the original's `ret N`), or a call "
                   "inside it was given the wrong convention." % (ea, eb))
    elif why == "callee-saved register":
        out.append("A callee-saved register (%s) differs on return: original 0x%s, unit 0x%s. The unit must "
                   "leave ebx/esi/edi/ebp as the original leaves them." % (reg, ra, rb))
    elif why == "memory":
        out.append("MEMORY differs after the call: at guest address 0x%s (%s) the original left 0x%s and the "
                   "unit left 0x%s; %s word(s) differ in all." % (addr, cls, va, vb, n))
        if f and f.group(8):
            out.append("Stores to that word: original %s (last value 0x%s), unit %s (last value 0x%s)%s."
                       % (f.group(9), f.group(10), f.group(11), f.group(12),
                          " - the unit never stores there" if f.group(8) == "missing" else ""))
    elif why in ("out-of-region write", "out-of-region overflow"):
        out.append("A write to memory the state did not own differs (a fresh heap block, or a wild pointer): "
                   "at 0x%s the original left 0x%s and the unit left 0x%s." % (addr, va, vb))
    elif why == "fault":
        out.append("The unit FAULTS (access violation, code %s) on an input the original handles without "
                   "faulting. It reads or writes through a pointer the original does not dereference on this "
                   "path, or it calls something with wrong arguments." % fb)
    elif why == "call count":
        out.append("The number of calls to imported (Windows/CRT) functions differs: original %d, unit %d."
                   % (int(va or "0", 16), int(vb or "0", 16)))
    elif why == "call args":
        c = _CALL_INFO.search(raw)
        out.append("An imported function was called differently: call #%s, target original 0x%s / unit 0x%s; "
                   "argument %s is 0x%s in the original and 0x%s in the unit."
                   % (c.group(1) if c else "?", c.group(2) if c else "?", c.group(3) if c else "?", n, va, vb))
    elif why == "st0":
        out.append("The x87 result differs: st(0) or the depth of the x87 stack on return is not the original's.")
    elif why == "direction flag":
        out.append("The unit returns with the direction flag in a different state from the original.")
    elif why == "fpu control word":
        out.append("The unit returns with a different x87 control word from the original.")
    elif why == "no clean state":
        out.append("No state completed on both sides: the original faulted on every generated input, so "
                   "nothing was verified.")
    elif why in ("timeout", "wall timeout"):
        out.append("The row ran out of time: the unit (or the original) loops for too long on some input.")
    else:
        out.append("Reason given by the harness: %s." % why)
    i, a = _IN_RE.search(raw), _ARGS_RE.search(raw)
    if i and a:
        out.append("That state's INPUTS: registers %s; stack arguments [esp+4], [esp+8], ... = %s."
                   % (i.group(1).replace(",", ", ").replace(":", "=0x"),
                      ", ".join("0x" + x for x in a.group(1).split(","))))
    return "\n".join(out)



# ------------------------------------------------------------------------------------ proving

def prove(entries, src_dir, out_json, logfile):
    """Prove a scratch tree; returns {entry: record}.

    One extra duty on top of the prover: a unit can kill the prover's PROCESS (unbounded recursion, a wild
    host pointer). The rows run in list order and print as they finish, so the first row with no output is
    the one that was running, and every row after it is innocent and simply never got its turn. The culprit
    is booked `crash` and the rest are proven again - otherwise one bad draft would cost its whole batch.
    """
    res = _prove_once(entries, src_dir, out_json, logfile)
    if len(entries) > 1 and all((res.get(e) or {}).get("why") == "link_error" for e in entries):
        # The LINK of the whole batch failed: one unit defines a name another defines too, or uses a name
        # nothing defines. The linker blames the batch, so halve it until the unit stands alone.
        half = len(entries) // 2
        res = {}
        for k, part in enumerate((entries[:half], entries[half:])):
            res.update(prove(part, src_dir, "%s.h%d" % (out_json, k), logfile))
        return res
    if len(entries) == 1 and (res.get(entries[0]) or {}).get("why") == "link_error":
        e, lines = entries[0], []
        try:
            with open(str(res[e].get("detail") or ""), encoding="utf-8", errors="replace") as fh:
                lines = [ln.strip() for ln in fh if "error LNK" in ln][:3]
        except OSError:
            pass
        res[e] = dict(res[e], tier="nocompile", verdict="none", why="compile:link",
                      detail="it compiles but does not LINK: " + (" | ".join(lines) or "an unresolved or duplicate symbol"))
        return res
    for i in range(8):
        silent = [e for e in entries if (res.get(e) or {}).get("why") == "no_row_output"]
        if not silent:
            break
        res[silent[0]] = dict(res[silent[0]], tier="fail", verdict="fail", why="crash",
                              detail="the prover's process died while this row was running")
        if len(silent) == 1:
            break
        again = _prove_once(silent[1:], src_dir, "%s.retry%d" % (out_json, i + 1), logfile)
        for e in silent[1:]:
            if e in again:
                res[e] = again[e]
    return res


def _prove_once(entries, src_dir, out_json, logfile):
    """Run the batch prover on a scratch tree. Returns {entry: record}. Beats while it waits."""
    for f in ("lifted_addresses.h", "lifted_bridges.h", "lifted_bridges.c"):
        dst = os.path.join(src_dir, f)                 # a scratch tree carries its own copy of the three
        if not os.path.isfile(dst):                    # generated layout files (lift_proof.py, LAYOUT_REL)
            shutil.copyfile(os.path.join(LAYOUT, f), dst)
    lst = out_json + ".list"
    with open(lst, "w", encoding="utf-8") as fh:
        fh.write("\n".join(entries) + "\n")
    if os.path.isfile(out_json):
        os.remove(out_json)
    env = dict(os.environ)
    env["COW_LIFT_SRC"] = src_dir
    # a build directory and exe names of our own: a baseline (or a one-off check by hand) may be using
    # build/lift at this very moment, and two provers in one directory corrupt each other (lift_proof.py)
    env["COW_LIFT_BUILD"] = os.path.join("build", "lift_conveyor")
    env["COW_LIFT_TAG"] = "v"
    cmd = [sys.executable, LIFT_PROOF, "--list", lst, "--out", out_json, "--rerun"]
    with open(logfile, "a", encoding="utf-8") as lf:
        lf.write("\n== %s  %s\n" % (now(), " ".join(cmd)))
        lf.flush()
        p = subprocess.Popen(cmd, cwd=ROOT, env=env, stdout=lf, stderr=subprocess.STDOUT)
        while True:
            beat("proving", entries=len(entries))
            try:
                p.wait(timeout=10)
                break
            except subprocess.TimeoutExpired:
                continue
    if not os.path.isfile(out_json):
        return {}
    with open(out_json, encoding="utf-8") as fh:
        return json.load(fh)


def verdict_words(entry, rec):
    """A record as text the model can act on."""
    if not rec:
        return "The prover produced no verdict for this unit (a build problem, not necessarily yours)."
    tier, why = rec.get("tier"), str(rec.get("why") or "")
    if tier == "nocompile" or why.startswith("compile"):
        return ("IT DOES NOT COMPILE (MSVC, C11): %s\nUse only the helpers named in the instructions; every "
                "identifier must be declared." % (rec.get("detail") or why))
    if why == "crash":
        return ("IT CRASHES THE PROVER'S PROCESS: unbounded recursion (a function that calls itself, or calls "
                "the original of itself through COW_IMG of its own address), or a host pointer where a guest "
                "address belongs. Guest memory is reached only through rd*/wr*.")
    if tier in ("hang", "timeout") or why in ("hang", "timeout", "wall timeout"):
        return "IT DOES NOT TERMINATE on some input (or runs far longer than the original): check every loop's exit."
    if rec.get("verdict") == "pass":
        return ("It agrees with the original on every state that was compared, but the proof is incomplete "
                "(tier %s: %s clean states, instruction coverage %s). This usually means your unit FAULTS or "
                "returns early on inputs where the original keeps going - compare your conditions with the "
                "original's." % (tier, rec.get("clean"), rec.get("blocks")))
    res = judge2.parse_line("COWDIFF FAIL %s %s" % (entry, rec.get("raw") or ""))
    return explain_failure(res) or ("The judge rejected it: %s" % why)


# ------------------------------------------------------------------------------------ one batch

def promote(entry, scratch_file, rec, station, changes):
    """Put the unit in the tree and its verdict in `changes` (merged into the ledger by the caller)."""
    os.makedirs(LIFTED, exist_ok=True)
    shutil.copyfile(scratch_file, unit_path(entry))
    rec = dict(rec)
    rec["owner"] = "conveyor"
    rec["station"] = station
    rec["when"] = today()
    changes[entry] = rec


def run_batch(items, c, tag, show=False, do_promote=True):
    """Draft, prove, feed back, up to c['rounds'] times. Returns counters."""
    jid = judge2.judge_id(ROOT)
    bdir = os.path.join(WORK, tag)
    src = os.path.join(bdir, "src")
    logdir = os.path.join(bdir, "log")
    os.makedirs(src, exist_ok=True)
    os.makedirs(logdir, exist_ok=True)
    pending = {it["entry"]: it for it in items}
    history = {e: [] for e in pending}
    stats = {"picked": len(items), "gold": 0, "unproven": 0, "attempts": 0, "bad_reply": 0, "parked": 0,
             "by_station": {}, "verdicts": 0, "sent": 0}
    last = {}
    for rnd in range(int(c["rounds"])):
        if not pending or os.path.isfile(STOPFILE):
            break
        beat("drafting", batch=tag, round=rnd + 1, units=len(pending))
        t0 = time.time()

        def draft(e):
            if os.path.isfile(STOPFILE):
                raise KeyboardInterrupt()       # nothing of this round has been recorded yet: safe to drop
            it = pending[e]
            system, user = build_prompt(e, it["station"], history[e][-1:], c)
            # room to answer grows with the function: a reply cut off mid-unit is a wasted attempt (and on
            # servers that count reasoning against the same limit, a long function needs the headroom)
            room = min(32000, int(c["max_tokens"]) + 40 * len(facts(e)["ins"]))
            reply = llm(system, user, rnd, c, max_tokens=room)
            with open(os.path.join(logdir, "%s.r%d.txt" % (e, rnd + 1)), "w", encoding="utf-8") as fh:
                fh.write("==== SYSTEM ====\n%s\n\n==== USER ====\n%s\n\n==== REPLY ====\n%s\n" % (system, user, reply))
            return e, user, reply

        replies = {}
        workers = max(1, int(c["parallel"]))
        with concurrent.futures.ThreadPoolExecutor(max_workers=workers) as ex:
            for e, user, reply in ex.map(draft, list(pending)):
                replies[e] = reply
                if show:
                    print("\n================ PROMPT 0x%s ================\n%s\n================ REPLY ================\n%s"
                          % (e, user, reply))
        to_prove = []
        for e, reply in replies.items():
            stats["attempts"] += 1
            code, summary, problem = extract_unit(reply, e)
            if problem:
                stats["bad_reply"] += 1
                history[e].append({"round": rnd + 1, "code": (reply or "")[-3000:], "verdict": "REJECTED BEFORE THE "
                                   "JUDGE: " + problem})
                last[e] = {"tier": "badreply", "why": problem}
                add_attempt(e, {"when": now(), "station": pending[e]["station"], "round": rnd + 1,
                                "tier": "badreply", "why": problem[:200], "judge": jid, "prompt": PROMPT_VERSION},
                            keep=do_promote)
                continue
            with open(os.path.join(src, "cow_%s.c" % e), "w", encoding="utf-8", newline="\n") as fh:
                fh.write(assemble(e, pending[e]["station"], rnd + 1, code, summary))
            history[e].append({"round": rnd + 1, "code": code, "verdict": ""})
            to_prove.append(e)
        log("%s round %d: %d drafted in %.0fs, %d to prove" % (tag, rnd + 1, len(replies), time.time() - t0, len(to_prove)))
        if not to_prove:
            continue
        results = prove(to_prove, src, os.path.join(bdir, "proof_r%d.json" % (rnd + 1)),
                        os.path.join(bdir, "prove.log"))
        changes = {}
        for e in to_prove:
            rec = results.get(e)
            tier = (rec or {}).get("tier", "none")
            stats["sent"] += 1
            stats["verdicts"] += 0 if tier in ("error", "none") else 1
            last[e] = rec or {"tier": "none", "why": "no verdict"}
            words = verdict_words(e, rec)
            history[e][-1]["verdict"] = words
            add_attempt(e, {"when": now(), "station": pending[e]["station"], "round": rnd + 1, "tier": tier,
                            "why": str((rec or {}).get("why", ""))[:120], "judge": jid, "prompt": PROMPT_VERSION,
                            "blocks": (rec or {}).get("blocks"), "clean": (rec or {}).get("clean")},
                        keep=do_promote)
            if show:
                print("\n---------------- VERDICT 0x%s: %s ----------------\n%s" % (e, tier, words))
            if tier == "gold":
                st = pending[e]["station"]
                if do_promote:
                    promote(e, os.path.join(src, "cow_%s.c" % e), rec, st, changes)
                stats["gold"] += 1
                stats["by_station"][st] = stats["by_station"].get(st, 0) + 1
                del pending[e]
            elif rec is not None and rec.get("verdict") == "pass":
                # It agrees with the original on every state the judge compared, and the judge did not get
                # far enough to call it proven (too few clean states, or instruction sites it never reached).
                # That is a limit of the judge's reach on this function, not something another draft can
                # change - so no more model time is spent on it. A draft is KEPT, with its true tier (silver
                # or weak, never `pass`): it counts for nothing today, and when the judge learns to reach
                # further it is re-judged for free. A rewrite of an already-gold unit is simply dropped.
                if pending[e]["station"] == "draft" and do_promote:
                    promote(e, os.path.join(src, "cow_%s.c" % e), rec, "draft", changes)
                    stats["unproven"] += 1
                del pending[e]
            elif tier == "noisy":
                if do_promote:
                    park(e, "noisy: the harness disagrees with itself on this function (%s)" % rec.get("self"),
                         "%s/%s" % (jid, PROMPT_VERSION))
                    stats["parked"] += 1
                del pending[e]
            elif tier == "error" or rec is None:
                del pending[e]          # the machinery did not answer; not an attempt against the unit
        if changes:
            judge2.update_ledger(PROOF, changes)     # only our entries: a baseline may be writing the others
        log("%s round %d: gold so far %d, kept unproven %d, still pending %d"
            % (tag, rnd + 1, stats["gold"], stats["unproven"], len(pending)))
    if do_promote and not os.path.isfile(STOPFILE):
        for e in list(pending):
            if len(history[e]) >= int(c["rounds"]):       # had every round and none was gold
                r = last.get(e, {})
                why = str(r.get("why", ""))[:100]
                if r.get("verdict") == "pass":
                    why = "agrees with the original, but only %s clean state(s) and coverage %s" % (
                        r.get("clean"), r.get("blocks"))
                park(e, "%s: %s" % (r.get("tier", "?"), why), "%s/%s" % (jid, PROMPT_VERSION))
                stats["parked"] += 1
    return stats


# ------------------------------------------------------------------------------------ the scoreboard

def scoreboard(write=True):
    funcs = load_functions()
    proof, jid = load_proof(), judge2.judge_id(ROOT)
    parked = load_parked()
    total_n, total_b = len(funcs), sum(f["size"] for f in funcs)
    rows = {}

    def add(k, f):
        r = rows.setdefault(k, [0, 0])
        r[0] += 1
        r[1] += f["size"]

    clean_n = clean_b = 0
    for f in funcs:
        e = f["entry"]
        if f["hand"]:
            add("hand" if f["done"] else "hand unit in progress", f)
            continue
        st = state_of(e, proof, jid)
        if st == "gold":
            add("gold", f)
            if OWNER_MARK in (unit_text(e) or ""):
                clean_n += 1
                clean_b += f["size"]
        elif st == "none":
            add("parked (no unit)" if e in parked else "no unit yet", f)
        else:
            add(st, f)
    g = rows.get("gold", [0, 0])
    h = rows.get("hand", [0, 0])
    L = ["# Scoreboard", "",
         "<!-- written by tools/cow/conveyor.py status - do not edit -->", "",
         "Judge `%s`. Universe: %d functions, %d bytes of original code (non-thunk, at most %d bytes each)."
         % (jid, total_n, total_b, FUNC_SIZE_CAP), "",
         "| line | functions | % | code bytes | % |", "| --- | ---: | ---: | ---: | ---: |",
         "| **PROVEN C** (gold under judge v2) | %d | %.2f%% | %d | **%.2f%%** |"
         % (g[0], 100.0 * g[0] / max(1, total_n), g[1], 100.0 * g[1] / max(1, total_b)),
         "| of which CLEAN C (model-written, no machine residue) | %d | %.2f%% | %d | %.2f%% |"
         % (clean_n, 100.0 * clean_n / max(1, total_n), clean_b, 100.0 * clean_b / max(1, total_b)),
         "| hand units and table rows (the earlier exact proofs) | %d | %.2f%% | %d | %.2f%% |"
         % (h[0], 100.0 * h[0] / max(1, total_n), h[1], 100.0 * h[1] / max(1, total_b)), "",
         "Everything else, by what the judge last said:", "",
         "| state | functions | code bytes | meaning |", "| --- | ---: | ---: | --- |"]
    meaning = {"silver": "passes; not enough clean states or coverage to call it proven",
               "weak": "passes where it ran; it barely ran", "fail": "a real mismatch",
               "noisy": "the harness disagrees with itself here", "nocompile": "does not compile",
               "hang": "does not return", "timeout": "ran out of its time budget",
               "stale": "has a unit, not yet judged by THIS judge (run the baseline)",
               "error": "the machinery did not answer", "no unit yet": "nothing written yet",
               "parked (no unit)": "three attempts failed; waiting for a better prompt or judge"}
    meaning["hand unit in progress"] = "a hand unit that is not finished; the conveyor leaves it alone"
    for k in ("silver", "weak", "fail", "noisy", "nocompile", "hang", "timeout", "error", "stale",
              "hand unit in progress", "parked (no unit)", "no unit yet"):
        if k in rows:
            L.append("| %s | %d | %d | %s |" % (k, rows[k][0], rows[k][1], meaning.get(k, "")))
    # the day's line, so tomorrow's delta is a subtraction and not a memory
    os.makedirs(CONV, exist_ok=True)
    days = {}
    if os.path.isfile(DAILY):
        with open(DAILY, encoding="utf-8") as fh:
            for line in fh:
                f = line.rstrip("\n").split("\t")
                if len(f) >= 5 and not line.startswith("#"):
                    days[f[0]] = f[1:]
    days[today()] = [str(g[0]), str(g[1]), "%.3f" % (100.0 * g[1] / max(1, total_b)), str(clean_n), jid]
    if write:
        with open(DAILY + ".tmp", "w", encoding="utf-8", newline="\n") as fh:
            fh.write("# date\tgold functions\tgold bytes\tgold % of bytes\tclean functions\tjudge\n")
            for d in sorted(days):
                fh.write(d + "\t" + "\t".join(days[d]) + "\n")
        os.replace(DAILY + ".tmp", DAILY)
    L += ["", "## Day by day", "", "| date | proven functions | proven bytes | % of bytes | change | judge |",
          "| --- | ---: | ---: | ---: | ---: | --- |"]
    prev = None
    for d in sorted(days)[-21:]:
        v = days[d]
        delta = "" if prev is None or prev[4] != v[4] else "%+.3f" % (float(v[2]) - float(prev[2]))
        L.append("| %s | %s | %s | %s%% | %s | %s |" % (d, v[0], v[1], v[2], delta, v[4]))
        prev = v
    text = "\n".join(L) + "\n"
    if write:
        os.makedirs(os.path.dirname(SCOREBOARD), exist_ok=True)
        with open(SCOREBOARD, "w", encoding="utf-8", newline="\n") as fh:
            fh.write(text)
    return text, {"gold_n": g[0], "gold_b": g[1], "pct": 100.0 * g[1] / max(1, total_b), "rows": rows}


# ------------------------------------------------------------------------------------ the audit

MUTATIONS = (
    ("flip-compare", [(r" == ", " != "), (r" != ", " == "), (r" < ", " >= "), (r" >= ", " < "),
                      (r" > ", " <= "), (r" <= ", " > ")]),
    ("bump-constant", None),
    ("drop-store", None),
    ("bump-return", None),
)


def mutate(text, kind):
    """One deliberate bug in the unit's body (never in the adapter), or None when this kind does not apply."""
    cut = text.find("COW_ADAPTER BEGIN")
    start = text.find("{")
    if start < 0:
        return None
    body, tail = (text[start:cut], text[cut:]) if cut > start else (text[start:], "")
    head = text[:start]
    if kind == "flip-compare":
        for a, b in MUTATIONS[0][1]:
            if a in body:
                return head + body.replace(a, b, 1) + tail
        return None
    if kind == "bump-constant":
        m = re.search(r"(?<![\w.])(0x[0-9a-fA-F]+|[1-9]\d*)u\b", body)
        if not m:
            return None
        v = int(m.group(1), 0)
        return head + body[:m.start()] + ("0x%xu" % (v + 1)) + body[m.end():] + tail
    if kind == "drop-store":
        m = re.search(r"^[ \t]*wr(?:8|16|32|f32|f64)\(.*\);[ \t]*$", body, flags=re.M)
        if not m:
            return None
        return head + body[:m.start()] + "    /* store removed */" + body[m.end():] + tail
    if kind == "bump-return":
        m = re.search(r"\breturn\s+([^;]+);", body)
        if not m:
            return None
        return head + body[:m.start()] + "return (uint32_t)(%s) + 1u;" % m.group(1) + body[m.end():] + tail
    return None


def audit(n, seed=None):
    """Break gold units on purpose and require the judge to notice. A mutant that still passes is either an
    equivalent change or a hole in the judge; the rate is the number that says which kind of judge we have."""
    proof, jid = load_proof(), judge2.judge_id(ROOT)
    gold = sorted(e for e in proof if os.path.isfile(unit_path(e)) and state_of(e, proof, jid) == "gold")
    rng = random.Random(seed if seed is not None else today())
    rng.shuffle(gold)
    sample = gold[:n]
    report = {"when": now(), "judge": jid, "units": len(sample), "kinds": {}, "survivors": []}
    killed = total = 0
    for kind, _ in MUTATIONS:
        bdir = os.path.join(WORK, "audit_" + kind)
        src = os.path.join(bdir, "src")
        shutil.rmtree(bdir, ignore_errors=True)
        os.makedirs(src, exist_ok=True)
        made = []
        for e in sample:
            m = mutate(unit_text(e), kind)
            if m is None:
                continue
            with open(os.path.join(src, "cow_%s.c" % e), "w", encoding="utf-8", newline="\n") as fh:
                fh.write(m)
            made.append(e)
        if not made:
            continue
        res = prove(made, src, os.path.join(bdir, "proof.json"), os.path.join(bdir, "prove.log"))
        k = s = 0
        for e in made:
            r = res.get(e) or {}
            if r.get("tier") in ("nocompile", "error", "none", None):
                continue                       # not a valid mutant
            if r.get("verdict") == "pass":
                s += 1
                report["survivors"].append({"entry": e, "kind": kind, "tier": r.get("tier"), "blocks": r.get("blocks")})
            else:
                k += 1
        report["kinds"][kind] = {"killed": k, "survived": s}
        killed += k
        total += k + s
        log("audit %s: %d killed, %d survived" % (kind, k, s))
    report["killed"], report["total"] = killed, total
    report["kill_rate"] = round(100.0 * killed / max(1, total), 1)
    os.makedirs(CONV, exist_ok=True)
    judge2.write_json(os.path.join(CONV, "audit.json"), report)
    print("AUDIT %s: %d of %d mutants killed (%.1f%%), %d unit(s) sampled -> cow/conveyor/audit.json"
          % ("OK" if total and report["kill_rate"] >= 90.0 else "LOW", killed, total, report["kill_rate"], len(sample)))
    return 0 if total and report["kill_rate"] >= 90.0 else 1


def recheck(n, seed=None):
    """Prove a random sample of gold units AGAIN, from the committed files, and compare with the record.

    The judge is deterministic: the same file under the same judge must get the same verdict. So any gold
    unit that is not gold the second time is not a conversion problem, it is the judge failing to repeat
    itself - the one event that makes every number on the scoreboard suspect. The unit's record is replaced
    by the new verdict either way (the record is whatever the judge says now), and more than 2% of the
    sample changing is reported as JUDGE UNSTABLE with exit code 1.
    """
    proof, jid = load_proof(), judge2.judge_id(ROOT)
    gold = sorted(e for e in proof if os.path.isfile(unit_path(e)) and state_of(e, proof, jid) == "gold")
    rng = random.Random(seed if seed is not None else "recheck" + today())
    rng.shuffle(gold)
    sample = gold[:n]
    if not sample:
        print("RECHECK: no gold units to check")
        return 1
    bdir = os.path.join(WORK, "recheck")
    src = os.path.join(bdir, "src")
    shutil.rmtree(bdir, ignore_errors=True)
    os.makedirs(src, exist_ok=True)
    for e in sample:
        shutil.copyfile(unit_path(e), os.path.join(src, "cow_%s.c" % e))
    res = prove(sample, src, os.path.join(bdir, "proof.json"), os.path.join(bdir, "prove.log"))
    changed, changes = [], {}
    for e in sample:
        r = res.get(e)
        if not r or r.get("tier") in ("error", "none", None):
            continue                     # the machinery did not answer: says nothing about the unit
        if r.get("tier") != "gold":
            changed.append((e, r.get("tier"), r.get("why")))
            keep = {k: proof[e][k] for k in ("owner", "station") if k in proof[e]}
            changes[e] = dict(r, when=today(), **keep)
    if changes:
        judge2.update_ledger(PROOF, changes)
    rate = 100.0 * len(changed) / len(sample)
    for e, tier, why in changed[:20]:
        print("  0x%s is no longer gold: %s (%s)" % (e, tier, why))
    print("RECHECK %s: %d of %d sampled gold unit(s) changed verdict (%.1f%%)"
          % ("JUDGE UNSTABLE" if rate > 2.0 else "OK", len(changed), len(sample), rate))
    return 1 if rate > 2.0 else 0


# ------------------------------------------------------------------------------------ the loop

def commit(subject):
    # The subject deliberately does not say "N proven": tools/cow/commit.py reads that phrase as a hand-loop
    # claim and answers it with the LEGACY re-verify, which compares dead stack and scratch registers and
    # would reject every contract-grade unit. What guards these commits instead is commit.py's System 2
    # check: every unit file committed has a record of the current judge for that exact file.
    p = subprocess.run([sys.executable, COMMIT, "--subject", subject], cwd=ROOT, capture_output=True, text=True,
                       encoding="utf-8", errors="replace")
    tail = ((p.stdout or "") + (p.stderr or "")).strip().splitlines()[-3:]
    log("commit rc=%d  %s" % (p.returncode, " | ".join(tail)))
    return p.returncode == 0


def run(hours, c, max_batches=0, force=False):
    os.makedirs(WORK, exist_ok=True)
    if os.path.isfile(HEARTBEAT) and not force:
        try:
            with open(HEARTBEAT, encoding="utf-8") as fh:
                hb = json.load(fh)
            if (time.time() - float(hb.get("when", 0)) < 120 and hb.get("pid") != os.getpid()
                    and not str(hb.get("phase", "")).startswith("stopped")):
                print("another conveyor is running (pid %s, phase %s, %s). `conveyor.py stop` ends it; "
                      "--force starts anyway." % (hb.get("pid"), hb.get("phase"), hb.get("at")))
                return 2
        except Exception:
            pass
    start_beat_thread()
    if os.path.isfile(STOPFILE):
        os.remove(STOPFILE)
    deadline = time.time() + hours * 3600.0
    last_commit = time.time()
    since_commit = 0
    total = {"gold": 0, "unproven": 0, "attempts": 0, "parked": 0, "batches": 0}
    gold_since_commit = 0
    dead_batches = 0
    try:
        log("conveyor start: model %s, judge %s, size<=%s, batch %s, rounds %s, clean share %s"
            % (llm_model(), judge2.judge_id(ROOT), c["size_max"], c["batch"], c["rounds"], c["clean_share"]))
        while time.time() < deadline and not os.path.isfile(STOPFILE):
            c = cfg()                                    # the config may be edited while the line runs
            beat("picking")
            items = pick(int(c["batch"]), c=c)
            if not items:
                log("nothing left to pick at size<=%s: raise size_max in cow/conveyor/config.json" % c["size_max"])
                break
            tag = "b" + datetime.datetime.now().strftime("%m%d_%H%M%S")
            st = run_batch(items, c, tag)
            total["batches"] += 1
            # The prover answered for NOBODY: that is a broken build or a broken harness, not forty bad
            # drafts, and carrying on would spend the whole queue's attempts on it. Stop and say so.
            dead_batches = dead_batches + 1 if (st["sent"] >= 5 and st["verdicts"] == 0) else 0
            if dead_batches >= 2:
                log("PROVER BROKEN: two batches in a row came back without a single verdict. See "
                    "build/conveyor/%s/prove.log and build/lift_conveyor/compile_*.log. The line is stopping." % tag)
                beat("stopped: prover broken", **total)
                return 3
            for k in ("gold", "unproven", "attempts", "parked"):
                total[k] += st[k]
            gold_since_commit += st["gold"]
            since_commit += st["gold"] + st["unproven"]
            _text, sb = scoreboard()
            calls, secs = _LLM.get("calls", 0), _LLM.get("secs", 0.0)
            log("%s done: +%d gold of %d picked (%s), %d kept unproven, %d parked | the line: %d gold in all, "
                "%.3f%% of bytes | model: %.0fs per reply"
                % (tag, st["gold"], st["picked"],
                   ", ".join("%s %d" % kv for kv in sorted(st["by_station"].items())) or "-",
                   st["unproven"], st["parked"], sb["gold_n"], sb["pct"], secs / max(1, calls)))
            mins = float(c["commit_minutes"])
            if mins > 0 and since_commit > 0 and time.time() - last_commit >= mins * 60.0:
                beat("committing")
                if commit("cow: conveyor +%d gold (%d gold in all, %.3f%% of code bytes)"
                          % (gold_since_commit, sb["gold_n"], sb["pct"])):
                    since_commit = gold_since_commit = 0
                last_commit = time.time()
            shutil.rmtree(os.path.join(WORK, tag, "src"), ignore_errors=True)   # the logs stay; the copies go
            if max_batches and total["batches"] >= max_batches:
                break
    except KeyboardInterrupt:
        log("stopped on request")
    if since_commit > 0 and float(c["commit_minutes"]) > 0:
        _text, sb = scoreboard()
        commit("cow: conveyor +%d gold (%d gold in all, %.3f%% of code bytes)"
               % (gold_since_commit, sb["gold_n"], sb["pct"]))
    beat("stopped", **total)
    log("conveyor end: %d batch(es), +%d gold, %d kept unproven, %d attempts, %d parked"
        % (total["batches"], total["gold"], total["unproven"], total["attempts"], total["parked"]))
    return 0


# ------------------------------------------------------------------------------------ selftest

def _selftest():
    ok = [0, 0]

    def check(cond, what):
        ok[0 if cond else 1] += 1
        if not cond:
            print("SELFTEST FAIL: " + what)

    good = ("Here you go.\n```c\n#include <stdio.h>\n/* SUMMARY: adds one\n   to the counter. */\n"
            "/* COW_CONTRACT ret=void stack_args=1 */\nvoid cow_fn_10001000(Guest* g, uint32_t p)\n{\n"
            "    (void)g;\n    if (p == 0u) { return; }\n    wr32(p + 4u, rd32(p + 4u) + 1u);\n}\n\n"
            "void cow_adapter_10001000(Guest* g)\n{\n    const uint32_t sp0 = g->esp;\n"
            "    cow_fn_10001000(g, rd32(sp0 + 4u));\n    g->esp = sp0;\n    rt_return(g, g->eax, 0u);\n}\n```\n")
    code, summary, problem = extract_unit(good, "10001000")
    check(not problem and "#include" not in code, "a good reply is accepted, its #include dropped: %r" % problem)
    check(summary == "adds one to the counter.", "summary: %r" % summary)
    check("COW_ADAPTER BEGIN" in code and code.rstrip().endswith("/* COW_ADAPTER END */"), "adapter markers added")
    check("SUMMARY" not in code, "the summary moves to the header")
    full = assemble("10001000", "draft", 1, code, summary)
    check(OWNER_MARK in full and '#include "cow_call.h"' in full and judge2.parse_contract(full), "assembled file")
    check(extract_unit("```c\nint x;\n```", "10001000")[2].startswith("the reply has no `void cow_adapter"), "no adapter")
    check("COW_CONTRACT" in extract_unit(good.replace("COW_CONTRACT", "CONTRACT"), "10001000")[2], "no contract")
    check("may not use" in extract_unit(good.replace("(void)g;", "system(\"x\");"), "10001000")[2], "forbidden call")
    check("may not use" in extract_unit(good.replace("(void)g;", "(void)GUEST_PTR(p);"), "10001000")[2], "GUEST_PTR")
    check(extract_unit("", "10001000")[2] == "the reply had no code in it", "empty reply")
    helper = good.replace("void cow_fn_10001000(Guest* g, uint32_t p)\n{",
                          "uint32_t bump(uint32_t v)\n{\n    return v + 1u;\n}\n\nstatic int keep(void) { return 0; }\n\n"
                          "void cow_fn_10001000(Guest* g, uint32_t p)\n{")
    hc = extract_unit(helper, "10001000")[0]
    check("static uint32_t bump(uint32_t v)" in hc and "static static" not in hc
          and "\nvoid cow_fn_10001000(" in hc and "\nvoid cow_adapter_10001000(" in hc
          and "static void cow_" not in hc and "    static " not in hc,
          "a helper becomes static; the two entry points and the statements inside bodies do not:\n" + hc)
    # mutations
    for kind, want in (("flip-compare", "p != 0u"), ("bump-constant", "0x5u"), ("drop-store", "store removed"),
                       ("bump-return", None)):
        m = mutate(full, kind)
        if want is None:
            check(m is None, "bump-return does not apply to a void function")
        else:
            check(m is not None and want in m and m.count("cow_adapter_10001000") == full.count("cow_adapter_10001000")
                  and m[m.find("COW_ADAPTER BEGIN"):] == full[full.find("COW_ADAPTER BEGIN"):],
                  "mutation %s changes the body and leaves the adapter alone" % kind)
    # verdict words
    rec = {"tier": "fail", "verdict": "fail", "why": "esp",
           "raw": "1 mismatch(es), first at state 0 (esp) fault 0/0 @00000000 00000000/00000000 x0 - store=missing "
                  "A:0/00000000 B:0/00000000 reg=esp 001937ec/001937e8 esp=001937ec/001937e8 clean=0 afault=0 asym=0 "
                  "judge=2 call=0:00000000/00000000 in=eax:1,ecx:2,edx:3,ebx:4,esi:5,edi:6,ebp:7,esp:001937e4 args=1,2,3,4"}
    w = verdict_words("10001000", rec)
    check("STACK POINTER" in w and "001937ec" in w, "esp verdict in words:\n" + w)
    check("DOES NOT COMPILE" in verdict_words("1", {"tier": "nocompile", "why": "compile:C2065", "detail": "C2065: x"}),
          "compile verdict")
    check("incomplete" in verdict_words("1", {"tier": "weak", "verdict": "pass", "clean": 3, "blocks": "2/9"}), "weak verdict")
    check(hex8("0x1001CFA0") == "1001cfa0" and hex8("1070") == "00001070", "hex8")
    fl = ("COWDIFF FAIL 10010350 1 mismatch(es), first at state 3 (eax) fault 0/0 @00000000 00000000/00000000 x0 - "
          "store=missing A:0/00000000 B:0/00000000 reg=eax 1003e807/00000007 esp=001937e4/001937e4 clean=2 "
          "afault=1 asym=0 judge=2 call=0:00000000/00000000 in=eax:1003e8aa,ecx:00000000,edx:001829a4,"
          "ebx:07070707,esi:0018edac,edi:10001234,ebp:00000000,esp:001937e4 args=000001f4,00000000,00000001,ffffffff")
    ex = explain_failure(judge2.parse_line(fl))
    check("eax=0x1003e807" in ex and "eax=0x00000007" in ex and "0x000001f4" in ex and "eax=0x1003e8aa" in ex,
          "explain names both values and the inputs:\n" + ex)
    check("low byte (al) AGREES" in ex and "FFFFFF00u" in ex, "explain spots a leftover in the upper bytes:\n" + ex)
    m = judge2.parse_line("COWDIFF FAIL 1 2 mismatch(es), first at state 0 (memory) fault 0/0 @1001fa60 00000001/"
                          "00000002 x1 image store=missing A:1/00000001 B:0/00000000 reg=- 00000000/00000000 "
                          "esp=001937e4/001937e4 clean=1")
    ex = explain_failure(m)
    check("0x1001fa60" in ex and "(image)" in ex and "never stores there" in ex, "explain memory:\n" + ex)
    c4 = judge2.parse_line("COWDIFF FAIL 1 1 mismatch(es), first at state 0 (call args) fault 0/0 @00000001 00000010/"
                           "00000020 x2 - store=missing A:0/00000000 B:0/00000000 reg=- 00000000/00000000 "
                           "esp=001937e4/001937e4 clean=0 afault=0 asym=0 judge=2 call=1:fff00010/fff00010 in=eax:0 args=0")
    ex = explain_failure(c4)
    check("call #1" in ex and "argument 2 is 0x00000010" in ex and "0x00000020" in ex, "explain call args:\n" + ex)
    line, text = contract_for("1fffffff")
    check(line == "/* COW_CONTRACT ret=strict stack_args=0 */" and "ALL of eax and edx" in text,
          "a function with no retuse row is judged in full: %r" % line)
    check(judge2.parse_contract(line) == {"ret": "strict", "stack_args": 0}, "the given line parses")
    print("conveyor selftest: %d passed, %d failed" % (ok[0], ok[1]))
    return 1 if ok[1] else 0


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("cmd", nargs="?", choices=("llm-check", "status", "pick", "one", "run", "stop", "audit",
                                               "recheck"))
    ap.add_argument("entry", nargs="?")
    ap.add_argument("--selftest", action="store_true")
    ap.add_argument("--n", type=int, default=20)
    ap.add_argument("--hours", type=float, default=8.0)
    ap.add_argument("--batches", type=int, default=0, help="run: stop after this many batches (0 = until --hours)")
    ap.add_argument("--station", choices=("draft", "clean"))
    ap.add_argument("--show", action="store_true", help="one: print the prompt, the reply and the verdict")
    ap.add_argument("--promote", action="store_true", help="one: keep the unit if it is gold (default: only report)")
    ap.add_argument("--size-max", type=int, default=0, help="override config size_max for this invocation")
    ap.add_argument("--force", action="store_true", help="run: start even if a heartbeat looks alive")
    a = ap.parse_args()
    if a.selftest:
        return _selftest()
    c = cfg()
    if a.size_max:
        c["size_max"] = a.size_max
    if a.cmd == "llm-check":
        t0 = time.time()
        try:
            model = llm_model(wait=False)
            text = llm("You answer with one word.", "Say READY.", 0, c, wait_forever=False)
        except RuntimeError as exc:
            print("LLM NOT REACHABLE at %s: %s" % (llm_base(), exc))
            return 1
        dt = time.time() - t0
        print("LLM OK: model %s answered %r in %.1fs (%d output tokens reported), key %s"
              % (model, text.strip()[:40], dt, _LLM.get("out_tokens", 0), "sent" if _LLM.get("key") else "NOT FOUND"))
        return 0
    if a.cmd == "status":
        text, _sb = scoreboard()
        print(text)
        return 0
    if a.cmd == "pick":
        items = pick(a.n, a.station, c)
        for it in items:
            print("0x%s  %-5s  %4d bytes  (%s)" % (it["entry"], it["station"], it["size"], it["state"]))
        print("%d picked at size<=%s" % (len(items), c["size_max"]))
        return 0
    if a.cmd == "one":
        if not a.entry:
            raise SystemExit("one needs an entry: conveyor.py one 0x1001cfa0 --show")
        e = hex8(a.entry)
        proof, jid = load_proof(), judge2.judge_id(ROOT)
        st = a.station or ("clean" if state_of(e, proof, jid) == "gold" else "draft")
        if facts(e) is None:
            raise SystemExit("no generated body for 0x%s" % e)
        stats = run_batch([{"entry": e, "station": st, "size": 0, "state": "?"}], c, "one_" + e, show=a.show,
                          do_promote=a.promote)
        print("\nONE 0x%s: %s after %d attempt(s)%s"
              % (e, "GOLD" if stats["gold"] else "not gold", stats["attempts"],
                 "" if a.promote else "   (nothing was kept: pass --promote to keep a result)"))
        return 0 if stats["gold"] else 1
    if a.cmd == "run":
        return run(a.hours, c, a.batches, a.force)
    if a.cmd == "stop":
        os.makedirs(WORK, exist_ok=True)
        with open(STOPFILE, "w") as fh:
            fh.write(now())
        print("stop requested: the loop ends after the step it is in")
        return 0
    if a.cmd == "audit":
        return audit(a.n)
    if a.cmd == "recheck":
        return recheck(a.n)
    ap.print_help()
    return 2


if __name__ == "__main__":
    sys.exit(main())
