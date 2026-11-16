/* f_0x1001b820 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1001b820(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x1032a308u));
    if (rd32(self + 0x14c0u) == 0u)
    {
        eax = rd32(self + 0x14c0u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x14c0u);
        if (rd32(eax) == 0u)
        {
            edx = in_edx;
        }
        else
        {
            g->eax = eax;
            g->edx = in_edx;
            g->esp = sp0 - 8u;
            t1 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
            t2 = g->edx;
            g->edx = t2;
            t3 = cow_thiscall(g, COW_IMG(0x10071050u), self + 0x14c0u, 0);
            t4 = g->edx;
            eax = t3;
            edx = t4;
        }
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x10055250u), self + 0x1530u, 0);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x100814e0u), self + 0x34u, 0);
    t8 = g->edx;
    g->esp = sp0;
    g->edx = t8;
    cow_tailcall(g, COW_IMG(0x100747c0u), t7, self, t8);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001b820(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1001b820(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
