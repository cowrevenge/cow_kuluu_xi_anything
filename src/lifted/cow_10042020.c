/* f_0x10042020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10042020(Guest* g)
{
    double d10;
    double d13;
    double d14;
    double d2;
    double d5;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x20u, in_esi);
    t1 = rd32(self + 0xb8u);
    d2 = fr(g, (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u) + (double)rdf32(self + 0xacu));
    wrf32(self + 0xacu, (float)d2);
    if (t1 == 0u)
    {
        eax = t1;
        x0 = d2;
        goto L_10042187;
    }
    eax = t1;
    x0 = d2;
    if (rd32(self + 0xb4u) == 0u) goto L_10042187;
    ecx = rd32(self + 0xb4u);
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032ae48u)), 0u) & 0x100u) == 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032ae48u)), 0u) & 0x100u;
        goto L_10042189;
    }
    wr32(sp0 - 0x24u, in_edi);
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    wr32(sp0 - 0x2cu, 0u);
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, rd32(rd32(ecx) + 0x1c4u), ecx, 2, 0u, sp0 - 0x10u);
    t3 = rd32(sp0 - 0x10u);
    t4 = rd32(sp0 - 8u);
    d5 = fr(g, (double)rdf32(sp0 - 0xcu) - (double)rdf32(COW_IMG(0x1032a39cu)));
    wr32(self + 0x94u, t3);
    wr32(self + 0x9cu, t4);
    wrf32(sp0 - 0xcu, (float)(double)(float)d5);
    wrf32(self + 0x98u, (float)d5);
    t6 = rd32(self + 0x98u);
    wr32(sp0 - 0x18u, t6);
    t7 = rd32(self + 0x94u);
    wr32(sp0 - 0x1cu, t7);
    t8 = rd32(self + 0x9cu);
    wr32(sp0 - 0x14u, t8);
    d9 = fr(g, (double)rdf32(self + 0xacu) * (double)rdf32(COW_IMG(0x1032ae44u)));
    wrf32(self + 0xb0u, (float)d9);
    d10 = (double)(float)fr(g, cow_bits2f(t6) - fr(g, fr(g, (double)rdf32(self + 0xacu) * (double)rdf32(COW_IMG(0x1032ae44u))) * (double)rdf32(COW_IMG(0x10329a08u))));
    wrf32(sp0 - 0x18u, (float)d10);
    t11 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
    t12 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
    wr32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u, t11);
    wr32(sp0 - 0x28u, t12);
    wr32(sp0 - 0x2cu, 3u);
    cow_thiscall(g, COW_IMG(0x1000bdb0u), rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc8u), 2, 3u, t12);
    d13 = (double)(float)(double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc4u);
    wrf32(sp0 - 0x28u, (float)d13);
    d14 = (double)(float)(double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc0u);
    wrf32(sp0 - 0x2cu, (float)d14);
    wr32(sp0 - 0x30u, t12);
    t15 = rd32(COW_IMG(0x1047bfa8u)) + 0xb50u;
    wr32(sp0 - 0x34u, t15);
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x3cu, self + 0xa0u);
    wr32(sp0 - 0x40u, sp0 - 0x1cu);
    g->eax = sp0 - 0x1cu;
    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t16 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t17 = cow_thiscall(g, rd32(t16 + 0x80u), rd32(COW_IMG(0x1047cf7cu)), 7, sp0 - 0x1cu, self + 0xa0u, 1u, t15, t12, cow_f2bits(d14), cow_f2bits(d13));
    t18 = g->edx;
    t19 = rd32(self + 0xa8u);
    wr32(sp0 - 0x28u, t19);
    g->edx = t18;
    cow_thiscall(g, COW_IMG(0x100555b0u), self, 1, t19);
    t20 = g->edx;
    t21 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
    t22 = rd32(COW_IMG(0x1047cf7cu));
    wr32(t22 + 0xa90u, t21);
    wr32(t21 * 4u + t22 + 0xa10u, t12);
    g->edx = t20;
    return t22 & 0xffffff00u;
L_10042187: ;
L_10042189: ;
    wr32(sp0 - 0x24u, 1u);
    g->eax = eax;
    g->edx = rd32(self);
    t23 = rd32(self);
    g->esp = sp0 - 0x20u;
    t24 = cow_thiscall(g, rd32(t23 + 0x18u), self, 1, 1u);
    t25 = g->edx;
    g->edx = t25;
    return (t24 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10042020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10042020(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
