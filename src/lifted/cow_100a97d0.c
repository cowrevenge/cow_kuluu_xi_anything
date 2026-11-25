/* f_0x100a97d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100a97d0(Guest* g)
{
    uint32_t eax;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100a97d9u: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_100a97d9;
    case 0x100a97deu: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_100a97de;
    default: break;
    }
#endif

    COW_AT(100a97d0)
    if (rd32(sp0 + 4u) < 0x64u)
    {
        eax = rd32(sp0 + 4u);
    }
    else
    {
        eax = rd32(sp0 + 4u);
    COW_AT(100a97d9)
        eax = eax + 0xc975u;
    }
    COW_AT(100a97de)
    wr32(sp0 + 4u, eax + 0x1330u);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x100a98d0u), eax + 0x1330u, self, in_edx);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100a97d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100a97d9u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100a97deu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
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
void cow_adapter_100a97d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100a97d0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
