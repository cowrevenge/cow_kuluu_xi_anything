/* f_0x100a57f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_100a57f0(Guest* g)
{
    double d100;
    double d101;
    double d102;
    double d103;
    double d104;
    double d105;
    double d106;
    double d107;
    double d108;
    double d3;
    double d82;
    double d83;
    double d84;
    double d85;
    double d92;
    double d97;
    double d98;
    double d99;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_90;
    uint32_t t1;
    uint32_t t10;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
    uint32_t t114;
    uint32_t t115;
    uint32_t t116;
    uint32_t t117;
    uint32_t t118;
    uint32_t t119;
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
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 164u);

    wr32(sp0 - 0x90u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x90u;
    t1 = cow_call_regs(g, COW_IMG(0x10014cf0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->edx;
    d3 = cow_take_float(g);
    wrf32(sp0 - 0x6cu, (float)(double)(float)d3);
    g->edx = t2;
    t4 = cow_thiscall(g, COW_IMG(0x10086e90u), self, 0);
    t5 = g->ecx;
    t6 = g->edx;
    wr8(sp0 - 0x89u, (uint8_t)t4);
    if ((uint8_t)t4 != 0u)
    {
        ecx = t5;
        edx = t6;
        edi = in_edi;
        loc_90 = in_esi;
        goto L_100a5d31;
    }
    ecx = t5;
    edx = t6;
    wr32(sp0 - 0x94u, in_edi);
    wr32(sp0 - 0x98u, self + 0xd4u);
    wr32(sp0 - 0x9cu, self + 0x5b4u);
    g->ecx = ecx;
    g->esp = sp0 - 0x94u;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x5b4u, self + 0xd4u);
    t7 = g->ecx;
    if (rd32(self + 0x88u) & 1u)
    {
        eax = rd32(self + 0x88u) & 1u;
        ecx = t7;
    }
    else
    {
        eax = rd32(self + 0x88u) & 1u;
        t8 = rd32(self + 0x44u);
        wr32(self + 0xe4u, t8);
        t9 = rd32(self + 0x48u);
        wr32(self + 0xe8u, t9);
        t10 = rd32(self + 0x4cu);
        wr32(self + 0xecu, t10);
        t11 = rd32(self + 0x50u);
        wr32(self + 0xf0u, t11);
        ecx = t10;
    }
    if (eax != 0u) goto L_100a589d;
    if (rd8(self + 0x103u) != 0u) goto L_100a5899;
    ecx = (ecx & 0xffffff00u) | rd8(self + 0x103u);
    if (rd8(self + 0x104u) != 0u) goto L_100a5899;
    t12 = rd32(self + 0xc4u);
    wr32(sp0 - 0x88u, t12);
    t13 = rd32(self + 0xc8u);
    wr32(sp0 - 0x84u, t13);
    t14 = rd32(self + 0xccu);
    wr32(sp0 - 0x80u, t14);
    eax = rd32(self + 0xd0u);
L_100a5902: ;
    wr32(sp0 - 0x7cu, eax);
L_100a5906: ;
    g->eax = eax;
    g->edx = rd32(self);
    t26 = rd32(self);
    g->esp = sp0 - 0x94u;
    t27 = cow_thiscall(g, rd32(t26 + 0x304u), self, 0);
    t28 = g->ecx;
    t29 = g->edx;
    if ((uint8_t)t27 == 0u)
    {
        eax = t27;
        edx = t29;
        goto L_100a5ad1;
    }
    ecx = t28;
    edx = t29;
    if (rd8(rd32(COW_IMG(0x104568fcu)) + 8u) == 0u)
    {
        eax = rd32(COW_IMG(0x104568fcu));
        goto L_100a5a35;
    }
    eax = rd32(COW_IMG(0x104568fcu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x94u;
    t30 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t31 = g->edx;
    if (t30 > 0x53u)
    {
        eax = t30;
        edx = t31;
        goto L_100a59d6;
    }
    eax = t30;
    edx = t31;
    t32 = rd32(COW_IMG(0x100a5d54u) + rd8(COW_IMG(0x100a5d64u) + eax) * 4u);
    switch (t32 - RD)
    {
    case 0x100a5947u: goto L_100a5947;
    case 0x100a59b7u: goto L_100a59b7;
    case 0x100a59d6u: goto L_100a59d6;
    case 0x100a5b78u: goto L_100a5b78;
    default: rt_fatal(g, COW_IMG(0x100a5940u), "switch");
    }
    return 0;
L_100a5899: ;
    if (eax == 0u) goto L_100a58c3;
L_100a589d: ;
    t22 = rd32(self + 0xd4u);
    wr32(sp0 - 0x88u, t22);
    t23 = rd32(self + 0xd8u);
    wr32(sp0 - 0x84u, t23);
    t24 = rd32(self + 0xdcu);
    wr32(sp0 - 0x80u, t24);
    t25 = rd32(self + 0xe0u);
    wr32(sp0 - 0x7cu, t25);
    eax = t24;
    goto L_100a5906;
L_100a58c3: ;
    g->eax = eax;
    g->esp = sp0 - 0x94u;
    t15 = cow_thiscall(g, rd32(rd32(self) + 0x1bcu), self, 0);
    wr32(sp0 - 0x88u, rd32(t15));
    g->eax = rd32(t15);
    t16 = rd32(t15);
    t17 = cow_thiscall(g, rd32(rd32(self) + 0x1bcu), self, 0);
    t18 = rd32(t17 + 4u);
    wr32(sp0 - 0x84u, t18);
    g->eax = t18;
    t19 = cow_thiscall(g, rd32(rd32(self) + 0x1bcu), self, 0);
    t20 = rd32(t19 + 8u);
    wr32(sp0 - 0x80u, t20);
    g->eax = t20;
    t21 = cow_thiscall(g, rd32(rd32(self) + 0x1bcu), self, 0);
    eax = rd32(t21 + 0xcu);
    goto L_100a5902;
L_100a5947: ;
    if (rd8(self + 0x103u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x103u);
        goto L_100a5962;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x103u);
    wr32(sp0 - 0x98u, sp0 - 0x88u);
    g->edx = sp0 - 0x88u;
    g->esp = sp0 - 0x94u;
    cow_call_regs(g, COW_IMG(0x100a9fc0u), eax, self, g->edx, 0, 1, sp0 - 0x88u);
    t34 = g->edx;
    edx = t34;
L_100a5b78: ;
    wr32(sp0 - 0x98u, self + 0xd4u);
    wr32(sp0 - 0x9cu, sp0 - 0x88u);
    wr32(sp0 - 0xa0u, sp0 - 0x78u);
    g->eax = sp0 - 0x88u;
    g->edx = edx;
    g->esp = sp0 - 0x94u;
    t80 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x78u, sp0 - 0x88u, self + 0xd4u);
    t81 = g->edx;
    d82 = (double)rdf32(sp0 - 0x70u);
    d83 = (double)rdf32(sp0 - 0x74u);
    d84 = (double)rdf32(sp0 - 0x78u);
    d85 = fr(g, sqrt(fr(g, fr(g, fr(g, d82 * d82) + fr(g, d83 * d83)) + fr(g, d84 * d84))));
    if ((cow_fsw(g, d85, (double)rdf32(COW_IMG(0x1032b7b4u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d85, (double)rdf32(COW_IMG(0x1032b7b4u)), 0u) & 0x4100u;
        edx = t81;
        wr8(self + 0xf8u, 0u);
    }
    else
    {
        eax = cow_fsw(g, d85, (double)rdf32(COW_IMG(0x1032b7b4u)), 0u) & 0x4100u;
        edx = t81;
        wr8(self + 0xf8u, 1u);
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x94u;
    t86 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t87 = g->ecx;
    t88 = g->edx;
    if (rd8(self + 0xf8u) != 0u)
    {
        eax = t86;
        ecx = (t87 & 0xffffff00u) | rd8(self + 0xf8u);
        edx = t88;
        goto L_100a5bf3;
    }
    eax = t86;
    ecx = (t87 & 0xffffff00u) | rd8(self + 0xf8u);
    edx = t88;
    if (eax == 0u) goto L_100a5bfc;
    if (eax == 0x21u) goto L_100a5bfc;
    if (eax == 0x2fu) goto L_100a5bfc;
    wr32(sp0 - 0x98u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x94u;
    t89 = cow_thiscall(g, COW_IMG(0x10084330u), self, 1, eax);
    t90 = g->ecx;
    t91 = g->edx;
    if ((uint8_t)t89 != 0u)
    {
        eax = t89;
        ecx = t90;
        edx = t91;
        goto L_100a5bfc;
    }
    eax = t89;
    ecx = t90;
    edx = t91;
L_100a5bf3: ;
    wr16(self + 0x5aeu, 0x708u);
L_100a5bfc: ;
    if ((int16_t)rd16(self + 0x5aeu) >= 0)
    {
        edi = (self + 0xd4u & 0xffff0000u) | rd16(self + 0x5aeu);
        d92 = (double)rdf32(sp0 - 0x6cu);
        fpush(g, d92);
        g->esp = sp0 - 0x94u;
        t93 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        wr16(self + 0x5aeu, (uint16_t)(edi - t93));
        eax = t93;
    }
    if ((int16_t)rd16(self + 0x5aeu) <= 0)
    {
        wr16(self + 0x5aeu, 0u);
    }
    wr32(sp0 - 0x98u, sp0 - 0x88u);
    g->edx = sp0 - 0x88u;
    g->esp = sp0 - 0x94u;
    cow_thiscall(g, COW_IMG(0x100a57c0u), self, 1, sp0 - 0x88u);
    t94 = g->ecx;
    t95 = g->edx;
    wr32(sp0 - 0x98u, self + 0xe4u);
    wr32(sp0 - 0x9cu, self + 0x44u);
    g->eax = self + 0xe4u;
    t96 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x44u, self + 0xe4u);
    d97 = (double)rdf32(self + 0x44u);
    if ((cow_fsw(g, d97, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d97, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d97, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d98 = fr(g, (double)rdf32(self + 0x44u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x44u, (float)d98);
    }
    d99 = (double)rdf32(self + 0x44u);
    if (!(d99 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d99, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d99, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d100 = fr(g, (double)rdf32(self + 0x44u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x44u, (float)d100);
    }
    d101 = (double)rdf32(self + 0x48u);
    if ((cow_fsw(g, d101, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d101, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d101, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d102 = fr(g, (double)rdf32(self + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x48u, (float)d102);
    }
    d103 = (double)rdf32(self + 0x48u);
    if (!(d103 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d103, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d103, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d104 = fr(g, (double)rdf32(self + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x48u, (float)d104);
    }
    d105 = (double)rdf32(self + 0x4cu);
    if ((cow_fsw(g, d105, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d105, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d105, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d106 = fr(g, (double)rdf32(self + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x4cu, (float)d106);
    }
    d107 = (double)rdf32(self + 0x4cu);
    if (!(d107 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d107, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d107, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d108 = fr(g, (double)rdf32(self + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x4cu, (float)d108);
    }
    g->eax = eax;
    g->edx = rd32(self);
    t109 = rd32(self);
    g->esp = sp0 - 0x94u;
    t110 = cow_thiscall(g, rd32(t109 + 0x230u), self, 0);
    t111 = g->edx;
    g->eax = rd32(self);
    g->edx = t111;
    t112 = rd32(self);
    t113 = cow_thiscall(g, rd32(t112 + 0x188u), self, 0);
    t114 = g->edx;
    wr32(sp0 - 0x98u, t113);
    t115 = -(t110 != 0u) + 1u;
    wr32(sp0 - 0x9cu, t115);
    wr32(sp0 - 0xa0u, sp0 - 0x68u);
    cow_thiscall(g, COW_IMG(0x1018b9a0u), rd32(COW_IMG(0x1065cb04u)), 3, sp0 - 0x68u, t115, t113);
    wr32(sp0 - 0x98u, sp0 - 0x68u);
    g->edx = rd32(self);
    t116 = rd32(self);
    cow_thiscall(g, rd32(t116 + 0x224u), self, 1, sp0 - 0x68u);
    t117 = g->ecx;
    t118 = g->edx;
    ecx = t117;
    edx = t118;
    edi = rd32(sp0 - 0x94u);
    loc_90 = rd32(sp0 - 0x90u);
L_100a5d31: ;
    wr32(sp0 - 0x94u, self + 0x5b4u);
    wr32(sp0 - 0x98u, self + 0xd4u);
    wr32(sp0 - 0x9cu, self + 0x5b4u);
    g->eax = self + 0x5b4u;
    g->esp = sp0 - 0x90u;
    t119 = cow_cdecl(g, COW_IMG(0x10027120u), 3, self + 0x5b4u, self + 0xd4u, self + 0x5b4u);
    g->esi = rd32(sp0 - 0x90u);
    g->edi = edi;
    return (t119 & 0xffffff00u) | rd8(sp0 - 0x89u);
L_100a5962: ;
    if (rd8(self + 0x104u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x104u);
        goto L_100a597d;
    }
    wr32(sp0 - 0x98u, sp0 - 0x88u);
    g->edx = edx;
    g->esp = sp0 - 0x94u;
    cow_call_regs(g, COW_IMG(0x100aa1f0u), sp0 - 0x88u, self, g->edx, 0, 1, sp0 - 0x88u);
    t35 = g->edx;
    edx = t35;
    goto L_100a5b78;
L_100a597d: ;
    if (rd8(self + 0x102u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x102u);
        goto L_100a5998;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x102u);
    wr32(sp0 - 0x98u, sp0 - 0x88u);
    g->edx = edx;
    g->esp = sp0 - 0x94u;
    cow_call_regs(g, COW_IMG(0x100aab70u), eax, self, g->edx, 0, 1, sp0 - 0x88u);
    t36 = g->edx;
    edx = t36;
    goto L_100a5b78;
L_100a5998: ;
    if (rd8(self + 0x101u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x101u);
        goto L_100a5b6e;
    }
    wr32(sp0 - 0x98u, sp0 - 0x88u);
    g->edx = edx;
    g->esp = sp0 - 0x94u;
    cow_thiscall(g, COW_IMG(0x100a5dc0u), self, 1, sp0 - 0x88u);
    t37 = g->edx;
    edx = t37;
    goto L_100a5b78;
L_100a59b7: ;
    if (rd8(self + 0x102u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x102u);
        wr32(sp0 - 0x98u, sp0 - 0x88u);
        g->edx = edx;
        g->esp = sp0 - 0x94u;
        cow_call_regs(g, COW_IMG(0x100aab70u), eax, self, g->edx, 0, 1, sp0 - 0x88u);
        t33 = g->edx;
        edx = t33;
    }
    goto L_100a5b78;
L_100a59d6: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x94u;
    t38 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t39 = g->edx;
    wr32(sp0 - 0x98u, t38);
    g->edx = t39;
    t40 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, t38);
    t41 = g->edx;
    if ((uint8_t)t40 != 0u)
    {
        eax = t40;
        goto L_100a5a00;
    }
    eax = t40;
    edx = t41;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x94u;
    t42 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t43 = g->edx;
    wr32(sp0 - 0x98u, t42);
    g->edx = t43;
    t44 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, t42);
    t45 = g->edx;
    if ((uint8_t)t44 == 0u)
    {
        edx = t45;
        goto L_100a5b78;
    }
    eax = t44;
L_100a5a00: ;
    g->eax = eax;
    g->edx = rd32(self);
    t46 = rd32(self);
    g->esp = sp0 - 0x94u;
    t47 = cow_thiscall(g, rd32(t46 + 0x34cu), self, 0);
    t48 = g->edx;
    if (t47 != 0u)
    {
        edx = t48;
    }
    else
    {
        edx = t48;
        g->eax = rd32(self);
        g->edx = edx;
        t49 = rd32(self);
        g->esp = sp0 - 0x94u;
        t50 = cow_thiscall(g, rd32(t49 + 0x358u), self, 0);
        t51 = g->edx;
        if (t50 != 0u)
        {
            edx = t51;
        }
        else
        {
            eax = t50;
            edx = t51;
            wr32(sp0 - 0x98u, sp0 - 0x88u);
            g->edx = edx;
            g->esp = sp0 - 0x94u;
            cow_thiscall(g, COW_IMG(0x100a5dc0u), self, 1, sp0 - 0x88u);
            t52 = g->edx;
            edx = t52;
        }
    }
    goto L_100a5b78;
L_100a5a35: ;
    if (rd8(self + 0x103u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x103u);
        if (rd8(self + 0x104u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x104u);
            if (rd8(self + 0x102u) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0x102u);
                if (rd8(self + 0x101u) != 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(self + 0x101u);
                    wr32(sp0 - 0x98u, sp0 - 0x88u);
                    g->edx = sp0 - 0x88u;
                    g->esp = sp0 - 0x94u;
                    cow_call_regs(g, COW_IMG(0x100aadf0u), eax, self, g->edx, 0, 1, sp0 - 0x88u);
                    t59 = g->edx;
                    edx = t59;
                }
                wr32(sp0 - 0x98u, sp0 - 0x88u);
                g->esp = sp0 - 0x94u;
                cow_fastcall(g, COW_IMG(0x100a5ec0u), self, edx, 1, sp0 - 0x88u);
                t60 = g->edx;
                edx = t60;
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0x102u);
                wr32(sp0 - 0x98u, sp0 - 0x88u);
                g->edx = edx;
                g->esp = sp0 - 0x94u;
                cow_call_regs(g, COW_IMG(0x100aab70u), eax, self, g->edx, 0, 1, sp0 - 0x88u);
                t57 = g->edx;
                wr32(sp0 - 0x98u, sp0 - 0x88u);
                cow_fastcall(g, COW_IMG(0x100a5ec0u), self, t57, 1, sp0 - 0x88u);
                t58 = g->edx;
                edx = t58;
            }
        }
        else
        {
            wr32(sp0 - 0x98u, sp0 - 0x88u);
            g->edx = edx;
            g->esp = sp0 - 0x94u;
            cow_call_regs(g, COW_IMG(0x100aa1f0u), sp0 - 0x88u, self, g->edx, 0, 1, sp0 - 0x88u);
            t55 = g->edx;
            wr32(sp0 - 0x98u, sp0 - 0x88u);
            cow_fastcall(g, COW_IMG(0x100a5ec0u), self, t55, 1, sp0 - 0x88u);
            t56 = g->edx;
            edx = t56;
        }
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x103u);
        wr32(sp0 - 0x98u, sp0 - 0x88u);
        g->edx = sp0 - 0x88u;
        g->esp = sp0 - 0x94u;
        cow_call_regs(g, COW_IMG(0x100a9fc0u), eax, self, g->edx, 0, 1, sp0 - 0x88u);
        t53 = g->edx;
        wr32(sp0 - 0x98u, sp0 - 0x88u);
        cow_fastcall(g, COW_IMG(0x100a5ec0u), self, t53, 1, sp0 - 0x88u);
        t54 = g->edx;
        edx = t54;
    }
    goto L_100a5b78;
L_100a5ad1: ;
    if (rd8(self + 0x103u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x103u);
        goto L_100a5aec;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x103u);
    wr32(sp0 - 0x98u, sp0 - 0x88u);
    g->edx = edx;
    g->esp = sp0 - 0x94u;
    cow_call_regs(g, COW_IMG(0x100a9fc0u), eax, self, g->edx, 0, 1, sp0 - 0x88u);
    t61 = g->edx;
    edx = t61;
    goto L_100a5b78;
L_100a5aec: ;
    if (rd8(self + 0x104u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x104u);
        goto L_100a5b04;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x104u);
    wr32(sp0 - 0x98u, sp0 - 0x88u);
    g->edx = sp0 - 0x88u;
    g->esp = sp0 - 0x94u;
    cow_call_regs(g, COW_IMG(0x100aa1f0u), eax, self, g->edx, 0, 1, sp0 - 0x88u);
    t62 = g->edx;
    edx = t62;
    goto L_100a5b78;
L_100a5b04: ;
    if (rd8(self + 0x102u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x102u);
        goto L_100a5b62;
    }
    g->eax = rd32(self);
    g->edx = edx;
    t63 = rd32(self);
    g->esp = sp0 - 0x94u;
    t64 = cow_thiscall(g, rd32(t63 + 0x360u), self, 0);
    t65 = g->edx;
    if (t64 != 0u)
    {
        eax = t64;
        edx = t65;
        goto L_100a5b62;
    }
    eax = t64;
    g->eax = eax;
    g->edx = rd32(self);
    t66 = rd32(self);
    g->esp = sp0 - 0x94u;
    t67 = cow_thiscall(g, rd32(t66 + 0x36cu), self, 0);
    t68 = g->edx;
    if (t67 != 0u)
    {
        eax = t67;
        edx = t68;
        goto L_100a5b62;
    }
    edx = t68;
    g->eax = rd32(self);
    g->edx = edx;
    t69 = rd32(self);
    g->esp = sp0 - 0x94u;
    t70 = cow_thiscall(g, rd32(t69 + 0x34cu), self, 0);
    t71 = g->edx;
    if (t70 != 0u)
    {
        eax = t70;
        edx = t71;
        goto L_100a5b62;
    }
    eax = t70;
    g->eax = eax;
    g->edx = rd32(self);
    t72 = rd32(self);
    g->esp = sp0 - 0x94u;
    t73 = cow_thiscall(g, rd32(t72 + 0x358u), self, 0);
    t74 = g->edx;
    if (t73 != 0u)
    {
        eax = t73;
        edx = t74;
        goto L_100a5b62;
    }
    edx = t74;
    g->eax = rd32(self);
    g->edx = edx;
    t75 = rd32(self);
    g->esp = sp0 - 0x94u;
    t76 = cow_thiscall(g, rd32(t75 + 0x378u), self, 0);
    t77 = g->edx;
    if (t76 != 0u)
    {
        eax = t76;
        edx = t77;
        goto L_100a5b62;
    }
    eax = t76;
    edx = t77;
    wr32(sp0 - 0x98u, sp0 - 0x88u);
    g->edx = edx;
    g->esp = sp0 - 0x94u;
    cow_call_regs(g, COW_IMG(0x100aab70u), eax, self, g->edx, 0, 1, sp0 - 0x88u);
    t78 = g->edx;
    edx = t78;
    goto L_100a5b78;
L_100a5b62: ;
    if (rd8(self + 0x101u) == 0u) goto L_100a5b78;
    eax = (eax & 0xffffff00u) | rd8(self + 0x101u);
L_100a5b6e: ;
    wr32(sp0 - 0x98u, sp0 - 0x88u);
    g->edx = sp0 - 0x88u;
    g->esp = sp0 - 0x94u;
    cow_call_regs(g, COW_IMG(0x100aadf0u), eax, self, g->edx, 0, 1, sp0 - 0x88u);
    t79 = g->edx;
    edx = t79;
    goto L_100a5b78;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a57f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a57f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
