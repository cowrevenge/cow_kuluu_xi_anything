/* f_0x10047b80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10047b80(Guest* g)
{
    uint32_t eax;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10047b87u: eax = g->eax; in_edx = g->edx; goto E_10047b87;
    case 0x10047b8bu: eax = g->eax; in_edx = g->edx; goto E_10047b8b;
    case 0x10047b95u: eax = g->eax; in_edx = g->edx; goto E_10047b95;
    case 0x10047b9fu: eax = g->eax; in_edx = g->edx; goto E_10047b9f;
    default: break;
    }
#endif

    COW_AT(10047b80)
    if (rd32(self + 4u) == 0u) goto L_10047b9f;
    eax = rd32(self + 4u);
    COW_AT(10047b87)
    if (eax == 0u) goto L_10047b95;
    COW_AT(10047b8b)
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x10063b70u), rd32(eax), rd32(eax) + 0x30u, in_edx);
L_10047b95: ;
    COW_AT(10047b95)
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x10063b70u), 0u, 0x30u, in_edx);
L_10047b9f: ;
    COW_AT(10047b9f)
    return COW_IMG(0x10353718u);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10047b80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10047b87u:
    {
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10047b8bu:
    {
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10047b95u:
    {
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10047b9fu:
    {
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10047b80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10047b80(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
