/* f_0x101d4760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101d4760(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d18;
    double d19;
    double d20;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d28;
    double d29;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d40;
    double d41;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_18_f;
    double loc_20_f;
    double loc_2c_f;
    uint32_t t1;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t21;
    uint32_t t3;
    uint32_t t4;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 76u);

    wr32(sp0 - 0x34u, in_ebx);
    wr32(sp0 - 0x38u, in_ebp);
    wr32(sp0 - 0x3cu, in_esi);
    wr32(sp0 - 0x40u, in_edi);
    if (arg1 == 0u) goto L_101d4a0b;
    if (rd32(self + rd8(arg1 + 2u) * 4u + (rd32(sp0 + 8u) == 9u) * 0x144u + 0x4cu) == 0u) goto L_101d4a0b;
    eax = rd8(arg1 + 2u) + (rd32(sp0 + 8u) == 9u) * 0x51u;
    ecx = rd32(self + rd8(arg1 + 2u) * 4u + (rd32(sp0 + 8u) == 9u) * 0x144u + 0x4cu);
    edx = rd32(sp0 + 8u);
    edi = (rd32(sp0 + 8u) == 9u) * 0x51u;
    g->esp = sp0 - 0x40u;
    t1 = cow_call_regs(g, COW_IMG(0x101cd9a0u), eax, ecx, g->edx, 1, 0);
    if (t1 == 0u) goto L_101d49e6;
    eax = t1;
    ebp = rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u);
    esi = t1;
    if (ebp == 0u) goto L_101d49e6;
    g->eax = eax;
    g->esp = sp0 - 0x40u;
    t2 = cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
    wr32(sp0 - 0x30u, rd32(t2));
    g->eax = rd32(t2);
    t3 = rd32(t2);
    t4 = cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
    t5 = rd32(t4 + 4u);
    wr32(sp0 - 0x2cu, t5);
    g->eax = t5;
    t6 = cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
    t7 = rd32(t6 + 8u);
    wr32(sp0 - 0x28u, t7);
    wr32(sp0 - 0x44u, sp0 - 0x10u);
    wr32(sp0 - 0x48u, 0xcu);
    g->eax = sp0 - 0x10u;
    t8 = cow_thiscall(g, rd32(rd32(esi) + 0x1c4u), esi, 2, 0xcu, sp0 - 0x10u);
    if ((uint8_t)t8 != 0u)
    {
        d9 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xcu) - (double)rdf32(sp0 - 0x2cu)) * (double)rdf32(COW_IMG(0x10329a08u))) + (double)rdf32(sp0 - 0x2cu));
        wrf32(edi * 4u + self + rd8(arg1 + 2u) * 4u + 0x2d4u, (float)d9);
    }
    d10 = (double)(float)(double)rdf32(edi * 4u + self + rd8(arg1 + 2u) * 4u + 0x2d4u);
    wrf32(sp0 - 0x2cu, (float)d10);
    d11 = (double)(float)-(double)rdf32(sp0 - 0x30u);
    wrf32(sp0 - 0x20u, (float)d11);
    d12 = (double)(float)-(double)rdf32(sp0 - 0x28u);
    wrf32(sp0 - 0x18u, (float)d12);
    d13 = fr(g, fr(g, (double)rdf32(edi * 4u + self + rd8(arg1 + 2u) * 4u + 0x2d4u) - (double)rdf32(COW_IMG(0x1032b15cu))) - d10);
    d14 = fr(g, sqrt(fr(g, fr(g, fr(g, -(double)rdf32(sp0 - 0x28u) * d12) + fr(g, d13 * d13)) + fr(g, d11 * d11))));
    if (d14 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        x1 = d14;
        x0 = d13;
        goto L_101d4a07;
    }
    loc_2c_f = d10;
    loc_20_f = d11;
    loc_18_f = d12;
    x1 = d14;
    x0 = d13;
    t15 = rd32(ebp + 0x58u);
    wr32(sp0 - 8u, t15);
    t16 = rd32(ebp + 0x44u);
    wr32(sp0 - 0x10u, t16);
    t17 = rd32(ebp + 0x48u);
    wr32(sp0 - 0xcu, t17);
    d18 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x1);
    d19 = (double)(float)fr(g, d18 * x0);
    wrf32(sp0 - 0x1cu, (float)d19);
    d20 = (double)(float)fr(g, d18 * loc_18_f);
    wrf32(sp0 - 0x18u, (float)d20);
    t21 = rd32(ebp + 0x4cu);
    d22 = fr(g, fr(g, loc_2c_f + (double)rdf32(COW_IMG(0x1032b15cu))) * (double)rdf32(COW_IMG(0x103384c4u)));
    d23 = fr(g, loc_20_f * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x1));
    wrf32(sp0 + 8u, (float)d22);
    d24 = (double)(float)fr(g, (double)rdf32(sp0 + 8u) * d20);
    wrf32(sp0 - 0x18u, (float)d24);
    d25 = (double)(float)fr(g, fr(g, d22 * d23) + (double)rdf32(sp0 - 0x30u));
    wrf32(sp0 - 0x20u, (float)d25);
    d26 = (double)(float)fr(g, (double)rdf32(sp0 - 0x30u) - (double)rdf32(ebp + 0x50u));
    wrf32(sp0 - 0x30u, (float)d26);
    d27 = (double)(float)fr(g, loc_2c_f - (double)rdf32(ebp + 0x54u));
    wrf32(sp0 - 0x2cu, (float)d27);
    wr32(sp0 - 8u, t21);
    d28 = (double)(float)fr(g, (double)rdf32(sp0 - 0x28u) - cow_bits2f(t15));
    wrf32(sp0 - 0x28u, (float)d28);
    d29 = (double)(float)fr(g, d25 - cow_bits2f(t16));
    wrf32(sp0 - 0x20u, (float)d29);
    d30 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(sp0 + 8u) * d19) + loc_2c_f) - cow_bits2f(t17));
    wrf32(sp0 - 0x1cu, (float)d30);
    d31 = (double)(float)fr(g, d27 * (double)rdf32(COW_IMG(0x1032b15cu)));
    wrf32(sp0 - 0x2cu, (float)d31);
    d32 = (double)(float)fr(g, d28 * (double)rdf32(COW_IMG(0x1032b15cu)));
    wrf32(sp0 - 0x28u, (float)d32);
    d33 = (double)(float)fr(g, d29 * (double)rdf32(COW_IMG(0x1032b15cu)));
    wrf32(sp0 - 0x20u, (float)d33);
    d34 = (double)(float)fr(g, d30 * (double)rdf32(COW_IMG(0x1032b15cu)));
    wrf32(sp0 - 0x1cu, (float)d34);
    d35 = (double)(float)fr(g, fr(g, fr(g, d24 + (double)rdf32(sp0 - 0x28u)) - cow_bits2f(t21)) * (double)rdf32(COW_IMG(0x1032b15cu)));
    wrf32(sp0 - 0x18u, (float)d35);
    d36 = (double)(float)fr(g, fr(g, d26 * (double)rdf32(COW_IMG(0x1032b15cu))) + (double)rdf32(ebp + 0x50u));
    wrf32(sp0 - 0x30u, (float)d36);
    d37 = (double)(float)fr(g, d31 + (double)rdf32(ebp + 0x54u));
    wrf32(sp0 - 0x2cu, (float)d37);
    d38 = (double)(float)fr(g, d32 + (double)rdf32(ebp + 0x58u));
    wrf32(sp0 - 0x28u, (float)d38);
    wr32(sp0 - 0x44u, sp0 - 0x30u);
    d39 = (double)(float)fr(g, d33 + (double)rdf32(ebp + 0x44u));
    wrf32(sp0 - 0x20u, (float)d39);
    d40 = (double)(float)fr(g, d34 + (double)rdf32(ebp + 0x48u));
    wrf32(sp0 - 0x1cu, (float)d40);
    d41 = (double)(float)fr(g, d35 + (double)rdf32(ebp + 0x4cu));
    wrf32(sp0 - 0x18u, (float)d41);
    g->eax = sp0 - 0x30u;
    g->edx = t21;
    g->esp = sp0 - 0x40u;
    t42 = cow_thiscall(g, COW_IMG(0x1001e780u), ebp, 1, sp0 - 0x30u);
    t43 = g->edx;
    wr32(sp0 - 0x44u, sp0 - 0x20u);
    cow_thiscall(g, COW_IMG(0x1001e760u), ebp, 1, sp0 - 0x20u);
L_101d49e6: ;
    t44 = rd32(edi * 4u + self + rd8(arg1 + 2u) * 4u + 0x4cu);
    wr32(sp0 - 0x44u, t44);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x101d4310u), self, 1, t44);
    g->ebx = rd32(sp0 - 0x34u);
    g->esi = rd32(sp0 - 0x3cu);
    g->edi = rd32(sp0 - 0x40u);
    g->ebp = rd32(sp0 - 0x38u);
    return;
L_101d4a07: ;
L_101d4a0b: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d4760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d4760(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
