/* f_0x101646a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101646a0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    wr8(rd32(self + 8u) + 0x5du, 0u);
    wr8(rd32(self + 8u) + 0x85u, 0u);
    wr8(rd32(self + 8u) + 0x86u, 0u);
    t1 = rd32(self + 8u);
    wr8(t1 + 0x84u, 0u);
    g->eax = in_eax & 0xffffff00u;
    g->edx = t1;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x1011acc0u), rd32(self + 8u), 0);
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0x10u, 3u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101646a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101646a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
