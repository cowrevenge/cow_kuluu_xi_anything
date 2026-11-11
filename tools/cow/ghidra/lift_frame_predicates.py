"""Frame predicates read off the SHIPPED ADAPTER - no model, no generated body, no side effects.

Why a library: during one turn the counter "the adapter pushes a callee-saved register and never
brings it back" was written twice - once in lift_matchpushes_check.py and once in a scratch overlap
script - and every figure in this area has already been retracted once for exactly that reason
("168" that was really 66, "58" against "74", "204 explained" that was a vacuous test). A predicate
that measures a population belongs in exactly one file that consumers import.

Contrast with lift_clobber_predicate_blindness.py, which holds the MODEL-based predicates (does
gen_model know about the push). Those answer a different question and are quoted with a different
name; the numbers are not interchangeable and the ladder's own output says so.
"""
import io
import os
import re

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))))
LIFT = os.path.join(ROOT, "src", "lifted")
REGS = ("esi", "edi", "ebx", "ebp")

ADAPTER_PUSH_RE = re.compile(r"g->esp -= 4u; wr32\(g->esp, g->(\w+)\)")
ADAPTER_POP_RE = re.compile(r"/\*\s*pop\s+(\w+)\s*\*/")


def read_unit(a):
    """The shipped lifted file for one address, or '' if it does not exist."""
    p = os.path.join(LIFT, "cow_%s.c" % a)
    if not os.path.exists(p):
        return ""
    with io.open(p, encoding="utf-8", errors="replace") as fh:
        return fh.read()


def lifted_units():
    """Every machine-lifted address in the tree, sorted. The population all these counters divide by."""
    return sorted(f[4:12].lower() for f in os.listdir(LIFT)
                  if f.startswith("cow_") and f.endswith(".c"))


def _adapter_region(text):
    return text[text.index("COW_ADAPTER BEGIN"):] if "COW_ADAPTER BEGIN" in text else ""


def adapter_pushes(text):
    """Registers the prologue actually pushed, in push order."""
    return ADAPTER_PUSH_RE.findall(_adapter_region(text))


def adapter_pops(text):
    """Registers the epilogue actually pops, in pop order."""
    return ADAPTER_POP_RE.findall(_adapter_region(text))


def restored_anywhere(text, r):
    """Is r put back by ANY spelling - an epilogue pop comment, or the body's own pop temporary?

    Every pattern here has to be reachable: a predicate that cannot match anything turns 'how many
    units restore the register' into a clean zero that reads like a finding. The volatile control in
    __main__ is the guard against that.
    """
    return bool(re.search(r"/\*\s*pop\s+%s\s*\*/" % r, text) or
                re.search(r"g->%s\s*=\s*\(uint32_t\)\(v\)" % r, text) or
                re.search(r"g->%s\s*=\s*v\b" % r, text))


def adapter_unpaired(text):
    """Callee-saved registers this shipped adapter pushes and never brings back, in any spelling.

    This is the version of the clobber count a reader can verify on the file itself, which is why it
    is the one to quote for "does the unit clobber the caller's register". It makes no claim about
    what the frame MODEL believes - see the model-based ladder for that question.
    """
    if not _adapter_region(text):
        return []
    pushes, pops = adapter_pushes(text), adapter_pops(text)
    out = []
    for r in pushes:
        if r not in REGS or r in pops or r in out:
            continue
        if restored_anywhere(text, r):
            continue
        out.append(r)
    return out


def adapter_overpops(text):
    """Callee-saved registers this shipped adapter POPs but never pushed.

    The mirror of `adapter_unpaired`, and just as much a defect: a pop that has no matching push reads
    a caller's word into a register and walks esp through stack it does not own. Counting only one
    direction is half a count, which is how "168 open clobbers" happened.
    """
    if not _adapter_region(text):
        return []
    pushes, pops = adapter_pushes(text), adapter_pops(text)
    out = []
    for r in pops:
        if r in REGS and r not in pushes and r not in out:
            out.append(r)
    return out


def adapter_overpops_all(text):
    """EVERY register the shipped adapter pops without having pushed it, callee-saved or not.

    The rule the emitter applies must be defined here, in the same file as `adapter_overpops`, because
    they answer the same question at different widths: `adapter_overpops` is the DEFECT count (the four
    registers a caller is entitled to get back), this one is what the symmetry rule can act on. Keeping
    the two definitions apart, in one place, with their names saying which is which, is what stops the
    counter and the rule disagreeing about what "unpaired" means.
    """
    if not _adapter_region(text):
        return []
    pushes, pops = adapter_pushes(text), adapter_pops(text)
    out = []
    for r in pops:
        if r not in pushes and r not in out:
            out.append(r)
    return out


def adapter_writes(text, r):
    """Does our own text WRITE g-><r>, ignoring the pop that restores it?

    The pop statement itself is `g->r = v`, so a naive "is r assigned" is always true for a popped
    register; the question is whether anything OTHER than the restore touches it. If nothing does, the
    pop restores a value that was never disturbed and dropping it changes nothing.
    """
    for m in re.finditer(r"g->%s\s*=\s*([^;]{0,40});" % r, text):
        rhs = m.group(1).strip()
        if rhs in ("v", "(uint32_t)(v)"):
            continue                      # the restore itself
        return True
    return False


def unpaired_population():
    """{addr: [regs]} over every machine-lifted file. THE population for the code-level clobber."""
    out = {}
    for a in lifted_units():
        t = read_unit(a)
        if "machine-lifted" not in t:
            continue
        u = adapter_unpaired(t)
        if u:
            out[a] = u
    return out


if __name__ == "__main__":
    # running it directly is the self-check: the counters must be capable of firing at all, and the
    # by-eye exemplar must be in the population
    pop = unpaired_population()
    pairs = sum(len(v) for v in pop.values())
    print("  units with an unpaired callee-saved push : %d  (%d pairs)" % (len(pop), pairs))
    if "10003070" not in pop:
        raise SystemExit("REFUSING: the by-eye exemplar 0x10003070 is not in the population - "
                         "the counter cannot be working")
    print("  exemplar 0x10003070 unpaired             : %s" % pop["10003070"])
    volt = [a for a in lifted_units()
            if [r for r in adapter_pushes(read_unit(a)) if r not in REGS]
            and [r for r in adapter_pushes(read_unit(a)) if r not in REGS
                 and r not in adapter_pops(read_unit(a))]]
    over = {a: adapter_overpops(read_unit(a)) for a in lifted_units()
            if adapter_overpops(read_unit(a))}
    print("  units POPPING a saved register they never pushed: %d  %s"
          % (len(over), "counter tells both directions" if over
             else "ZERO - never seen the mirror case; treat 'unpaired' as untested in one direction"))
    print("  (control) units with an unpaired VOLATILE push : %d  %s"
          % (len(volt), "counter tells the kinds apart" if volt
             else "ZERO - never seen a volatile case"))
    if not pairs:
        raise SystemExit("REFUSING: zero pairs - nothing was measured")
