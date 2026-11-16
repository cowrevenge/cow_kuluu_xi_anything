/* f_0x10020ba0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10020ba0(Guest* g)
{
    double d121;
    double d126;
    double d130;
    double d134;
    double d137;
    double d138;
    double d139;
    double d140;
    double d141;
    double d142;
    double d52;
    double d55;
    double d71;
    double d75;
    double d76;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    double loc_a4_f;
    uint32_t loc_ac;
    double loc_ac_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
    uint32_t t108;
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
    uint32_t t120;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t125;
    uint32_t t127;
    uint32_t t128;
    uint32_t t129;
    uint32_t t13;
    uint32_t t131;
    uint32_t t132;
    uint32_t t133;
    uint32_t t135;
    uint32_t t136;
    uint32_t t14;
    uint32_t t143;
    uint32_t t144;
    uint32_t t145;
    uint32_t t146;
    uint32_t t147;
    uint32_t t148;
    uint32_t t149;
    uint32_t t15;
    uint32_t t150;
    uint32_t t151;
    uint32_t t152;
    uint32_t t153;
    uint32_t t154;
    uint32_t t155;
    uint32_t t156;
    uint32_t t157;
    uint32_t t158;
    uint32_t t159;
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
    uint32_t t3;
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
    uint32_t t53;
    uint32_t t54;
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
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 208u);

    wr32(sp0 - 0xb0u, in_esi);
    if (rd8(COW_IMG(0x10351220u)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10351220u));
        ebx = in_ebx;
        ebp = in_ebp;
        edi = in_edi;
        goto L_100210a6;
    }
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10351220u));
    if (arg1 == 0u)
    {
        ebx = in_ebx;
        ebp = in_ebp;
        edi = in_edi;
        goto L_100210a6;
    }
    wr32(sp0 - 0xb4u, in_ebx);
    wr32(sp0 - 0xb8u, in_ebp);
    wr32(sp0 - 0xbcu, in_edi);
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x1057876cu));
    g->esp = sp0 - 0xbcu;
    t2 = cow_call_regs(g, COW_IMG(0x10158aa0u), eax, t1, g->edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    wr8(sp0 - 0xa6u, (uint8_t)t2);
    t5 = rd32(arg1 + 0x70u);
    wr8(sp0 - 0xa5u, rd8(rd32(COW_IMG(0x1057876cu)) + 0x22u));
    if (t5 == 0u)
    {
        eax = t5;
        edx = t4;
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        eax = t5;
        if (!(rd32(eax + 0x12cu) >> 0xdu & 1u))
        {
            edx = rd32(eax + 0x12cu) >> 0xdu;
            ebx = in_ebx & 0xffffff00u;
        }
        else
        {
            edx = rd32(eax + 0x12cu) >> 0xdu;
            ebx = (in_ebx & 0xffffff00u) | 1u;
        }
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xbcu;
    t6 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t7 = g->edx;
    if ((uint8_t)ebx != 0u)
    {
        eax = t6;
        edx = t7;
    }
    else
    {
        eax = t6;
        edx = t7;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xbcu;
        t8 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x90u, 0);
        t9 = g->edx;
        g->edx = t9;
        cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x90u, 0);
        t10 = g->edx;
        t11 = rd32(arg1 + 0x48u);
        wr32(sp0 - 0xc0u, t11);
        g->eax = t11;
        t12 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x90u, 1, t11);
        g->edx = rd32(arg1);
        t13 = rd32(arg1);
        t14 = cow_thiscall(g, rd32(t13 + 0x1bcu), arg1, 0);
        t15 = g->edx;
        wr32(sp0 - 0xc0u, t14);
        g->edx = t15;
        t16 = cow_thiscall(g, COW_IMG(0x10027cf0u), sp0 - 0x90u, 1, t14);
        t17 = g->edx;
        wr32(sp0 - 0xc0u, COW_IMG(0x1035123cu));
        wr32(sp0 - 0xc4u, arg2);
        g->edx = t17;
        t18 = cow_thiscall(g, COW_IMG(0x10028230u), sp0 - 0x90u, 2, arg2, COW_IMG(0x1035123cu));
        t19 = g->edx;
        g->edx = t19;
        t20 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
        t21 = g->edx;
        eax = t20;
        edx = t21;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xbcu;
    t22 = cow_thiscall(g, COW_IMG(0x10084390u), arg1, 0);
    t23 = g->edx;
    if (t22 - 7u > 0x4cu)
    {
        eax = t22 - 7u;
        edx = t23;
        goto L_10020cb0;
    }
    eax = t22 - 7u;
    edx = t23;
    t24 = rd32(COW_IMG(0x100210b0u) + rd8(COW_IMG(0x100210b8u) + eax) * 4u);
    switch (t24 - RD)
    {
    case 0x10020c77u: goto L_10020c77;
    case 0x10020cb0u: goto L_10020cb0;
    default: rt_fatal(g, COW_IMG(0x10020c70u), "switch");
    }
    return 0;
L_10020c77: ;
    wr32(sp0 - 0xc0u, sp0 - 0xa0u);
    wr32(sp0 - 0xc4u, 6u);
    g->eax = sp0 - 0xa0u;
    g->edx = rd32(arg1);
    t25 = rd32(arg1);
    g->esp = sp0 - 0xbcu;
    t26 = cow_thiscall(g, rd32(t25 + 0x1c4u), arg1, 2, 6u, sp0 - 0xa0u);
    t27 = g->edx;
    wr8(sp0 - 0xa7u, (uint8_t)t26);
    if ((uint8_t)ebx == 0u)
    {
        edx = t27;
    }
    else
    {
        eax = t26;
        g->eax = eax;
        g->edx = rd32(arg1);
        t28 = rd32(arg1);
        g->esp = sp0 - 0xbcu;
        t29 = cow_thiscall(g, rd32(t28 + 0x1bcu), arg1, 0);
        t30 = g->ecx;
        t31 = g->edx;
        wr32(sp0 - 0xc0u, t29);
        wr32(sp0 - 0xc4u, arg2);
        g->edx = t31;
        cow_cdecl(g, COW_IMG(0x10026eb0u), 2, arg2, t29);
        t32 = g->edx;
        edx = t32;
    }
    t33 = rd32(sp0 - 0x9cu);
    wr32(arg2 + 4u, t33);
    eax = t33;
L_10020e32: ;
    if (rd8(sp0 - 0xa7u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0xa7u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0xa7u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xbcu;
        t80 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x90u, 0);
        t81 = g->edx;
        g->edx = t81;
        t82 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x90u, 0);
        t83 = g->edx;
        t84 = rd32(arg1 + 0x44u);
        wr32(sp0 - 0xc0u, t84);
        t85 = cow_thiscall(g, COW_IMG(0x10027b80u), sp0 - 0x90u, 1, t84);
        t86 = rd32(arg1 + 0x48u);
        wr32(sp0 - 0xc0u, t86);
        g->edx = t86;
        cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x90u, 1, t86);
        t87 = g->edx;
        t88 = rd32(arg1 + 0x4cu);
        wr32(sp0 - 0xc0u, t88);
        g->eax = t88;
        t89 = cow_thiscall(g, COW_IMG(0x10027c20u), sp0 - 0x90u, 1, t88);
        g->edx = rd32(arg1);
        t90 = rd32(arg1);
        t91 = cow_thiscall(g, rd32(t90 + 0x1bcu), arg1, 0);
        t92 = g->edx;
        wr32(sp0 - 0xc0u, t91);
        g->edx = t92;
        cow_thiscall(g, COW_IMG(0x10027cf0u), sp0 - 0x90u, 1, t91);
        t93 = g->ecx;
        t94 = g->edx;
        wr32(sp0 - 0xc0u, COW_IMG(0x10351248u));
        wr32(sp0 - 0xc4u, sp0 - 0xa0u);
        g->eax = sp0 - 0xa0u;
        g->edx = t94;
        t95 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0xa0u, COW_IMG(0x10351248u));
        t96 = g->edx;
        wr32(sp0 - 0xc0u, sp0 - 0xa0u);
        wr32(sp0 - 0xc4u, arg3);
        g->edx = t96;
        t97 = cow_thiscall(g, COW_IMG(0x10028230u), sp0 - 0x90u, 2, arg3, sp0 - 0xa0u);
        t98 = g->edx;
        if ((uint8_t)ebx == 0u)
        {
            edx = t98;
        }
        else
        {
            eax = t97;
            g->eax = eax;
            g->edx = rd32(arg1);
            t99 = rd32(arg1);
            g->esp = sp0 - 0xbcu;
            t100 = cow_thiscall(g, rd32(t99 + 0x1bcu), arg1, 0);
            t101 = g->ecx;
            t102 = g->edx;
            wr32(sp0 - 0xc0u, t100);
            wr32(sp0 - 0xc4u, arg2);
            g->edx = t102;
            cow_cdecl(g, COW_IMG(0x10026eb0u), 2, arg2, t100);
            t103 = g->edx;
            edx = t103;
        }
        t104 = rd32(arg3 + 4u);
        wr32(arg2 + 4u, t104);
        g->eax = t104;
        g->esp = sp0 - 0xbcu;
        t105 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
        eax = t105;
    }
    g->eax = eax;
    g->edx = rd32(arg1);
    t106 = rd32(arg1);
    g->esp = sp0 - 0xbcu;
    t107 = cow_thiscall(g, rd32(t106 + 0x330u), arg1, 0);
    t108 = g->ecx;
    t109 = g->edx;
    if ((uint8_t)t107 != 0u)
    {
        eax = t107;
        ecx = t108;
        edx = t109;
        goto L_10020f39;
    }
    eax = t107;
    edx = t109;
    g->edx = edx;
    g->esp = sp0 - 0xbcu;
    t110 = cow_call_regs(g, COW_IMG(0x10157cf0u), eax, rd32(COW_IMG(0x1057876cu)), g->edx, 1, 0);
    t111 = g->edx;
    if (t110 != 0u)
    {
        eax = t110;
        goto L_10020f05;
    }
    eax = t110;
    edx = t111;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xbcu;
    t112 = cow_thiscall(g, COW_IMG(0x10081600u), COW_IMG(0x10487f58u), 0);
    t113 = g->ecx;
    t114 = g->edx;
    if (t112 == 0u)
    {
        eax = t112;
        ecx = t113;
        edx = t114;
        goto L_10020f39;
    }
    eax = t112;
L_10020f05: ;
    g->eax = eax;
    g->edx = rd32(eax);
    t115 = rd32(eax);
    g->esp = sp0 - 0xbcu;
    t116 = cow_thiscall(g, rd32(t115 + 0x1bcu), eax, 0);
    t117 = g->ecx;
    t118 = g->edx;
    wr32(sp0 - 0xc0u, t116);
    wr32(sp0 - 0xc4u, arg3);
    g->edx = t118;
    t119 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, arg3, t116);
    t120 = g->edx;
    d121 = fr(g, (double)rdf32(COW_IMG(0x10456da8u)) + (double)rdf32(arg3 + 4u));
    wrf32(arg3 + 4u, (float)d121);
    t122 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->ebx = rd32(sp0 - 0xb4u);
    g->esi = rd32(sp0 - 0xb0u);
    g->edi = rd32(sp0 - 0xbcu);
    g->ebp = rd32(sp0 - 0xb8u);
    return t122;
L_10020cb0: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xbcu;
    t34 = cow_thiscall(g, COW_IMG(0x10084390u), arg1, 0);
    t35 = g->edx;
    wr32(sp0 - 0xc0u, t34);
    g->edx = t35;
    t36 = cow_thiscall(g, COW_IMG(0x10084350u), arg1, 1, t34);
    t37 = g->edx;
    if ((uint8_t)t36 != 0u)
    {
        edx = t37;
        goto L_10020d65;
    }
    eax = t36;
    edx = t37;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xbcu;
    t38 = cow_thiscall(g, COW_IMG(0x10084390u), arg1, 0);
    t39 = g->edx;
    wr32(sp0 - 0xc0u, t38);
    g->edx = t39;
    t40 = cow_thiscall(g, COW_IMG(0x10084370u), arg1, 1, t38);
    t41 = g->edx;
    if ((uint8_t)t40 != 0u)
    {
        edx = t41;
        goto L_10020d65;
    }
    eax = t40;
    edx = t41;
    if ((uint8_t)ebx != 0u)
    {
        g->eax = eax;
        g->edx = rd32(arg1);
        t42 = rd32(arg1);
        g->esp = sp0 - 0xbcu;
        t43 = cow_thiscall(g, rd32(t42 + 0x1bcu), arg1, 0);
        t44 = g->ecx;
        t45 = g->edx;
        wr32(sp0 - 0xc0u, t43);
        wr32(sp0 - 0xc4u, arg2);
        g->edx = t45;
        cow_cdecl(g, COW_IMG(0x10026eb0u), 2, arg2, t43);
        t46 = g->edx;
        edx = t46;
    }
    wr32(sp0 - 0xc0u, sp0 - 0xa0u);
    wr32(sp0 - 0xc4u, 0xcu);
    g->eax = rd32(arg1);
    t47 = rd32(arg1);
    g->esp = sp0 - 0xbcu;
    t48 = cow_thiscall(g, rd32(t47 + 0x1c4u), arg1, 2, 0xcu, sp0 - 0xa0u);
    t49 = rd32(arg1);
    wr8(sp0 - 0xa7u, (uint8_t)t48);
    g->edx = t49;
    t50 = cow_thiscall(g, rd32(t49 + 0x1bcu), arg1, 0);
    t51 = g->edx;
    d52 = (double)(float)fr(g, fr(g, (double)rdf32(t50 + 4u) - (double)rdf32(sp0 - 0x9cu)) * (double)rdf32(COW_IMG(0x1032a400u)));
    wrf32(sp0 - 0xacu, (float)d52);
    g->eax = rd32(arg1);
    t53 = rd32(arg1);
    t54 = cow_thiscall(g, rd32(t53 + 0x14cu), arg1, 0);
    if ((uint8_t)t54 == 0u)
    {
        eax = t54;
    }
    else
    {
        eax = t54;
        d55 = (double)rdf32(sp0 - 0xacu);
        if ((cow_fsw(g, d55, (double)rdf32(COW_IMG(0x10329990u)), 0u) & 0x100u) != 0u)
        {
            eax = cow_fsw(g, d55, (double)rdf32(COW_IMG(0x10329990u)), 0u) & 0x100u;
        }
        else
        {
            eax = cow_fsw(g, d55, (double)rdf32(COW_IMG(0x10329990u)), 0u) & 0x100u;
            wr32(sp0 - 0xacu, 0x40000000u);
            loc_ac = 0x40000000u;
        }
    }
    g->eax = eax;
    g->edx = rd32(arg1);
    t56 = rd32(arg1);
    g->esp = sp0 - 0xbcu;
    t57 = cow_thiscall(g, rd32(t56 + 0x1bcu), arg1, 0);
    t58 = g->edx;
    eax = t57;
    edx = t58;
    x0 = fr(g, (double)rdf32(t57 + 4u) - (double)rdf32(sp0 - 0xacu));
L_10020e2f: ;
    wrf32(arg2 + 4u, (float)x0);
    goto L_10020e32;
L_10020d65: ;
    wr32(sp0 - 0xc0u, sp0 - 0xa0u);
    wr32(sp0 - 0xc4u, 5u);
    g->esp = sp0 - 0xbcu;
    cow_thiscall(g, rd32(rd32(arg1) + 0x1c4u), arg1, 2, 5u, sp0 - 0xa0u);
    wr32(sp0 - 0xc0u, sp0 - 0x50u);
    wr32(sp0 - 0xc4u, 1u);
    g->eax = sp0 - 0x50u;
    g->edx = rd32(arg1);
    t59 = rd32(arg1);
    t60 = cow_thiscall(g, rd32(t59 + 0x1c4u), arg1, 2, 1u, sp0 - 0x50u);
    t61 = g->edx;
    wr8(sp0 - 0xa7u, (uint8_t)t60);
    if ((uint8_t)ebx == 0u)
    {
        eax = t60;
        edx = t61;
    }
    else
    {
        eax = t60;
        g->eax = eax;
        g->edx = rd32(arg1);
        t62 = rd32(arg1);
        g->esp = sp0 - 0xbcu;
        t63 = cow_thiscall(g, rd32(t62 + 0x1bcu), arg1, 0);
        t64 = g->ecx;
        t65 = g->edx;
        wr32(sp0 - 0xc0u, t63);
        wr32(sp0 - 0xc4u, arg2);
        g->edx = t65;
        t66 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, arg2, t63);
        t67 = g->edx;
        eax = t66;
        edx = t67;
    }
    if (rd32(arg1 + 0x768u) == 0u)
    {
        x0 = (double)rdf32(COW_IMG(0x1032a3fcu));
    }
    else
    {
        edi = rd32(arg1 + 0x768u);
        x0 = (double)rdf32(COW_IMG(0x1032a3fcu));
        g->eax = rd32(edi);
        g->edx = edx;
        t68 = rd32(edi);
        g->esp = sp0 - 0xbcu;
        t69 = cow_thiscall(g, rd32(t68 + 0x110u), edi, 0);
        t70 = g->edx;
        d71 = cow_take_float(g);
        if (!(d71 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (t69 & 0xffff0000u) | (uint16_t)cow_fsw(g, d71, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            g->eax = eax;
            g->edx = rd32(edi);
            t72 = rd32(edi);
            g->esp = sp0 - 0xbcu;
            t73 = cow_thiscall(g, rd32(t72 + 0x110u), edi, 0);
            t74 = g->edx;
            d75 = cow_take_float(g);
            eax = t73;
            edx = t74;
            x0 = d75;
        }
        else
        {
            eax = (t69 & 0xffff0000u) | (uint16_t)cow_fsw(g, d71, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            edx = t70;
            x0 = (double)rdf32(edi + 0x754u);
        }
        x0 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032a3fcu)));
    }
    d76 = fr(g, x0 + fr(g, fr(g, (double)rdf32(sp0 - 0x9cu) - (double)rdf32(sp0 - 0x4cu)) * (double)rdf32(COW_IMG(0x1032a400u))));
    wrf32(sp0 - 0xa4u, (float)(double)(float)d76);
    if (!(d76 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d76, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        loc_a4_f = (double)(float)d76;
        x0 = d76;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d76, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        loc_a4_f = (double)(float)d76;
        x0 = d76;
        x0 = -x0;
    }
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 0u) & 0x4100u) == 0u)
    {
        wr32(sp0 - 0xa4u, 0xc0000000u);
    }
    g->eax = rd32(arg1);
    g->edx = edx;
    t77 = rd32(arg1);
    g->esp = sp0 - 0xbcu;
    t78 = cow_thiscall(g, rd32(t77 + 0x1bcu), arg1, 0);
    t79 = g->edx;
    eax = t78;
    edx = t79;
    x0 = fr(g, (double)rdf32(sp0 - 0xa4u) + (double)rdf32(t78 + 4u));
    goto L_10020e2f;
L_10020f39: ;
    wr32(sp0 - 0xacu, 0u);
    wr32(sp0 - 0xa4u, 0u);
    if (rd8(sp0 - 0xa6u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0xa6u);
        goto L_10020f59;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0xa6u);
    if (rd8(sp0 - 0xa5u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0xa5u);
        goto L_10020f76;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0xa5u);
L_10020f59: ;
    wr32(sp0 - 0xc0u, 6u);
    wr32(sp0 - 0xc4u, 0x3fu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xb4u;
    t123 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 4, 0x3fu, 6u, rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u));
    t124 = g->ecx;
    t125 = g->edx;
    d126 = cow_take_float(g);
    wrf32(sp0 - 0xacu, (float)(double)(float)d126);
    wr32(sp0 - 0xc8u, 7u);
    wr32(sp0 - 0xccu, 0x3fu);
    g->edx = t125;
    g->esp = sp0 - 0xbcu;
    t127 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), t124, 4, 0x3fu, 7u, 0x3fu, 6u);
    t128 = g->ecx;
    t129 = g->edx;
    d130 = cow_take_float(g);
    wrf32(sp0 - 0xa4u, (float)(double)(float)d130);
    eax = t127;
    ecx = t128;
    edx = t129;
L_10020f76: ;
    wr32(sp0 - 0xc0u, 0x8du);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xbcu;
    t131 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0x8du);
    t132 = g->ecx;
    t133 = g->edx;
    if (t131 == 0u)
    {
        eax = t131;
        ecx = t132;
        edx = t133;
        loc_ac_f = cow_bits2f(0u);
    }
    else
    {
        eax = t131;
        ecx = t132;
        edx = t133;
        d134 = (double)(float)fr(g, (double)rdf32(sp0 - 0xacu) * (double)rdf32(COW_IMG(0x1032a3f0u)));
        wrf32(sp0 - 0xacu, (float)d134);
        loc_ac_f = d134;
    }
    wr32(sp0 - 0xc0u, 0x8eu);
    g->edx = edx;
    g->esp = sp0 - 0xbcu;
    t135 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0x8eu);
    t136 = g->edx;
    if (t135 == 0u)
    {
        eax = t135;
        edx = t136;
        x0 = (double)rdf32(sp0 - 0xa4u);
    }
    else
    {
        eax = t135;
        edx = t136;
        x0 = (double)rdf32(sp0 - 0xa4u);
        x0 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032a3f0u)));
    }
    d137 = fr(g, fr(g, fr(g, fr(g, x0 * (double)rdf32(COW_IMG(0x1032a3f8u))) - (double)rdf32(COW_IMG(0x10456d64u))) * (double)rdf32(COW_IMG(0x10329ce4u))) + (double)rdf32(COW_IMG(0x10456d64u)));
    wrf32(COW_IMG(0x10456d64u), (float)d137);
    d138 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xacu) * (double)rdf32(COW_IMG(0x1032a3f4u))) - (double)rdf32(COW_IMG(0x10456d68u))) * (double)rdf32(COW_IMG(0x10329ce4u))) + (double)rdf32(COW_IMG(0x10456d68u)));
    wrf32(COW_IMG(0x10456d68u), (float)d138);
    d139 = (double)(float)fr(g, d138 + (double)rdf32(arg1 + 0x48u));
    wrf32(sp0 - 0xacu, (float)d139);
    d140 = fr(g, d138 + (double)rdf32(arg1 + 0x48u));
    if ((cow_fsw(g, d140, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d140, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        loc_ac_f = d139;
    }
    else
    {
        eax = cow_fsw(g, d140, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        loc_ac_f = d139;
        d141 = (double)(float)fr(g, loc_ac_f - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(sp0 - 0xacu, (float)d141);
        loc_ac_f = d141;
    }
    if (!(loc_ac_f < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_ac_f, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_ac_f, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d142 = (double)(float)fr(g, loc_ac_f + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(sp0 - 0xacu, (float)d142);
        loc_ac_f = d142;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xbcu;
    t143 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x90u, 0);
    t144 = g->edx;
    g->edx = t144;
    cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x90u, 0);
    t145 = g->edx;
    wr32(sp0 - 0xc0u, rd32(COW_IMG(0x10456d64u)));
    g->eax = rd32(COW_IMG(0x10456d64u));
    g->edx = t145;
    t146 = rd32(COW_IMG(0x10456d64u));
    t147 = cow_thiscall(g, COW_IMG(0x10027c20u), sp0 - 0x90u, 1, t146);
    t148 = g->edx;
    t149 = rd32(sp0 - 0xacu);
    wr32(sp0 - 0xc0u, t149);
    t150 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x90u, 1, t149);
    t151 = g->ecx;
    wr32(sp0 - 0xc0u, COW_IMG(0x10351254u));
    wr32(sp0 - 0xc4u, sp0 - 0xa0u);
    g->edx = sp0 - 0xa0u;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0xa0u, COW_IMG(0x10351254u));
    t152 = g->edx;
    wr32(sp0 - 0xc0u, sp0 - 0xa0u);
    g->eax = sp0 - 0xa0u;
    g->edx = t152;
    t153 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x90u, 1, sp0 - 0xa0u);
    t154 = g->edx;
    wr32(sp0 - 0xc0u, arg2);
    wr32(sp0 - 0xc4u, sp0 - 0xa0u);
    wr32(sp0 - 0xc8u, arg3);
    g->edx = t154;
    t155 = cow_cdecl(g, COW_IMG(0x10026fa0u), 3, arg3, sp0 - 0xa0u, arg2);
    t156 = g->edx;
    g->edx = t156;
    t157 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t158 = g->edx;
    t159 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    eax = t159;
    ebx = rd32(sp0 - 0xb4u);
    ebp = rd32(sp0 - 0xb8u);
    edi = rd32(sp0 - 0xbcu);
L_100210a6: ;
    g->ebx = ebx;
    g->edi = edi;
    g->ebp = ebp;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10020ba0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10020ba0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
