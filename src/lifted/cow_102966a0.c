/* f_0x102966a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102966a0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    wr32(arg1, rd32(arg2));
    t1 = rd32(arg2 + 0xcu);
    wr32(arg1 + 4u, t1);
    t2 = rd32(arg2 + 0x18u);
    wr32(arg1 + 8u, t2);
    t3 = rd32(arg2 + 4u);
    wr32(arg1 + 0xcu, t3);
    t4 = rd32(arg2 + 0x10u);
    wr32(arg1 + 0x10u, t4);
    t5 = rd32(arg2 + 0x1cu);
    wr32(arg1 + 0x14u, t5);
    t6 = rd32(arg2 + 8u);
    wr32(arg1 + 0x18u, t6);
    t7 = rd32(arg2 + 0x14u);
    wr32(arg1 + 0x1cu, t7);
    t8 = rd32(arg2 + 0x20u);
    wr32(arg1 + 0x20u, t8);
    g->edx = t7;
    return t8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102966a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102966a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
