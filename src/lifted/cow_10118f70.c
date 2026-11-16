/* f_0x10118f70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10118f70(Guest* g)
{
    double d10;
    double d14;
    double d18;
    double d4;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0x10u, in_esi);
    if (rd8(self + 0x99u) == 0u) goto L_10119008;
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 0x1cu, sp0 - 0xcu);
    g->eax = sp0 - 8u;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x101601d0u), COW_IMG(0x10621838u), 2, sp0 - 0xcu, sp0 - 8u);
    t2 = g->ecx;
    t3 = (uint32_t)(int16_t)rd16(self + 0x3au);
    wr32(sp0 - 4u, t3);
    g->ecx = t2;
    g->edx = t3;
    d4 = fr(g, (double)(int32_t)t3 * (double)rdf32(sp0 - 0xcu));
    fpush(g, d4);
    t5 = cow_call_regs(g, COW_IMG(0x10311c6cu), t1, g->ecx, g->edx, 1, 0);
    t6 = g->ecx;
    t7 = g->edx;
    t8 = rd32(sp0 + 4u);
    wr16(t8, (uint16_t)t5);
    t9 = (uint32_t)(int16_t)rd16(self + 0x3cu);
    wr32(sp0 + 4u, t9);
    g->edx = t7;
    d10 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(sp0 - 8u));
    fpush(g, d10);
    t11 = cow_call_regs(g, COW_IMG(0x10311c6cu), t9, g->ecx, g->edx, 1, 0);
    t12 = g->edx;
    wr16(t8 + 2u, (uint16_t)t11);
    t13 = (uint32_t)(int16_t)rd16(self + 0x3eu);
    wr32(sp0 + 4u, t13);
    g->ecx = t13;
    d14 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(sp0 - 0xcu));
    fpush(g, d14);
    t15 = cow_call_regs(g, COW_IMG(0x10311c6cu), t11, g->ecx, g->edx, 1, 0);
    t16 = g->ecx;
    wr16(t8 + 4u, (uint16_t)t15);
    t17 = (uint32_t)(int16_t)rd16(self + 0x3au);
    wr32(sp0 + 4u, t17);
    g->edx = t17;
    d18 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(sp0 - 8u));
    fpush(g, d18);
    t19 = cow_call_regs(g, COW_IMG(0x10311c6cu), t15, g->ecx, g->edx, 1, 0);
    t20 = g->edx;
    wr16(t8 + 6u, (uint16_t)t19);
    g->edx = t20;
    return t19;
L_10119008: ;
    t21 = rd32(self + 0x3au);
    t22 = rd32(sp0 + 4u);
    wr32(t22, t21);
    t23 = rd32(self + 0x3eu);
    wr32(t22 + 4u, t23);
    g->edx = t23;
    return t22;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10118f70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10118f70(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
