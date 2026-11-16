/* f_0x10074cc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10074cc0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if ((int32_t)rd32(sp0 + 8u) < 16)
    {
        eax = rd32(sp0 + 8u);
        if ((int32_t)eax < 0)
        {
            eax = 0u;
        }
    }
    else
    {
        eax = 0xfu;
    }
    t1 = rd32(sp0 + 4u);
    t2 = rd32(eax * 4u + self + 0xd04u);
    wr32(sp0 + 8u, t1);
    wr32(sp0 + 4u, t2);
    g->esp = sp0;
    g->edx = t1;
    return cow_tailcall(g, COW_IMG(0x10074e60u), t2, self, t1);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10074cc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10074cc0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
