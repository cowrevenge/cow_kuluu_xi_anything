/* f_0x1026d27f - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1026d27f(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(arg1 + 0x1004cu);
    wr32(arg2 + rd32(arg2) * 4u + 4u, t1);
    wr32(arg2 + rd32(arg2) * 4u + 0x4b4u, arg1);
    t2 = rd32(arg2) + 1u;
    wr32(arg2, t2);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026d27f(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1026d27f(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
