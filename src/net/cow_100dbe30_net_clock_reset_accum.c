/* f_100dbe30 - seed one field of the clock from the system's answer and clear the other.

   Asked a system question once and wrote the result into the field its first argument names, then
   cleared the field its second names, and came back with 1. Both addresses belong to the net clock:
   the stand-up (f_100dbe50) hands in the seconds field and the millisecond accumulator, which is why
   this entry never loads the clock global itself and still belongs to the same cluster.

   Evidence
   - the two arguments are the fields ........... 0x100dbe37 `mov ecx,[esp+8]` and 0x100dbe3b
                                                  `mov edx,[esp+0xc]`, read after the `add esp,4` at
                                                  0x100dbe3f undid the `push 0` at 0x100dbe30; f_100dbe50
                                                  pushes +0x10 first and +0x0c second (0x100dbe75-0x100dbe76),
                                                  so ecx is the seconds field and edx the accumulator
   - the answer comes from a system query ....... 0x100dbe32 `call 0x10314f31` with 0 pushed as its
                                                  out-parameter (that routine stores its answer only
                                                  when given a pointer, 0x10315007-0x10315009), so the
                                                  entry wants the eax. What the routine asks is read
                                                  there, not here: it builds a block through two
                                                  imports, compares it against the five cached words
                                                  at COW_ADDR_OS_VERSION_CACHE and returns either the
                                                  cached answer or one derived from the fresh words.
                                                  It is bridged, not converted: this cluster converts
                                                  the clock's owners, and a function that answers the
                                                  operating system is not one of them
   - the value goes to the SECONDS field ........ 0x100dbe42 `mov dword ptr [ecx],eax`, the same eax the
                                                  call left. This is not a zeroing - the layout note
                                                  that said this entry zeroes +0x0c was a misreading of
                                                  which argument is which, and layout/structs.h now
                                                  says what the instructions do
   - the accumulator is what gets cleared ....... 0x100dbe44 `mov dword ptr [edx],0`
   - eax is a byte-level answer ................. 0x100dbe4a `mov al,1` writes AL alone, so the upper
                                                  three bytes are still the answer's; returning a bare
                                                  1 would be a difference from the game and cowdiff
                                                  compares all of eax
   - ecx and edx are outputs too ................ 0x100dbe37 and 0x100dbe3b load them and nothing after
                                                  writes them, so the caller sees the two field
                                                  addresses in them; the callee at 0x10314f31 ran
                                                  before both loads, which is why its register
                                                  aftermath does not survive
   - cdecl with one argument, cleaned here ...... the `add esp,4` at 0x100dbe3f, and a bare `ret` at
                                                  0x100dbe4c: the entry cleans its own callee's
                                                  argument and its caller cleans the entry's two
   - one caller ................................. 0x100dbe77, inside f_100dbe50 (tools/cow/owner_index.py
                                                  0x100dbe30). It is the clock's own reset helper and
                                                  nothing else calls it

   Proof: tools/cow/cowdiff.py 0x100dbe30 - PASS on eax, edx, callee-saved, esp, memory writes (address,
   size, value, order) and calls out, with every generated instruction site reached - which is the point
   that matters here, because an entry whose call faults on both sides would also be "equal".

   Name: cow_net_clock_reset_accum (guess) - from the field it clears and the field it seeds; what the
   system answer means is not established, and the name claims only that it is the reset the stand-up
   makes.
*/
#include "cow.h"

/* What the reading decided, handed to the adapter, which owns the memory effects. Not a guest layout:
   it never appears in guest memory. */
typedef struct CowNetClockReset
{
    uint32_t seconds_value; /* what +0x0c takes from the query's eax (0x100dbe42) */
    uint32_t eax;           /* what the entry returns: al forced to 1 over that same answer */
} CowNetClockReset;

void cow_net_clock_reset_accum(uint32_t answer, CowNetClockReset* plan)
{
    plan->seconds_value = answer;               /* 0x100dbe42: the answer, unmodified */
    plan->eax = (answer & ~0xffu) | 1u;         /* 0x100dbe4a: `mov al,1` over it */
}

/* COW_ADAPTER BEGIN - cdecl, two arguments, bare `ret`: the caller cleans them (f_100dbe50 does at
   0x100dbe7c), so rt_return's pop of 0 does only the `esp += 4` for the return address. The entry's own
   `push 0` at 0x100dbe30 and the callee's cdecl argument dropped by `add esp,4` at 0x100dbe3f are
   reproduced as stack traffic, and the two stores go through the registers the entry loaded them into,
   because cowdiff compares the guest memory trace and edx. The readability gate skips this block. */
void cow_adapter_100dbe30(Guest* g)
{
    const uint32_t seconds_field = rt_arg(g, 0); /* 0x100dbe37: [esp+8] once the push is undone */
    const uint32_t ms_field = rt_arg(g, 1);      /* 0x100dbe3b: [esp+0xc] likewise */

    g->esp -= 4u; /* 0x100dbe30: push 0 - the query's out-parameter, unused */
    wr32(g->esp, 0u);

    const uint32_t answer = cow_call_os_version_answer(COW_ADDR_OS_VERSION_ANSWER_RETURN); /* 0x100dbe32 */
    g->esp += 4u; /* 0x100dbe3f: add esp,4 - the callee is cdecl and left its argument behind */

    CowNetClockReset plan;
    cow_net_clock_reset_accum(answer, &plan);

    g->ecx = seconds_field; /* 0x100dbe37 */
    g->edx = ms_field;      /* 0x100dbe3b - and what the entry hands back in edx */
    wr32(g->ecx, plan.seconds_value); /* 0x100dbe42 */
    wr32(g->edx, 0u);                 /* 0x100dbe44 */

    rt_return(g, plan.eax, 0);
}
/* COW_ADAPTER END */
