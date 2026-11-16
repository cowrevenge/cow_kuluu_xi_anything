/* f_0x1013a250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1013a250(Guest* g)
{
    double d11;
    double d9;
    uint32_t t1;
    uint32_t t10;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0x2cu, sp0 - 0xcu);
    t1 = rd32(self + 8u);
    wr16(sp0 - 0xcu, 0u);
    wr16(sp0 - 0xau, 0u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 0x14u, 0u);
    wr16(sp0 - 0x12u, 0u);
    wr16(sp0 - 0x10u, 0u);
    wr16(sp0 - 0xeu, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t2 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0xcu, t1, g->edx, 0, 1, sp0 - 0xcu);
    t3 = g->edx;
    wr32(sp0 - 0x2cu, sp0 - 0x14u);
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x1011a710u), rd32(self + 8u), 1, sp0 - 0x14u);
    t5 = g->edx;
    wr32(sp0 - 0x2cu, 0u);
    t6 = rd32(sp0 - 0xcu);
    t7 = rd32(sp0 - 0xau);
    cow_thiscall(g, COW_IMG(0x10160290u), COW_IMG(0x10621838u), 1, 0u);
    t8 = g->ecx;
    d9 = cow_take_float(g);
    t10 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
    wr32(sp0 - 0x18u, t10);
    d11 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - d9) * (double)(int32_t)t10);
    fpush(g, d11);
    t12 = cow_call_regs(g, COW_IMG(0x10311c6cu), t10, g->ecx, g->edx, 1, 0);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 1u);
    t13 = rd32(sp0 - 6u) - rd32(sp0 - 0xau);
    wr32(sp0 - 0x38u, t13);
    t14 = t12 + rd32(sp0 - 8u) - rd32(sp0 - 0xcu) - 0x200u;
    wr32(sp0 - 0x3cu, t14);
    wr32(sp0 - 0x40u, t7);
    wr32(sp0 - 0x44u, t6);
    g->eax = t14;
    g->edx = t13;
    t15 = rd32(self + 8u);
    t16 = cow_thiscall(g, COW_IMG(0x1011a5a0u), t15, 7, t6, t7, t14, t13, 1u, 0u, 0u);
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0x2cu, 1u);
    g->edx = t18;
    t19 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t20 = g->edx;
    t21 = rd32(rd32(t19) + 0x5a4u);
    t22 = rd32(t19);
    wr32(self + 0x1cu, t21);
    g->edx = t20;
    return t22;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013a250(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013a250(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
