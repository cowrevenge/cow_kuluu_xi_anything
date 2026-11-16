/* f_0x10268280 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10268280(Guest* g)
{
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg2 == 0u)
    {
        edx = in_edx;
    }
    else
    {
        t1 = rd32(arg1 + 0x18u);
        wr32(arg2, t1);
        t2 = rd32(arg1 + 0x1cu);
        wr32(arg2 + 4u, t2);
        edx = t2;
    }
    if (arg3 != 0u)
    {
        t3 = rd32(arg1 + 0x20u);
        wr32(arg3, t3);
        t4 = rd32(arg1 + 0x24u);
        wr32(arg3 + 4u, t4);
        edx = t3;
    }
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10268280(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10268280(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
