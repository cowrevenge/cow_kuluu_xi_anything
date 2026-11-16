/* f_0x1003c740 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1003c740(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = ((rd32(arg1 + 4u) ^ rd32(self + 4u)) & 0xfu) ^ rd32(self + 4u);
    wr32(self + 4u, t1);
    t2 = ((rd32(arg1 + 4u) ^ t1) & 0x3f0u) ^ t1;
    wr32(self + 4u, t2);
    t3 = ((rd32(arg1 + 4u) ^ t2) & 0xfc00u) ^ t2;
    wr32(self + 4u, t3);
    t4 = (rd8(arg1 + 6u) & 1u) << 0x10u ^ (t3 & 0xfffeffffu);
    wr32(self + 4u, t4);
    t5 = ((rd32(arg1 + 4u) ^ t4) & 0x40000u) ^ t4;
    wr32(self + 4u, t5);
    t6 = ((rd32(arg1 + 4u) ^ t5) & 0x80000u) ^ t5;
    wr32(self + 4u, t6);
    t7 = ((rd32(arg1 + 4u) ^ t6) & 0xf00000u) ^ t6;
    wr32(self + 4u, t7);
    t8 = (rd8(arg1 + 7u) & 0xfu) << 0x18u ^ (t7 & 0xf0ffffffu);
    wr32(self + 4u, t8);
    g->edx = t8;
    return t7 & 0xf0ffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003c740(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003c740(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
