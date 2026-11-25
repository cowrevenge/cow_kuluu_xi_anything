/* f_0x100541c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100541c0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100541d2u: eax = g->eax; self = g->ecx; goto E_100541d2;
    case 0x100541dfu: eax = g->eax; self = g->ecx; goto E_100541df;
    default: break;
    }
#endif

    COW_AT(100541c0)
    wr32(self, COW_IMG(0x1032b654u));
    wr32(self + 0x18u, 0u);
    if (rd32(self + 0x38u) == 0u) goto L_100541df;
    eax = rd32(self + 0x38u);
    COW_AT(100541d2)
    t1 = rd32(eax);
    wr32(t1 + 0xa8u, 0u);
    g->esp = sp0;
    g->edx = 0u;
    cow_tailcall(g, COW_IMG(0x100747c0u), t1, self, 0u);
    return;
L_100541df: ;
    COW_AT(100541df)
    wr32(0xa8u, 0u);
    g->esp = sp0;
    g->edx = 0u;
    cow_tailcall(g, COW_IMG(0x100747c0u), 0u, self, 0u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100541c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100541d2u:
    {
        uint32_t eax;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        g->esp = sp0;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100541dfu:
    {
        uint32_t eax;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        g->esp = sp0;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100541c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100541c0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
