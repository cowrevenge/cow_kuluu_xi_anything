/* f_0x10027a60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10027a60(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 72u);

    g->edx = self;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    t1 = g->edx;
    wr32(sp0 - 0x40u, rd32(arg1));
    t2 = rd32(arg1 + 4u);
    wr32(sp0 - 0x2cu, t2);
    t3 = rd32(arg1 + 8u);
    wr32(sp0 - 0x18u, t3);
    t4 = rd32(arg1 + 0xcu);
    wr32(sp0 - 4u, t4);
    wr32(sp0 - 0x44u, sp0 - 0x40u);
    cow_thiscall(g, COW_IMG(0x10027d10u), t1, 1, sp0 - 0x40u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10027a60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10027a60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
