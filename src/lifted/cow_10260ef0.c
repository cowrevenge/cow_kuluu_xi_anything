/* f_0x10260ef0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10260ef0(Guest* g)
{
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 != 0u) goto L_10260f00;
    return 0x80004003u;
L_10260f00: ;
    t1 = rd32(arg1 + 4u);
    wr32(arg3, t1);
    g->edx = t1;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10260ef0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10260ef0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
