/* f_0x1011e800 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1011e800(Guest* g)
{
    double d10;
    double d15;
    double d19;
    double d23;
    double d27;
    double d31;
    double d37;
    double d39;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t38;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x14u, in_esi);
    if (rd32(self + 0x4cu) != 0u)
    {
        eax = rd32(self + 0x4cu);
        goto L_1011e842;
    }
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, self + 0x32u);
    g->esp = sp0 - 0x18u;
    t1 = cow_call_regs(g, COW_IMG(0x10315ae8u), g->eax, self, in_edx, 1, 1, self + 0x32u);
    t2 = g->edx;
    wr32(sp0 - 0x1cu, self + 0x32u);
    cow_fastcall(g, COW_IMG(0x10039810u), sp0 - 0x10u, t2, 1, self + 0x32u);
    t3 = g->edx;
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x1003ac80u), rd32(COW_IMG(0x1047b970u)), 1, sp0 - 0x10u);
    t5 = g->edx;
    wr32(self + 0x4cu, t4);
    if (t4 == 0u)
    {
        eax = t4;
        edx = t5;
        goto L_1011e96b;
    }
L_1011e865: ;
    t7 = rd32(sp0 + 4u) + (uint32_t)(int16_t)rd16(self + 0xc0u);
    t8 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t7);
    t9 = t8 + (uint32_t)(int16_t)rd16(self + 0xc4u);
    d10 = fr(g, (double)(int32_t)rd32(sp0 + 4u) - (double)rdf32(COW_IMG(0x10329a08u)));
    wr32(sp0 + 4u, t9);
    t11 = rd16(self + 0xc2u);
    wrf32(self + 0x50u, (float)d10);
    t12 = t8 + (uint32_t)(int16_t)t11;
    t13 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t12);
    t14 = rd16(self + 0xc6u);
    d15 = fr(g, (double)(int32_t)t13 - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(self + 0x88u, (float)d15);
    t16 = t8 + (uint32_t)(int16_t)t14;
    t17 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t16);
    t18 = rd16(self + 0xc8u);
    d19 = fr(g, (double)(int32_t)t17 - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(self + 0x6cu, (float)d19);
    t20 = arg2 + (uint32_t)(int16_t)t18;
    t21 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t20);
    t22 = rd16(self + 0xcau);
    d23 = fr(g, (double)(int32_t)t21 - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(self + 0xa4u, (float)d23);
    t24 = arg2 + (uint32_t)(int16_t)t22;
    t25 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t24);
    t26 = rd16(self + 0xccu);
    d27 = fr(g, (double)(int32_t)t25 - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(self + 0x54u, (float)d27);
    t28 = arg2 + (uint32_t)(int16_t)t26;
    t29 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t28);
    t30 = rd16(self + 0xceu);
    d31 = fr(g, (double)(int32_t)t29 - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(self + 0x70u, (float)d31);
    t32 = arg2 + (uint32_t)(int16_t)t30;
    t33 = rd8(self + 0x30u);
    t34 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t32);
    wr32(sp0 - 0x18u, t33);
    t35 = rd8(self + 0x2fu);
    wr32(sp0 - 0x1cu, t35);
    t36 = rd8(self + 0x2eu);
    d37 = fr(g, (double)(int32_t)t34 - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(self + 0x8cu, (float)d37);
    wr32(sp0 - 0x20u, t36);
    t38 = rd8(self + 0x2du);
    wr32(sp0 - 0x24u, t38);
    wr32(sp0 - 0x28u, self + 0x50u);
    d39 = fr(g, (double)(int32_t)rd32(sp0 + 4u) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(self + 0xa8u, (float)d39);
    g->eax = t36;
    g->esp = sp0 - 0x14u;
    t40 = cow_fastcall(g, COW_IMG(0x1011f300u), self, t38, 5, self + 0x50u, t38, t36, t35, t33);
    t41 = g->edx;
    eax = t40;
    edx = t41;
L_1011e96b: ;
    g->esi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
L_1011e842: ;
    if (rd32(eax + 0x40u) == 0u)
    {
        eax = rd32(eax + 0x44u);
    }
    else
    {
        ecx = rd32(eax + 0x40u);
        eax = ecx;
    }
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x1cu, 0u);
    t6 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x20u, t6);
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, rd32(rd32(t6) + 0xf4u), t6, 3, t6, 0u, eax);
    goto L_1011e865;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011e800(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011e800(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
