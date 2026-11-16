/* f_0x102647c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_102647c0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, self + 0xa4u);
    t2 = g->edx;
    g->edx = t2;
    t3 = rd32(self + 0xccu);
    t4 = cow_thiscall(g, rd32(COW_IMG(0x10329188u)), t3, 1, self + 0xa4u);
    t5 = g->edx;
    g->edx = t5;
    return (t4 & 0xffffff00u) | t3 != 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102647c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102647c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
