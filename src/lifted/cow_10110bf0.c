/* f_0x10110bf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10110bf0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (self != arg1)
    {
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x10112590u), self, 1, arg1);
        t1 = g->edx;
        t2 = rd32(arg1 + 8u);
        wr32(self + 8u, t2);
        g->edx = t1;
        cow_thiscall(g, COW_IMG(0x10109260u), self + 0xcu, 1, arg1 + 0xcu);
        t3 = g->edx;
        wr8(self + 0x14u, rd8(arg1 + 0x14u));
    }
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10110bf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10110bf0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
