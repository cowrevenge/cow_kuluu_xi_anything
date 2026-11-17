/* f_0x1000a070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1000a070(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, self);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    wr32(sp0 - 8u, sp0 - 4u);
    wr32(sp0 - 0xcu, sp0 - 4u);
    wr32(sp0 - 0x10u, arg3);
    wr32(sp0 - 0x14u, arg2);
    wr32(sp0 - 0x18u, arg1);
    g->eax = arg1;
    g->esp = sp0 - 4u;
    t1 = cow_fastcall(g, COW_IMG(0x1000a0a0u), self, arg2, 5, arg1, arg2, arg3, sp0 - 4u, sp0 - 4u);
    return t1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000a070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1000a070(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
