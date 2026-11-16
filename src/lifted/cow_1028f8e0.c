/* f_0x1028f8e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1028f8e0(Guest* g)
{
    double d100;
    double d101;
    double d106;
    double d107;
    double d113;
    double d57;
    double d96;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_20;
    uint32_t t1;
    uint32_t t10;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t112;
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
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_ebp);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0u);
    if (rd32(rd32(sp0 + 4u) + 0x14u) == 0u)
    {
        edi = in_edi;
        goto L_1028fde1;
    }
    esi = rd32(sp0 + 4u);
    wr32(sp0 - 0x30u, in_edi);
    t1 = rd32(rd32(esi + 0x18u) + rd32(esi + 0x1cu) * 0xcu);
    t2 = rd32(esi + 0x18u);
    t3 = rd32(esi + 0x44u);
    wr32(sp0 + 4u, t1);
    if ((int32_t)t3 <= 0)
    {
        ecx = t2;
        edx = t1;
        goto L_1028f93b;
    }
    ecx = t2;
    edx = t1;
    ebx = 0u;
    edi = 0u;
L_1028f91b: ;
    if (rd8(ebx + rd32(esi + 0x48u) + 0x19u) == 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(ebx + rd32(esi + 0x48u) + 0x19u);
    }
    else
    {
        eax = rd32(esi + 0x48u);
        ecx = (ecx & 0xffffff00u) | rd8(ebx + rd32(esi + 0x48u) + 0x19u);
        wr32(sp0 - 0x34u, edi);
        wr32(sp0 - 0x38u, esi);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        cow_cdecl(g, COW_IMG(0x10290460u), 2, esi, edi);
        t4 = g->ecx;
        t5 = g->edx;
        ecx = t4;
        edx = t5;
    }
    if ((int32_t)(edi + 1u) < (int32_t)rd32(esi + 0x44u))
    {
        ebx = ebx + 0x2cu;
        edi = edi + 1u;
        goto L_1028f91b;
    }
L_1028f93b: ;
    if ((int32_t)rd32(esi + 0x44u) <= 0)
    {
        ebp = 0u;
        loc_20 = 0u;
    }
    else
    {
        eax = rd32(esi + 0x44u);
        ecx = rd32(esi + 0x48u);
        edx = eax;
        ebp = 0u;
L_1028f94b: ;
        if ((double)rdf32(ecx) == (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            if (rd8(ecx + 0x18u) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(ecx + 0x18u);
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(ecx + 0x18u);
                ebp = ebp + 1u;
            }
        }
        if (edx != 1u)
        {
            ecx = ecx + 0x2cu;
            edx = edx - 1u;
            goto L_1028f94b;
        }
        ecx = ecx + 0x2cu;
        edx = edx - 1u;
        wr32(sp0 - 0x20u, ebp);
        if ((int32_t)ebp <= 0)
        {
            loc_20 = ebp;
        }
        else
        {
            loc_20 = ebp;
            if (rd32(COW_IMG(0x109a2798u)) != 0u)
            {
                eax = rd32(COW_IMG(0x109a2798u));
            }
            else
            {
                eax = rd32(COW_IMG(0x109a2798u));
                wr32(sp0 - 0x34u, 1u);
                wr32(sp0 - 0x38u, eax);
                wr32(sp0 - 0x3cu, 3u);
                wr32(sp0 - 0x40u, 0x200u);
                wr32(sp0 - 0x44u, 0x400u);
                g->esi = esi;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x20u;
                t6 = cow_thiscall_cdecl(g, COW_IMG(0x10281850u), ecx, 9, 0x400u, 0x200u, 3u, eax, 1u, in_edi, in_esi, in_ebp, in_ebx);
                t7 = g->ecx;
                t8 = g->edx;
                wr32(COW_IMG(0x109a2798u), t6);
                eax = t6;
                ecx = t7;
                edx = t8;
            }
            wr32(sp0 - 0x34u, 1u);
            wr32(sp0 - 0x38u, eax);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x24u;
            t9 = cow_cdecl(g, COW_IMG(0x102821b0u), 5, eax, 1u, in_edi, in_esi, in_ebp);
            t10 = g->edx;
            wr32(sp0 - 0x3cu, 1u);
            t11 = rd32(COW_IMG(0x1099d200u)) + 0x778u;
            wr32(sp0 - 0x40u, t11);
            g->ecx = t11;
            g->edx = t10;
            cow_call_regs(g, COW_IMG(0x10282050u), t9, g->ecx, g->edx, 1, 7, t11, 1u, rd32(sp0 - 0x38u), 1u, in_edi, in_esi, in_ebp);
            t12 = g->ecx;
            t13 = g->edx;
            if ((int32_t)ebp <= 1)
            {
                ecx = t12;
                edx = t13;
            }
            else
            {
                ecx = t12;
                edx = t13;
                if (rd32(COW_IMG(0x109a279cu)) != 0u)
                {
                    eax = rd32(COW_IMG(0x109a279cu));
                }
                else
                {
                    eax = rd32(COW_IMG(0x109a279cu));
                    wr32(sp0 - 0x34u, 1u);
                    wr32(sp0 - 0x38u, eax);
                    wr32(sp0 - 0x3cu, 3u);
                    wr32(sp0 - 0x40u, 0x200u);
                    wr32(sp0 - 0x44u, 0x400u);
                    g->esi = esi;
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x20u;
                    t14 = cow_thiscall_cdecl(g, COW_IMG(0x10281850u), ecx, 9, 0x400u, 0x200u, 3u, eax, 1u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
                    t15 = g->ecx;
                    t16 = g->edx;
                    wr32(COW_IMG(0x109a279cu), t14);
                    eax = t14;
                    ecx = t15;
                    edx = t16;
                }
                wr32(sp0 - 0x34u, 1u);
                wr32(sp0 - 0x38u, eax);
                g->eax = eax;
                g->ecx = ecx;
                g->esp = sp0 - 0x24u;
                t17 = cow_cdecl(g, COW_IMG(0x102821b0u), 5, eax, 1u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
                t18 = g->ecx;
                wr32(sp0 - 0x3cu, 1u);
                t19 = rd32(COW_IMG(0x1099d200u)) + 0x778u;
                wr32(sp0 - 0x40u, t19);
                g->ecx = t18;
                g->edx = t19;
                cow_call_regs(g, COW_IMG(0x10282050u), t17, g->ecx, g->edx, 1, 7, t19, 1u, rd32(sp0 - 0x38u), 1u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
                t20 = g->ecx;
                t21 = g->edx;
                ecx = t20;
                edx = t21;
            }
        }
    }
    if ((int32_t)rd32(esi + 0x44u) > 0)
    {
        ebx = 0u;
        ebp = 0u;
        edi = 0u;
L_1028fa12: ;
        if (rd8(ebp + rd32(esi + 0x48u) + 0x18u) == 0u)
        {
            ecx = (ecx & 0xffffff00u) | rd8(ebp + rd32(esi + 0x48u) + 0x18u);
        }
        else
        {
            eax = ebp + rd32(esi + 0x48u);
            ecx = (ecx & 0xffffff00u) | rd8(ebp + rd32(esi + 0x48u) + 0x18u);
            if ((double)rdf32(eax) != (double)rdf32(COW_IMG(0x103295d8u)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(eax), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                wr32(sp0 - 0x34u, 1u);
                wr32(sp0 - 0x20u, loc_20 - 1u);
                t22 = rd32(COW_IMG(0x109a2798u) + edi * 4u);
                wr32(sp0 - 0x38u, t22);
                g->eax = eax;
                g->ecx = t22;
                g->esp = sp0 - 0x24u;
                t23 = cow_cdecl(g, COW_IMG(0x102821b0u), 5, t22, 1u, in_edi, in_esi, in_ebp);
                t24 = g->ecx;
                t25 = rd32(sp0 + 4u);
                wr32(sp0 - 0x3cu, t25);
                g->esp = sp0 - 0x38u;
                cow_cdecl(g, COW_IMG(0x10291200u), 1, t25);
                t26 = rd32(rd32(esi + 0x18u) + rd32(esi + 0x1cu) * 0xcu + 4u);
                wr32(sp0 - 0x40u, t26);
                g->eax = rd32(esi + 0x1cu) * 3u;
                g->ecx = rd32(esi + 0x18u);
                g->edx = t26;
                t27 = rd32(esi + 0x1cu);
                t28 = rd32(esi + 0x18u);
                g->esp = sp0 - 0x3cu;
                t29 = cow_cdecl(g, COW_IMG(0x10283d80u), 1, t26);
                t30 = g->ecx;
                t31 = g->edx;
                if (rd8(esi + 0x2cu) == 0u)
                {
                    eax = (t29 & 0xffffff00u) | rd8(esi + 0x2cu);
                    ecx = t30;
                    edx = t31;
                    goto L_1028fa84;
                }
                ecx = t30;
                edx = t31;
                if (rd32(esi + 0x34u) == 0u)
                {
                    eax = rd32(esi + 0x34u);
                    goto L_1028fa84;
                }
                eax = rd32(esi + 0x34u);
                wr32(sp0 - 0x34u, ebx);
                wr32(sp0 - 0x38u, esi);
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                cow_cdecl(g, COW_IMG(0x10290010u), 11, esi, ebx, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
                t32 = g->ecx;
                t33 = g->edx;
                ecx = t32;
                edx = t33;
L_1028fa8b: ;
                t36 = rd32(COW_IMG(0x109a2798u) + edi * 4u);
                wr32(sp0 - 0x34u, t36);
                g->edx = edx;
                g->esp = sp0 - 0x30u;
                cow_cdecl(g, COW_IMG(0x10281c40u), 1, t36);
                t37 = g->edx;
                wr32(sp0 - 0x34u, 1u);
                if (rd32(sp0 - 0x20u) == 0u)
                {
                    edx = t37;
                    edi = 1u - edi;
                    t42 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x8a8u);
                    wr32(sp0 - 0x38u, t42);
                    g->eax = rd32(COW_IMG(0x1099d200u));
                    g->ecx = t42;
                    t43 = rd32(COW_IMG(0x1099d200u));
                    g->esp = sp0 - 0x24u;
                    t44 = cow_cdecl(g, COW_IMG(0x102821b0u), 5, t42, 1u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
                    t45 = g->ecx;
                    wr32(sp0 - 0x3cu, 1u);
                    t46 = rd32(COW_IMG(0x1099d200u)) + 0x778u;
                    wr32(sp0 - 0x40u, t46);
                    g->ecx = t45;
                    g->edx = t46;
                    t47 = cow_call_regs(g, COW_IMG(0x10282050u), t44, g->ecx, g->edx, 1, 7, t46, 1u, rd32(sp0 - 0x38u), 1u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
                    t48 = g->ecx;
                    t49 = g->edx;
                    eax = t47;
                    ecx = t48;
                    edx = t49;
                }
                else
                {
                    eax = rd32(sp0 - 0x20u);
                    ecx = 1u - edi;
                    edi = 1u - edi;
                    t38 = rd32(COW_IMG(0x109a2798u) + edi * 4u);
                    wr32(sp0 - 0x38u, t38);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = t38;
                    g->esp = sp0 - 0x24u;
                    t39 = cow_cdecl(g, COW_IMG(0x102821b0u), 5, t38, 1u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
                    t40 = g->ecx;
                    t41 = g->edx;
                    eax = t39;
                    ecx = t40;
                    edx = t41;
                }
                wr32(sp0 - 0x34u, ebx);
                wr32(sp0 - 0x38u, esi);
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x30u;
                cow_cdecl(g, COW_IMG(0x102902e0u), 2, esi, ebx);
                t50 = g->ecx;
                t51 = g->edx;
                ecx = t50;
                edx = t51;
            }
        }
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(esi + 0x44u))
        {
            ebx = ebx + 1u;
            ebp = ebp + 0x2cu;
            goto L_1028fa12;
        }
        ebp = ebp + 0x2cu;
    }
    t52 = rd32(sp0 + 4u);
    wr32(sp0 - 0x34u, t52);
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x10291200u), 1, t52);
    t53 = rd32(rd32(esi + 0x18u) + rd32(esi + 0x1cu) * 0xcu + 4u);
    wr32(sp0 - 0x38u, t53);
    g->eax = t53;
    g->edx = rd32(esi + 0x18u);
    t54 = rd32(esi + 0x18u);
    g->esp = sp0 - 0x34u;
    t55 = cow_cdecl(g, COW_IMG(0x10283d80u), 1, t53);
    t56 = g->edx;
    d57 = (double)rdf32(esi + 0x38u);
    if (!(d57 < (double)rdf32(COW_IMG(0x1032961cu))))
    {
        edx = t56;
    }
    else
    {
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        wr32(sp0 - 0x38u, sp0 - 0x14u);
        t58 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x8a8u);
        wr32(sp0 - 0x3cu, t58);
        g->ecx = t58;
        g->esp = sp0 - 0x30u;
        cow_cdecl(g, COW_IMG(0x10281b80u), 3, t58, sp0 - 0x14u, sp0 - 0x18u);
        t59 = g->ecx;
        if (rd32(COW_IMG(0x103ba68cu)) != 0xffffffffu)
        {
            eax = rd32(COW_IMG(0x103ba68cu));
        }
        else
        {
            ecx = t59;
            wr32(sp0 - 0x34u, 0u);
            wr32(sp0 - 0x38u, 0u);
            wr32(sp0 - 0x3cu, 4u);
            t60 = rd32(sp0 - 0x18u);
            wr32(sp0 - 0x40u, t60);
            t61 = rd32(sp0 - 0x14u);
            wr32(sp0 - 0x44u, t61);
            g->esi = esi;
            g->eax = t61;
            g->esp = sp0 - 0x20u;
            t62 = cow_thiscall_cdecl(g, COW_IMG(0x10281850u), ecx, 9, t61, t60, 4u, 0u, 0u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
            wr32(COW_IMG(0x103ba68cu), t62);
            eax = t62;
        }
        wr32(sp0 - 0x34u, 1u);
        wr32(sp0 - 0x38u, eax);
        t63 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x8a8u);
        wr32(sp0 - 0x1cu, t63);
        g->edx = t63;
        g->esp = sp0 - 0x24u;
        cow_cdecl(g, COW_IMG(0x102821b0u), 5, eax, 1u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
        t64 = g->edx;
        wr32(sp0 - 0x34u, 1u);
        wr32(sp0 - 0x38u, 0x34u);
        wr32(sp0 - 0x3cu, rd32(COW_IMG(0x1066941cu)));
        g->eax = rd32(COW_IMG(0x1066941cu));
        t65 = rd32(COW_IMG(0x1066941cu));
        t66 = rd32(rd32(COW_IMG(0x1066941cu)));
        g->esp = sp0 - 0x30u;
        t67 = cow_thiscall(g, rd32(t66 + 0xc8u), t66, 3, t65, 0x34u, 1u);
        t68 = g->ecx;
        wr32(sp0 - 0x34u, 1u);
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 0xcu, 0u);
        wr32(sp0 - 8u, 0u);
        wr32(sp0 - 4u, 0u);
        g->ecx = t68;
        g->edx = sp0 - 0x10u;
        g->esp = sp0 - 0x1cu;
        t69 = cow_call_regs(g, COW_IMG(0x10282050u), t67, g->ecx, g->edx, 1, 7, sp0 - 0x10u, 1u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
        t70 = g->ecx;
        t71 = g->edx;
        wr32(sp0 - 0x3cu, 0u);
        g->edx = t71;
        g->esp = sp0 - 0x38u;
        cow_cdecl(g, COW_IMG(0x10282030u), 1, 0u);
        t72 = g->edx;
        wr32(sp0 - 0x34u, 7u);
        wr32(sp0 - 0x38u, 0x37u);
        wr32(sp0 - 0x3cu, rd32(COW_IMG(0x1066941cu)));
        t73 = rd32(rd32(COW_IMG(0x1066941cu)));
        g->esp = sp0 - 0x30u;
        cow_thiscall(g, rd32(t73 + 0xc8u), t73, 3, rd32(COW_IMG(0x1066941cu)), 0x37u, 7u);
        t74 = g->ecx;
        wr32(sp0 - 0x34u, 8u);
        wr32(sp0 - 0x38u, 0x38u);
        wr32(sp0 - 0x3cu, rd32(COW_IMG(0x1066941cu)));
        g->eax = rd32(COW_IMG(0x1066941cu));
        g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
        t75 = rd32(COW_IMG(0x1066941cu));
        t76 = rd32(rd32(COW_IMG(0x1066941cu)));
        t77 = cow_thiscall(g, rd32(t76 + 0xc8u), t74, 3, t75, 0x38u, 8u);
        t78 = g->ecx;
        t79 = g->edx;
        wr32(sp0 - 0x34u, 1u);
        g->ecx = t78;
        g->edx = t79;
        t80 = cow_cdecl(g, COW_IMG(0x10281c70u), 1, 1u);
        t81 = g->ecx;
        t82 = g->edx;
        wr32(sp0 - 0x38u, 1u);
        g->ecx = t81;
        g->edx = t82;
        g->esp = sp0 - 0x34u;
        t83 = cow_cdecl(g, COW_IMG(0x10281ca0u), 1, 1u);
        t84 = g->ecx;
        t85 = g->edx;
        g->ecx = t84;
        g->esp = sp0 - 0x38u;
        t86 = cow_call_regs(g, COW_IMG(0x10283240u), g->eax, g->ecx, t85, 1, 0);
        t87 = g->ecx;
        t88 = g->edx;
        wr32(sp0 - 0x3cu, 0u);
        g->ecx = t87;
        t89 = cow_call_regs(g, COW_IMG(0x10282370u), g->eax, g->ecx, t88, 1, 1, 0u);
        t90 = g->ecx;
        t91 = g->edx;
        wr32(sp0 - 0x40u, 1u);
        g->ecx = t90;
        g->esp = sp0 - 0x3cu;
        t92 = cow_call_regs(g, COW_IMG(0x10282370u), g->eax, g->ecx, t91, 1, 1, 1u);
        t93 = g->ecx;
        t94 = g->edx;
        g->esp = sp0 - 0x30u;
        cow_call_regs(g, COW_IMG(0x10283240u), g->eax, g->ecx, t94, 1, 0);
        t95 = g->edx;
        edx = t95;
        loc_10 = 0u;
    }
    if ((int32_t)rd32(esi + 0x44u) <= 0)
    {
        eax = rd32(esi + 0x44u);
    }
    else
    {
        ebx = 0u;
        edi = 0u;
L_1028fc3c: ;
        d96 = (double)rdf32(edi + rd32(esi + 0x48u));
        if (d96 == rdf64(COW_IMG(0x1032a108u)))
        {
            eax = (rd32(esi + 0x48u) & 0xffff0000u) | (uint16_t)cow_fsw(g, d96, rdf64(COW_IMG(0x1032a108u)), 0u);
            ecx = edi + rd32(esi + 0x48u);
            if (rd8(ecx + 0x18u) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(ecx + 0x18u);
                if (rd32(ecx + 0x1cu) == 0u)
                {
                    ecx = rd32(ecx + 0x1cu);
                }
                else
                {
                    ecx = rd32(ecx + 0x1cu);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x30u;
                    t97 = cow_thiscall(g, ecx, ecx, 0);
                    t98 = g->ecx;
                    t99 = g->edx;
                    eax = t97;
                    ecx = t98;
                    edx = t99;
                }
                if (rd8(esi + 0x2cu) == 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(esi + 0x2cu);
                    goto L_1028fcb0;
                }
                if (rd32(esi + 0x34u) == 0u)
                {
                    eax = rd32(esi + 0x34u);
                    goto L_1028fcb0;
                }
                eax = rd32(esi + 0x34u);
                d100 = (double)rdf32(edi + rd32(esi + 0x48u) + 0x14u);
                if (!(d100 < (double)rdf32(COW_IMG(0x1032961cu))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d100, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
                    ecx = rd32(esi + 0x48u);
                    goto L_1028fca7;
                }
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d100, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
                ecx = rd32(esi + 0x48u);
                d101 = (double)rdf32(esi + 0x38u);
                if ((cow_fsw(g, d101, rdf64(COW_IMG(0x10340b60u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d101, rdf64(COW_IMG(0x10340b60u)), 0u) & 0x4100u;
                    goto L_1028fca7;
                }
                eax = cow_fsw(g, d101, rdf64(COW_IMG(0x10340b60u)), 0u) & 0x4100u;
                wr32(sp0 - 0x34u, ebx);
                wr32(sp0 - 0x38u, esi);
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x38u;
                cow_stdcall(g, COW_IMG(0x10290450u), 0);
                t102 = g->ecx;
                t103 = g->edx;
                ecx = t102;
                edx = t103;
L_1028fce6: ;
                if (rd32(edi + rd32(esi + 0x48u) + 0x20u) != 0u)
                {
                    eax = rd32(edi + rd32(esi + 0x48u) + 0x20u);
                    g->edx = edx;
                    g->esp = sp0 - 0x30u;
                    cow_thiscall(g, eax, ecx, 0);
                    t112 = g->edx;
                    edx = t112;
                }
            }
        }
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(esi + 0x44u))
        {
            ebx = ebx + 1u;
            edi = edi + 0x2cu;
            goto L_1028fc3c;
        }
        eax = rd32(esi + 0x44u);
    }
    d113 = (double)rdf32(esi + 0x38u);
    if (!(d113 < (double)rdf32(COW_IMG(0x1032961cu))))
    {
        edi = rd32(sp0 - 0x30u);
        goto L_1028fde1;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d113, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    edi = rd32(sp0 - 0x30u);
    wr32(sp0 - 0x30u, rd32(COW_IMG(0x103ba68cu)));
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103ba68cu));
    t114 = rd32(COW_IMG(0x103ba68cu));
    g->esp = sp0 - 0x2cu;
    t115 = cow_cdecl(g, COW_IMG(0x10281c40u), 1, t114);
    t116 = g->ecx;
    wr32(sp0 - 0x34u, 1u);
    t117 = rd32(sp0 - 0x1cu);
    wr32(sp0 - 0x38u, t117);
    g->edx = t117;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x102821b0u), 5, t117, 1u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
    t118 = g->edx;
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    wr32(sp0 - 0x10u, 0x3f800000u);
    wr32(sp0 - 0xcu, 0x3f800000u);
    wr32(sp0 - 8u, 0x3f800000u);
    t119 = rd32(esi + 0x38u);
    wr32(sp0 - 4u, t119);
    g->eax = t119;
    g->ecx = sp0 - 0x10u;
    g->edx = t118;
    g->esp = sp0 - 0x38u;
    t120 = cow_cdecl(g, COW_IMG(0x10283350u), 1, sp0 - 0x10u);
    t121 = g->ecx;
    t122 = g->edx;
    g->ecx = t121;
    g->esp = sp0 - 0x3cu;
    t123 = cow_call_regs(g, COW_IMG(0x10282bb0u), g->eax, g->ecx, t122, 1, 0);
    t124 = g->ecx;
    t125 = g->edx;
    wr32(sp0 - 0x40u, 2u);
    g->ecx = t124;
    g->edx = t125;
    t126 = cow_cdecl(g, COW_IMG(0x10281c70u), 1, 2u);
    t127 = g->ecx;
    t128 = g->edx;
    wr32(sp0 - 0x44u, 1u);
    g->ecx = t127;
    g->edx = t128;
    g->esp = sp0 - 0x40u;
    t129 = cow_cdecl(g, COW_IMG(0x10281ca0u), 1, 1u);
    t130 = g->ecx;
    t131 = g->edx;
    wr32(sp0 - 0x48u, 0u);
    g->ecx = t130;
    g->esp = sp0 - 0x44u;
    cow_call_regs(g, COW_IMG(0x10282370u), g->eax, g->ecx, t131, 1, 1, 0u);
    t132 = g->ecx;
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 0x39u);
    wr32(sp0 - 0x38u, rd32(COW_IMG(0x1066941cu)));
    g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
    t133 = rd32(rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, rd32(t133 + 0xc8u), t132, 3, rd32(COW_IMG(0x1066941cu)), 0x39u, 0u);
    t134 = g->edx;
    wr32(sp0 - 0x30u, 2u);
    wr32(sp0 - 0x34u, 0x38u);
    wr32(sp0 - 0x38u, rd32(COW_IMG(0x1066941cu)));
    g->edx = t134;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xc8u), rd32(rd32(COW_IMG(0x1066941cu))), 3, rd32(COW_IMG(0x1066941cu)), 0x38u, 2u);
    t135 = g->edx;
    wr32(sp0 - 0x30u, 0u);
    t136 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x34u, t136);
    t137 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x38u, t137);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 0u);
    wr32(sp0 - 0x44u, t136);
    wr32(sp0 - 0x48u, t137);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x50u, 0u);
    g->ebp = ebp;
    g->ecx = t137;
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x10280e00u), 8, 0u, 0u, t137, t136, 0u, 0u, t137, t136);
    t138 = g->ecx;
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 0x34u);
    wr32(sp0 - 0x38u, rd32(COW_IMG(0x1066941cu)));
    g->eax = rd32(COW_IMG(0x1066941cu));
    g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
    t139 = rd32(COW_IMG(0x1066941cu));
    t140 = rd32(rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 0x2cu;
    t141 = cow_thiscall(g, rd32(t140 + 0xc8u), t138, 3, t139, 0x34u, 0u);
    t142 = g->ecx;
    t143 = g->edx;
    wr32(sp0 - 0x30u, 1u);
    g->ecx = t142;
    t144 = cow_call_regs(g, COW_IMG(0x10282370u), g->eax, g->ecx, t143, 1, 1, 1u);
    t145 = g->ecx;
    t146 = g->edx;
    g->esp = sp0;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = edi;
    g->ebp = rd32(sp0 - 0x28u);
    g->edx = t146;
    cow_tailcall(g, COW_IMG(0x10283240u), t144, t145, t146);
    return;
L_1028fa84: ;
    wr32(sp0 - 0x34u, ebx);
    wr32(sp0 - 0x38u, esi);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall_cdecl(g, COW_IMG(0x1028fdf0u), ecx, 11, esi, ebx, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t34 = g->ecx;
    t35 = g->edx;
    ecx = t34;
    edx = t35;
    goto L_1028fa8b;
L_1028fca7: ;
    wr32(sp0 - 0x34u, ebx);
    wr32(sp0 - 0x38u, esi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10290010u), 11, esi, ebx, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), loc_10);
    t104 = g->ecx;
    t105 = g->edx;
    ecx = t104;
    edx = t105;
    goto L_1028fce6;
L_1028fcb0: ;
    d106 = (double)rdf32(edi + rd32(esi + 0x48u) + 0x14u);
    if (!(d106 < (double)rdf32(COW_IMG(0x1032961cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d106, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
        edx = rd32(esi + 0x48u);
        goto L_1028fcdf;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d106, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    edx = rd32(esi + 0x48u);
    d107 = (double)rdf32(esi + 0x38u);
    if ((cow_fsw(g, d107, rdf64(COW_IMG(0x10340b60u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d107, rdf64(COW_IMG(0x10340b60u)), 0u) & 0x4100u;
        goto L_1028fcdf;
    }
    eax = cow_fsw(g, d107, rdf64(COW_IMG(0x10340b60u)), 0u) & 0x4100u;
    wr32(sp0 - 0x34u, ebx);
    wr32(sp0 - 0x38u, esi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    cow_stdcall(g, COW_IMG(0x10290450u), 0);
    t108 = g->ecx;
    t109 = g->edx;
    ecx = t108;
    edx = t109;
    goto L_1028fce6;
L_1028fcdf: ;
    wr32(sp0 - 0x34u, ebx);
    wr32(sp0 - 0x38u, esi);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall_cdecl(g, COW_IMG(0x1028fdf0u), ecx, 11, esi, ebx, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), loc_10);
    t110 = g->ecx;
    t111 = g->edx;
    ecx = t110;
    edx = t111;
    goto L_1028fce6;
L_1028fde1: ;
    g->esi = in_esi;
    g->edi = edi;
    g->ebp = in_ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028f8e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1028f8e0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
