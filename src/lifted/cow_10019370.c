/* f_0x10019370 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10019370(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 20u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10019381u: self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_10019381;
    default: break;
    }
#endif

    COW_AT(10019370)
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, sp0 - 8u);
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, rd32(COW_IMG(0x103291acu)), 1, sp0 - 8u);   /* kernel32.dll!QueryPerformanceCounter */
    COW_AT(10019381)
    t1 = rd32(self + 0x60u) + rd32(sp0 - 8u) - rd32(self + 0x50u);
    t2 = rd32(sp0 - 4u);
    t3 = rd32(self + 0x54u);
    t4 = rd32(sp0 - 8u);
    t5 = rd32(self + 0x50u);
    t6 = rd32(self + 0x60u);
    wr32(self + 0x60u, t1);
    t7 = t2 + rd32(self + 0x64u) - t3 - (t4 < t5) + (t6 + t4 - t5 < t6);
    wr32(self + 0x64u, t7);
    g->esi = in_esi;
    g->edx = t2 - t3 - (t4 < t5);
    return t7;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10019370(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10019381u:
    {
        uint32_t self;
        uint32_t in_esi;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x10u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10019370(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10019370(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
