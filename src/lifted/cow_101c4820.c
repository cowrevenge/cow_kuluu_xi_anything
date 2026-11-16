/* f_0x101c4820 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101c4820(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(sp0 + 0x18u) != 0u)
    {
        eax = rd32(sp0 + 0x18u);
    }
    else
    {
        eax = COW_IMG(0x101c4d50u);
    }
    t1 = rd32(self + 4u);
    wr32(sp0 + 0x18u, eax);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x101bf970u), eax, t1, in_edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c4820(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c4820(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
