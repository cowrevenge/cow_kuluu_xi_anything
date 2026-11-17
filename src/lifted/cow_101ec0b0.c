/* f_0x101ec0b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101ec0b0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->eax = rd32(self + 0x58u);
    g->edx = in_edx;
    t1 = rd32(self + 0x58u);
    t2 = rd32(rd32(self + 0x58u));
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, rd32(t2 + 0x28u), rd32(self + 0x58u), 3, self, arg1, t3);
    t6 = g->edx;
    g->edx = t6;
    return t5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ec0b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ec0b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
