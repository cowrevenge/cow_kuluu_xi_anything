/* f_0x1019dac0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1019dac0(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, 0x64u);
    t1 = rd32(self + 0x28u);
    t2 = rd8(self + 0x24u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    t3 = rd32(self + 0x40u);
    wr32(sp0 - 0x14u, t3);
    wr32(sp0 - 0x18u, t1);
    t4 = (in_edx & 0xffffff00u) | t2;
    wr32(sp0 - 0x1cu, t4);
    wr32(sp0 - 0x20u, 1u);
    g->edx = t4;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10196b80u), t3, self, g->edx, 0, 5, 1u, t4, t1, t3, 0x64u);
    t5 = g->edx;
    wr32(sp0 - 0x10u, 5u);
    t6 = rd32(self + 0x40u);
    wr32(sp0 - 0x14u, t6);
    t7 = rd32(self + 0x30u);
    wr32(sp0 - 0x18u, t7);
    t8 = (t5 & 0xffffff00u) | rd8(self + 0x2cu);
    wr32(sp0 - 0x1cu, t8);
    wr32(sp0 - 0x20u, 4u);
    g->edx = t8;
    cow_call_regs(g, COW_IMG(0x10196b80u), t6, self, g->edx, 0, 5, 4u, t8, t7, t6, 5u);
    t9 = g->edx;
    wr32(sp0 - 0x10u, 1u);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 4u);
    wr32(sp0 - 0x1cu, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, 4u, 1u, 1u);
    t11 = g->edx;
    wr32(sp0 - 0x10u, 0x80808080u);
    t12 = rd32(self + 0x30u);
    wr32(sp0 - 0x14u, t12);
    g->ecx = t12;
    g->esp = sp0 - 0x10u;
    t13 = cow_cdecl(g, COW_IMG(0x10002f00u), 1, t12);
    t14 = g->ecx;
    wr32(sp0 - 0x14u, t13);
    t15 = rd32(sp0 - 6u) + 0x11u;
    wr32(sp0 - 0x18u, t15);
    t16 = rd32(sp0 - 4u) - 0x14u;
    wr32(sp0 - 0x1cu, t16);
    g->eax = t16;
    g->edx = t15;
    t17 = cow_cdecl(g, COW_IMG(0x101c9780u), 3, t16, t15, t13);
    t18 = g->edx;
    wr32(sp0 - 0x10u, 3u);
    wr32(sp0 - 0x14u, 2u);
    t19 = rd32(self + 0x34u);
    wr32(sp0 - 0x18u, t19);
    g->esp = sp0 - 0xcu;
    t20 = cow_thiscall(g, COW_IMG(0x10196a20u), self, 3, t19, 2u, 3u);
    t21 = rd32(self + 0x3cu) + 5u;
    wr32(sp0 - 0x10u, t21);
    g->edx = t21;
    t22 = cow_thiscall(g, COW_IMG(0x1019df40u), self, 1, t21);
    t23 = g->edx;
    g->edx = t23;
    return t22;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019dac0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019dac0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
