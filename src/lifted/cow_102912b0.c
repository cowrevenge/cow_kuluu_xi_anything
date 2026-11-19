/* f_0x102912b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102912b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102912bbu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_102912bb;
    case 0x102912c1u: eax = g->eax; ecx = g->ecx; goto E_102912c1;
    default: break;
    }
#endif

    COW_AT(102912b0)
    if (rd32(rd32(sp0 + 4u) + 0x2cu) == 0u) goto L_102912c1;
    eax = rd32(rd32(sp0 + 4u) + 0x2cu);
    ecx = rd32(sp0 + 4u);
    COW_AT(102912bb)
    wr32(sp0 + 4u, ecx);
    g->esp = sp0;
    cow_tailcall(g, eax, eax, ecx, in_edx);
    return;
L_102912c1: ;
    COW_AT(102912c1)
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102912b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102912bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x102912c1u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
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
void cow_adapter_102912b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102912b0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
