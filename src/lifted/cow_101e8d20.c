/* f_0x101e8d20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101e8d20(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 8u, arg1);
    wr32(sp0 - 0x10u, 0u);
    t1 = (uint32_t)(int16_t)rd16(self + 0x14u);
    wr32(sp0 - 4u, t1);
    wr32(sp0 - 0x14u, arg2);
    wr32(sp0 - 0x18u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 8u, arg2, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 1u);
    t3 = (uint32_t)(int16_t)rd16(self + 0x14u);
    wr32(sp0 - 4u, t3);
    wr32(sp0 - 0x1cu, 1u);
    t4 = rd32(self + 8u);
    wr32(sp0 - 0x20u, t4);
    g->edx = t4;
    cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, t4, 1u, 1u, 0u, 0u);
    t5 = g->edx;
    t6 = rd32(sp0 - 4u);
    wr32(sp0 - 0x10u, t6);
    wr32(sp0 - 0x14u, arg1);
    t7 = cow_call_regs(g, COW_IMG(0x10119110u), t6, rd32(self + 8u), g->edx, 0, 2, arg1, t6);
    t8 = rd32(self + 8u);
    wr32(sp0 - 0x10u, t8);
    cow_call_regs(g, COW_IMG(0x1015e530u), t7, COW_IMG(0x10621838u), g->edx, 0, 1, t8);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e8d20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e8d20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
