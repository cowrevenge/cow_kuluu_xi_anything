/* f_0x1021f240 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1021f240(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d15;
    double d16;
    double d20;
    double d5;
    double d6;
    uint32_t eax;
    uint32_t ecx;
    uint32_t loc_4;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t3;
    uint32_t t4;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(self + 0xdu) == 1u)
    {
        eax = rd8(self + 0xdu) - 1u;
        goto L_1021f327;
    }
    eax = rd8(self + 0xdu) - 1u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_1021f2b9;
    }
    eax = eax - 1u;
    if (eax != 2u) goto L_1021f354;
    eax = eax - 2u;
    d1 = (double)(float)(double)(int32_t)rd32(self + 0x1cu);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    d5 = cow_take_float(g);
    d6 = fr(g, d1 - d5);
    fpush(g, d6);
    t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), t2, g->ecx, g->edx, 1, 0);
    wr32(self + 0x1cu, t7);
    if ((int32_t)t7 > 0)
    {
        eax = t7;
        loc_4 = t7;
        goto L_1021f28a;
    }
    loc_4 = t7;
    wr8(self + 0xdu, 0u);
    wr32(self + 0x20u, 0u);
    wr32(self + 0x24u, 0u);
    return;
L_1021f28a: ;
    t8 = cow_divs(g, eax << 7u, rd32(COW_IMG(0x10385eccu)));
    t9 = cow_mods(g, eax << 7u, rd32(COW_IMG(0x10385eccu)));
    wr32(self + 0x20u, t8);
    d10 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, (double)(int32_t)loc_4 / (double)(int32_t)rd32(COW_IMG(0x10385eccu)))) * (double)rdf32(COW_IMG(0x103295d8u))) + fr(g, (double)(int32_t)loc_4 / (double)(int32_t)rd32(COW_IMG(0x10385eccu))));
    wrf32(self + 0x24u, (float)d10);
    return;
L_1021f2b9: ;
    d11 = (double)(float)(double)(int32_t)rd32(self + 0x1cu);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t12 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t13 = g->ecx;
    t14 = g->edx;
    d15 = cow_take_float(g);
    d16 = fr(g, d11 - d15);
    fpush(g, d16);
    t17 = cow_call_regs(g, COW_IMG(0x10311c6cu), t12, g->ecx, g->edx, 1, 0);
    wr32(self + 0x1cu, t17);
    if ((int32_t)t17 > 0)
    {
        ecx = t17;
        loc_4 = t17;
        goto L_1021f2f0;
    }
    loc_4 = t17;
    wr8(self + 0xdu, 3u);
    wr32(self + 0x20u, 0x80u);
    wr32(self + 0x24u, 0x3f800000u);
    return;
L_1021f2f0: ;
    t18 = cow_divs(g, rd32(COW_IMG(0x10385eccu)) * 0x80u - ecx * 0x80u, rd32(COW_IMG(0x10385eccu)));
    t19 = cow_mods(g, rd32(COW_IMG(0x10385eccu)) * 0x80u - ecx * 0x80u, rd32(COW_IMG(0x10385eccu)));
    wr32(self + 0x20u, t18);
    d20 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, (double)(int32_t)loc_4 / (double)(int32_t)rd32(COW_IMG(0x10385eccu)))) + fr(g, fr(g, (double)(int32_t)loc_4 / (double)(int32_t)rd32(COW_IMG(0x10385eccu))) * (double)rdf32(COW_IMG(0x103295d8u))));
    wrf32(self + 0x24u, (float)d20);
    return;
L_1021f327: ;
    if (rd8(COW_IMG(0x10485824u)) & 1u)
    {
        t21 = (eax & 0xffffff00u) | rd8(COW_IMG(0x10485643u)) != 0u;
        t22 = (self & 0xffffff00u) | rd8(COW_IMG(0x10485642u));
        t23 = (in_edx & 0xffffff00u) | rd8(COW_IMG(0x10485640u));
        g->esp = sp0 - 8u;
        cow_stdcall(g, COW_IMG(0x1021ef60u), 3, t23, t22, t21);
        wr8(self + 0xdu, 2u);
    }
L_1021f354: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021f240(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1021f240(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
