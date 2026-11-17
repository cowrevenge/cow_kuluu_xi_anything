/* f_0x10017810 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_10017810(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(self + 8u);
    g->eax = t1;
    t2 = rd32(rd32(self + 8u));
    t3 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    t4 = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, rd32(t2 + 0xcu), t2, 3, t1, self + 0x10u, 0u);
    t6 = g->ecx;
    g->edx = arg3;
    t7 = cow_thiscall(g, rd32(t4 + 0x12cu), t6, 3, t3, arg3, t5);
    t8 = g->edx;
    g->edx = t8;
    return (t7 & 0xffffff00u) | (int32_t)t7 >= 0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10017810(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10017810(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
