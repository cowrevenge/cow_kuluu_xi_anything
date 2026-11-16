/* f_0x101f4130 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101f4130(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    t2 = cow_thiscall(g, rd32(t1 + 0x54u), self, 0);
    t3 = g->edx;
    if (t2 == 9u)
    {
        ecx = rd32(COW_IMG(0x10666e6cu));
        edx = t3;
    }
    else
    {
        edx = t3;
        ecx = rd32(COW_IMG(0x10666e30u));
    }
    g->edx = edx;
    g->esp = sp0;
    t4 = cow_thiscall(g, COW_IMG(0x1021c7e0u), ecx, 4, 0u, 3u, 0x12u, 0u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f4130(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f4130(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
