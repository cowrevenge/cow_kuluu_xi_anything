/* f_0x10101c20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=4 */
uint32_t cow_fn_10101c20(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(sp0 + 0x10u);
    g->edx = arg2;
    t2 = cow_call_regs(g, COW_IMG(0x10101c60u), arg1, arg3, g->edx, 1, 4, arg1, arg2, arg3, t1);
    t3 = g->edx;
    wr8(sp0 + 0x10u, (uint8_t)t2);
    g->edx = t3;
    return (t2 & 0xffffff00u) | rd8(COW_IMG(0x1036447cu) + (uint8_t)rd32(sp0 + 0x10u));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10101c20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10101c20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
