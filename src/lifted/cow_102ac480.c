/* f_0x102ac480 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_102ac480(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr32(rd32(arg4), arg1);
    t1 = rd32(arg4) + 4u;
    wr32(arg4, t1);
    wr32(t1, arg2);
    t2 = rd32(arg4) + 4u;
    wr32(arg4, t2);
    wr32(t2, arg3);
    t3 = rd32(arg4) + 4u;
    wr32(arg4, t3);
    g->edx = arg3;
    return arg4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ac480(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ac480(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
