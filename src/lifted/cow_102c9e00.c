/* f_0x102c9e00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102c9e00(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(arg1 + 0x10u);
    wr32(arg2, t1);
    t2 = rd32(arg1 + 0x14u);
    wr32(arg2 + 4u, t2);
    t3 = rd32(arg1 + 0x28u);
    wr32(arg2 + 8u, t3);
    t4 = rd32(arg1 + 0x2cu);
    wr32(arg2 + 0xcu, t4);
    g->edx = t3;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c9e00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102c9e00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
