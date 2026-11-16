/* f_0x1016f320 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1016f320(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
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
    double d42;
    double d43;
    double d44;
    double d45;
    double d46;
    double d47;
    double d48;
    double d49;
    double d50;
    double d52;
    double d53;
    double d54;
    double d55;
    double d56;
    double d57;
    double d58;
    double d59;
    double d60;
    double d61;
    double d62;
    double d63;
    double d64;
    double d65;
    double d66;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_28;
    uint32_t loc_2c;
    double loc_2c_f;
    uint32_t loc_30;
    double loc_30_f;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t51;
    uint32_t t6;
    uint32_t t67;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    double x2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 0x34u, in_ebx);
    wr32(sp0 - 0x38u, in_esi);
    wr32(sp0 - 0x3cu, in_edi);
    t1 = rd32(rd32(sp0 + 4u) + 0x30u);
    wr32(sp0 - 0x30u, t1);
    t2 = rd32(rd32(sp0 + 4u) + 0x34u);
    wr32(sp0 - 0x2cu, t2);
    t3 = rd32(rd32(sp0 + 4u) + 0x38u);
    wr32(sp0 - 0x28u, t3);
    t4 = rd32(rd32(sp0 + 4u) + 0x3cu);
    wr32(sp0 - 0x18u, t4);
    t5 = rd32(rd32(sp0 + 4u) + 0x40u);
    wr32(sp0 - 0x14u, t5);
    t6 = rd32(rd32(sp0 + 4u) + 0x44u);
    wr32(sp0 - 0x10u, t6);
    t7 = rd32(rd32(sp0 + 4u) + 0x48u);
    wr32(sp0 - 0xcu, t7);
    t8 = rd32(rd32(sp0 + 4u) + 0x4cu);
    wr32(sp0 - 8u, t8);
    t9 = rd32(rd32(sp0 + 4u) + 0x50u);
    wr32(sp0 - 4u, t9);
    if (rd8(self + 0x34124u) == 0u)
    {
        eax = (t9 & 0xffffff00u) | rd8(self + 0x34124u);
        ecx = rd32(sp0 + 4u);
        loc_30 = t1;
        loc_2c = t2;
        loc_28 = t3;
        loc_14 = t5;
        loc_8 = t8;
        goto L_1016f392;
    }
    eax = (t9 & 0xffffff00u) | rd8(self + 0x34124u);
    ecx = rd32(sp0 + 4u);
    loc_30 = t1;
    loc_2c = t2;
    loc_28 = t3;
    loc_14 = t5;
    loc_8 = t8;
    d10 = (double)rdf32(ecx + 0x2cu);
    if ((cow_fsw(g, d10, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) == 0u) goto L_1016f6b1;
    eax = cow_fsw(g, d10, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
L_1016f392: ;
    d11 = (double)rdf32(ecx + 0x54u);
    d12 = (double)rdf32(ecx + 0x58u);
    d13 = (double)rdf32(ecx + 0x5cu);
    d14 = fr(g, fr(g, fr(g, d11 * d11) + fr(g, d12 * d12)) + fr(g, d13 * d13));
    if (d14 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        x0 = d14;
        goto L_1016f6af;
    }
    ebx = ecx + 0x54u;
    x0 = d14;
    wr32(sp0 - 0x40u, ebx);
    wr32(sp0 - 0x44u, sp0 - 0x24u);
    wr32(sp0 - 0x48u, sp0 - 0xcu);
    wr32(sp0 - 0x4cu, sp0 - 0x18u);
    wr32(sp0 - 0x50u, sp0 - 0x30u);
    d15 = fr(g, fr(g, fr(g, fr(g, cow_bits2f(loc_30) - (double)rdf32(rd32(sp0 + 8u))) * (double)rdf32(ebx)) + fr(g, fr(g, cow_bits2f(loc_28) - (double)rdf32(rd32(sp0 + 8u) + 8u)) * (double)rdf32(ebx + 8u))) + fr(g, fr(g, cow_bits2f(loc_2c) - (double)rdf32(rd32(sp0 + 8u) + 4u)) * (double)rdf32(ebx + 4u)));
    d16 = fr(g, d15 / x0);
    d17 = (double)(float)fr(g, fr(g, d16 * (double)rdf32(ebx)) + (double)rdf32(rd32(sp0 + 8u)));
    wrf32(sp0 - 0x24u, (float)d17);
    d18 = (double)(float)fr(g, fr(g, d16 * (double)rdf32(ebx + 4u)) + (double)rdf32(rd32(sp0 + 8u) + 4u));
    wrf32(sp0 - 0x20u, (float)d18);
    d19 = (double)(float)fr(g, fr(g, d16 * (double)rdf32(ebx + 8u)) + (double)rdf32(rd32(sp0 + 8u) + 8u));
    wrf32(sp0 - 0x1cu, (float)d19);
    t20 = rd32(sp0 + 8u);
    g->esp = sp0 - 0x3cu;
    t21 = cow_call_regs(g, COW_IMG(0x1016f6c0u), sp0 - 0x18u, g->ecx, g->edx, 0, 5, sp0 - 0x30u, sp0 - 0x18u, sp0 - 0xcu, sp0 - 0x24u, ebx);
    if (t21 != 0u)
    {
        eax = t21;
        esi = t20;
        goto L_1016f471;
    }
    esi = t20;
    wr32(sp0 - 0x40u, esi);
    wr32(sp0 - 0x44u, sp0 - 0x18u);
    wr32(sp0 - 0x48u, sp0 - 0x30u);
    g->eax = sp0 - 0x30u;
    g->esp = sp0 - 0x3cu;
    t22 = cow_thiscall(g, COW_IMG(0x1016f910u), self, 3, sp0 - 0x30u, sp0 - 0x18u, esi);
    if (t22 != 0u)
    {
        eax = t22;
        goto L_1016f471;
    }
    eax = t22;
    wr32(sp0 - 0x40u, esi);
    wr32(sp0 - 0x44u, sp0 - 0xcu);
    wr32(sp0 - 0x48u, sp0 - 0x18u);
    g->eax = eax;
    g->edx = sp0 - 0x18u;
    g->esp = sp0 - 0x3cu;
    t23 = cow_thiscall(g, COW_IMG(0x1016f910u), self, 3, sp0 - 0x18u, sp0 - 0xcu, esi);
    t24 = g->edx;
    if (t23 != 0u)
    {
        eax = t23;
        goto L_1016f471;
    }
    edx = t24;
    wr32(sp0 - 0x40u, esi);
    wr32(sp0 - 0x44u, sp0 - 0x30u);
    wr32(sp0 - 0x48u, sp0 - 0xcu);
    g->eax = sp0 - 0x30u;
    g->esp = sp0 - 0x3cu;
    t25 = cow_thiscall(g, COW_IMG(0x1016f910u), self, 3, sp0 - 0xcu, sp0 - 0x30u, esi);
    if (t25 == 0u) goto L_1016f6b1;
    eax = t25;
L_1016f471: ;
    d26 = fr(g, (double)rdf32(sp0 - 0x1cu) - (double)rdf32(esi + 8u));
    d27 = fr(g, (double)rdf32(sp0 - 0x20u) - (double)rdf32(esi + 4u));
    d28 = fr(g, (double)rdf32(sp0 - 0x24u) - (double)rdf32(esi));
    wrf32(sp0 + 4u, (float)fr(g, fr(g, fr(g, d26 * d26) + fr(g, d27 * d27)) + fr(g, d28 * d28)));
    d29 = fr(g, (double)rdf32(self + 0x3412cu) - (double)rdf32(COW_IMG(0x1032a22cu)));
    d30 = (double)rdf32(sp0 + 4u);
    if (d29 < d30) goto L_1016f6b1;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, d30, 0u);
    d31 = (double)rdf32(ebx + 4u);
    if ((cow_fsw(g, d31, (double)rdf32(COW_IMG(0x1033663cu)), 0u) & 0x4100u) == 0u)
    {
        eax = cow_fsw(g, d31, (double)rdf32(COW_IMG(0x1033663cu)), 0u) & 0x4100u;
        goto L_1016f613;
    }
    eax = cow_fsw(g, d31, (double)rdf32(COW_IMG(0x1033663cu)), 0u) & 0x4100u;
    d32 = (double)rdf32(ebx + 4u);
    if (d32 < (double)rdf32(COW_IMG(0x10336638u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d32, (double)rdf32(COW_IMG(0x10336638u)), 0u);
        goto L_1016f613;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d32, (double)rdf32(COW_IMG(0x10336638u)), 0u);
    d33 = (double)rdf32(self + 0x34130u);
    d34 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d33, d34, 0u) & 0x4100u) != 0u) goto L_1016f6b1;
    eax = cow_fsw(g, d33, d34, 0u) & 0x4100u;
    d35 = fr(g, (double)rdf32(esi + 4u) - (double)rdf32(COW_IMG(0x10336648u)));
    wrf32(sp0 + 8u, (float)d35);
    d36 = (double)rdf32(sp0 - 0x2cu);
    d37 = (double)rdf32(sp0 + 8u);
    if (d36 < d37)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d36, d37, 0u);
        goto L_1016f539;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d36, d37, 0u);
    d38 = (double)rdf32(sp0 - 0x14u);
    d39 = (double)rdf32(sp0 + 8u);
    if (d38 < d39)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d38, d39, 0u);
        goto L_1016f539;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d38, d39, 0u);
    d40 = (double)rdf32(sp0 - 8u);
    d41 = (double)rdf32(sp0 + 8u);
    if (!(d40 < d41)) goto L_1016f6b1;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d40, d41, 0u);
L_1016f539: ;
    d42 = (double)(float)fr(g, (double)rdf32(esi + 4u) - (double)rdf32(sp0 - 0x20u));
    wrf32(sp0 - 0x2cu, (float)d42);
    d43 = fr(g, (double)rdf32(esi + 8u) - (double)rdf32(sp0 - 0x1cu));
    d44 = fr(g, (double)rdf32(esi) - (double)rdf32(sp0 - 0x24u));
    d45 = fr(g, fr(g, fr(g, d43 * d43) + fr(g, d42 * d42)) + fr(g, d44 * d44));
    if (d45 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        x2 = d45;
        x1 = d43;
        x0 = d44;
        goto L_1016f6ab;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d45, (double)rdf32(COW_IMG(0x103295d8u)), 3u);
    loc_2c_f = d42;
    x2 = d45;
    x1 = d43;
    x0 = d44;
    d46 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(x2)));
    d47 = (double)(float)fr(g, d46 * x0);
    wrf32(sp0 - 0x30u, (float)d47);
    d48 = (double)(float)fr(g, loc_2c_f * d46);
    wrf32(sp0 - 0x2cu, (float)d48);
    d49 = fr(g, d46 * x1);
    d50 = fr(g, fr(g, fr(g, d49 * (double)rdf32(ebx + 8u)) + fr(g, d48 * (double)rdf32(ebx + 4u))) + fr(g, d47 * (double)rdf32(ebx)));
    if (d50 < (double)rdf32(COW_IMG(0x103295d8u)))
    {
        x0 = d49;
        goto L_1016f6af;
    }
    loc_2c_f = d48;
    loc_30_f = d47;
    x0 = d49;
    t51 = rd32(sp0 + 4u);
    d52 = fr(g, fr(g, loc_30_f * fr(g, sqrt(fr(g, (double)rdf32(self + 0x3412cu) - (double)rdf32(sp0 + 4u))))) + (double)rdf32(esi));
    d53 = fr(g, sqrt(fr(g, (double)rdf32(self + 0x3412cu) - (double)rdf32(sp0 + 4u))));
    wrf32(self + 0x341acu, (float)d52);
    d54 = fr(g, fr(g, fr(g, loc_2c_f * d53) * (double)rdf32(COW_IMG(0x1032a39cu))) + (double)rdf32(esi + 4u));
    wrf32(self + 0x341b0u, (float)d54);
    d55 = fr(g, fr(g, d53 * x0) + (double)rdf32(esi + 8u));
    wr8(self + 0x34125u, 1u);
    wr32(self + 0x34130u, t51);
    wrf32(self + 0x341b4u, (float)d55);
    g->ebx = rd32(sp0 - 0x34u);
    g->esi = rd32(sp0 - 0x38u);
    g->edi = rd32(sp0 - 0x3cu);
    return;
L_1016f613: ;
    d56 = (double)rdf32(self + 0x34134u);
    d57 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d56, d57, 0u) & 0x4100u) != 0u) goto L_1016f6b1;
    eax = cow_fsw(g, d56, d57, 0u) & 0x4100u;
    d58 = fr(g, (double)rdf32(esi + 4u) - (double)rdf32(COW_IMG(0x1032b15cu)));
    wrf32(sp0 + 8u, (float)d58);
    d59 = (double)rdf32(sp0 - 0x2cu);
    d60 = (double)rdf32(sp0 + 8u);
    if ((cow_fsw(g, d59, d60, 0u) & 0x4100u) == 0u)
    {
        eax = cow_fsw(g, d59, d60, 0u) & 0x4100u;
        goto L_1016f66a;
    }
    eax = cow_fsw(g, d59, d60, 0u) & 0x4100u;
    d61 = (double)rdf32(sp0 - 0x14u);
    d62 = (double)rdf32(sp0 + 8u);
    if ((cow_fsw(g, d61, d62, 0u) & 0x4100u) == 0u)
    {
        eax = cow_fsw(g, d61, d62, 0u) & 0x4100u;
        goto L_1016f66a;
    }
    eax = cow_fsw(g, d61, d62, 0u) & 0x4100u;
    d63 = (double)rdf32(sp0 - 8u);
    d64 = (double)rdf32(sp0 + 8u);
    if ((cow_fsw(g, d63, d64, 0u) & 0x4100u) != 0u) goto L_1016f6b1;
    eax = cow_fsw(g, d63, d64, 0u) & 0x4100u;
L_1016f66a: ;
    d65 = (double)rdf32(ebx + 4u);
    if (d65 < (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d65, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        d66 = fr(g, (double)rdf32(sp0 - 0x20u) - (double)rdf32(COW_IMG(0x10329a08u)));
        wr8(self + 0x34128u, 1u);
        wr8(self + 0x34126u, 1u);
        wrf32(self + 0x341b0u, (float)d66);
    }
    t67 = rd32(sp0 + 4u);
    wr32(self + 0x34134u, t67);
    g->ebx = rd32(sp0 - 0x34u);
    g->esi = rd32(sp0 - 0x38u);
    g->edi = rd32(sp0 - 0x3cu);
    return;
L_1016f6ab: ;
L_1016f6af: ;
L_1016f6b1: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1016f320(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1016f320(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
