/* f_0x101564f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_101564f0(Guest* g)
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
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101564f7u: self = g->ecx; in_edx = g->edx; goto E_101564f7;
    case 0x101564fcu: self = g->ecx; goto E_101564fc;
    default: break;
    }
#endif

    COW_AT(101564f0)
    if (rd32(self + 4u) != 0u) goto L_101564fc;
    COW_AT(101564f7)
    g->esp = sp0;
    return cow_tailcall(g, rd32(rd32(self) + 0x10u), rd32(self), self, in_edx);
L_101564fc: ;
    COW_AT(101564fc)
    t1 = rd32(self + 0x20u);
    t2 = rd32(self + 0x24u);
    t3 = rd32(self + 0x30u);
    t4 = rd32(self + 0x2cu);
    t5 = rd32(self + 0x28u);
    g->eax = t4;
    g->edx = t3;
    g->esp = sp0;
    t6 = cow_thiscall_cdecl(g, COW_IMG(0x101558a0u), t5, 8, t5, t4, t3, arg1, arg2, arg3, t2, t1);
    t7 = g->edx;
    g->edx = t7;
    return t6;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101564f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101564f7u:
    {
        uint32_t self;
        uint32_t in_edx;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101564fcu:
    {
        uint32_t self;
        self = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101564f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101564f0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
