/* f_0x100e4c30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100e4c30(Guest* g)
{
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u) goto L_100e4c4f;
    wr32(arg1 + 0x2d008u, arg2);
    wr32(arg1 + 0x2d00cu, arg3);
    g->edx = arg3;
    return (arg1 & 0xffffff00u) | 1u;
L_100e4c4f: ;
    return arg1 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e4c30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e4c30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
