/* f_0x1031b7ed - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1031b7ed(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1031b809u: eax = g->eax; goto E_1031b809;
    case 0x1031b80au: eax = g->eax; goto E_1031b80a;
    default: break;
    }
#endif

    COW_AT(1031b7ed)
    t1 = cow_stdcall(g, rd32(COW_IMG(0x1032928cu)), 3, rd32(COW_IMG(0x109f8404u)), 0u, 0x140u);   /* kernel32.dll!HeapAlloc */
    wr32(COW_IMG(0x109f83fcu), t1);
    if (t1 != 0u)
    {
        eax = t1;
        goto L_1031b80a;
    }
    eax = t1;
    COW_AT(1031b809)
    return eax;
L_1031b80a: ;
    COW_AT(1031b80a)
    wr32(COW_IMG(0x109f83f4u), 0u);
    wr32(COW_IMG(0x109f83f8u), 0u);
    wr32(COW_IMG(0x109f83ecu), eax);
    wr32(COW_IMG(0x109f8400u), arg1);
    wr32(COW_IMG(0x109f83e4u), 0x10u);
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1031b7ed(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1031b809u:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1031b80au:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1031b7ed(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1031b7ed(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
