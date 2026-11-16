/* f_0x101569f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=8 */
uint32_t cow_fn_101569f0(Guest* g)
{
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg8 == 0u) goto L_10156a06;
    if (rd8(arg8) == 0u) goto L_10156a06;
    wr32(self + 4u, 2u);
L_10156a0d: ;
    wr32(self + 0x20u, arg8);
    wr32(self + 8u, arg1);
    wr32(self + 0xcu, arg2);
    wr32(self + 0x10u, arg3);
    wr32(self + 0x14u, arg4);
    wr32(self + 0x18u, arg6);
    wr32(self + 0x1cu, arg7);
    g->edx = arg7;
    return arg8;
L_10156a06: ;
    wr32(self + 4u, 3u);
    goto L_10156a0d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101569f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101569f0(g);
    g->esp = sp0;
    rt_return(g, r, 32u);
}
/* COW_ADAPTER END */
