/* f_0x100764c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_100764c0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x10u, arg1);
    wr32(sp0 - 0xcu, arg2);
    wr32(sp0 - 8u, arg3);
    wr32(sp0 - 4u, arg4);
    wr32(sp0 - 0x20u, arg1);
    wr32(sp0 - 0x1cu, arg2);
    wr32(sp0 - 0x18u, arg3);
    wr32(sp0 - 0x14u, arg4);
    wr32(sp0 - 0x24u, arg9);
    wr32(sp0 - 0x28u, sp0 - 0x20u);
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->edx = sp0 - 0x20u;
    g->esp = sp0 - 0x20u;
    t1 = cow_thiscall(g, COW_IMG(0x10076520u), self, 3, sp0 - 0x10u, sp0 - 0x20u, arg9);
    t2 = g->edx;
    g->edx = t2;
    return t1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100764c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100764c0(g);
    g->esp = sp0;
    rt_return(g, r, 36u);
}
/* COW_ADAPTER END */
