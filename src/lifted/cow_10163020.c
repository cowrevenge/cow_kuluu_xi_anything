/* f_0x10163020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10163020(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    g->eax = rd32(rd32(sp0 + 4u));
    g->edx = in_edx;
    t1 = rd32(rd32(sp0 + 4u));
    t2 = cow_thiscall(g, rd32(t1 + 0x54u), rd32(sp0 + 4u), 0);
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, t2, 1u, 0u);
    t5 = g->edx;
    wr32(sp0 + 4u, 0u);
    g->edx = t5;
    return cow_tailcall(g, COW_IMG(0x1015e830u), t4, COW_IMG(0x10621838u), t5);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10163020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10163020(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
