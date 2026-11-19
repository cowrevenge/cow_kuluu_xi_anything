/* f_0x10263260 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10263260(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1026326eu: ecx = g->ecx; goto E_1026326e;
    case 0x10263274u: ecx = g->ecx; goto E_10263274;
    default: break;
    }
#endif

    COW_AT(10263260)
    wr8(self + 0x24u, 0u);
    if (rd32(self + 0x98u) != 0u)
    {
        ecx = rd32(self + 0x98u);
        goto L_10263274;
    }
    COW_AT(1026326e)
    return 0x8004020au;
L_10263274: ;
    COW_AT(10263274)
    g->eax = rd32(ecx);
    t1 = rd32(ecx);
    g->esp = sp0;
    t2 = cow_thiscall(g, rd32(t1 + 0x18u), ecx, 1, ecx);
    return t2;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10263260(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1026326eu:
    {
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10263274u:
    {
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10263260(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10263260(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
