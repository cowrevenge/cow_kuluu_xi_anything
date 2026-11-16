/* f_0x10032e30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10032e30(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0x14u, arg3);
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, arg1);
    g->edx = self;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10032a80u), sp0 - 0x10u, 3, arg1, arg2, arg3);
    t1 = g->edx;
    t2 = rd32(sp0 - 0x10u);
    t3 = rd32(sp0 - 0xcu);
    wr32(t1, t2);
    t4 = rd32(sp0 - 8u);
    wr32(t1 + 4u, t3);
    t5 = rd32(sp0 - 4u);
    wr32(t1 + 8u, t4);
    wr32(t1 + 0xcu, t5);
    g->edx = t1;
    return t5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10032e30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10032e30(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
