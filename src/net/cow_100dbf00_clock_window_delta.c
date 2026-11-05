/* f_100dbf00 - the signed-looking delta between two clock readings, folded back into a window.

   Given a cap and two tick readings, answer how far `value` sits from `base`, wrapping it through the
   cap when `value` has fallen behind `base`. Two branches, five instructions, no memory touched - and
   both of the net clock's time-accounting entries call it, which is why it is read with them rather
   than separately.

   Evidence
   - three cdecl arguments ............ [esp+4], [esp+8], [esp+0xc] read at 0x100dbf0c / 0x100dbf04 /
                                        0x100dbf08; the entry `ret`s without a pop (0x100dbf14 and
                                        0x100dbf19) and BOTH callers clean up: f_100dbf20 does
                                        `add esp, 0xc` at 0x100dbf3a and f_100dbeb0 at 0x100dbed2
   - the compare is UNSIGNED .......... `cmp ecx, edx / jae` at 0x100dbf08-0x100dbf0a. It reads like a
                                        signed delta (and the arithmetic is the same bits either way),
                                        but the test is unsigned, so the types here are uint32_t and a
                                        "tidied" signed compare would be a behaviour change
   - edx is an output, not scratch .... `mov edx, dword ptr [esp + 8]` at 0x100dbf04 runs before the
                                        branch and nothing after it writes edx, so the entry returns
                                        arg1 in edx on BOTH paths. cowdiff compares edx, and this
                                        conversion failed there until the adapter said so explicitly
   - taken branch (value >= base) ..... eax = value - base (0x100dbf15-0x100dbf17)
   - fall-through (value < base) ...... eax = cap - base + value (0x100dbf0c-0x100dbf12)
   - what the two callers feed it ..... f_100dbf20: cap = -1, base = the tick stored at [clock+0x00],
                                        value = the live winmm tick (pushes at 0x100dbf2f-0x100dbf35) -
                                        so the "wrap through cap" is the -1 that makes an elapsed
                                        difference of zero read as -1 behind. f_100dbeb0: cap = 1000
                                        (COW_NET_CLOCK_MS_PER_SECOND), base = [clock+0x04], value =
                                        [clock+0x10], and the answer is stored at [clock+0x08]
                                        (0x100dbed5)
   - no owner dispute ................. tools/cow/callers_of.py 0x100dbf00 -> the two code sites above;
                                        it is never reached through a table

   Proof: tools/cow/cowdiff.py 0x100dbf00 - PASS on eax, edx, callee-saved, esp, memory writes (there
   are none) and calls out, on both branches, with every generated instruction site reached.

   Name: cow_clock_window_delta (guess) - descriptive of the arithmetic and of what the callers do with
   it; it is not claimed to be "elapsed time" in any unit nobody has read.
*/
#include "cow.h"

uint32_t cow_clock_window_delta(uint32_t cap, uint32_t base, uint32_t value)
{
    if (value < base) /* 0x100dbf08-0x100dbf0a: UNSIGNED, as the `jae` says */
    {
        return cap - base + value; /* 0x100dbf0c-0x100dbf12 */
    }
    return value - base; /* 0x100dbf15-0x100dbf17 */
}

/* COW_ADAPTER BEGIN - cdecl, three arguments, the caller cleans them (both callers do `add esp, 0xc`),
   so rt_return pops only the return address: pop count 0. edx is NOT scratch here: 0x100dbf04 loads
   `mov edx, dword ptr [esp + 8]` on the way to the compare and nothing after it writes edx, so the
   entry hands arg1 back in edx on both branches and cowdiff compares it - the conversion has to say
   so rather than leave the caller's value in place. The readability gate skips this block. */
void cow_adapter_100dbf00(Guest* g)
{
    const uint32_t arg1 = rt_arg(g, 1);
    const uint32_t eax = cow_clock_window_delta(rt_arg(g, 0), arg1, rt_arg(g, 2));
    g->edx = arg1; /* 0x100dbf04, on both paths */
    rt_return(g, eax, 0);
}
/* COW_ADAPTER END */
