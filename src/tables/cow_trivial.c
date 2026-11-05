/* src/tables/cow_trivial.c - the code behind every row of src/tables/cow_trivial_rows.def.

   943 entries in this build are not functions somebody wrote: they are one or two instructions the
   compiler emitted for a trivial virtual method, a folded duplicate (/OPT:ICF), or an inlined accessor.
   They used to have 943 files. Now they have one row each and this one body, which says what the shape
   does and returns the way the entry's own `ret` returned.

   What is per-entry is DATA - the kind, the value the shape needs, what the `ret` pops, and who owns the
   address - and the rows are generated out of generated/all by tools/cow/mktable.py, never typed. That
   is the whole honesty of the design: this file cannot say anything about an individual entry, so it
   cannot be wrong about one, and `python tools/cow/mktable.py --check 0x<hex>` re-derives a row from the
   bytes on demand (tools/cow/gate.ps1 does exactly that before it lets a tabled row stand).

   What is verified is behaviour, per entry: tools/cow/cowdiff.py <hex> compares this runner, dispatched
   on that row, against that entry's generated original - return registers, callee-saved, esp, every
   guest memory write and every call out. cowdiff proves each shape once per entry that carries it, and
   docs/cow/STATUS.md prints how many rows that covers.

   The rule that keeps this file small: a row's kind must be one of COW_TRIV_* in layout/trivial.h, and
   an entry whose body is not one of those shapes is not tabled - it goes back to the queue to be read.
*/
#include "cow.h"
#include "trivial.h"

/* One row, one shape. `row->value` is never a runtime handle except for the GET/GETBYTE/LEA kinds, where
   it is an offset ADDED to the object in ecx; the image kinds take a VA and must go through COW_IMG,
   because inside the retail launcher FFXiMain is not at 0x10000000. */
void cow_trivial_run(Guest* g, const CowTrivialRow* row)
{
    uint32_t eax = g->eax;

    switch ((CowTrivialKind)row->kind)
    {
    case COW_TRIV_RET:                                   /* `ret N` */
        break;
    case COW_TRIV_ZERO:                                  /* `xor eax, eax / ret N` */
        eax = 0u;
        break;
    case COW_TRIV_SELF:                                  /* `mov eax, ecx / ret N` */
        eax = g->ecx;
        break;
    case COW_TRIV_TRUE:                                  /* `mov al, 1 / ret N` - al only */
        eax = (eax & ~0xffu) | 1u;
        break;
    case COW_TRIV_FALSE:                                 /* `xor al, al / ret N` - al only */
        eax = eax & ~0xffu;
        break;
    case COW_TRIV_CONST:                                 /* `mov eax, <imm> / ret N` */
        eax = row->value;
        break;
    case COW_TRIV_CONST_PUSH:                            /* `push 1 / pop eax / ret N` */
        /* the push leaves the value behind in memory below esp and the pop does not clear it, and
           cowdiff compares guest memory, so the trace is part of what the entry does */
        wr32(g->esp - 4u, row->value);
        eax = row->value;
        break;
    case COW_TRIV_GPTR:                                  /* `mov eax, <addr> / ret N` - the address itself */
        eax = COW_IMG(row->value);
        break;
    case COW_TRIV_GDWORD:                                /* `mov eax, [<addr>] / ret N` */
        eax = rd32(COW_IMG(row->value));
        break;
    case COW_TRIV_GBYTE:                                 /* `mov al, byte ptr [<addr>] / ret N` */
        eax = (eax & ~0xffu) | rd8(COW_IMG(row->value));
        break;
    case COW_TRIV_GET:                                   /* `mov eax, [ecx + off] / ret N` */
        eax = rd32(g->ecx + row->value);
        break;
    case COW_TRIV_GETBYTE:                               /* `mov al, byte ptr [ecx + off] / ret N` */
        eax = (eax & ~0xffu) | rd8(g->ecx + row->value);
        break;
    case COW_TRIV_LEA:                                   /* `lea eax, [ecx + off] / ret N` */
        eax = g->ecx + row->value;
        break;
    case COW_TRIV_INCARG:                        /* `mov eax, [esp + 4] / inc eax / ret N` */
        eax = rt_arg(g, 0) + 1u;
        break;
    default:
        /* rt_fatal is (guest, address, message) - no format string, so the address goes where the
           harness can print it and the message stays a plain one */
        rt_fatal(g, row->entry,
                 "cow_trivial: this row's kind is not in layout/trivial.h - rerun "
                 "python tools/cow/mktable.py --write");
        return;
    }

    /* the entry's `ret N`: pop the return address and the N bytes of arguments it cleaned */
    rt_return(g, eax, row->pop);
}

/* The rows, from the generated table. Sorted by entry, so the lookup is a binary search. */
const CowTrivialRow g_cow_trivial_rows[] = {
#define COW_TRIVIAL_ROW(entry, kind, value, pop, owner) { 0x##entry##u, value, pop, kind, owner },
#include "cow_trivial_rows.def"
#undef COW_TRIVIAL_ROW
};

const unsigned g_cow_trivial_rows_count =
    (unsigned)(sizeof(g_cow_trivial_rows) / sizeof(g_cow_trivial_rows[0]));

void cow_trivial_dispatch(Guest* g, uint32_t entry)
{
    unsigned lo = 0u, hi = g_cow_trivial_rows_count;
    while (lo < hi)
    {
        const unsigned mid = lo + ((hi - lo) / 2u);
        if (g_cow_trivial_rows[mid].entry == entry)
        {
            cow_trivial_run(g, &g_cow_trivial_rows[mid]);
            return;
        }
        if (g_cow_trivial_rows[mid].entry < entry)
            lo = mid + 1u;
        else
            hi = mid;
    }
    /* A wrap exists only for a row, so this means cow_wraps.c and the .def disagree - a stale generated
       file, never a game situation. Saying so beats returning a wrong eax. */
    rt_fatal(g, entry,
             "cow_trivial: this entry has an adapter but no row - run python tools/cow/genwraps.py and "
             "python tools/cow/mktable.py --write");
}

/* Upstream's --wraps mechanism needs one `cow_adapter_<entry>` symbol per wrapped entry, so the table
   mints them: the body is one line that hands the dispatcher the entry this row stands for. Nothing
   else is per-entry, which is the point. */
#define COW_TRIVIAL_ROW(entry, kind, value, pop, owner)                    \
    void cow_adapter_##entry(Guest* g) { cow_trivial_dispatch(g, 0x##entry##u); }
#include "cow_trivial_rows.def"
#undef COW_TRIVIAL_ROW
