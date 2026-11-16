/* f_0x100cbd60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100cbd60(Guest* g)
{
    uint32_t eax;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x8d4u) == 0u)
    {
        eax = rd32(self + 0x8d4u);
        goto L_100cbd84;
    }
    eax = rd32(self + 0x8d4u);
    if (rd8(self + 0x8e8u) == 1u)
    {
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x100cbde0u), self, 0);
    }
    wr8(self + 0x8e8u, 0u);
    return;
L_100cbd84: ;
    g->esp = sp0;
    cow_tailcall(g, COW_IMG(0x100cbde0u), eax, self, in_edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100cbd60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100cbd60(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
