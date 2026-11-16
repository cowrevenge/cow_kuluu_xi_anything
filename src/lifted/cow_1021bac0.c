/* f_0x1021bac0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1021bac0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esp = sp0 - 8u;
    t1 = cow_fastcall(g, COW_IMG(0x1021b350u), self, in_edx, 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    wr8(self + 0xeu, rd8(arg1 + 0xeu));
    wr8(self + 0xfu, rd8(arg1 + 0xfu));
    t4 = rd8(arg1 + 0x10u);
    wr8(self + 0x10u, (uint8_t)t4);
    g->edx = (t3 & 0xffffff00u) | t4;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021bac0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021bac0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
