/* f_0x100b7a20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b7a20(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x104e2150u));
    g->esp = sp0 - 4u;
    t2 = cow_call_regs(g, COW_IMG(0x10136870u), t1, rd32(t1 + 0x30u), g->edx, 0, 3, 0u, 0u, 0u);
    t3 = g->edx;
    cow_call_regs(g, COW_IMG(0x10136870u), t2, rd32(rd32(COW_IMG(0x104e2154u)) + 0x30u), g->edx, 0, 3, 0u, 0u, 0u);
    wr8(COW_IMG(0x10487fc9u), 0u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 1u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b7a20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b7a20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
