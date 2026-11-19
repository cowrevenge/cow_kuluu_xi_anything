/* f_0x10099710 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10099710(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10099719u: eax = g->eax; in_edx = g->edx; goto E_10099719;
    case 0x10099723u: eax = g->eax; edx = g->edx; goto E_10099723;
    default: break;
    }
#endif

    COW_AT(10099710)
    if (rd32(COW_IMG(0x10487eb0u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10487eb0u));
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x10487eb0u));
    COW_AT(10099719)
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0;
        t1 = cow_thiscall_cdecl(g, eax, arg3, 1, arg3);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    COW_AT(10099723)
    wr32(COW_IMG(0x10487eb0u), 0u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10099710(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10099719u:
    {
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10099723u:
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
void cow_adapter_10099710(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10099710(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
