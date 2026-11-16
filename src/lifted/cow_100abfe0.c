/* f_0x100abfe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100abfe0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0xc4u, 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        edx = t2;
        g->esp = sp0 - 8u;
        t3 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0xc4u, 0);
        g->edx = rd32(t3);
        t4 = rd32(t3);
        t5 = cow_thiscall(g, rd32(t4 + 0x168u), t3, 0);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x10083390u), eax, self, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100abfe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100abfe0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
