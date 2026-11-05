/* f_100dc0e0 - the same measure as f_100dc0a0, taken in sixteen bits.

   The clock's accumulator is scaled and truncated exactly as its sibling does it, but the seconds are
   read as a WORD, multiplied by sixty as a WORD, and the answer handed back in a WORD - so the widths
   are the whole story here, and every half-written register in this entry is load-bearing.

   Evidence
   - the object is the net clock ............ ONE load of [0x10492e10] at 0x100dc0e4, serving the
                                               accumulator at 0x100dc0f2 and the seconds at 0x100dc108
   - the FPU half is the sibling's, word for word  0x100dc0ea/0x100dc0f5 write the two halves of the
                                               qword, 0x100dc0f9 `fild qword ptr [esp+4]`, 0x100dc0fd
                                               `fmul dword ptr [COW_ADDR_NET_CLOCK_MS_RATE]` (the image
                                               holds it as 0xbd75c28f = -0.06f), and 0x100dc103 calls
                                               COW_ADDR_DOUBLE_TO_INT64_FN, which truncates toward zero
                                               and leaves eax=low / edx=high
   - the seconds are read as a WORD ......... 0x100dc108 `mov cx, word ptr [esi+0xc]`: only the low
                                               sixteen bits of ecx are replaced. ecx is NOT callee-saved
                                               and nothing in this entry or in the conversion routine
                                               wrote it before, so its upper half is the CALLER's value,
                                               and the three instructions below still depend on it
   - sixty, in sixteen bits ................. 0x100dc10d `imul cx, cx, 0x3c` - a 16-bit signed multiply
                                               whose result is truncated to 16 bits, leaving the upper
                                               half of ecx exactly as it was. (The sibling f_100dc0a0
                                               reaches the same ×60 with three 32-bit leas and a shl.)
   - the answer is a WORD, assembled ........ 0x100dc111 `sub ecx,eax` is a 32-bit subtract of the
                                               conversion's low half, and 0x100dc113 `mov ax,cx` then
                                               takes only cx's low sixteen bits into eax, whose upper
                                               sixteen are STILL the conversion's - so eax leaves as
                                               (truncated & 0xffff0000) | (low 16 of (ecx - truncated)),
                                               and edx leaves as the conversion's high half, which
                                               nothing after writes. Each of those four register halves
                                               is a separate behaviour and cowdiff compares eax, edx and
                                               the callee-saved set, so none of them may be tidied
   - the frame is real stack traffic ........ 0x100dc0e0 `sub esp,8`, 0x100dc0e3 `push esi`, the qword
                                               halves at 0x100dc0ea/0x100dc0f5, 0x100dc10c `pop esi`,
                                               0x100dc116 `add esp,8`
   - cdecl, no arguments, bare `ret` ........ 0x100dc119
   - paired with f_100dc0a0 ................. same constant, same conversion callee, same two fields:
                                               the two entries are one measure at two widths, which is
                                               why they are read and committed together

   Proof: tools/cow/cowdiff.py 0x100dc0e0 - PASS (2003 states) on eax, edx, callee-saved, esp, st0/top, memory writes
   and calls out. cow/seeds/100dc0e0.json is what makes the widths prove anything: with seconds whose
   low word is 0x0002 and high word 0xbeef, and a caller ecx whose upper half is a sentinel, the
   truncations at 0x100dc108/0x100dc10d/0x100dc113 are each separately observable - a conversion that
   read the seconds as a dword, multiplied in 32 bits, or zero-extended its answer fails on one of them.

   Name: cow_net_clock_minutes_short (guess) - the sibling's minutes answer, taken through the clock's
   16-bit seconds field. Why two widths exist for one measure is not established.
*/
#include "cow.h"

/* What the reading decided, handed to the adapter, which owns the frame, the FPU and the call. Not a
   guest layout: it never appears in guest memory. The four register halves this entry leaves behind are
   decisions, not accidents, so they are stated here. */
typedef struct CowNetClockMinutesShort
{
    uint32_t caller_ecx_kept; /* ecx's upper half is the caller's, and it survives the 16-bit imul */
    uint16_t minutes_short;   /* (word seconds) * 60, truncated to 16 bits (0x100dc108-0x100dc10d) */
    uint32_t eax;             /* the conversion's upper half with this entry's own answer in its low half */
} CowNetClockMinutesShort;

void cow_net_clock_minutes_short(uint16_t seconds_short, uint32_t caller_ecx, uint32_t truncated,
                                 CowNetClockMinutesShort* out)
{
    const uint32_t widened = (caller_ecx & 0xffff0000u) | (uint32_t)seconds_short; /* 0x100dc108 */
    const uint16_t m16 = (uint16_t)((int16_t)seconds_short * 60); /* 0x100dc10d: imul cx,cx,0x3c keeps 16 */
    const uint32_t after_sub = (widened & 0xffff0000u) | (uint32_t)m16;
    const uint32_t difference = after_sub - truncated;              /* 0x100dc111: sub ecx,eax */

    out->caller_ecx_kept = caller_ecx & 0xffff0000u;
    out->minutes_short = m16;
    out->eax = (truncated & 0xffff0000u) | (uint16_t)(difference & 0xffffu); /* 0x100dc113: mov ax,cx */
}

/* COW_ADAPTER BEGIN - cdecl, no arguments, bare `ret`: rt_return's pop of 0 does the `esp += 4` the
   generated body's own `ret` does, and 0x100dc116's `add esp,8` is the entry's own. The FPU work uses
   the runtime's x87 macros: `fild` at 0x100dc0f9 pushes and the conversion callee's `fistp` pops, so
   the entry's net effect on the compared top/st0 is nothing. edx is deliberately left as the conversion
   routine's high half - the site-exact bridge propagates it, exactly as the original's call did. The
   readability gate skips this block. */
void cow_adapter_100dc0e0(Guest* g)
{
    g->esp -= 8u; /* 0x100dc0e0: sub esp,8 */
    g->esp -= 4u; /* 0x100dc0e3: push esi */
    wr32(g->esp, g->esi);

    const uint32_t clock_addr = rd32(COW_ADDR_FRAME_NET_CLOCK_PTR); /* 0x100dc0e4 */
    CowFrameNetClock* clock = COW_AS(CowFrameNetClock, clock_addr);

    wr32((uint32_t)(g->esp + 8u), 0u);                /* 0x100dc0ea: the qword's high half */
    const uint32_t ms = clock->ms_accum;              /* 0x100dc0f2 */
    wr32((uint32_t)(g->esp + 4u), ms);                /* 0x100dc0f5: and its low half */

    const double scaled = (double)(int64_t)(uint64_t)ms
                        * (double)rdf32(COW_ADDR_NET_CLOCK_MS_RATE); /* 0x100dc0f9, 0x100dc0fd */

    X87_DECL;
    X87_LOAD;
    X87_PUSH(scaled);
    X87_STORE;

    const uint32_t truncated = cow_call_double_to_int64(COW_ADDR_DOUBLE_TO_INT64_RETURN_B); /* 0x100dc103 */

    const uint16_t seconds_short = rd16((uint32_t)(clock_addr + 0xcu)); /* 0x100dc108: mov cx,[esi+0xc] */

    CowNetClockMinutesShort out;
    cow_net_clock_minutes_short(seconds_short, g->ecx, truncated, &out);

    g->esi = rd32(g->esp); /* 0x100dc10c: pop esi */
    g->esp += 4u;
    g->esp += 8u; /* 0x100dc116: add esp,8 */

    rt_return(g, out.eax, 0); /* 0x100dc113 put the answer in ax; edx is still the conversion's high half */
}
/* COW_ADAPTER END */
