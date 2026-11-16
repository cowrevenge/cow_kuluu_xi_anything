/* f_0x10039e50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10039e50(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_1c;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_4c;
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
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t125;
    uint32_t t126;
    uint32_t t127;
    uint32_t t128;
    uint32_t t129;
    uint32_t t13;
    uint32_t t130;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 108u);

    wr32(sp0 - 0x34u, in_ebx);
    wr32(sp0 - 0x38u, in_ebp);
    wr32(sp0 - 0x3cu, in_esi);
    wr32(sp0 - 0x40u, in_edi);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    t1 = rd8(self + 0x29u);
    wr8(sp0 - 0x2du, 0u);
    if ((int8_t)t1 >= 0)
    {
        eax = (in_eax & 0xffffff00u) | t1;
        goto L_10039e84;
    }
    eax = (in_eax & 0xffffff00u) | t1;
    if (rd32(rd32(self + 0x20u)) == 0u) goto L_10039e84;
    wr8(sp0 - 0x2du, 1u);
    edx = in_edx;
    ebx = in_ebx;
L_1003a3ed: ;
    wr32(sp0 - 0xcu, 0u);
    t35 = rd16(self + 0x26u);
    wr32(sp0 - 4u, t35);
    wr32(sp0 - 0x10u, 0u);
    t36 = rd16(self + 0x24u);
    wr32(sp0 - 8u, t36);
    if ((rd8(self + 0x2cu) & 7u) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(self + 0x2cu);
        goto L_1003a808;
    }
    eax = t35;
    ecx = t36;
    edx = (edx & 0xffffff00u) | rd8(self + 0x2cu);
    wr32(sp0 - 0x24u, 0u);
    if (rd8(sp0 - 0x2du) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(sp0 - 0x2du);
        goto L_1003a449;
    }
    if ((rd8(self + 0x29u) & 0xffffff7fu) == 0u) goto L_1003a462;
    edx = rd8(self + 0x29u) & 0xffffff7fu;
    if ((int32_t)edx <= 0) goto L_1003a4c3;
    if ((int32_t)edx > 4) goto L_1003a4c3;
    edi = 0x20u;
L_1003a4d6: ;
    wr32(sp0 - 0x44u, sp0 - 0x24u);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, 0x15u);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x58u, eax);
    wr32(sp0 - 0x5cu, ecx);
    t37 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x60u, t37);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t37;
    g->esp = sp0 - 0x40u;
    t38 = cow_stdcall(g, COW_IMG(0x102d2fd9u), 8, t37, ecx, eax, 0u, 0u, 0x15u, 1u, sp0 - 0x24u);
    t39 = g->ecx;
    t40 = g->edx;
    if ((int32_t)t38 < 0)
    {
        ecx = t39;
        edx = t40;
        goto L_1003a487;
    }
    ebx = sp0 - 0x24u;
L_1003a4f6: ;
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, sp0 - 0x18u);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x54u, 0u);
    g->edx = rd32(0u);
    t45 = rd32(0u);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, rd32(t45 + 0x40u), sp0 - 0x18u, 5, 0u, 0u, sp0 - 0x18u, 0u, 0u);
    t46 = g->edx;
    if (edi == 0x10u)
    {
        edx = t46;
        if (rd16(self + 0x26u) != 0u)
        {
            ecx = rd16(self + 0x24u);
            edi = 0u;
L_1003a566: ;
            if ((int32_t)ecx <= 0)
            {
                edx = 0u;
                goto L_1003a58c;
            }
            eax = rd32(sp0 - 0x14u) + rd32(sp0 - 0x18u) * edi;
            edx = 0u;
L_1003a579: ;
            wr16(eax, 0x8000u);
            if ((int32_t)(edx + 1u) < (int32_t)rd16(self + 0x24u))
            {
                eax = eax + 2u;
                edx = edx + 1u;
                goto L_1003a579;
            }
            ecx = rd16(self + 0x24u);
            edx = edx + 1u;
L_1003a58c: ;
            if ((int32_t)(edi + 1u) < (int32_t)rd16(self + 0x26u))
            {
                edi = edi + 1u;
                goto L_1003a566;
            }
        }
    }
    else
    {
        edx = t46;
        if (edi == 0x20u)
        {
            if (rd16(self + 0x26u) != 0u)
            {
                ecx = rd16(self + 0x24u);
                edi = 0u;
L_1003a524: ;
                if ((int32_t)ecx <= 0) goto L_1003a54b;
                eax = rd32(sp0 - 0x14u) + rd32(sp0 - 0x18u) * edi;
                edx = 0u;
L_1003a537: ;
                wr32(eax, 0x80000000u);
                if ((int32_t)(edx + 1u) < (int32_t)rd16(self + 0x24u))
                {
                    eax = eax + 4u;
                    edx = edx + 1u;
                    goto L_1003a537;
                }
                ecx = rd16(self + 0x24u);
L_1003a54b: ;
                if ((int32_t)(edi + 1u) < (int32_t)rd16(self + 0x26u))
                {
                    edi = edi + 1u;
                    goto L_1003a524;
                }
                edx = rd16(self + 0x26u);
            }
        }
    }
    wr32(sp0 - 0x44u, 0u);
    t47 = rd32(sp0 - 0x24u);
    wr32(sp0 - 0x48u, t47);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, rd32(rd32(t47) + 0x44u), rd32(t47), 2, t47, 0u);
    if ((rd32(self + 0x2cu) & 7u) >= 6u)
    {
        ebx = (ebx & 0xffffff00u) | rd8(sp0 - 0x2du);
        edi = 0u;
L_1003a765: ;
        wr32(sp0 - 0x44u, sp0 - 0x2cu);
        wr32(sp0 - 0x48u, 0u);
        wr32(sp0 - 0x4cu, edi);
        t91 = rd32(self + 0x44u);
        wr32(sp0 - 0x50u, t91);
        g->esp = sp0 - 0x40u;
        cow_thiscall(g, rd32(rd32(rd32(self + 0x44u)) + 0x3cu), sp0 - 0x2cu, 4, t91, edi, 0u, sp0 - 0x2cu);
        if ((uint8_t)ebx == 0u)
        {
            wr32(sp0 - 0x44u, sp0 - 0x28u);
            wr32(sp0 - 0x48u, 0u);
            t97 = rd32(sp0 - 0x20u);
            wr32(sp0 - 0x4cu, t97);
            g->edx = sp0 - 0x28u;
            g->esp = sp0 - 0x40u;
            cow_thiscall(g, rd32(rd32(rd32(sp0 - 0x20u)) + 0x3cu), rd32(rd32(sp0 - 0x20u)), 3, t97, 0u, sp0 - 0x28u);
            t98 = g->edx;
            wr32(sp0 - 0x44u, 0u);
            wr32(sp0 - 0x48u, 1u);
            wr32(sp0 - 0x4cu, 0u);
            wr32(sp0 - 0x50u, 0u);
            t99 = rd32(sp0 - 0x28u);
            wr32(sp0 - 0x54u, t99);
            wr32(sp0 - 0x58u, 0u);
            wr32(sp0 - 0x5cu, 0u);
            t100 = rd32(sp0 - 0x2cu);
            wr32(sp0 - 0x60u, t100);
            g->ecx = t100;
            g->edx = t98;
            cow_stdcall(g, COW_IMG(0x102d4535u), 8, t100, 0u, 0u, t99, 0u, 0u, 1u, 0u);
            t101 = g->ecx;
            t102 = g->edx;
            if (rd32(sp0 - 0x28u) == 0u)
            {
                edx = t102;
            }
            else
            {
                eax = rd32(sp0 - 0x28u);
                ecx = t101;
                wr32(sp0 - 0x44u, eax);
                g->edx = rd32(eax);
                t103 = rd32(eax);
                g->esp = sp0 - 0x40u;
                cow_thiscall(g, rd32(t103 + 8u), ecx, 1, eax);
                t104 = g->edx;
                wr32(sp0 - 0x28u, 0u);
                edx = t104;
                loc_28 = 0u;
            }
        }
        else
        {
            wr32(sp0 - 0x44u, 0u);
            wr32(sp0 - 0x48u, 1u);
            wr32(sp0 - 0x4cu, sp0 - 0x10u);
            wr32(sp0 - 0x50u, 0u);
            t92 = rd32(rd32(self + 0x20u) + 4u);
            wr32(sp0 - 0x54u, t92);
            t93 = rd32(COW_IMG(0x10351c94u) + ((rd8(self + 0x29u) & 0xffffff00u) | (rd8(self + 0x29u) & 0x7fu)) * 4u);
            wr32(sp0 - 0x58u, t93);
            t94 = rd32(self + 0x20u) + 8u;
            wr32(sp0 - 0x5cu, t94);
            wr32(sp0 - 0x60u, 0u);
            wr32(sp0 - 0x64u, 0u);
            t95 = rd32(sp0 - 0x2cu);
            wr32(sp0 - 0x68u, t95);
            g->edx = t95;
            g->esp = sp0 - 0x40u;
            cow_stdcall(g, COW_IMG(0x102d2888u), 10, t95, 0u, 0u, t94, t93, t92, 0u, sp0 - 0x10u, 1u, 0u);
            t96 = g->edx;
            edx = t96;
        }
        if (rd32(sp0 - 0x2cu) == 0u)
        {
            eax = rd32(sp0 - 0x2cu);
        }
        else
        {
            eax = rd32(sp0 - 0x2cu);
            wr32(sp0 - 0x44u, eax);
            g->edx = edx;
            g->esp = sp0 - 0x40u;
            cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
            t105 = g->edx;
            wr32(sp0 - 0x2cu, 0u);
            eax = 0u;
            edx = t105;
            loc_2c = 0u;
        }
        if ((int32_t)(edi + 1u) < 6)
        {
            edi = edi + 1u;
            goto L_1003a765;
        }
    }
    else
    {
        edx = rd32(self + 0x2cu) & 7u;
        t48 = rd32(self + 0x44u);
        wr32(sp0 - 0x44u, t48);
        g->eax = t48;
        g->edx = edx;
        g->esp = sp0 - 0x40u;
        t49 = cow_thiscall(g, rd32(rd32(t48) + 0x34u), rd32(t48), 1, t48);
        t50 = g->edx;
        if (t49 == 0u)
        {
            edx = t50;
            goto L_1003a744;
        }
        ebx = 0u;
L_1003a5c6: ;
        edi = 0u;
L_1003a5c8: ;
        wr32(sp0 - 0x44u, sp0 - 0x2cu);
        wr32(sp0 - 0x48u, ebx);
        wr32(sp0 - 0x4cu, edi);
        t51 = rd32(self + 0x44u);
        wr32(sp0 - 0x50u, t51);
        g->esp = sp0 - 0x40u;
        cow_thiscall(g, rd32(rd32(rd32(self + 0x44u)) + 0x3cu), sp0 - 0x2cu, 4, t51, edi, ebx, sp0 - 0x2cu);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x44u, sp0 - 0x1cu);
        wr32(sp0 - 0x48u, 0u);
        t52 = rd32(sp0 - 0x24u);
        wr32(sp0 - 0x4cu, t52);
        cow_thiscall(g, rd32(rd32(rd32(sp0 - 0x24u)) + 0x3cu), sp0 - 0x1cu, 3, t52, 0u, sp0 - 0x1cu);
        t53 = g->ecx;
        wr32(sp0 - 0x44u, 0u);
        wr32(sp0 - 0x48u, 1u);
        wr32(sp0 - 0x4cu, 0u);
        wr32(sp0 - 0x50u, 0u);
        wr32(sp0 - 0x54u, 0u);
        wr32(sp0 - 0x58u, 0u);
        wr32(sp0 - 0x5cu, 0u);
        t54 = rd32(sp0 - 0x2cu);
        wr32(sp0 - 0x60u, t54);
        g->ecx = t53;
        g->edx = 0u;
        cow_stdcall(g, COW_IMG(0x102d4535u), 8, t54, 0u, 0u, 0u, 0u, 0u, 1u, 0u);
        t55 = g->ecx;
        t56 = g->edx;
        if (1u)
        {
            ecx = t55;
        }
        else
        {
            edx = t56;
            wr32(sp0 - 0x44u, 0u);
            t57 = rd32(0u);
            g->esp = sp0 - 0x40u;
            cow_thiscall(g, rd32(t57 + 8u), t57, 1, 0u);
            t58 = g->ecx;
            wr32(sp0 - 0x1cu, 0u);
            ecx = t58;
        }
        if (rd32(sp0 - 0x2cu) != 0u)
        {
            eax = rd32(sp0 - 0x2cu);
            wr32(sp0 - 0x44u, eax);
            g->esp = sp0 - 0x40u;
            cow_thiscall(g, rd32(rd32(eax) + 8u), ecx, 1, eax);
            wr32(sp0 - 0x2cu, 0u);
            loc_2c = 0u;
        }
        if ((int32_t)(edi + 1u) < 6)
        {
            edi = edi + 1u;
            goto L_1003a5c8;
        }
        if (ebx != 0u)
        {
            eax = rd32(self + 0x44u);
            goto L_1003a6cc;
        }
        eax = rd32(self + 0x44u);
        wr32(sp0 - 0x44u, sp0 - 0x2cu);
        wr32(sp0 - 0x48u, 0u);
        t59 = rd32(self + 0x2cu) & 7u;
        wr32(sp0 - 0x4cu, t59);
        wr32(sp0 - 0x50u, eax);
        g->eax = eax;
        g->esp = sp0 - 0x40u;
        t60 = cow_thiscall(g, rd32(rd32(eax) + 0x3cu), rd32(eax), 4, eax, t59, 0u, sp0 - 0x2cu);
        if (rd8(sp0 - 0x2du) == 0u)
        {
            wr32(sp0 - 0x44u, sp0 - 0x28u);
            wr32(sp0 - 0x48u, 0u);
            t66 = rd32(sp0 - 0x20u);
            wr32(sp0 - 0x4cu, t66);
            g->edx = sp0 - 0x28u;
            g->esp = sp0 - 0x40u;
            cow_thiscall(g, rd32(rd32(rd32(sp0 - 0x20u)) + 0x3cu), rd32(rd32(sp0 - 0x20u)), 3, t66, 0u, sp0 - 0x28u);
            t67 = g->edx;
            wr32(sp0 - 0x44u, 0u);
            wr32(sp0 - 0x48u, 1u);
            wr32(sp0 - 0x4cu, 0u);
            wr32(sp0 - 0x50u, 0u);
            t68 = rd32(sp0 - 0x28u);
            wr32(sp0 - 0x54u, t68);
            wr32(sp0 - 0x58u, 0u);
            wr32(sp0 - 0x5cu, 0u);
            t69 = rd32(sp0 - 0x2cu);
            wr32(sp0 - 0x60u, t69);
            g->ecx = t69;
            g->edx = t67;
            cow_stdcall(g, COW_IMG(0x102d4535u), 8, t69, 0u, 0u, t68, 0u, 0u, 1u, 0u);
            t70 = g->ecx;
            t71 = g->edx;
            if (rd32(sp0 - 0x28u) == 0u)
            {
                edx = t71;
            }
            else
            {
                eax = rd32(sp0 - 0x28u);
                ecx = t70;
                wr32(sp0 - 0x44u, eax);
                g->edx = rd32(eax);
                t72 = rd32(eax);
                g->esp = sp0 - 0x40u;
                cow_thiscall(g, rd32(t72 + 8u), ecx, 1, eax);
                t73 = g->edx;
                wr32(sp0 - 0x28u, 0u);
                edx = t73;
                loc_28 = 0u;
            }
        }
        else
        {
            wr32(sp0 - 0x44u, 0u);
            wr32(sp0 - 0x48u, 1u);
            wr32(sp0 - 0x4cu, sp0 - 0x10u);
            wr32(sp0 - 0x50u, 0u);
            t61 = rd32(rd32(self + 0x20u) + 4u);
            wr32(sp0 - 0x54u, t61);
            t62 = rd32(COW_IMG(0x10351c94u) + ((rd8(self + 0x29u) & 0xffffff00u) | (rd8(self + 0x29u) & 0x7fu)) * 4u);
            wr32(sp0 - 0x58u, t62);
            t63 = rd32(self + 0x20u) + 8u;
            wr32(sp0 - 0x5cu, t63);
            wr32(sp0 - 0x60u, 0u);
            wr32(sp0 - 0x64u, 0u);
            t64 = rd32(sp0 - 0x2cu);
            wr32(sp0 - 0x68u, t64);
            g->edx = t62;
            g->esp = sp0 - 0x40u;
            cow_stdcall(g, COW_IMG(0x102d2888u), 10, t64, 0u, 0u, t63, t62, t61, 0u, sp0 - 0x10u, 1u, 0u);
            t65 = g->edx;
            edx = t65;
        }
        if (rd32(sp0 - 0x2cu) == 0u) goto L_1003a732;
        eax = rd32(sp0 - 0x2cu);
        wr32(sp0 - 0x44u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x40u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t74 = g->edx;
        edx = t74;
L_1003a72e: ;
        wr32(sp0 - 0x2cu, 0u);
        loc_2c = 0u;
L_1003a732: ;
        t88 = rd32(self + 0x44u);
        wr32(sp0 - 0x44u, t88);
        g->eax = t88;
        g->edx = edx;
        g->esp = sp0 - 0x40u;
        t89 = cow_thiscall(g, rd32(rd32(t88) + 0x34u), rd32(t88), 1, t88);
        t90 = g->edx;
        if (ebx + 1u < t89)
        {
            ebx = ebx + 1u;
            goto L_1003a5c6;
        }
        edx = t90;
L_1003a744: ;
        eax = rd32(sp0 - 0x2cu);
    }
    if (rd32(sp0 - 0x24u) == 0u) goto L_1003a937;
    ecx = rd32(sp0 - 0x24u);
    wr32(sp0 - 0x44u, ecx);
    g->edx = rd32(ecx);
    t106 = rd32(ecx);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, rd32(t106 + 8u), ecx, 1, ecx);
    t107 = g->edx;
    edx = t107;
L_1003a933: ;
    eax = rd32(sp0 - 0x2cu);
L_1003a937: ;
    if (loc_28 == 0u)
    {
        ecx = loc_28;
    }
    else
    {
        ecx = loc_28;
        wr32(sp0 - 0x44u, ecx);
        g->edx = edx;
        g->esp = sp0 - 0x40u;
        cow_thiscall(g, rd32(rd32(ecx) + 8u), ecx, 1, ecx);
        t144 = g->ecx;
        t145 = g->edx;
        wr32(sp0 - 0x28u, 0u);
        eax = rd32(sp0 - 0x2cu);
        ecx = t144;
        edx = t145;
    }
    if (eax != 0u)
    {
        wr32(sp0 - 0x44u, eax);
        g->edx = edx;
        t146 = rd32(eax);
        g->esp = sp0 - 0x40u;
        cow_thiscall(g, rd32(t146 + 8u), t146, 1, eax);
        t147 = g->ecx;
        t148 = g->edx;
        wr32(sp0 - 0x2cu, 0u);
        ecx = t147;
        edx = t148;
    }
    if (rd32(sp0 - 0x20u) == 0u)
    {
        eax = rd32(sp0 - 0x20u);
    }
    else
    {
        eax = rd32(sp0 - 0x20u);
        wr32(sp0 - 0x44u, eax);
        g->eax = eax;
        g->edx = rd32(eax);
        t149 = rd32(eax);
        g->esp = sp0 - 0x40u;
        t150 = cow_thiscall(g, rd32(t149 + 8u), ecx, 1, eax);
        t151 = g->edx;
        eax = t150;
        edx = t151;
    }
    g->ebx = rd32(sp0 - 0x34u);
    g->esi = rd32(sp0 - 0x3cu);
    g->edi = rd32(sp0 - 0x40u);
    g->ebp = rd32(sp0 - 0x38u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10039e84: ;
    if ((uint8_t)eax == 0x10u) goto L_10039ea6;
    if ((uint8_t)eax == 0x18u) goto L_10039e9b;
    if ((uint8_t)eax != 0x20u) goto L_10039ed6;
    wr32(sp0 - 0x44u, sp0 - 0x20u);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, 0x15u);
    loc_4c = 0x15u;
L_10039eaf: ;
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x54u, 0u);
    t2 = rd16(self + 0x26u);
    wr32(sp0 - 0x58u, t2);
    t3 = rd16(self + 0x24u);
    wr32(sp0 - 0x5cu, t3);
    t4 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x60u, t4);
    g->eax = t4;
    g->ecx = t3;
    g->edx = t2;
    g->esp = sp0 - 0x40u;
    t5 = cow_stdcall(g, COW_IMG(0x102d2fd9u), 8, t4, t3, t2, 0u, 0u, loc_4c, 1u, sp0 - 0x20u);
    t6 = g->ecx;
    t7 = g->edx;
    if ((int32_t)t5 < 0)
    {
        ecx = t6;
        edx = t7;
        goto L_1003a487;
    }
L_10039ed6: ;
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, sp0 - 0x18u);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x54u, 0u);
    g->eax = 0u;
    g->esp = sp0 - 0x40u;
    t8 = cow_thiscall(g, rd32(rd32(0u) + 0x40u), sp0 - 0x18u, 5, 0u, 0u, sp0 - 0x18u, 0u, 0u);
    t9 = g->ecx;
    t10 = rd32(self + 0x1cu);
    wr32(sp0 - 0x1cu, t10);
    if (rd8(self + 0x29u) == 0x10u)
    {
        ecx = t9;
        loc_1c = t10;
        goto L_1003a239;
    }
    eax = (t8 & 0xffffff00u) | rd8(self + 0x29u);
    ecx = t9;
    edx = t10;
    loc_1c = t10;
    if ((uint8_t)eax == 0x18u) goto L_1003a0ba;
    if ((uint8_t)eax != 0x20u)
    {
        ebx = in_ebx;
        goto L_1003a3df;
    }
    if (!(rd32(self + 0x2cu) >> 3u & 1u)) goto L_10039f27;
    eax = rd32(self + 0x2cu) >> 3u;
    wr32(sp0 - 0x44u, sp0 - 0x18u);
    wr32(sp0 - 0x48u, self);
    t11 = rd32(self + 8u);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x1001e0a0u), t11, 2, self, sp0 - 0x18u);
    t12 = g->ecx;
    ecx = t12;
    ebx = in_ebx;
L_1003a3df: ;
    wr32(sp0 - 0x44u, 0u);
    t32 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x48u, t32);
    g->edx = rd32(t32);
    t33 = rd32(t32);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, rd32(t33 + 0x44u), ecx, 2, t32, 0u);
    t34 = g->edx;
    edx = t34;
    goto L_1003a3ed;
L_10039e9b: ;
    wr32(sp0 - 0x44u, sp0 - 0x20u);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, 0x14u);
    loc_4c = 0x14u;
    goto L_10039eaf;
L_10039ea6: ;
    wr32(sp0 - 0x44u, sp0 - 0x20u);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, 0x19u);
    loc_4c = 0x19u;
    goto L_10039eaf;
L_10039f27: ;
    if (rd16(self + 0x26u) == 0u)
    {
        ebx = in_ebx;
        goto L_1003a3df;
    }
    ebx = in_ebx;
    ebp = 0u;
L_10039f33: ;
    if ((int32_t)rd16(self + 0x24u) <= 0)
    {
        ecx = rd32(sp0 - 0x14u) + rd32(sp0 - 0x18u) * ebp;
        goto L_1003a0a6;
    }
    ecx = rd32(sp0 - 0x14u) + rd32(sp0 - 0x18u) * ebp;
    edx = rd16(self + 0x24u);
    edi = 0u;
L_10039f50: ;
    if (rd8(self + 0x28u) - 4u > 0x1cu) goto L_1003a097;
    eax = rd8(self + 0x28u) - 4u;
    t13 = rd32(COW_IMG(0x1003a978u) + rd8(COW_IMG(0x1003a990u) + eax) * 4u);
    switch (t13 - RD)
    {
    case 0x10039f70u: goto L_10039f70;
    case 0x10039ff2u: ebx = rd8(COW_IMG(0x1003a990u) + eax); goto L_10039ff2;
    case 0x1003a010u: ebx = rd8(COW_IMG(0x1003a990u) + eax); goto L_1003a010;
    case 0x1003a042u: ebx = rd8(COW_IMG(0x1003a990u) + eax); goto L_1003a042;
    case 0x1003a06cu: ebx = rd8(COW_IMG(0x1003a990u) + eax); goto L_1003a06c;
    case 0x1003a097u: ebx = rd8(COW_IMG(0x1003a990u) + eax); goto L_1003a097;
    default: rt_fatal(g, COW_IMG(0x10039f69u), "switch");
    }
    return 0;
L_10039f70: ;
    t16 = rd32(rd32(self + 0x1cu) + (rd8(rd32(self + 0x20u) + (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * edx - (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * edx) >> 0x1fu)) >> 1u)) >> 4u) * 4u);
    wr32(sp0 - 0x24u, t16);
    t17 = rd8(rd32(self + 0x20u) + (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * edx - (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * edx) >> 0x1fu)) >> 1u));
    wr8(ecx, (uint8_t)t16);
    wr8(ecx + 1u, (uint8_t)(t16 >> 8u));
    wr8(ecx + 2u, (uint8_t)(t16 >> 0x10u));
    wr8(ecx + 3u, t16 >> 0x18u);
    t18 = rd32(rd32(self + 0x1cu) + (rd8(rd32(self + 0x20u) + (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * rd16(self + 0x24u) - (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * rd16(self + 0x24u)) >> 0x1fu)) >> 1u)) & 0xfu) * 4u);
    wr32(sp0 - 0x24u, t18);
    wr8(ecx + 4u, (uint8_t)t18);
    wr8(ecx + 5u, (uint8_t)(t18 >> 8u));
    wr8(ecx + 6u, (uint8_t)(t18 >> 0x10u));
    wr8(ecx + 7u, t18 >> 0x18u);
    ecx = ecx + 8u;
    ebx = t17 >> 4u;
    edi = edi + 1u;
L_1003a097: ;
    if ((int32_t)(edi + 1u) < (int32_t)rd16(self + 0x24u))
    {
        edx = rd16(self + 0x24u);
        edi = edi + 1u;
        goto L_10039f50;
    }
L_1003a0a6: ;
    if ((int32_t)(ebp + 1u) < (int32_t)rd16(self + 0x26u))
    {
        ebp = ebp + 1u;
        goto L_10039f33;
    }
    goto L_1003a3df;
L_10039ff2: ;
    eax = rd32(rd32(self + 0x1cu) + rd8(edi + rd32(self + 0x20u) + (rd16(self + 0x26u) - ebp - 1u) * edx) * 4u);
L_1003a080: ;
    wr8(ecx + 1u, (uint8_t)(eax >> 8u));
    wr32(sp0 - 0x24u, eax);
    wr8(ecx, (uint8_t)eax);
    wr8(ecx + 3u, eax >> 0x18u);
    eax = (eax & 0xffff0000u) | eax >> 0x10u;
L_1003a091: ;
    wr8(ecx + 2u, (uint8_t)eax);
L_1003a094: ;
    ecx = ecx + 4u;
    goto L_1003a097;
L_1003a010: ;
    t15 = rd32(edi * 2u + rd32(self + 0x20u) + (rd16(self + 0x26u) - ebp - 1u) * edx * 2u);
    wr8(ecx, (uint8_t)(t15 << 3u));
    wr8(ecx + 1u, t15 >> 2u & 0xf8u);
    wr8(ecx + 2u, t15 >> 8u & 0x80u);
    goto L_1003a094;
L_1003a042: ;
    t14 = rd32(edi * 3u + rd32(self + 0x20u) + (rd16(self + 0x26u) - ebp - 1u) * edx * 3u);
    wr8(ecx + 3u, 0x80u);
    wr32(sp0 - 0x24u, t14);
    wr8(ecx, (uint8_t)t14);
    wr8(ecx + 1u, (uint8_t)(t14 >> 8u));
    eax = (t14 & 0xffffff00u) | (uint8_t)(t14 >> 0x10u);
    goto L_1003a091;
L_1003a06c: ;
    eax = rd32(edi * 4u + rd32(self + 0x20u) + (rd16(self + 0x26u) - ebp - 1u) * edx * 4u);
    goto L_1003a080;
L_1003a0ba: ;
    if (rd16(self + 0x26u) == 0u)
    {
        ebx = in_ebx;
        goto L_1003a3df;
    }
    ebx = in_ebx;
    ebp = 0u;
L_1003a0c4: ;
    if ((int32_t)rd16(self + 0x24u) <= 0) goto L_1003a225;
    ecx = rd32(sp0 - 0x14u) + rd32(sp0 - 0x18u) * ebp;
    edx = rd16(self + 0x24u);
    edi = 0u;
L_1003a0e1: ;
    if (rd8(self + 0x28u) - 4u > 0x1cu) goto L_1003a216;
    eax = rd8(self + 0x28u) - 4u;
    t19 = rd32(COW_IMG(0x1003a9b0u) + rd8(COW_IMG(0x1003a9c8u) + eax) * 4u);
    switch (t19 - RD)
    {
    case 0x1003a101u: goto L_1003a101;
    case 0x1003a17bu: ebx = rd8(COW_IMG(0x1003a9c8u) + eax); goto L_1003a17b;
    case 0x1003a1a6u: ebx = rd8(COW_IMG(0x1003a9c8u) + eax); goto L_1003a1a6;
    case 0x1003a1d6u: ebx = rd8(COW_IMG(0x1003a9c8u) + eax); goto L_1003a1d6;
    case 0x1003a1efu: ebx = rd8(COW_IMG(0x1003a9c8u) + eax); goto L_1003a1ef;
    case 0x1003a216u: ebx = rd8(COW_IMG(0x1003a9c8u) + eax); goto L_1003a216;
    default: rt_fatal(g, COW_IMG(0x1003a0fau), "switch");
    }
    return 0;
L_1003a101: ;
    t23 = rd32(rd32(self + 0x1cu) + (rd8(rd32(self + 0x20u) + (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * edx - (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * edx) >> 0x1fu)) >> 1u)) >> 4u) * 4u);
    wr32(sp0 - 0x24u, t23);
    t24 = rd32(self + 0x20u);
    t25 = rd8(rd32(self + 0x20u) + (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * edx - (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * edx) >> 0x1fu)) >> 1u));
    wr8(ecx, (uint8_t)t23);
    wr8(ecx + 1u, (uint8_t)(t23 >> 8u));
    wr8(ecx + 2u, (uint8_t)(t23 >> 0x10u));
    t26 = rd32(rd32(self + 0x1cu) + (rd8(rd32(self + 0x20u) + (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * rd16(self + 0x24u) - (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * rd16(self + 0x24u)) >> 0x1fu)) >> 1u)) & 0xfu) * 4u);
    wr32(sp0 - 0x24u, t26);
    wr8(ecx + 3u, (uint8_t)t26);
    wr8(ecx + 4u, (uint8_t)(t26 >> 8u));
    wr8(ecx + 5u, (uint8_t)(t26 >> 0x10u));
    ecx = ecx + 6u;
    ebx = t25 >> 4u;
    edi = edi + 1u;
L_1003a216: ;
    if ((int32_t)(edi + 1u) < (int32_t)rd16(self + 0x24u))
    {
        edx = rd16(self + 0x24u);
        edi = edi + 1u;
        goto L_1003a0e1;
    }
L_1003a225: ;
    if ((int32_t)(ebp + 1u) < (int32_t)rd16(self + 0x26u))
    {
        ebp = ebp + 1u;
        goto L_1003a0c4;
    }
    ecx = rd16(self + 0x26u);
    goto L_1003a3df;
L_1003a17b: ;
    t21 = rd32(rd32(self + 0x1cu) + rd8(edi + rd32(self + 0x20u) + (rd16(self + 0x26u) - ebp - 1u) * edx) * 4u);
    wr32(sp0 - 0x24u, t21);
    t22 = rd8(edi + rd32(self + 0x20u) + (rd16(self + 0x26u) - ebp - 1u) * edx);
    wr8(ecx, (uint8_t)t21);
    wr8(ecx + 2u, (uint8_t)(t21 >> 0x10u));
    eax = t21;
L_1003a210: ;
    wr8(ecx + 1u, (uint8_t)(eax >> 8u));
L_1003a213: ;
    ecx = ecx + 3u;
    goto L_1003a216;
L_1003a1a6: ;
    t20 = rd32(edi * 2u + rd32(self + 0x20u) + (rd16(self + 0x26u) - ebp - 1u) * edx * 2u);
    wr8(ecx, (uint8_t)(t20 << 3u));
    wr8(ecx + 1u, t20 >> 2u & 0xf8u);
    wr8(ecx + 2u, t20 >> 7u & 0xf8u);
    goto L_1003a213;
L_1003a1d6: ;
    eax = rd32(edi * 3u + rd32(self + 0x20u) + (rd16(self + 0x26u) - ebp - 1u) * edx * 3u);
L_1003a203: ;
    wr32(sp0 - 0x24u, eax);
    wr8(ecx, (uint8_t)eax);
    wr8(ecx + 2u, (uint8_t)(eax >> 0x10u));
    eax = (eax & 0xffffff00u) | (uint8_t)(eax >> 0x10u);
    goto L_1003a210;
L_1003a1ef: ;
    eax = rd32(edi * 4u + rd32(self + 0x20u) + (rd16(self + 0x26u) - ebp - 1u) * edx * 4u);
    goto L_1003a203;
L_1003a239: ;
    if (rd16(self + 0x26u) == 0u)
    {
        ebx = in_ebx;
        goto L_1003a3df;
    }
    ebx = in_ebx;
    ebp = 0u;
L_1003a243: ;
    if ((int32_t)rd16(self + 0x24u) <= 0) goto L_1003a3d0;
    ecx = rd32(sp0 - 0x14u) + rd32(sp0 - 0x18u) * ebp;
    edx = rd16(self + 0x24u);
    edi = 0u;
L_1003a260: ;
    if (rd8(self + 0x28u) - 4u > 0x1cu) goto L_1003a3c1;
    eax = rd8(self + 0x28u) - 4u;
    t27 = rd32(COW_IMG(0x1003a9e8u) + rd8(COW_IMG(0x1003aa00u) + eax) * 4u);
    switch (t27 - RD)
    {
    case 0x1003a280u: goto L_1003a280;
    case 0x1003a2e2u: ebx = rd8(COW_IMG(0x1003aa00u) + eax); goto L_1003a2e2;
    case 0x1003a308u: ebx = rd8(COW_IMG(0x1003aa00u) + eax); goto L_1003a308;
    case 0x1003a325u: ebx = rd8(COW_IMG(0x1003aa00u) + eax); goto L_1003a325;
    case 0x1003a36eu: ebx = rd8(COW_IMG(0x1003aa00u) + eax); goto L_1003a36e;
    case 0x1003a3c1u: ebx = rd8(COW_IMG(0x1003aa00u) + eax); goto L_1003a3c1;
    default: rt_fatal(g, COW_IMG(0x1003a279u), "switch");
    }
    return 0;
L_1003a280: ;
    t31 = rd8(rd32(self + 0x20u) + (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * edx - (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * edx) >> 0x1fu)) >> 1u));
    wr16(ecx, rd16(loc_1c + (t31 >> 4u) * 2u));
    wr16(ecx + 2u, rd16(loc_1c + (rd8(rd32(self + 0x20u) + (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * rd16(self + 0x24u) - (uint32_t)((int32_t)(edi + (rd16(self + 0x26u) - ebp - 1u) * rd16(self + 0x24u)) >> 0x1fu)) >> 1u)) & 0xfu) * 2u));
    ecx = ecx + 4u;
    ebx = loc_1c;
    edi = edi + 1u;
L_1003a3c1: ;
    if ((int32_t)(edi + 1u) < (int32_t)rd16(self + 0x24u))
    {
        edx = rd16(self + 0x24u);
        edi = edi + 1u;
        goto L_1003a260;
    }
L_1003a3d0: ;
    if ((int32_t)(ebp + 1u) < (int32_t)rd16(self + 0x26u))
    {
        ebp = ebp + 1u;
        goto L_1003a243;
    }
    ecx = rd16(self + 0x26u);
    goto L_1003a3df;
L_1003a2e2: ;
    wr16(ecx, rd16(loc_1c + rd8(edi + rd32(self + 0x20u) + (rd16(self + 0x26u) - ebp - 1u) * edx) * 2u));
L_1003a3be: ;
    ecx = ecx + 2u;
    goto L_1003a3c1;
L_1003a308: ;
    wr16(ecx, rd16(edi * 2u + rd32(self + 0x20u) + (rd16(self + 0x26u) - ebp - 1u) * edx * 2u));
    goto L_1003a3be;
L_1003a325: ;
    t30 = rd32(edi * 3u + rd32(self + 0x20u) + (rd16(self + 0x26u) - ebp - 1u) * edx * 3u);
    wr32(sp0 - 0x24u, t30);
    wr16(ecx, (uint16_t)((((t30 >> 0x10u & 0xf8u) | 0xff00u) << 5u | (t30 >> 8u & 0xf8u)) << 2u | (uint8_t)t30 >> 3u));
    ebx = (ebx & 0xffff0000u) | (t30 >> 8u & 0xf8u);
    goto L_1003a3be;
L_1003a36e: ;
    t28 = rd32(edi * 4u + rd32(self + 0x20u) + (rd16(self + 0x26u) - ebp - 1u) * edx * 4u);
    wr32(sp0 - 0x24u, t28);
    t29 = rd32(self + 0x20u);
    wr16(ecx, (uint16_t)((((t28 >> 0x18u & 0xff80u) * 2u | (t28 >> 0x10u & 0xf8u)) << 5u | (t28 >> 8u & 0xf8u)) << 2u | (uint8_t)t28 >> 3u));
    ebx = (((t28 >> 0x18u & 0xff80u) * 2u | (t29 & 0xffff0000u) | (t28 >> 0x10u & 0xf8u)) << 5u | (t29 & 0xffff0000u) | (t28 >> 8u & 0xf8u)) << 2u | (t28 & 0xffff0000u) | (uint8_t)t28 >> 3u;
    goto L_1003a3be;
L_1003a449: ;
    if (rd8(self + 0x29u) == 0x10u) goto L_1003a462;
    edx = (edx & 0xffffff00u) | rd8(self + 0x29u);
    if ((uint8_t)edx == 0x18u) goto L_1003a45b;
    if ((uint8_t)edx != 0x20u) goto L_1003a4c3;
L_1003a45b: ;
    edi = 0x20u;
    goto L_1003a4d6;
L_1003a462: ;
    edi = 0x10u;
L_1003a467: ;
    wr32(sp0 - 0x44u, sp0 - 0x24u);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, 0x19u);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x58u, eax);
    wr32(sp0 - 0x5cu, ecx);
    t41 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x60u, t41);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t41;
    g->esp = sp0 - 0x40u;
    t42 = cow_stdcall(g, COW_IMG(0x102d2fd9u), 8, t41, ecx, eax, 0u, 0u, 0x19u, 1u, sp0 - 0x24u);
    t43 = g->ecx;
    t44 = g->edx;
    if ((int32_t)t42 >= 0)
    {
        ebx = sp0 - 0x24u;
        goto L_1003a4f6;
    }
    ecx = t43;
    edx = t44;
L_1003a487: ;
    if (rd32(sp0 - 0x28u) != 0u)
    {
        eax = rd32(sp0 - 0x28u);
        wr32(sp0 - 0x44u, eax);
        g->edx = edx;
        t152 = rd32(eax);
        g->esp = sp0 - 0x40u;
        cow_thiscall(g, rd32(t152 + 8u), t152, 1, eax);
        t153 = g->ecx;
        t154 = g->edx;
        wr32(sp0 - 0x28u, 0u);
        ecx = t153;
        edx = t154;
    }
    if (rd32(sp0 - 0x2cu) != 0u)
    {
        eax = rd32(sp0 - 0x2cu);
        wr32(sp0 - 0x44u, eax);
        g->edx = rd32(eax);
        t155 = rd32(eax);
        g->esp = sp0 - 0x40u;
        cow_thiscall(g, rd32(t155 + 8u), ecx, 1, eax);
        t156 = g->edx;
        wr32(sp0 - 0x2cu, 0u);
        edx = t156;
    }
    if (rd32(sp0 - 0x20u) == 0u)
    {
        eax = rd32(sp0 - 0x20u);
    }
    else
    {
        eax = rd32(sp0 - 0x20u);
        wr32(sp0 - 0x44u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x40u;
        t157 = cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t158 = g->edx;
        eax = t157;
        edx = t158;
    }
    g->ebx = rd32(sp0 - 0x34u);
    g->esi = rd32(sp0 - 0x3cu);
    g->edi = rd32(sp0 - 0x40u);
    g->ebp = rd32(sp0 - 0x38u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1003a4c3: ;
    if (rd32(sp0 - 0x1cu) == 0x10u)
    {
        edi = rd32(sp0 - 0x1cu);
        goto L_1003a467;
    }
    edi = rd32(sp0 - 0x1cu);
    if (edi == 0x18u) goto L_1003a4d6;
    if (edi != 0x20u) goto L_1003a4f6;
    goto L_1003a4d6;
L_1003a6cc: ;
    wr32(sp0 - 0x44u, sp0 - 0x28u);
    wr32(sp0 - 0x48u, ebx - 1u);
    t75 = rd32(self + 0x2cu) & 7u;
    wr32(sp0 - 0x4cu, t75);
    wr32(sp0 - 0x50u, eax);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, rd32(rd32(eax) + 0x3cu), t75, 4, eax, t75, ebx - 1u, sp0 - 0x28u);
    wr32(sp0 - 0x44u, sp0 - 0x2cu);
    wr32(sp0 - 0x48u, ebx);
    t76 = rd32(self + 0x2cu) & 7u;
    wr32(sp0 - 0x4cu, t76);
    t77 = rd32(self + 0x44u);
    wr32(sp0 - 0x50u, t77);
    cow_thiscall(g, rd32(rd32(rd32(self + 0x44u)) + 0x3cu), t76, 4, t77, t76, ebx, sp0 - 0x2cu);
    t78 = g->ecx;
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 5u);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x50u, 0u);
    t79 = rd32(sp0 - 0x28u);
    wr32(sp0 - 0x54u, t79);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    t80 = rd32(sp0 - 0x2cu);
    wr32(sp0 - 0x60u, t80);
    g->ecx = t78;
    g->edx = t79;
    cow_stdcall(g, COW_IMG(0x102d4535u), 8, t80, 0u, 0u, t79, 0u, 0u, 5u, 0u);
    t81 = g->ecx;
    t82 = g->edx;
    if (rd32(sp0 - 0x28u) == 0u)
    {
        ecx = t81;
        edx = t82;
    }
    else
    {
        eax = rd32(sp0 - 0x28u);
        edx = t82;
        wr32(sp0 - 0x44u, eax);
        g->edx = edx;
        t83 = rd32(eax);
        g->esp = sp0 - 0x40u;
        cow_thiscall(g, rd32(t83 + 8u), t83, 1, eax);
        t84 = g->ecx;
        t85 = g->edx;
        wr32(sp0 - 0x28u, 0u);
        ecx = t84;
        edx = t85;
        loc_28 = 0u;
    }
    if (rd32(sp0 - 0x2cu) == 0u) goto L_1003a732;
    eax = rd32(sp0 - 0x2cu);
    wr32(sp0 - 0x44u, eax);
    g->edx = rd32(eax);
    t86 = rd32(eax);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, rd32(t86 + 8u), ecx, 1, eax);
    t87 = g->edx;
    edx = t87;
    goto L_1003a72e;
L_1003a808: ;
    t108 = rd32(self + 0x40u);
    wr32(sp0 - 0x44u, t108);
    g->eax = t108;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t109 = cow_thiscall(g, rd32(rd32(t108) + 0x34u), rd32(t108), 1, t108);
    t110 = g->edx;
    if (t109 == 0u)
    {
        edx = t110;
    }
    else
    {
        ebx = (ebx & 0xffffff00u) | rd8(sp0 - 0x2du);
        edi = 0u;
L_1003a81f: ;
        if (edi != 0u) goto L_1003a8c6;
        if ((uint8_t)ebx == 0u) goto L_1003a86f;
        wr32(sp0 - 0x44u, sp0 - 0x2cu);
        wr32(sp0 - 0x48u, 0u);
        t111 = rd32(self + 0x40u);
        wr32(sp0 - 0x4cu, t111);
        g->esp = sp0 - 0x40u;
        cow_thiscall(g, rd32(rd32(rd32(self + 0x40u)) + 0x3cu), sp0 - 0x2cu, 3, t111, 0u, sp0 - 0x2cu);
        wr32(sp0 - 0x44u, 0u);
        wr32(sp0 - 0x48u, 1u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        wr32(sp0 - 0x50u, 0u);
        t112 = rd32(rd32(self + 0x20u) + 4u);
        wr32(sp0 - 0x54u, t112);
        t113 = rd32(COW_IMG(0x10351c94u) + ((rd8(self + 0x29u) & 0xffffff00u) | (rd8(self + 0x29u) & 0x7fu)) * 4u);
        wr32(sp0 - 0x58u, t113);
        t114 = rd32(self + 0x20u) + 8u;
        wr32(sp0 - 0x5cu, t114);
        wr32(sp0 - 0x60u, 0u);
        wr32(sp0 - 0x64u, 0u);
        t115 = rd32(sp0 - 0x2cu);
        wr32(sp0 - 0x68u, t115);
        g->ecx = t113;
        g->edx = t115;
        cow_stdcall(g, COW_IMG(0x102d2888u), 10, t115, 0u, 0u, t114, t113, t112, 0u, sp0 - 0x10u, 1u, 0u);
        t116 = g->ecx;
        t117 = g->edx;
        ecx = t116;
        edx = t117;
L_1003a90f: ;
        if (rd32(sp0 - 0x2cu) == 0u) goto L_1003a921;
        eax = rd32(sp0 - 0x2cu);
        wr32(sp0 - 0x44u, eax);
        t138 = rd32(eax);
        g->esp = sp0 - 0x40u;
        cow_thiscall(g, rd32(t138 + 8u), t138, 1, eax);
        t139 = g->ecx;
        ecx = t139;
L_1003a91d: ;
        wr32(sp0 - 0x2cu, 0u);
        loc_2c = 0u;
L_1003a921: ;
        t140 = rd32(self + 0x40u);
        wr32(sp0 - 0x44u, t140);
        g->eax = t140;
        g->edx = rd32(t140);
        t141 = rd32(t140);
        g->esp = sp0 - 0x40u;
        t142 = cow_thiscall(g, rd32(t141 + 0x34u), ecx, 1, t140);
        t143 = g->edx;
        if (edi + 1u < t142)
        {
            edi = edi + 1u;
            goto L_1003a81f;
        }
        edx = t143;
    }
    goto L_1003a933;
L_1003a86f: ;
    wr32(sp0 - 0x44u, sp0 - 0x28u);
    wr32(sp0 - 0x48u, 0u);
    t118 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x4cu, t118);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, rd32(rd32(rd32(sp0 - 0x20u)) + 0x3cu), sp0 - 0x28u, 3, t118, 0u, sp0 - 0x28u);
    wr32(sp0 - 0x44u, sp0 - 0x2cu);
    wr32(sp0 - 0x48u, 0u);
    t119 = rd32(self + 0x40u);
    wr32(sp0 - 0x4cu, t119);
    cow_thiscall(g, rd32(rd32(rd32(self + 0x40u)) + 0x3cu), sp0 - 0x2cu, 3, t119, 0u, sp0 - 0x2cu);
    t120 = g->ecx;
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x50u, 0u);
    t121 = rd32(sp0 - 0x28u);
    wr32(sp0 - 0x54u, t121);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    t122 = rd32(sp0 - 0x2cu);
    wr32(sp0 - 0x60u, t122);
    g->ecx = t120;
    g->edx = t121;
    cow_stdcall(g, COW_IMG(0x102d4535u), 8, t122, 0u, 0u, t121, 0u, 0u, 1u, 0u);
    t123 = g->ecx;
    t124 = g->edx;
    if (rd32(sp0 - 0x28u) == 0u)
    {
        ecx = t123;
    }
    else
    {
        eax = rd32(sp0 - 0x28u);
        edx = t124;
        wr32(sp0 - 0x44u, eax);
        t125 = rd32(eax);
        g->esp = sp0 - 0x40u;
        cow_thiscall(g, rd32(t125 + 8u), t125, 1, eax);
        t126 = g->ecx;
        wr32(sp0 - 0x28u, 0u);
        ecx = t126;
        loc_28 = 0u;
    }
    if (rd32(sp0 - 0x2cu) == 0u) goto L_1003a921;
    eax = rd32(sp0 - 0x2cu);
    wr32(sp0 - 0x44u, eax);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, rd32(rd32(eax) + 8u), ecx, 1, eax);
    t127 = g->ecx;
    ecx = t127;
    goto L_1003a91d;
L_1003a8c6: ;
    wr32(sp0 - 0x44u, sp0 - 0x28u);
    wr32(sp0 - 0x48u, edi - 1u);
    t128 = rd32(self + 0x40u);
    wr32(sp0 - 0x4cu, t128);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, rd32(rd32(rd32(self + 0x40u)) + 0x3cu), rd32(rd32(self + 0x40u)), 3, t128, edi - 1u, sp0 - 0x28u);
    wr32(sp0 - 0x44u, sp0 - 0x2cu);
    wr32(sp0 - 0x48u, edi);
    t129 = rd32(self + 0x40u);
    wr32(sp0 - 0x4cu, t129);
    g->edx = sp0 - 0x2cu;
    cow_thiscall(g, rd32(rd32(rd32(self + 0x40u)) + 0x3cu), rd32(rd32(self + 0x40u)), 3, t129, edi, sp0 - 0x2cu);
    t130 = g->edx;
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 5u);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x50u, 0u);
    t131 = rd32(sp0 - 0x28u);
    wr32(sp0 - 0x54u, t131);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    t132 = rd32(sp0 - 0x2cu);
    wr32(sp0 - 0x60u, t132);
    g->ecx = t132;
    g->edx = t130;
    cow_stdcall(g, COW_IMG(0x102d4535u), 8, t132, 0u, 0u, t131, 0u, 0u, 5u, 0u);
    t133 = g->ecx;
    t134 = g->edx;
    if (rd32(sp0 - 0x28u) == 0u)
    {
        ecx = t133;
        edx = t134;
    }
    else
    {
        eax = rd32(sp0 - 0x28u);
        ecx = t133;
        wr32(sp0 - 0x44u, eax);
        g->edx = rd32(eax);
        t135 = rd32(eax);
        g->esp = sp0 - 0x40u;
        cow_thiscall(g, rd32(t135 + 8u), ecx, 1, eax);
        t136 = g->ecx;
        t137 = g->edx;
        wr32(sp0 - 0x28u, 0u);
        ecx = t136;
        edx = t137;
        loc_28 = 0u;
    }
    goto L_1003a90f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10039e50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10039e50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
