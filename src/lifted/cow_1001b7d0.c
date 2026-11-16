/* f_0x1001b7d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1001b7d0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(self + 0x20u) != 1u) goto L_1001b7f1;
    if (rd32(self + 0x1cu) == 0u) goto L_1001b7f1;
    eax = rd32(self + 0x1cu);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
    t2 = g->edx;
    g->esp = sp0;
    g->edx = t2;
    cow_tailcall(g, COW_IMG(0x10071050u), t1, self + 0x1cu, t2);
    return;
L_1001b7f1: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001b7d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1001b7d0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
