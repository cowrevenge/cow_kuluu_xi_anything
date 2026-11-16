/* f_0x101bc760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101bc760(Guest* g)
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

    t1 = rd32(arg1 + 4u);
    wr32(self + 4u, t1);
    t2 = rd32(arg1 + 8u);
    wr32(self + 8u, t2);
    t3 = rd32(arg1 + 0xcu);
    wr32(self + 0xcu, t3);
    t4 = rd32(arg1 + 0x10u);
    wr32(self + 0x10u, t4);
    t5 = rd8(arg1 + 0x14u);
    wr8(self + 0x14u, (uint8_t)t5);
    t6 = rd8(arg1 + 0x15u);
    wr8(self + 0x15u, (uint8_t)t6);
    t7 = rd8(arg1 + 0x16u);
    wr8(self + 0x16u, (uint8_t)t7);
    t8 = rd8(arg1 + 0x17u);
    wr8(self + 0x17u, (uint8_t)t8);
    g->edx = ((t4 | t5 | t6 | t7) & 0xffffff00u) | t8;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101bc760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101bc760(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
