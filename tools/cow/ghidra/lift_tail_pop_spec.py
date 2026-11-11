"""Contract for COW_MODEL_TAIL_POP_RUN - the epilogue that sits above a tail `jmp`.

Every case is built in GENERATED-SOURCE SHAPE and goes through `gen_model.model_generated`, because a
predicate probed with hand-built instruction dicts is a different program: that is exactly how an
earlier claim ("multi-register saves do not pair") got published and then refuted. The instruction
lists here are what the parser produces, so the answers are what the lift will see.

Knob discipline: every case is run TWICE, once with `COW_MODEL_TAIL_POP_RUN` unset and once set. The
off column is not decoration - a rule that changes behaviour with the knob off is not a knob.
"""
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
if hasattr(sys.stdout, "reconfigure"):
    sys.stdout.reconfigure(encoding="utf-8", errors="replace")

import gen_model


def body(pairs):
    """Generated-source shape: one `/* addr: mnem op */` comment plus its statement line."""
    out = []
    for addr, mnem, op, stmt in pairs:
        out.append("    /* %s: %s%s */" % (addr, mnem, (" " + op) if op else ""))
        out.append("    { %s }" % stmt)
    return out


PUSH = lambda r, a: (a, "push", r, "%s = esp - 4; wr32(esp - 4, %s); esp -= 4;" % (r, r))
POP = lambda r, a: (a, "pop", r, "uint32_t v = rd32(esp); esp += 4; %s = (uint32_t)(v);" % r)
MOV = lambda op, a: (a, "mov", op, op.split(",")[0].strip() + " = " + op.split(",")[1].strip() + ";")
ST = lambda mnem, op, stmt, a: (a, mnem, op, stmt)

# (name, body, expected-with-knob-ON, expected-with-knob-OFF)
CASES = [
    ("exemplar 0x1006ce70: three saves, register-only interleave, tail jmp",
     body([PUSH("ebx", "1006ce70"), MOV("ebx,ecx", "1006ce71"),
           PUSH("esi", "1006ce7b"), PUSH("edi", "1006ce7c"),
           ST("cmp", "al,cl", "cmp_flags(al, cl);", "1006ce7d"),
           ST("jne", "0x1006cf3c", "if (zf==0) goto L;", "1006ce7f"),
           ST("call", "0x103134c6", "rt_call(g, 0x103134c6);", "1006cf34"),
           POP("edi", "1006cf84"), MOV("ecx,ebx", "1006cf85"),
           POP("esi", "1006cf87"), POP("ebx", "1006cf88"),
           ST("jmp", "0x1006ce40", "rt_jump(g, 0x1006ce40);", "1006cf89")]),
     ["edi", "esi", "ebx"], []),

    ("single save above the tail jmp",
     body([PUSH("esi", "10000010"), MOV("esi,ecx", "10000011"),
           ST("wr32", "", "wr32(0x100abc, esi);", "10000013"),
           POP("esi", "10000018"),
           ST("jmp", "0x1000ff00", "rt_jump(g, 0x1000ff00);", "10000019")]),
     ["esi"], []),

    ("tail pops with an `add esp,N` locals cleanup in the run",
     body([PUSH("ebx", "10000020"), PUSH("edi", "10000021"),
           ST("wr32", "", "wr32(0x100abc, ebx);", "10000022"),
           POP("edi", "10000026"), POP("ebx", "10000029"),
           ST("add", "esp, 0x10", "esp += 0x10;", "1000002c"),
           ST("jmp", "0x1000ff00", "rt_jump(g, 0x1000ff00);", "1000002f")]),
     ["edi", "ebx"], []),

    # ---- negatives: the closure rule and the stop set must be able to say no ----
    ("REFUSE pops that do not close against the pushes (pop edi never pushed)",
     body([PUSH("ebx", "10000030"), MOV("ebx,ecx", "10000031"),
           POP("edi", "10000033"), POP("ebx", "10000034"),
           ST("jmp", "0x1000ff00", "rt_jump(g, 0x1000ff00);", "10000035")]),
     [], []),

    ("REFUSE a call between the pops and the jmp (they belong to another path)",
     body([PUSH("ebx", "10000040"), PUSH("edi", "10000041"),
           POP("edi", "10000042"),
           ST("call", "0x1000beef", "rt_call(g, 0x1000beef);", "10000043"),
           POP("ebx", "10000047"),
           ST("jmp", "0x1000ff00", "rt_jump(g, 0x1000ff00);", "10000048")]),
     [], []),

    ("REFUSE a memory write inside the pop run",
     body([PUSH("ebx", "10000050"), PUSH("edi", "10000051"),
           POP("edi", "10000052"),
           ST("wr32", "", "wr32(0x100abc, 0);", "10000053"),
           POP("ebx", "10000056"),
           ST("jmp", "0x1000ff00", "rt_jump(g, 0x1000ff00);", "10000057")]),
     [], []),

    # ---- regression: a normal `ret` epilogue must be untouched by either knob ----
    ("control: ordinary ret epilogue keeps its strict answer with the knob on",
     body([PUSH("ebx", "10000060"), PUSH("edi", "10000061"),
           ST("wr32", "", "wr32(0x100abc, ebx);", "10000062"),
           POP("edi", "10000066"), POP("ebx", "10000069"),
           ST("ret", "", "rt_return(g, eax, 0);", "1000006c")]),
     ["edi", "ebx"], ["edi", "ebx"]),
]


def run(knob):
    if knob:
        os.environ["COW_MODEL_TAIL_POP_RUN"] = "1"
    else:
        os.environ.pop("COW_MODEL_TAIL_POP_RUN", None)
    import importlib
    importlib.reload(gen_model)
    return gen_model.TAIL_POP_RUN


print("=" * 74)
print("COW_MODEL_TAIL_POP_RUN contract (real parser, both knob positions)")
print("=" * 74)
fails = []
off_state = run(False)
print("  knob OFF -> gen_model.TAIL_POP_RUN == %r" % off_state)
for name, bl, want_on, want_off in CASES:
    m = gen_model.model_generated(bl)
    got = gen_model.epilogue_pop_run(m.get("ins") or [])
    ok = got == want_off
    print("  %s off  %-70s %r" % ("ok  " if ok else "FAIL", name[:70], got))
    if not ok:
        fails.append("OFF %s: %r want %r" % (name, got, want_off))

on_state = run(True)
print("  knob ON  -> gen_model.TAIL_POP_RUN == %r" % on_state)
if on_state is not True:
    fails.append("the knob does not reach gen_model.TAIL_POP_RUN")
for name, bl, want_on, want_off in CASES:
    m = gen_model.model_generated(bl)
    got = gen_model.epilogue_pop_run(m.get("ins") or [])
    ok = got == want_on
    print("  %s on   %-70s %r" % ("ok  " if ok else "FAIL", name[:70], got))
    if not ok:
        fails.append("ON %s: %r want %r" % (name, got, want_on))

# and the population tripwire: the by-eye unit must answer through the real generated text
os.environ.pop("COW_MODEL_TAIL_POP_RUN", None)
import lift_clobber_predicate_blindness as T   # noqa: E402  (its own scan prints above)
bl = T.blines("1006ce70")
if not bl:
    sys.exit("REFUSING: cannot index the exemplar unit")
os.environ["COW_MODEL_TAIL_POP_RUN"] = "1"
import importlib
importlib.reload(gen_model)
m = gen_model.model_generated(bl)
got = gen_model.epilogue_pop_run(m.get("ins") or [])
print("  real unit 0x1006ce70 pops with the knob ON : %r" % (got,))
if got != ["edi", "esi", "ebx"]:
    fails.append("real unit 0x1006ce70 gave %r, want ['edi','esi','ebx']" % (got,))
os.environ.pop("COW_MODEL_TAIL_POP_RUN", None)
importlib.reload(gen_model)
m = gen_model.model_generated(bl)
got = gen_model.epilogue_pop_run(m.get("ins") or [])
print("  real unit 0x1006ce70 pops with the knob OFF: %r" % (got,))
if got != []:
    fails.append("the knob is not inert off: real unit gave %r" % (got,))

print()
if fails:
    print("RESULT: %d FAILURE(S)" % len(fails))
    for f in fails:
        print("  - %s" % f)
    sys.exit(1)
print("RESULT: tail pop-run accepted only where it closes, inert with the knob off")
