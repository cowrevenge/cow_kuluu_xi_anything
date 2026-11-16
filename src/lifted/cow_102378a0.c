/* f_0x102378a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102378a0(Guest* g)
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
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    t1 = rd32(self + 8u);
    wr16(sp0 - 0x10u, 0u);
    wr16(sp0 - 0xeu, 0u);
    wr16(sp0 - 0xcu, 0u);
    wr16(sp0 - 0xau, 0u);
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0x10u, t1, g->edx, 0, 1, sp0 - 0x10u);
    wr32(sp0 - 8u, rd32(COW_IMG(0x103879d8u)));
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 4u, rd32(COW_IMG(0x103879dcu)));
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, sp0 - 8u);
    t2 = rd32(COW_IMG(0x103879d8u)) + 0x40u;
    wr32(sp0 - 8u, t2);
    t3 = rd32(COW_IMG(0x103879dcu));
    cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 8u, 0u, 1u);
    t4 = rd32(sp0 - 4u);
    wr32(sp0 - 0x1cu, t4);
    t5 = (uint32_t)(int16_t)rd16(sp0 - 0x10u) + (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - (uint32_t)(int16_t)rd16(sp0 - 0xcu) - rd32(sp0 - 8u);
    wr32(sp0 - 0x20u, t5);
    wr32(sp0 - 8u, t5);
    g->edx = (uint32_t)(int16_t)rd16(sp0 - 0x10u);
    t6 = rd16(sp0 - 0x10u);
    t7 = cow_call_regs(g, COW_IMG(0x10119110u), t5, rd32(self + 8u), g->edx, 0, 2, t5, t4);
    t8 = g->edx;
    g->edx = t8;
    return t7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102378a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102378a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
