/* f_0x101a6610 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101a6610(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, 1u);
    t1 = rd32(self + 0x1cu) + 1u;
    wr32(sp0 - 0x14u, t1);
    wr32(sp0 - 0x18u, sp0 - 8u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, t1, 1u, 1u);
    wr32(arg1, 0u);
    wr32(arg1 + 4u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a6610(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101a6610(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
