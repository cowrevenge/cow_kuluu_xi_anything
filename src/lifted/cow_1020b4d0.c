/* f_0x1020b4d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1020b4d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 8u);

    wr32(sp0 - 4u, self);
    wr8(sp0 - 4u, 0x13u);
    wr8(sp0 - 3u, 0x14u);
    wr8(sp0 - 2u, 0x15u);
    if (arg1 < 3u) goto L_1020b4ef;
    return 0u;
L_1020b4ef: ;
    g->edx = rd8(arg1 + sp0 - 4u);
    return rd32(rd32(self + 0x50u) + rd8(arg1 + sp0 - 4u) * 4u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020b4d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020b4d0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
