/* f_0x10019000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_10019000(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, 4u);
    t1 = rd32(sp0 + 4u);
    t2 = rd32(self + 4u);
    wr32(sp0 + 4u, t1);
    wr32(sp0 - 8u, sp0 + 4u);
    wr32(sp0 - 0xcu, 4u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, arg2);
    wr32(sp0 - 0x18u, t2);
    g->eax = arg2;
    g->esp = sp0;
    t3 = cow_thiscall(g, rd32(COW_IMG(0x10329018u)), t2, 6, t2, arg2, 0u, 4u, sp0 + 4u, 4u);
    return (t3 & 0xffffff00u) | t3 == 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10019000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10019000(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
