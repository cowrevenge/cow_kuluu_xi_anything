/* f_0x1022bd50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1022bd50(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1021e690u), self, 0);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(self, COW_IMG(0x1033c50cu));
    g->esp = sp0 - 0x10u;
    t3 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t2, 1, 1, 0x39u);
    t4 = g->edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1021e760u), self, 4, t3, 0x400u, 1u, 0xffffffffu);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022bd50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022bd50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
