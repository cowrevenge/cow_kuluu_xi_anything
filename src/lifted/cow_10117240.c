/* f_0x10117240 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_10117240(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 36u);

    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    wr32(sp0 - 0xcu, sp0 - 8u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10117020u), self, 1, sp0 - 8u);
    wr32(sp0 - 0xcu, arg6);
    wr32(sp0 - 0x10u, arg5);
    wr32(sp0 - 0x14u, arg3);
    wr32(sp0 - 0x18u, arg4);
    t1 = arg2 + (uint32_t)(int16_t)rd16(sp0 - 6u);
    wr32(sp0 - 0x1cu, t1);
    t2 = arg1 + (uint32_t)(int16_t)rd16(sp0 - 8u);
    wr32(sp0 - 0x20u, t2);
    cow_cdecl(g, COW_IMG(0x10156c30u), 6, t2, t1, arg4, arg3, arg5, arg6);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10117240(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10117240(g);
    g->esp = sp0;
    rt_return(g, g->eax, 24u);
}
/* COW_ADAPTER END */
