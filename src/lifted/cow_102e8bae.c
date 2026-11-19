/* f_0x102e8bae - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102e8bae(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102e8bb6u: eax = g->eax; in_edx = g->edx; goto E_102e8bb6;
    case 0x102e8bbdu: eax = g->eax; edx = g->edx; goto E_102e8bbd;
    case 0x102e8bd1u: eax = g->eax; edx = g->edx; goto E_102e8bd1;
    default: break;
    }
#endif

    COW_AT(102e8bae)
    if (arg2 != 0u)
    {
    COW_AT(102e8bbd)
        t1 = rd32(arg1 + 8u);
        wr32(arg2, t1);
        t2 = rd32(arg1 + 8u);
        g->edx = t1;
        g->esp = sp0;
        cow_thiscall(g, rd32(rd32(rd32(arg1 + 8u)) + 4u), rd32(rd32(arg1 + 8u)), 1, t2);
        t3 = g->edx;
        eax = 0u;
        edx = t3;
    }
    else
    {
    COW_AT(102e8bb6)
        eax = 0x8876086cu;
        edx = in_edx;
    }
    COW_AT(102e8bd1)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102e8bae(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102e8bb6u:
    {
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x102e8bbdu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102e8bd1u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102e8bae(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102e8bae(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
