/* f_0x1000a550 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1000a550(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x14u, 0xffffffffu);
    wr32(sp0 - 0x18u, sp0 - 0x10u);
    wr32(sp0 - 0x1cu, arg3);
    wr32(sp0 - 0x20u, arg2);
    wr32(sp0 - 0x24u, arg1);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 0x3f800000u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0x3f800000u);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1000a5a0u), self, 5, arg1, arg2, arg3, sp0 - 0x10u, 0xffffffffu);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000a550(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1000a550(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
