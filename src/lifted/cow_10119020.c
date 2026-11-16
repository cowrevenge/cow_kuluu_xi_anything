/* f_0x10119020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10119020(Guest* g)
{
    double d10;
    double d12;
    double d16;
    double d20;
    double d5;
    double d6;
    uint32_t t1;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t3;
    uint32_t t4;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_esi);
    if (rd8(self + 0x99u) == 0u) goto L_101190ce;
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, sp0 - 4u);
    wr32(sp0 - 0x18u, sp0 - 8u);
    g->eax = sp0 - 4u;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x101601d0u), COW_IMG(0x10621838u), 2, sp0 - 8u, sp0 - 4u);
    t2 = g->ecx;
    t3 = (uint32_t)(int16_t)rd16(rd32(sp0 + 4u));
    t4 = rd32(sp0 + 4u);
    d5 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 - 8u));
    wr32(sp0 + 4u, t3);
    g->ecx = t2;
    g->edx = t3;
    d6 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * d5);
    fpush(g, d6);
    t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), t1, g->ecx, g->edx, 1, 0);
    t8 = g->ecx;
    t9 = g->edx;
    d10 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 - 4u));
    wr16(self + 0x3au, (uint16_t)t7);
    t11 = (uint32_t)(int16_t)rd16(t4 + 2u);
    wr32(sp0 - 4u, t11);
    wrf32(sp0 + 4u, (float)d10);
    g->edx = t9;
    d12 = fr(g, (double)(int32_t)t11 * (double)rdf32(sp0 + 4u));
    fpush(g, d12);
    t13 = cow_call_regs(g, COW_IMG(0x10311c6cu), t11, g->ecx, g->edx, 1, 0);
    t14 = g->edx;
    wr16(self + 0x3cu, (uint16_t)t13);
    t15 = (uint32_t)(int16_t)rd16(t4 + 4u);
    wr32(sp0 - 4u, t15);
    g->ecx = t15;
    d16 = fr(g, (double)(int32_t)t15 * d5);
    fpush(g, d16);
    t17 = cow_call_regs(g, COW_IMG(0x10311c6cu), t13, g->ecx, g->edx, 1, 0);
    t18 = g->ecx;
    wr16(self + 0x3eu, (uint16_t)t17);
    t19 = (uint32_t)(int16_t)rd16(t4 + 6u);
    wr32(sp0 - 4u, t19);
    d20 = fr(g, (double)(int32_t)t19 * (double)rdf32(sp0 + 4u));
    fpush(g, d20);
    t21 = cow_call_regs(g, COW_IMG(0x10311c6cu), t17, g->ecx, g->edx, 1, 0);
    wr16(self + 0x40u, (uint16_t)t21);
    return;
L_101190ce: ;
    t22 = rd32(rd32(sp0 + 4u));
    t23 = rd32(sp0 + 4u);
    wr32(self + 0x3au, t22);
    t24 = rd32(t23 + 4u);
    wr32(self + 0x3eu, t24);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10119020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10119020(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
