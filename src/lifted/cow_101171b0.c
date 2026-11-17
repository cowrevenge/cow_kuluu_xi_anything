/* f_0x101171b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101171b0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, sp0 - 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10117020u), self, 1, sp0 - 8u);
    wr32(sp0 - 0x10u, arg4);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, arg3);
    t1 = arg2 + (uint32_t)(int16_t)rd16(sp0 - 6u);
    wr32(sp0 - 0x1cu, t1);
    t2 = arg1 + (uint32_t)(int16_t)rd16(sp0 - 8u);
    wr32(sp0 - 0x20u, t2);
    cow_cdecl(g, COW_IMG(0x10129f00u), 5, t2, t1, arg3, 0u, arg4);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101171b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101171b0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
