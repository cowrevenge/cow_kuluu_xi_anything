/* f_0x10261040 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10261040(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(arg1 + 0x24u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(arg1 + 4u, 1u);
    g->edx = t4;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), t3, 1, t1);
    t5 = g->edx;
    g->edx = t5;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10261040(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10261040(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
