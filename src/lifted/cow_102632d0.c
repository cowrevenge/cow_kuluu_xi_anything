/* f_0x102632d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102632d0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102632d7u: eax = g->eax; goto E_102632d7;
    case 0x102632ddu: eax = g->eax; goto E_102632dd;
    default: break;
    }
#endif

    COW_AT(102632d0)
    if (rd32(self + 0x18u) != 0u)
    {
        eax = rd32(self + 0x18u);
        goto L_102632dd;
    }
    COW_AT(102632d7)
    return 0x80040209u;
L_102632dd: ;
    COW_AT(102632dd)
    g->eax = eax;
    g->esp = sp0;
    t1 = cow_thiscall(g, rd32(rd32(eax) + 0x40u), rd32(eax), 1, eax);
    return t1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102632d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102632d7u:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x102632ddu:
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
void cow_adapter_102632d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102632d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
