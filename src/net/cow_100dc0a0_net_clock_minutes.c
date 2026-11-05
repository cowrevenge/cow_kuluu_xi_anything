/* f_100dc0a0 - how far ahead the clock's seconds are, measured against its accumulator.

   Takes the milliseconds the clock has banked, scales them by a constant, truncates the result toward
   zero the way the game's own conversion does, and subtracts it from the clock's seconds multiplied by
   sixty. It reads the clock twice through one pointer, leaves nothing written, and answers in both eax
   and edx.

   Evidence
   - the object is the net clock ............ ONE load of [0x10492e10] at 0x100dc0a4, which serves the
                                               accumulator read at 0x100dc0b2 and the seconds read at
                                               0x100dc0c8 - both fields come from the same instant
   - the accumulator goes to the FPU as an INTEGER  0x100dc0aa writes 0 to the high half of the qword at
                                               [esp+4] and 0x100dc0b5 writes +0x10 to the low half, then
                                               0x100dc0b9 `fild qword ptr [esp+4]` converts the 64-bit
                                               integer - so the value entering the stack is (double) of
                                               an int64, not (double) of a float bit pattern, and the
                                               high half is a real zero the entry stores (a traced write)
   - it is scaled by a constant ............. 0x100dc0bd `fmul dword ptr [COW_ADDR_NET_CLOCK_MS_RATE]`,
                                               which the image holds as 0xbd75c28f = -0.06f
                                               (tools/cow/peek_bytes.py 0x10331810). What -0.06 means is
                                               not established; that it is the value multiplied in is
                                               read off the instruction
   - and truncated by the game's own routine .. 0x100dc0c3 calls COW_ADDR_DOUBLE_TO_INT64_FN, which sets
                                               the FPU control word's rounding to truncate-toward-zero
                                               (`or ah,0xc` at 0x10311c7b), `fistp qword ptr [ebp-0xc]`,
                                               restores the word and returns eax=low / edx=high. Bridged,
                                               not inlined: it pops the value we pushed, and only the
                                               callee knows how it saturates an impossible result
   - sixty seconds to a minute .............. 0x100dc0cc-0x100dc0d2: `lea ecx,[ecx+ecx*2]` (×3),
                                               `lea ecx,[ecx+ecx*4]` (×5), `shl ecx,2` (×4) - three
                                               shifts that are one multiply by 60 over the clock's
                                               +0x0c
   - the answer is the difference ........... 0x100dc0d5-0x100dc0d9: edx = minutes - truncated, then
                                               `mov eax,edx`. Both registers leave holding it, and
                                               nothing after writes either, so cowdiff's eax AND edx
                                               comparisons are on this value
   - the frame is real stack traffic ........ 0x100dc0a0 `sub esp,8`, 0x100dc0a3 `push esi`, the two
                                               qword halves written at 0x100dc0aa/0x100dc0b5, and
                                               0x100dc0cb `pop esi` with 0x100dc0db `add esp,8` - the
                                               saved esi is not scratch, it is the callee-saved register
                                               cowdiff compares
   - cdecl, no arguments, bare `ret` ........ 0x100dc0de; nothing reads the caller's stack
   - paired with f_100dc0e0 ................. the same computation one instruction size narrower (it
                                               reads 16 bits of the seconds and returns 16 bits), which
                                               is why the two are read together

   Proof: tools/cow/cowdiff.py 0x100dc0a0 - PASS (2003 states) on eax, edx, callee-saved, esp, st0/top, memory writes
   (the two qword halves and the saved esi) and calls out. cow/seeds/100dc0a0.json pins the accumulator
   across the sign of the scaling and the clock's seconds, because with a fuzzed pointer the entry
   faults at its first field read and both sides agree by agreeing on nothing.

   Name: cow_net_clock_minutes (guess) - from the ×60 over the seconds field. What the -0.06 scale
   corrects for is not established, so the name claims only the unit of the answer.
*/
#include "cow.h"

/* What the reading decided, handed to the adapter, which owns the frame, the FPU and the call. Not a
   guest layout: it never appears in guest memory. */
typedef struct CowNetClockMinutes
{
    uint32_t minutes; /* the seconds field at sixty times (0x100dc0cc-0x100dc0d2) */
    uint32_t answer;  /* what both eax and edx leave with (0x100dc0d5-0x100dc0d9) */
} CowNetClockMinutes;

void cow_net_clock_minutes(uint32_t seconds, uint32_t truncated, CowNetClockMinutes* out)
{
    uint32_t m = seconds * 3u;   /* 0x100dc0cc: lea ecx,[ecx+ecx*2] */
    m = m * 5u;                  /* 0x100dc0cf: lea ecx,[ecx+ecx*4] */
    m = m << 2;                  /* 0x100dc0d2: shl ecx,2 - together, sixty seconds */
    out->minutes = m;
    out->answer = m - truncated; /* 0x100dc0d7: sub edx,eax */
}

/* COW_ADAPTER BEGIN - cdecl, no arguments, bare `ret`: rt_return's pop of 0 does the `esp += 4` the
   generated body's own `ret` does, and the `add esp,8` at 0x100dc0db is the entry's own. The FPU work
   is done with the runtime's x87 macros so the register stack the harness compares is the one the
   instructions describe: `fild` at 0x100dc0b9 pushes, and the conversion callee's `fistp` pops it, so
   the entry's net effect on top/st0 is nothing. The readability gate skips this block. */
void cow_adapter_100dc0a0(Guest* g)
{
    g->esp -= 8u; /* 0x100dc0a0: sub esp,8 - the qword the fild will read */
    g->esp -= 4u; /* 0x100dc0a3: push esi */
    wr32(g->esp, g->esi);

    const uint32_t clock_addr = rd32(COW_ADDR_FRAME_NET_CLOCK_PTR); /* 0x100dc0a4 */
    CowFrameNetClock* clock = COW_AS(CowFrameNetClock, clock_addr);

    wr32((uint32_t)(g->esp + 8u), 0u);              /* 0x100dc0aa: the qword's high half */
    const uint32_t ms = clock->ms_accum;            /* 0x100dc0b2 */
    wr32((uint32_t)(g->esp + 4u), ms);              /* 0x100dc0b5: and its low half */

    const uint64_t qword = ((uint64_t)0u << 32) | (uint64_t)ms; /* the two words just written */
    const double scaled = (double)(int64_t)qword
                        * (double)rdf32(COW_ADDR_NET_CLOCK_MS_RATE); /* 0x100dc0bd */

    X87_DECL;
    X87_LOAD;
    X87_PUSH(scaled); /* 0x100dc0b9 `fild qword ptr [esp+4]` puts the integer on the stack, and the fmul
                         above is what the entry leaves on top of it before the call */
    X87_STORE;

    const uint32_t truncated = cow_call_double_to_int64(COW_ADDR_DOUBLE_TO_INT64_RETURN_A); /* 0x100dc0c3 */
    /* the conversion leaves its high half in edx and the site-exact bridge lets it stand; the entry
       overwrites edx at 0x100dc0d5 anyway, and what it puts there is what the caller sees */

    const uint32_t seconds = clock->seconds; /* 0x100dc0c8, through the pointer loaded at 0x100dc0a4 */

    CowNetClockMinutes out;
    cow_net_clock_minutes(seconds, truncated, &out);

    g->esi = rd32(g->esp); /* 0x100dc0cb: pop esi */
    g->esp += 4u;
    g->esp += 8u; /* 0x100dc0db: add esp,8 */

    g->edx = out.answer; /* 0x100dc0d5, and 0x100dc0d9 leaves eax holding it too */
    rt_return(g, out.answer, 0);
}
/* COW_ADAPTER END */
