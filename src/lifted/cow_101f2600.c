/* f_0x101f2600 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101f2600(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t self = g->ecx;

    t1 = rd32(self + 8u);
    t2 = cow_call_regs(g, COW_IMG(0x1015e790u), t1, COW_IMG(0x10621838u), g->edx, 0, 2, t1, 1u);
    t3 = rd32(rd32(COW_IMG(0x1057823cu)) + 8u);
    g->edx = t3;
    cow_call_regs(g, COW_IMG(0x1015e530u), t2, COW_IMG(0x10621838u), g->edx, 0, 1, t3);
    t4 = g->edx;
    t5 = rd32(rd32(COW_IMG(0x10578170u)) + 8u);
    t6 = rd32(COW_IMG(0x10578170u));
    t7 = cow_call_regs(g, COW_IMG(0x1015e530u), t6, COW_IMG(0x10621838u), g->edx, 0, 1, t5);
    return t7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f2600(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f2600(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
