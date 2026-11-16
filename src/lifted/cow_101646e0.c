/* f_0x101646e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101646e0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(self + 8u);
    t2 = rd16(self + 0x14u);
    wr16(t1 + 0x4cu, (uint16_t)t2);
    t3 = (t1 & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
    g->eax = t3;
    g->edx = (in_edx & 0xffff0000u) | t2;
    t4 = cow_thiscall(g, COW_IMG(0x10118170u), rd32(self + 8u), 1, t3);
    t5 = g->edx;
    g->edx = t5;
    return t4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101646e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101646e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
