/* f_0x1009fa00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1009fa00(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = (uint32_t)(int8_t)rd8(arg3 + 0x20u);
    wr32(COW_IMG(0x10488800u), t1);
    t2 = rd32(arg3 + 4u);
    wr32(COW_IMG(0x10488804u), t2);
    t3 = rd32(arg3 + 8u);
    wr32(COW_IMG(0x10488808u), t3);
    t4 = rd32(arg3 + 0xcu);
    wr32(COW_IMG(0x1048880cu), t4);
    t5 = (uint32_t)(int8_t)rd8(arg3 + 0x21u);
    wr32(COW_IMG(0x10488810u), t5);
    t6 = rd32(arg3 + 0x10u);
    wr32(COW_IMG(0x10488d08u), t6);
    t7 = rd32(arg3 + 0x14u);
    wr32(COW_IMG(0x10488d0cu), t7);
    t8 = rd32(arg3 + 0x18u);
    wr32(COW_IMG(0x10488d10u), t8);
    t9 = rd32(arg3 + 0x1cu);
    wr32(COW_IMG(0x10488d14u), t9);
    wr8(COW_IMG(0x10488d18u), 0u);
    wr8(COW_IMG(0x1048557au), 0u);
    g->edx = t8;
    return (t9 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009fa00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1009fa00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
