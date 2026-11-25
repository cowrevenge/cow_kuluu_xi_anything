/* f_0x1002d310 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1002d310(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1002d317u: eax = g->eax; self = g->ecx; goto E_1002d317;
    case 0x1002d324u: eax = g->eax; self = g->ecx; goto E_1002d324;
    default: break;
    }
#endif

    COW_AT(1002d310)
    if (rd32(self + 0x34u) == 0u) goto L_1002d324;
    eax = rd32(self + 0x34u);
    COW_AT(1002d317)
    t1 = rd32(rd32(eax) + 0x4eu);
    wr32(self + 0x6eu, t1);
    return (t1 & 0xffffff00u) | 1u;
L_1002d324: ;
    COW_AT(1002d324)
    t2 = rd32(0x4eu);
    wr32(self + 0x6eu, t2);
    return (t2 & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1002d310(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1002d317u:
    {
        uint32_t eax;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1002d324u:
    {
        uint32_t eax;
        uint32_t self;
        eax = g->eax;
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
void cow_adapter_1002d310(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1002d310(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
