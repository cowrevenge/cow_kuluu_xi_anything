/* f_0x1008a2f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1008a2f0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((rd32(self + 0x120u) >> 8u & 2u) == 0u)
    {
        eax = rd32(self + 0x120u);
    }
    else
    {
        g->esp = sp0 - 4u;
        t1 = cow_fastcall(g, COW_IMG(0x1002c8f0u), rd32(self + 0xa0u), in_edx, 1, COW_IMG(0x10330ebcu));
        if ((uint8_t)t1 == 0u)
        {
            eax = t1;
        }
        else
        {
            t2 = rd32(self + 0x1a4u);
            wr32(rd32(self + 0xa0u) + 0x7c8u, t2);
            t3 = rd32(self + 0x1b0u);
            wr32(rd32(self + 0xa0u) + 0x7ccu, t3);
            t4 = rd32(self + 0x1b4u);
            wr32(rd32(self + 0xa0u) + 0x7d0u, t4);
            eax = t3;
        }
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008a2f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1008a2f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
