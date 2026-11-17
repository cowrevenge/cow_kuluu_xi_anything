/* f_0x10053e60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10053e60(Guest* g)
{
    double d14;
    double d22;
    double d27;
    double d31;
    double d32;
    double d35;
    double d39;
    double d40;
    double d44;
    double d47;
    double d48;
    double d54;
    double d59;
    double d64;
    double d65;
    double d68;
    double d72;
    double d73;
    double d77;
    double d81;
    double d82;
    double d83;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t33;
    uint32_t t34;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t45;
    uint32_t t46;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t66;
    uint32_t t67;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t84;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_esi);
    wr32(self + 0x90u, 0u);
    if ((rd32(self + 0x34u) & 0xfu) + (rd8(self + 0x36u) & 1u) * 0x10u == 0u)
    {
        eax = (rd32(self + 0x34u) & 0xfu) + (rd8(self + 0x36u) & 1u) * 0x10u;
        goto L_10054197;
    }
    if (rd32(self + 0x98u) == 0u) goto L_10053f00;
    eax = rd32(self + 0x98u);
    if (eax >= 2u)
    {
        edx = in_edx;
    }
    else
    {
        wr32(sp0 - 0x34u, 0x7bu);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x30u;
        t1 = cow_thiscall(g, COW_IMG(0x100492f0u), self, 1, 0x7bu);
        t2 = g->edx;
        wr32(self + 0x98u, t1);
        edx = t2;
    }
    if (rd32(self + 0x98u) == 0u)
    {
        loc_2c = in_ebx;
        loc_30 = in_esi;
        goto L_10053f19;
    }
    eax = rd32(self + 0x98u);
    t3 = rd32(eax + 4u);
    wr32(sp0 - 0x10u, t3);
    t4 = rd32(eax + 8u);
    wr32(sp0 - 0xcu, t4);
    t5 = rd32(eax + 0xcu);
    wr32(sp0 - 8u, t5);
    wr32(sp0 - 4u, 0x3f800000u);
    t6 = rd32(eax + 0x10u);
    wr32(sp0 - 0x20u, t6);
    t7 = rd32(eax + 0x14u);
    wr32(sp0 - 0x1cu, t7);
    t8 = rd32(eax + 0x18u);
    wr32(sp0 - 0x18u, t8);
    wr32(sp0 - 0x14u, 0x3f800000u);
    g->eax = t8;
    g->esp = sp0 - 0x30u;
    t9 = cow_thiscall(g, rd32(rd32(self) + 0x28u), self, 0);
    wr32(sp0 - 0x34u, sp0 - 0x20u);
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    eax = t9;
    edx = sp0 - 0x10u;
    loc_34 = sp0 - 0x20u;
    loc_38 = sp0 - 0x10u;
L_10053f0b: ;
    wr32(sp0 - 0x3cu, eax);
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x1003be10u), self + 0x30u, 3, eax, loc_38, loc_34);
    t13 = g->edx;
    d14 = cow_take_float(g);
    wrf32(self + 0x90u, (float)d14);
    edx = t13;
    loc_2c = rd32(sp0 - 0x2cu);
    loc_30 = rd32(sp0 - 0x30u);
L_10053f19: ;
    wr32(sp0 - 0x34u, in_ebp);
    wr32(sp0 - 0x38u, in_edi);
    if ((rd32(self + 0x34u) >> 0x14u & 0xfu) - 1u > 7u)
    {
        ecx = rd32(self + 0x34u) >> 0x14u & 0xfu;
        loc_34 = in_ebp;
        loc_38 = in_edi;
        goto L_10054036;
    }
    eax = (rd32(self + 0x34u) >> 0x14u & 0xfu) - 1u;
    t15 = rd32(COW_IMG(0x100541a0u) + rd8(COW_IMG(0x100541a8u) + eax) * 4u);
    edx = rd8(COW_IMG(0x100541a8u) + eax);
    switch (t15 - RD)
    {
    case 0x10053f44u: goto L_10053f44;
    case 0x10053f4du: goto L_10053f4d;
    default: rt_fatal(g, COW_IMG(0x10053f3du), "switch");
    }
    return 0;
L_10053f00: ;
    g->eax = rd32(self);
    g->edx = in_edx;
    t10 = rd32(self);
    g->esp = sp0 - 0x30u;
    t11 = cow_thiscall(g, rd32(t10 + 0x28u), self, 0);
    t12 = g->edx;
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0u);
    eax = t11;
    edx = t12;
    loc_34 = 0u;
    loc_38 = 0u;
    goto L_10053f0b;
L_10053f44: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    t19 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x30u, 0);
    t20 = g->ecx;
    t21 = g->edx;
    eax = t19;
    ecx = t20;
    edx = t21;
L_10053f54: ;
    if (eax == 0u)
    {
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_38 = rd32(sp0 - 0x38u);
        goto L_10054036;
    }
    edi = eax;
    d22 = (double)rdf32(self + 0x70u);
    if (d22 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        wr32(sp0 - 0x28u, 0x3f800000u);
        loc_28 = 0x3f800000u;
    }
    else
    {
        t23 = rd32(self + 0x70u);
        wr32(sp0 - 0x28u, t23);
        loc_28 = t23;
    }
    if ((rd32(self + 0x34u) >> 0x14u & 3u) == 0u)
    {
        eax = rd32(self + 0x34u) >> 0x14u;
        goto L_10053fe1;
    }
    eax = rd32(self + 0x34u) >> 0x14u;
    if ((eax & 2u) == 0u)
    {
        x0 = (double)rdf32(COW_IMG(0x1032961cu));
    }
    else
    {
        g->edx = rd32(edi);
        t24 = rd32(edi);
        g->esp = sp0 - 0x38u;
        cow_thiscall(g, rd32(t24 + 0x9cu), edi, 0);
        t25 = g->ecx;
        t26 = g->edx;
        d27 = cow_take_float(g);
        ecx = t25;
        edx = t26;
        loc_28 = rd32(sp0 - 0x28u);
        x0 = fr(g, fr(g, fr(g, d27 - (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(sp0 - 0x28u)) + (double)rdf32(COW_IMG(0x1032961cu)));
    }
    t28 = rd32(self + 0x34u);
    wrf32(self + 0x7cu, (float)x0);
    if ((t28 & 0x100000u) == 0u)
    {
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_38 = rd32(sp0 - 0x38u);
        goto L_10054039;
    }
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    cow_thiscall(g, rd32(rd32(edi) + 0x98u), edi, 0);
    t29 = g->ecx;
    t30 = g->edx;
    d31 = cow_take_float(g);
    d32 = fr(g, fr(g, fr(g, d31 - (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(sp0 - 0x28u)) + (double)rdf32(COW_IMG(0x1032961cu)));
    wrf32(self + 0x78u, (float)d32);
    wrf32(self + 0x80u, (float)d32);
    ecx = t29;
    edx = t30;
    loc_2c = rd32(sp0 - 0x2cu);
    loc_30 = rd32(sp0 - 0x30u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_38 = rd32(sp0 - 0x38u);
L_10054042: ;
    if ((rd8(self + 0x37u) & 0xfu) - 1u > 7u)
    {
        eax = (rd8(self + 0x37u) & 0xfu) - 1u;
        goto L_1005415f;
    }
    eax = (rd8(self + 0x37u) & 0xfu) - 1u;
    t49 = rd32(COW_IMG(0x100541b0u) + rd8(COW_IMG(0x100541b8u) + eax) * 4u);
    edx = rd8(COW_IMG(0x100541b8u) + eax);
    switch (t49 - RD)
    {
    case 0x10054063u: goto L_10054063;
    case 0x1005406cu: goto L_1005406c;
    default: rt_fatal(g, COW_IMG(0x1005405cu), "switch");
    }
    return 0;
L_10053f4d: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    t16 = cow_thiscall(g, COW_IMG(0x1003b700u), self + 0x30u, 0);
    t17 = g->ecx;
    t18 = g->edx;
    eax = t16;
    ecx = t17;
    edx = t18;
    goto L_10053f54;
L_10053fe1: ;
    g->edx = rd32(edi);
    t33 = rd32(edi);
    g->esp = sp0 - 0x38u;
    cow_thiscall(g, rd32(t33 + 0x98u), edi, 0);
    t34 = g->edx;
    d35 = cow_take_float(g);
    wrf32(sp0 - 0x24u, (float)(double)(float)d35);
    g->eax = rd32(edi);
    g->edx = t34;
    t36 = rd32(edi);
    t37 = cow_thiscall(g, rd32(t36 + 0x9cu), edi, 0);
    t38 = g->edx;
    d39 = cow_take_float(g);
    d40 = (double)rdf32(sp0 - 0x24u);
    if (!(d39 < d40))
    {
        ecx = edi;
        edx = t38;
        g->edx = edx;
        g->esp = sp0 - 0x38u;
        cow_thiscall(g, rd32(rd32(edi) + 0x9cu), ecx, 0);
        t45 = g->ecx;
        t46 = g->edx;
        d47 = cow_take_float(g);
        ecx = t45;
        edx = t46;
        x0 = d47;
    }
    else
    {
        eax = (t37 & 0xffff0000u) | (uint16_t)cow_fsw(g, d39, d40, 0u);
        ecx = edi;
        g->edx = rd32(edi);
        t41 = rd32(edi);
        g->esp = sp0 - 0x38u;
        cow_thiscall(g, rd32(t41 + 0x98u), ecx, 0);
        t42 = g->ecx;
        t43 = g->edx;
        d44 = cow_take_float(g);
        ecx = t42;
        edx = t43;
        x0 = d44;
    }
    d48 = fr(g, fr(g, fr(g, x0 - (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(sp0 - 0x28u)) + (double)rdf32(COW_IMG(0x1032961cu)));
    wrf32(self + 0x78u, (float)d48);
    wrf32(self + 0x7cu, (float)d48);
    wrf32(self + 0x80u, (float)d48);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_30 = rd32(sp0 - 0x30u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_38 = rd32(sp0 - 0x38u);
    goto L_10054042;
L_10054036: ;
    wr32(self + 0x7cu, 0x3f800000u);
L_10054039: ;
    wr32(self + 0x78u, 0x3f800000u);
    wr32(self + 0x80u, 0x3f800000u);
    goto L_10054042;
L_10054063: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    t52 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x30u, 0);
    t53 = g->edx;
    eax = t52;
    edx = t53;
L_10054073: ;
    if (eax == 0u)
    {
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_38 = rd32(sp0 - 0x38u);
        goto L_1005415f;
    }
    edi = eax;
    d54 = (double)rdf32(self + 0x74u);
    if (d54 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d54, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        wr32(sp0 - 0x28u, 0x3f800000u);
        loc_28 = 0x3f800000u;
    }
    else
    {
        t55 = rd32(self + 0x74u);
        wr32(sp0 - 0x28u, t55);
        eax = t55;
        loc_28 = t55;
    }
    if ((rd8(self + 0x37u) & 3u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x37u);
        goto L_10054104;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x37u);
    if ((eax & 2u) == 0u)
    {
        x0 = (double)rdf32(COW_IMG(0x1032961cu));
    }
    else
    {
        g->eax = eax;
        g->edx = rd32(edi);
        t56 = rd32(edi);
        g->esp = sp0 - 0x38u;
        t57 = cow_thiscall(g, rd32(t56 + 0x9cu), edi, 0);
        t58 = g->edx;
        d59 = cow_take_float(g);
        eax = t57;
        edx = t58;
        loc_28 = rd32(sp0 - 0x28u);
        x0 = fr(g, fr(g, fr(g, d59 - (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(sp0 - 0x28u)) + (double)rdf32(COW_IMG(0x1032961cu)));
    }
    t60 = rd8(self + 0x37u);
    wrf32(self + 0x88u, (float)x0);
    if (!(t60 & 1u))
    {
        eax = (eax & 0xffffff00u) | t60;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_38 = rd32(sp0 - 0x38u);
        goto L_10054165;
    }
    g->eax = rd32(edi);
    g->edx = edx;
    t61 = rd32(edi);
    g->esp = sp0 - 0x38u;
    t62 = cow_thiscall(g, rd32(t61 + 0x98u), edi, 0);
    t63 = g->edx;
    d64 = cow_take_float(g);
    d65 = fr(g, fr(g, fr(g, d64 - (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(sp0 - 0x28u)) + (double)rdf32(COW_IMG(0x1032961cu)));
    wrf32(self + 0x84u, (float)d65);
    wrf32(self + 0x8cu, (float)d65);
    eax = t62;
    edx = t63;
    loc_2c = rd32(sp0 - 0x2cu);
    loc_30 = rd32(sp0 - 0x30u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_38 = rd32(sp0 - 0x38u);
L_10054171: ;
    d83 = (double)rdf32(self + 0x90u);
    if (d83 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d83, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        ebp = loc_34;
        edi = loc_38;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d83, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        ebp = loc_34;
        edi = loc_38;
        t84 = rd32(self + 0x90u);
        wr32(self + 0x78u, t84);
    }
    g->ebx = loc_2c;
    g->esi = loc_30;
    g->edi = edi;
    g->ebp = ebp;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1005406c: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    t50 = cow_thiscall(g, COW_IMG(0x1003b700u), self + 0x30u, 0);
    t51 = g->edx;
    eax = t50;
    edx = t51;
    goto L_10054073;
L_10054104: ;
    g->edx = rd32(edi);
    t66 = rd32(edi);
    g->esp = sp0 - 0x38u;
    cow_thiscall(g, rd32(t66 + 0x98u), edi, 0);
    t67 = g->edx;
    d68 = cow_take_float(g);
    wrf32(sp0 - 0x24u, (float)(double)(float)d68);
    g->eax = rd32(edi);
    g->edx = t67;
    t69 = rd32(edi);
    t70 = cow_thiscall(g, rd32(t69 + 0x9cu), edi, 0);
    t71 = g->edx;
    d72 = cow_take_float(g);
    d73 = (double)rdf32(sp0 - 0x24u);
    if (!(d72 < d73))
    {
        ecx = edi;
        edx = t71;
        g->eax = rd32(edi);
        g->edx = edx;
        t78 = rd32(edi);
        g->esp = sp0 - 0x38u;
        t79 = cow_thiscall(g, rd32(t78 + 0x9cu), ecx, 0);
        t80 = g->edx;
        d81 = cow_take_float(g);
        eax = t79;
        edx = t80;
        x0 = d81;
    }
    else
    {
        eax = (t70 & 0xffff0000u) | (uint16_t)cow_fsw(g, d72, d73, 0u);
        ecx = edi;
        g->eax = eax;
        g->edx = rd32(edi);
        t74 = rd32(edi);
        g->esp = sp0 - 0x38u;
        t75 = cow_thiscall(g, rd32(t74 + 0x98u), ecx, 0);
        t76 = g->edx;
        d77 = cow_take_float(g);
        eax = t75;
        edx = t76;
        x0 = d77;
    }
    d82 = fr(g, fr(g, fr(g, x0 - (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(sp0 - 0x28u)) + (double)rdf32(COW_IMG(0x1032961cu)));
    wrf32(self + 0x84u, (float)d82);
    wrf32(self + 0x88u, (float)d82);
    wrf32(self + 0x8cu, (float)d82);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_30 = rd32(sp0 - 0x30u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_38 = rd32(sp0 - 0x38u);
    goto L_10054171;
L_1005415f: ;
    wr32(self + 0x88u, 0x3f800000u);
L_10054165: ;
    wr32(self + 0x84u, 0x3f800000u);
    wr32(self + 0x8cu, 0x3f800000u);
    goto L_10054171;
L_10054197: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10053e60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10053e60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
