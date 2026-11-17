/* f_0x1001c930 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1001c930(Guest* g)
{
    double d102;
    double d106;
    double d110;
    double d118;
    double d122;
    double d126;
    double d130;
    double d32;
    double d36;
    double d40;
    double d44;
    double d57;
    double d61;
    double d65;
    double d69;
    double d77;
    double d81;
    double d85;
    double d89;
    double d98;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_f44;
    uint32_t loc_f48;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t107;
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
    uint32_t t114;
    uint32_t t115;
    uint32_t t116;
    uint32_t t117;
    uint32_t t119;
    uint32_t t12;
    uint32_t t120;
    uint32_t t121;
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
    uint32_t t134;
    uint32_t t135;
    uint32_t t136;
    uint32_t t137;
    uint32_t t138;
    uint32_t t139;
    uint32_t t14;
    uint32_t t140;
    uint32_t t141;
    uint32_t t142;
    uint32_t t143;
    uint32_t t144;
    uint32_t t145;
    uint32_t t146;
    uint32_t t147;
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
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
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
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t t99;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 3952u);

    if (arg1 == 0u) goto L_1001c93d;
    wr32(sp0 - 0xf4cu, in_ebx);
    wr32(sp0 - 0xf50u, in_ebp);
    wr32(sp0 - 0xf54u, in_esi);
    wr32(sp0 - 0xf58u, in_edi);
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xf58u;
    t1 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0xf40u, 0);
    t2 = g->edx;
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0xf40u, 0);
    t3 = g->edx;
    wr32(sp0 - 0xf5cu, sp0 - 0xf40u);
    wr32(sp0 - 0xf60u, 0x100u);
    cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, sp0 - 0xf40u);
    if ((int32_t)(rd32(arg1 + 0x14a8u) - 1u) >= 0)
    {
        ebp = rd32(arg1 + 0x14a8u) - 1u;
    }
    else
    {
        ebp = rd32(arg1 + 0x14a8u) - 1u;
        ebp = ebp + 0x50u;
    }
    wr32(sp0 - 0xf48u, 0u);
    if ((int32_t)rd32(arg1 + 0x14acu) <= 0)
    {
        ebx = in_ebx;
    }
    else
    {
        eax = rd32(arg1 + 0x14acu);
        edi = ebp << 4u;
        loc_f48 = 0u;
L_1001c996: ;
        t4 = arg1 + edi + 0x540u;
        wr32(sp0 - 0xf5cu, t4);
        t5 = arg1 + edi + 0x40u;
        wr32(sp0 - 0xf60u, t5);
        t6 = edi + sp0 - 0xf00u;
        wr32(sp0 - 0xf64u, t6);
        g->eax = eax;
        g->ecx = t4;
        g->edx = t5;
        g->esp = sp0 - 0xf58u;
        t7 = cow_cdecl(g, COW_IMG(0x10026fa0u), 3, t6, t5, t4);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(sp0 - 0xf68u, 0x3f000000u);
        wr32(sp0 - 0xf6cu, t6);
        g->esp = sp0 - 0xf64u;
        cow_cdecl(g, COW_IMG(0x100272b0u), 2, t6, 0x3f000000u);
        t10 = rd32(sp0 - 0xf48u) + 1u;
        wr32(sp0 - 0xf48u, t10);
        if ((int32_t)(ebp - 1u) >= 0)
        {
            eax = ebp - 1u;
            ebx = t6;
            loc_f48 = t10;
            ebp = eax;
            edi = edi - 0x10u;
        }
        else
        {
            eax = ebp - 1u;
            ebx = t6;
            loc_f48 = t10;
            ebp = eax + 0x50u;
            edi = edi + 0x4f0u;
        }
        if ((int32_t)loc_f48 < (int32_t)rd32(arg1 + 0x14acu))
        {
            eax = loc_f48;
            goto L_1001c996;
        }
    }
    wr32(sp0 - 0xf5cu, 2u);
    wr32(sp0 - 0xf60u, 1u);
    wr32(sp0 - 0xf64u, 0u);
    t11 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf68u, t11);
    g->edx = rd32(t11);
    t12 = rd32(t11);
    g->esp = sp0 - 0xf58u;
    cow_thiscall(g, rd32(t12 + 0xfcu), rd32(COW_IMG(0x1045666cu)), 4, t11, 0u, 1u, 2u);
    t13 = g->edx;
    wr32(sp0 - 0xf5cu, 0u);
    wr32(sp0 - 0xf60u, 2u);
    wr32(sp0 - 0xf64u, 0u);
    t14 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf68u, t14);
    cow_thiscall(g, rd32(rd32(t14) + 0xfcu), rd32(t14), 4, t14, 0u, 2u, 0u);
    wr32(sp0 - 0xf5cu, 2u);
    wr32(sp0 - 0xf60u, 4u);
    wr32(sp0 - 0xf64u, 0u);
    t15 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf68u, t15);
    cow_thiscall(g, rd32(rd32(t15) + 0xfcu), rd32(t15), 4, t15, 0u, 4u, 2u);
    wr32(sp0 - 0xf5cu, 0u);
    wr32(sp0 - 0xf60u, 5u);
    wr32(sp0 - 0xf64u, 0u);
    t16 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf68u, t16);
    cow_thiscall(g, rd32(rd32(t16) + 0xfcu), rd32(t16), 4, t16, 0u, 5u, 0u);
    wr32(sp0 - 0xf5cu, 1u);
    wr32(sp0 - 0xf60u, 1u);
    wr32(sp0 - 0xf64u, 1u);
    t17 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf68u, t17);
    cow_thiscall(g, rd32(rd32(t17) + 0xfcu), rd32(t17), 4, t17, 1u, 1u, 1u);
    wr32(sp0 - 0xf5cu, 1u);
    wr32(sp0 - 0xf60u, 4u);
    wr32(sp0 - 0xf64u, 1u);
    t18 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf68u, t18);
    cow_thiscall(g, rd32(rd32(t18) + 0xfcu), rd32(t18), 4, t18, 1u, 4u, 1u);
    wr32(sp0 - 0xf5cu, 0u);
    wr32(sp0 - 0xf60u, 0x89u);
    t19 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf64u, t19);
    cow_thiscall(g, rd32(rd32(t19) + 0xc8u), rd32(t19), 3, t19, 0x89u, 0u);
    wr32(sp0 - 0xf5cu, 0u);
    wr32(sp0 - 0xf60u, 0x1cu);
    t20 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf64u, t20);
    cow_thiscall(g, rd32(rd32(t20) + 0xc8u), rd32(t20), 3, t20, 0x1cu, 0u);
    wr32(sp0 - 0xf5cu, 0u);
    wr32(sp0 - 0xf60u, 0xeu);
    t21 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf64u, t21);
    cow_thiscall(g, rd32(rd32(t21) + 0xc8u), rd32(t21), 3, t21, 0xeu, 0u);
    wr32(sp0 - 0xf5cu, 1u);
    wr32(sp0 - 0xf60u, 0x8fu);
    t22 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf64u, t22);
    cow_thiscall(g, rd32(rd32(t22) + 0xc8u), rd32(t22), 3, t22, 0x8fu, 1u);
    wr32(sp0 - 0xf5cu, 1u);
    wr32(sp0 - 0xf60u, 0x1bu);
    t23 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf64u, t23);
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t23, 0x1bu, 1u);
    wr32(sp0 - 0xf5cu, 0u);
    wr32(sp0 - 0xf60u, 0xfu);
    t24 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf64u, t24);
    cow_thiscall(g, rd32(rd32(t24) + 0xc8u), rd32(t24), 3, t24, 0xfu, 0u);
    wr32(sp0 - 0xf5cu, 5u);
    wr32(sp0 - 0xf60u, 0x13u);
    t25 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf64u, t25);
    cow_thiscall(g, rd32(rd32(t25) + 0xc8u), rd32(t25), 3, t25, 0x13u, 5u);
    wr32(sp0 - 0xf5cu, 2u);
    wr32(sp0 - 0xf60u, 0x14u);
    t26 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf64u, t26);
    cow_thiscall(g, rd32(rd32(t26) + 0xc8u), rd32(t26), 3, t26, 0x14u, 2u);
    wr32(sp0 - 0xf5cu, 1u);
    wr32(sp0 - 0xf60u, 0x16u);
    t27 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf64u, t27);
    cow_thiscall(g, rd32(rd32(t27) + 0xc8u), rd32(t27), 3, t27, 0x16u, 1u);
    if (rd32(arg1 + 0x151cu) == 0u)
    {
        eax = rd32(arg1 + 0x14a8u);
        if ((int32_t)(eax - 1u) >= 0)
        {
            eax = eax - 1u;
        }
        else
        {
            eax = eax - 1u;
            eax = eax + 0x50u;
        }
        wr32(sp0 - 0xf48u, eax);
        wr32(sp0 - 0xf44u, 0u);
        if ((int32_t)(rd32(arg1 + 0x14acu) * 2u) > 0)
        {
            edx = rd32(arg1 + 0x14acu) * 2u;
            loc_f48 = eax;
            ebx = sp0 - 0x9f4u;
            edi = eax << 4u;
            loc_f44 = 0u;
L_1001cdae: ;
            t94 = arg1 + edi + 0x40u;
            wr32(sp0 - 0xf5cu, t94);
            wr32(sp0 - 0xf60u, ebx - 0xcu);
            g->eax = t94;
            g->ecx = ebx - 0xcu;
            g->edx = edx;
            g->esp = sp0 - 0xf58u;
            t95 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, ebx - 0xcu, t94);
            t96 = g->ecx;
            t97 = g->edx;
            g->ecx = t96;
            g->edx = t97;
            d98 = (double)rdf32(arg1 + edi + 0xa4cu);
            fpush(g, d98);
            g->esp = sp0 - 0xf60u;
            t99 = cow_call_regs(g, COW_IMG(0x10311c6cu), t95, g->ecx, g->edx, 1, 0);
            t100 = g->ecx;
            t101 = g->edx;
            g->ecx = t100;
            g->edx = t101;
            d102 = (double)rdf32(arg1 + edi + 0xa40u);
            fpush(g, d102);
            t103 = cow_call_regs(g, COW_IMG(0x10311c6cu), t99, g->ecx, g->edx, 1, 0);
            t104 = g->ecx;
            t105 = g->edx;
            g->ecx = t104;
            g->edx = t105;
            d106 = (double)rdf32(arg1 + edi + 0xa44u);
            fpush(g, d106);
            t107 = cow_call_regs(g, COW_IMG(0x10311c6cu), t103, g->ecx, g->edx, 1, 0);
            t108 = g->ecx;
            t109 = g->edx;
            g->ecx = t108;
            d110 = (double)rdf32(arg1 + edi + 0xa48u);
            fpush(g, d110);
            t111 = cow_call_regs(g, COW_IMG(0x10311c6cu), t107, g->ecx, g->edx, 1, 0);
            t112 = g->ecx;
            t113 = arg1 + edi + 0x540u;
            wr32(sp0 - 0xf64u, t113);
            wr32(sp0 - 0xf68u, ebx + 4u);
            t114 = ((t99 << 8u | t103) << 8u | t107) << 8u | t111;
            wr32(ebx, t114);
            g->eax = ebx + 4u;
            g->ecx = t112;
            g->edx = t113;
            t115 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, ebx + 4u, t113);
            t116 = g->ecx;
            t117 = g->edx;
            g->ecx = t116;
            g->edx = t117;
            d118 = (double)rdf32(arg1 + edi + 0xf4cu);
            fpush(g, d118);
            g->esp = sp0 - 0xf58u;
            t119 = cow_call_regs(g, COW_IMG(0x10311c6cu), t115, g->ecx, g->edx, 1, 0);
            t120 = g->ecx;
            t121 = g->edx;
            g->ecx = t120;
            g->edx = t121;
            d122 = (double)rdf32(arg1 + edi + 0xf40u);
            fpush(g, d122);
            t123 = cow_call_regs(g, COW_IMG(0x10311c6cu), t119, g->ecx, g->edx, 1, 0);
            t124 = g->ecx;
            t125 = g->edx;
            g->ecx = t124;
            g->edx = t125;
            d126 = (double)rdf32(arg1 + edi + 0xf44u);
            fpush(g, d126);
            t127 = cow_call_regs(g, COW_IMG(0x10311c6cu), t123, g->ecx, g->edx, 1, 0);
            t128 = g->ecx;
            t129 = g->edx;
            d130 = (double)rdf32(arg1 + edi + 0xf48u);
            fpush(g, d130);
            t131 = cow_call_regs(g, COW_IMG(0x10311c6cu), t127, g->ecx, g->edx, 1, 0);
            t132 = ((t119 << 8u | t123) << 8u | t127) << 8u | t131;
            t133 = rd32(sp0 - 0xf48u);
            wr32(ebx + 0x10u, t132);
            t134 = rd32(sp0 - 0xf44u) + 2u;
            wr32(sp0 - 0xf44u, t134);
            if ((int32_t)(t133 - 1u) >= 0)
            {
                eax = t133 - 1u;
                ebx = ebx + 0x20u;
                loc_f44 = t134;
                edi = edi - 0x10u;
            }
            else
            {
                eax = t133 - 1u;
                ebx = ebx + 0x20u;
                loc_f44 = t134;
                eax = eax + 0x50u;
                edi = edi + 0x4f0u;
            }
            wr32(sp0 - 0xf48u, eax);
            if ((int32_t)loc_f44 < (int32_t)(rd32(arg1 + 0x14acu) * 2u))
            {
                edx = rd32(arg1 + 0x14acu) * 2u;
                loc_f48 = eax;
                goto L_1001cdae;
            }
        }
    }
    else
    {
        eax = rd32(arg1 + 0x14a8u);
        if ((int32_t)(eax - 1u) >= 0)
        {
            eax = eax - 1u;
        }
        else
        {
            eax = eax - 1u;
            eax = eax + 0x50u;
        }
        wr32(sp0 - 0xf48u, eax);
        wr32(sp0 - 0xf44u, 0u);
        if ((int32_t)(rd32(arg1 + 0x14acu) * 2u) > 0)
        {
            edx = rd32(arg1 + 0x14acu) * 2u;
            loc_f48 = eax;
            ebx = eax << 4u;
            ebp = sp0 - 0x9f4u;
            loc_f44 = 0u;
L_1001cb7a: ;
            t28 = ebx + sp0 - 0xf00u;
            wr32(sp0 - 0xf5cu, t28);
            wr32(sp0 - 0xf60u, ebp - 0xcu);
            g->eax = t28;
            g->ecx = ebp - 0xcu;
            g->edx = edx;
            g->esp = sp0 - 0xf58u;
            t29 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, ebp - 0xcu, t28);
            t30 = g->ecx;
            t31 = g->edx;
            g->ecx = t30;
            g->edx = t31;
            d32 = (double)rdf32(arg1 + ebx + 0xa4cu);
            fpush(g, d32);
            g->esp = sp0 - 0xf60u;
            t33 = cow_call_regs(g, COW_IMG(0x10311c6cu), t29, g->ecx, g->edx, 1, 0);
            t34 = g->ecx;
            t35 = g->edx;
            g->ecx = t34;
            g->edx = t35;
            d36 = (double)rdf32(arg1 + ebx + 0xa40u);
            fpush(g, d36);
            t37 = cow_call_regs(g, COW_IMG(0x10311c6cu), t33, g->ecx, g->edx, 1, 0);
            t38 = g->ecx;
            t39 = g->edx;
            g->ecx = t38;
            g->edx = t39;
            d40 = (double)rdf32(arg1 + ebx + 0xa44u);
            fpush(g, d40);
            t41 = cow_call_regs(g, COW_IMG(0x10311c6cu), t37, g->ecx, g->edx, 1, 0);
            t42 = g->ecx;
            t43 = g->edx;
            g->ecx = t42;
            d44 = (double)rdf32(arg1 + ebx + 0xa48u);
            fpush(g, d44);
            t45 = cow_call_regs(g, COW_IMG(0x10311c6cu), t41, g->ecx, g->edx, 1, 0);
            t46 = g->ecx;
            t47 = arg1 + ebx + 0x40u;
            wr32(sp0 - 0xf64u, t47);
            wr32(sp0 - 0xf68u, ebp + 4u);
            t48 = ((t33 << 8u | t37) << 8u | t41) << 8u | t45;
            wr32(ebp, t48);
            cow_cdecl(g, COW_IMG(0x10026eb0u), 2, ebp + 4u, t47);
            t49 = rd32(sp0 - 0xf48u);
            wr32(ebp + 0x10u, t48);
            t50 = rd32(sp0 - 0xf44u) + 2u;
            wr32(sp0 - 0xf44u, t50);
            if ((int32_t)(t49 - 1u) >= 0)
            {
                eax = t49 - 1u;
                ebp = ebp + 0x20u;
                loc_f44 = t50;
                ebx = ebx - 0x10u;
            }
            else
            {
                eax = t49 - 1u;
                ebp = ebp + 0x20u;
                loc_f44 = t50;
                eax = eax + 0x50u;
                ebx = ebx + 0x4f0u;
            }
            wr32(sp0 - 0xf48u, eax);
            if ((int32_t)loc_f44 < (int32_t)(rd32(arg1 + 0x14acu) * 2u))
            {
                edx = rd32(arg1 + 0x14acu) * 2u;
                loc_f48 = eax;
                goto L_1001cb7a;
            }
        }
        if ((int32_t)(rd32(arg1 + 0x14acu) * 2u - 2u) > 0)
        {
            wr32(sp0 - 0xf5cu, 0x42u);
            t51 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0xf60u, t51);
            g->esp = sp0 - 0xf58u;
            cow_thiscall(g, rd32(rd32(t51) + 0x130u), rd32(t51), 2, t51, 0x42u);
            wr32(sp0 - 0xf5cu, 0x10u);
            wr32(sp0 - 0xf60u, sp0 - 0xa00u);
            t52 = rd32(arg1 + 0x14acu) * 2u - 2u;
            wr32(sp0 - 0xf64u, t52);
            wr32(sp0 - 0xf68u, 5u);
            g->ebx = ebx;
            cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 5u, t52, sp0 - 0xa00u, 0x10u);
        }
        if ((int32_t)(rd32(arg1 + 0x14a8u) - 1u) >= 0)
        {
            eax = rd32(arg1 + 0x14a8u) - 1u;
        }
        else
        {
            eax = rd32(arg1 + 0x14a8u) - 1u;
            eax = eax + 0x50u;
        }
        wr32(sp0 - 0xf48u, eax);
        wr32(sp0 - 0xf44u, 0u);
        if ((int32_t)(rd32(arg1 + 0x14acu) * 2u) > 0)
        {
            edx = rd32(arg1 + 0x14acu) * 2u;
            loc_f48 = eax;
            ebx = sp0 - 0x9f4u;
            edi = eax << 4u;
            loc_f44 = 0u;
L_1001cc97: ;
            t53 = edi + sp0 - 0xf00u;
            wr32(sp0 - 0xf5cu, t53);
            wr32(sp0 - 0xf60u, ebx - 0xcu);
            g->eax = t53;
            g->ecx = ebx - 0xcu;
            g->edx = edx;
            g->esp = sp0 - 0xf58u;
            t54 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, ebx - 0xcu, t53);
            t55 = g->ecx;
            t56 = g->edx;
            g->ecx = t55;
            g->edx = t56;
            d57 = (double)rdf32(arg1 + edi + 0xa4cu);
            fpush(g, d57);
            g->esp = sp0 - 0xf60u;
            t58 = cow_call_regs(g, COW_IMG(0x10311c6cu), t54, g->ecx, g->edx, 1, 0);
            t59 = g->ecx;
            t60 = g->edx;
            g->ecx = t59;
            g->edx = t60;
            d61 = (double)rdf32(arg1 + edi + 0xa40u);
            fpush(g, d61);
            t62 = cow_call_regs(g, COW_IMG(0x10311c6cu), t58, g->ecx, g->edx, 1, 0);
            t63 = g->ecx;
            t64 = g->edx;
            g->ecx = t63;
            g->edx = t64;
            d65 = (double)rdf32(arg1 + edi + 0xa44u);
            fpush(g, d65);
            t66 = cow_call_regs(g, COW_IMG(0x10311c6cu), t62, g->ecx, g->edx, 1, 0);
            t67 = g->ecx;
            t68 = g->edx;
            g->ecx = t67;
            d69 = (double)rdf32(arg1 + edi + 0xa48u);
            fpush(g, d69);
            t70 = cow_call_regs(g, COW_IMG(0x10311c6cu), t66, g->ecx, g->edx, 1, 0);
            t71 = g->ecx;
            t72 = arg1 + edi + 0x540u;
            wr32(sp0 - 0xf64u, t72);
            wr32(sp0 - 0xf68u, ebx + 4u);
            t73 = ((t58 << 8u | t62) << 8u | t66) << 8u | t70;
            wr32(ebx, t73);
            g->eax = ebx + 4u;
            g->ecx = t71;
            g->edx = t72;
            t74 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, ebx + 4u, t72);
            t75 = g->ecx;
            t76 = g->edx;
            g->ecx = t75;
            g->edx = t76;
            d77 = (double)rdf32(arg1 + edi + 0xf4cu);
            fpush(g, d77);
            g->esp = sp0 - 0xf58u;
            t78 = cow_call_regs(g, COW_IMG(0x10311c6cu), t74, g->ecx, g->edx, 1, 0);
            t79 = g->ecx;
            t80 = g->edx;
            g->ecx = t79;
            g->edx = t80;
            d81 = (double)rdf32(arg1 + edi + 0xf40u);
            fpush(g, d81);
            t82 = cow_call_regs(g, COW_IMG(0x10311c6cu), t78, g->ecx, g->edx, 1, 0);
            t83 = g->ecx;
            t84 = g->edx;
            g->ecx = t83;
            g->edx = t84;
            d85 = (double)rdf32(arg1 + edi + 0xf44u);
            fpush(g, d85);
            t86 = cow_call_regs(g, COW_IMG(0x10311c6cu), t82, g->ecx, g->edx, 1, 0);
            t87 = g->ecx;
            t88 = g->edx;
            d89 = (double)rdf32(arg1 + edi + 0xf48u);
            fpush(g, d89);
            t90 = cow_call_regs(g, COW_IMG(0x10311c6cu), t86, g->ecx, g->edx, 1, 0);
            t91 = ((t78 << 8u | t82) << 8u | t86) << 8u | t90;
            t92 = rd32(sp0 - 0xf48u);
            wr32(ebx + 0x10u, t91);
            t93 = rd32(sp0 - 0xf44u) + 2u;
            wr32(sp0 - 0xf44u, t93);
            if ((int32_t)(t92 - 1u) >= 0)
            {
                eax = t92 - 1u;
                ebx = ebx + 0x20u;
                loc_f44 = t93;
                edi = edi - 0x10u;
            }
            else
            {
                eax = t92 - 1u;
                ebx = ebx + 0x20u;
                loc_f44 = t93;
                eax = eax + 0x50u;
                edi = edi + 0x4f0u;
            }
            wr32(sp0 - 0xf48u, eax);
            if ((int32_t)loc_f44 < (int32_t)(rd32(arg1 + 0x14acu) * 2u))
            {
                edx = rd32(arg1 + 0x14acu) * 2u;
                loc_f48 = eax;
                goto L_1001cc97;
            }
        }
    }
    if ((int32_t)(rd32(arg1 + 0x14acu) * 2u - 2u) > 0)
    {
        wr32(sp0 - 0xf5cu, 0x42u);
        t135 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xf60u, t135);
        g->esp = sp0 - 0xf58u;
        cow_thiscall(g, rd32(rd32(t135) + 0x130u), rd32(t135), 2, t135, 0x42u);
        wr32(sp0 - 0xf5cu, 0x10u);
        wr32(sp0 - 0xf60u, sp0 - 0xa00u);
        t136 = rd32(arg1 + 0x14acu) * 2u - 2u;
        wr32(sp0 - 0xf64u, t136);
        wr32(sp0 - 0xf68u, 5u);
        g->ebx = ebx;
        cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 5u, t136, sp0 - 0xa00u, 0x10u);
    }
    wr32(sp0 - 0xf5cu, 1u);
    wr32(sp0 - 0xf60u, 0x89u);
    t137 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf64u, t137);
    g->esp = sp0 - 0xf58u;
    cow_thiscall(g, rd32(rd32(t137) + 0xc8u), rd32(t137), 3, t137, 0x89u, 1u);
    wr32(sp0 - 0xf5cu, 0u);
    wr32(sp0 - 0xf60u, 0x1cu);
    t138 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf64u, t138);
    cow_thiscall(g, rd32(rd32(t138) + 0xc8u), rd32(t138), 3, t138, 0x1cu, 0u);
    wr32(sp0 - 0xf5cu, 1u);
    wr32(sp0 - 0xf60u, 0xeu);
    t139 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf64u, t139);
    cow_thiscall(g, rd32(rd32(t139) + 0xc8u), rd32(t139), 3, t139, 0xeu, 1u);
    wr32(sp0 - 0xf5cu, 0u);
    wr32(sp0 - 0xf60u, 0x8fu);
    t140 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf64u, t140);
    cow_thiscall(g, rd32(rd32(t140) + 0xc8u), rd32(t140), 3, t140, 0x8fu, 0u);
    wr32(sp0 - 0xf5cu, 0u);
    wr32(sp0 - 0xf60u, 0x1bu);
    t141 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf64u, t141);
    cow_thiscall(g, rd32(rd32(t141) + 0xc8u), rd32(t141), 3, t141, 0x1bu, 0u);
    wr32(sp0 - 0xf5cu, 1u);
    wr32(sp0 - 0xf60u, 0xfu);
    t142 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf64u, t142);
    g->eax = t142;
    g->edx = rd32(COW_IMG(0x1045666cu));
    t143 = rd32(COW_IMG(0x1045666cu));
    t144 = cow_thiscall(g, rd32(rd32(t142) + 0xc8u), rd32(t142), 3, t142, 0xfu, 1u);
    t145 = g->edx;
    g->edx = t145;
    t146 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t147 = g->edx;
    g->ebx = rd32(sp0 - 0xf4cu);
    g->esi = rd32(sp0 - 0xf54u);
    g->edi = rd32(sp0 - 0xf58u);
    g->ebp = rd32(sp0 - 0xf50u);
    g->edx = t147;
    return t146;
L_1001c93d: ;
    g->ebx = in_ebx;
    return in_eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001c930(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1001c930(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
