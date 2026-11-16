/* f_0x100b7040 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b7040(Guest* g)
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
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t2 = g->edx;
    g->edx = t2;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t4 = g->ecx;
    t5 = g->edx;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10037a30u), t3, g->ecx, g->edx, 1, 2, t3, t1);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 5u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b7040(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b7040(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
