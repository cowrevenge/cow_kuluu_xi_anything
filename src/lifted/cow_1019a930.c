/* f_0x1019a930 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1019a930(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1019a936u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_1019a936;
    case 0x1019a944u: eax = g->eax; edx = g->edx; goto E_1019a944;
    default: break;
    }
#endif

    COW_AT(1019a930)
    if (rd8(self + 0x3cu) != 1u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
    COW_AT(1019a936)
        t1 = (in_eax & 0xffffff00u) | rd8(self + 0x38u);
        g->eax = t1;
        g->edx = in_edx;
        g->esp = sp0;
        t2 = cow_cdecl(g, COW_IMG(0x100e46a0u), 2, 0u, t1);
        t3 = g->edx;
        eax = t2;
        edx = t3;
    }
    COW_AT(1019a944)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1019a930(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1019a936u:
    {
        uint32_t in_eax;
        uint32_t self;
        uint32_t in_edx;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1019a944u:
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
void cow_adapter_1019a930(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1019a930(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
