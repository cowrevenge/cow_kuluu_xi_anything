/* f_0x1011a3b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1011a3b0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1011a3b7u: eax = g->eax; self = g->ecx; edx = g->edx; goto E_1011a3b7;
    case 0x1011a3c8u: eax = g->eax; edx = g->edx; goto E_1011a3c8;
    default: break;
    }
#endif

    COW_AT(1011a3b0)
    if (rd32(self + 0x7cu) == 0u)
    {
        eax = rd32(self + 0x7cu);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x7cu);
    COW_AT(1011a3b7)
        t1 = rd32(self + 0x80u);
        t2 = (self & 0xffff0000u) | rd16(self + 0x4cu);
        g->eax = eax;
        g->edx = t1;
        g->esp = sp0;
        t3 = cow_thiscall_cdecl(g, eax, t2, 2, t2, t1);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    COW_AT(1011a3c8)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1011a3b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1011a3b7u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011a3c8u:
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
void cow_adapter_1011a3b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1011a3b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
