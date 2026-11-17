/* f_0x10009680 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10009680(Guest* g)
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

    t1 = rd32(self + 0x170u);
    t2 = rd32(self + 0x16cu);
    t3 = rd32(self + 0x168u);
    t4 = rd32(self + 0x164u);
    t5 = rd32(self + 0xcu);
    g->eax = t5;
    g->edx = rd32(rd32(self + 0xcu));
    t6 = rd32(rd32(self + 0xcu));
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, rd32(t6 + 0x90u), t4, 7, t5, 0u, 0u, t4, t3, t2, t1);
    t8 = g->edx;
    g->edx = t8;
    return t7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10009680(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10009680(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
