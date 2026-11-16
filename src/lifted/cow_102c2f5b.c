/* f_0x102c2f5b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_102c2f5b(Guest* g)
{
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u) goto L_102c2f90;
    if (arg2 == 0u) goto L_102c2f90;
    if ((int32_t)rd32(arg2 + 0x30u) <= 0) goto L_102c2f90;
    if (arg3 != 0u)
    {
        t1 = rd32(arg2 + 0x38u);
        wr32(arg3, t1);
    }
    if (arg4 == 0u)
    {
        edx = 0u;
    }
    else
    {
        t2 = rd32(arg2 + 0x30u);
        wr32(arg4, t2);
        edx = t2;
    }
    g->edx = edx;
    return rd32(arg2 + 0x30u);
L_102c2f90: ;
    if (arg4 != 0u)
    {
        wr32(arg4, 0u);
    }
    g->edx = 0u;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c2f5b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102c2f5b(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
