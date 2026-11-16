/* f_0x101ff250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101ff250(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, sp0 - 0xcu);
    t1 = rd32(self + 8u);
    wr16(sp0 - 0xcu, 0u);
    wr16(sp0 - 0xau, 0u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x1011a710u), t1, 1, sp0 - 0xcu);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 1u);
    t2 = rd32(sp0 - 6u) - rd32(sp0 - 0xau);
    wr32(sp0 - 0x24u, t2);
    t3 = (t2 & 0xffff0000u) | (uint16_t)(rd16(rd32(COW_IMG(0x1062193cu)) + 0x32u) + 0xeu);
    wr32(sp0 - 0x28u, t3);
    t4 = rd32(sp0 - 0xau);
    wr32(sp0 - 0x2cu, t4);
    t5 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x30u, t5);
    g->edx = t5;
    cow_thiscall(g, COW_IMG(0x1011a5a0u), rd32(self + 8u), 7, t5, t4, t3, t2, 1u, 0u, 0u);
    t6 = g->edx;
    wr32(sp0 - 0x18u, sp0 - 0xcu);
    t7 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0xcu, rd32(self + 8u), g->edx, 0, 1, sp0 - 0xcu);
    t8 = rd32(sp0 - 0xau);
    wr16(self + 0x16u, (uint16_t)(rd32(sp0 - 0xcu) + 2u));
    wr16(self + 0x18u, (uint16_t)(t8 + 2u));
    cow_call_regs(g, COW_IMG(0x101fee00u), t7, self, t8 + 2u, 1, 0);
    t9 = g->edx;
    t10 = rd32(COW_IMG(0x1062193cu));
    wr8(t10 + 0x4cu, 1u);
    g->edx = t9;
    return t10;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ff250(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ff250(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
