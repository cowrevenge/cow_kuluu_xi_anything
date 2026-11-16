/* f_0x10290b80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10290b80(Guest* g)
{
    double d18;
    double d28;
    double d29;
    double d47;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
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
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 104u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 4u, 0u);
    if (rd32(rd32(sp0 + 4u) + 0x8cu) == 0u) goto L_10290fca;
    esi = rd32(sp0 + 4u);
    if (rd32(esi + 0x88u) == 0u) goto L_10290be8;
    wr32(sp0 - 0x24u, rd32(arg2));
    g->eax = arg2;
    g->ecx = rd32(arg2);
    t1 = rd32(arg2);
    g->esp = sp0 - 0x20u;
    t2 = cow_cdecl(g, COW_IMG(0x102a1fc0u), 1, t1);
    t3 = g->ecx;
    if (t2 != 2u) goto L_10290bda;
    eax = t2;
    ecx = t3;
    edx = (uint32_t)((int32_t)t2 >> 0x1fu);
    if (edx != 0u) goto L_10290bda;
    g->esp = sp0;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x102a3780u), eax, ecx, edx);
    return;
L_10290bda: ;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 0u);
L_10290be8: ;
    if ((rd32(esi + 0x88u) & 2u) == 0u)
    {
        eax = rd32(esi + 0x88u);
        ebp = 0u;
        loc_10 = 0u;
    }
    else
    {
        eax = rd32(esi + 0x88u);
        wr32(sp0 - 0x10u, 0x4000u);
        wr32(sp0 - 0xcu, 0u);
        ebp = 0x4000u;
        loc_10 = 0x4000u;
    }
    if ((eax & 4u) != 0u)
    {
        wr32(sp0 - 0x10u, ebp | 0x8000u);
        wr32(sp0 - 0xcu, 0u);
        loc_10 = ebp | 0x8000u;
        ebp = ebp | 0x8000u;
    }
    if (rd32(rd32(arg2)) != 0xa000au)
    {
        eax = rd32(arg2);
        ecx = rd32(rd32(arg2));
        goto L_10290c2f;
    }
    eax = rd32(arg2);
    ecx = rd32(rd32(arg2));
    ebx = 0x80000u;
L_10290c41: ;
    wr32(sp0 - 4u, 0u);
L_10290c47: ;
    wr32(sp0 - 0x24u, 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x20u;
    t4 = cow_cdecl(g, COW_IMG(0x10281c70u), 1, 0u);
    t5 = g->ecx;
    t6 = rd32(esi + 0x94u);
    wr32(sp0 - 0x28u, t6);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x10281ca0u), 1, t6);
    t7 = g->ecx;
    t8 = g->edx;
    t9 = rd32(esi + 0x90u);
    wr32(sp0 - 0x2cu, t9);
    g->eax = t9;
    g->esp = sp0 - 0x28u;
    t10 = cow_cdecl(g, COW_IMG(0x10283f90u), 1, t9);
    t11 = rd32(esi + 0x94u);
    wr32(sp0 - 0x30u, t11);
    t12 = rd32(esi + 0x90u);
    wr32(sp0 + 4u, t12);
    g->ecx = t12;
    g->edx = t11;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x10281ca0u), 1, t11);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 - 0x34u, esi + 0x14u);
    g->eax = esi + 0x14u;
    g->ecx = t13;
    g->edx = t14;
    g->esp = sp0 - 0x30u;
    t15 = cow_cdecl(g, COW_IMG(0x102a34f0u), 1, esi + 0x14u);
    t16 = g->ecx;
    t17 = g->edx;
    d18 = (double)rdf32(esi + 0x44u);
    if (!(d18 < (double)rdf32(COW_IMG(0x10340b74u))))
    {
        ecx = t16;
        edx = t17;
        edi = 0u;
    }
    else
    {
        if (rd32(esi + 0x98u) == 0u)
        {
            ecx = rd32(sp0 - 0xcu);
            edx = rd32(sp0 - 0x10u);
            ebp = ebx | rd32(sp0 - 0x10u);
            edi = rd32(sp0 - 0xcu);
        }
        else
        {
            ecx = rd32(sp0 - 0xcu);
            edx = rd32(sp0 - 0x10u);
            ebp = ebx | rd32(sp0 - 0x10u);
            edi = rd32(sp0 - 0xcu);
            ebp = ebp | 2u;
        }
        if (rd32(esi + 0x9cu) != 0u)
        {
            ebp = ebp | 0x2000u;
        }
        if (rd32(esi + 0x4cu) == 0u)
        {
            eax = rd32(esi + 0x4cu);
            wr32(sp0 - 0x24u, 0xffffffffu);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            cow_cdecl(g, COW_IMG(0x10281c40u), 1, 0xffffffffu);
            t26 = g->ecx;
            t27 = g->edx;
            ecx = t26;
            edx = t27;
        }
        else
        {
            eax = rd32(esi + 0x4cu);
            t19 = rd32(eax + 0x14u);
            wr32(sp0 - 0x24u, t19);
            g->ecx = t19;
            g->esp = sp0 - 0x20u;
            cow_cdecl(g, COW_IMG(0x10281c40u), 1, t19);
            t20 = g->ecx;
            t21 = rd32(rd32(esi + 0x4cu) + 0x18u);
            wr32(sp0 - 0x28u, t21);
            g->edx = rd32(esi + 0x4cu);
            t22 = rd32(esi + 0x4cu);
            g->esp = sp0 - 0x24u;
            cow_cdecl(g, COW_IMG(0x10281d80u), 1, t21);
            t23 = g->edx;
            if (rd32(rd32(rd32(esi + 0x4cu) + 0x1cu) + 0x24u) == 2u)
            {
                eax = rd32(rd32(rd32(esi + 0x4cu) + 0x1cu) + 0x24u);
                ecx = rd32(rd32(esi + 0x4cu) + 0x1cu);
                edx = t23;
                ebp = ebp | 4u;
                goto L_10290d01;
            }
            eax = rd32(rd32(rd32(esi + 0x4cu) + 0x1cu) + 0x24u);
            ecx = rd32(rd32(esi + 0x4cu) + 0x1cu);
            edx = t23;
            ebp = ebp | 4u;
            if (eax == 4u) goto L_10290d01;
            if (rd32(ecx + 0x30u) != 4u) goto L_10290d1b;
L_10290d01: ;
            if (rd8(esi + 0xa0u) & 1u)
            {
                g->ecx = ecx;
                g->esp = sp0 - 0x20u;
                cow_call_regs(g, COW_IMG(0x10282bb0u), g->eax, g->ecx, edx, 1, 0);
                t24 = g->ecx;
                t25 = g->edx;
                ecx = t24;
                edx = t25;
            }
        }
L_10290d1b: ;
        if (rd32(esi + 0xa8u) == 0u)
        {
            eax = rd32(esi + 0xa8u);
        }
        else
        {
            eax = rd32(esi + 0xa8u);
            ebp = ebp | 1u;
        }
        d28 = (double)rdf32(esi + 0x44u);
        if ((cow_fsw(g, d28, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d28, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d28, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
            if (rd8(esi + 0xa0u) & 1u)
            {
                wr32(sp0 - 0x24u, ecx);
                d29 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(esi + 0x44u));
                wrf32(sp0 - 0x24u, (float)d29);
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x20u;
                t30 = cow_call_regs(g, COW_IMG(0x10282a50u), eax, g->ecx, g->edx, 1, 1, cow_f2bits(d29));
                t31 = g->ecx;
                t32 = g->edx;
                eax = t30;
                ecx = t31;
                edx = t32;
            }
        }
        wr32(sp0 - 0x24u, edi);
        wr32(sp0 - 0x28u, ebp);
        g->ecx = ecx;
        g->esp = sp0 - 0x20u;
        cow_cdecl(g, COW_IMG(0x10284b40u), 2, ebp, edi);
        t33 = g->ecx;
        wr32(sp0 - 0x2cu, 4u);
        wr32(sp0 - 0x30u, rd32(arg2));
        g->ecx = t33;
        g->edx = arg2;
        g->esp = sp0 - 0x2cu;
        cow_cdecl(g, COW_IMG(0x10285870u), 1, rd32(arg2));
        t34 = g->ecx;
        t35 = g->edx;
        ecx = t34;
        edx = t35;
        ebp = rd32(sp0 - 0x10u);
        edi = rd32(sp0 - 4u);
    }
    if (rd32(esi + 0x64u) != 0u)
    {
        eax = rd32(esi + 0x64u);
        wr32(sp0 - 0x24u, 1u);
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        cow_cdecl(g, COW_IMG(0x10283f90u), 1, 1u);
        t36 = g->edx;
        t37 = rd32(esi + 0x7cu);
        wr32(sp0 - 0x28u, t37);
        t38 = rd32(sp0 + 4u) + 1u;
        wr32(sp0 + 4u, t38);
        g->ecx = t37;
        g->esp = sp0 - 0x24u;
        cow_cdecl(g, COW_IMG(0x102a3560u), 1, t37);
        t39 = g->ecx;
        t40 = rd32(rd32(esi + 0x64u) + 0x14u);
        wr32(sp0 - 0x2cu, t40);
        g->eax = t40;
        g->esp = sp0 - 0x28u;
        t41 = cow_cdecl(g, COW_IMG(0x10281c40u), 1, t40);
        t42 = rd32(rd32(esi + 0x64u) + 0x18u);
        wr32(sp0 - 0x30u, t42);
        g->ecx = rd32(esi + 0x64u);
        g->edx = t42;
        t43 = rd32(esi + 0x64u);
        g->esp = sp0 - 0x2cu;
        t44 = cow_cdecl(g, COW_IMG(0x10281d80u), 1, t42);
        t45 = g->ecx;
        t46 = g->edx;
        if ((rd8(esi + 0xa0u) & 0x10u) == 0u)
        {
            eax = (t44 & 0xffffff00u) | rd8(esi + 0xa0u);
            ecx = t45;
            edx = t46;
            d47 = (double)rdf32(esi + 0x44u);
            if (d47 < (double)rdf32(COW_IMG(0x10340b74u)))
            {
                t48 = rd32(esi + 0x78u);
                wr32(sp0 - 0x24u, t48);
                g->esp = sp0 - 0x24u;
                cow_call_regs(g, COW_IMG(0x102826e0u), g->eax, g->ecx, edx, 1, 0);
            }
        }
        else
        {
            eax = (t44 & 0xffffff00u) | rd8(esi + 0xa0u);
            ecx = t45;
            edx = t46;
            g->esp = sp0 - 0x20u;
            cow_call_regs(g, COW_IMG(0x10282de0u), g->eax, g->ecx, edx, 1, 0);
        }
        t49 = edi | rd32(sp0 - 0xcu);
        wr32(sp0 - 0x24u, t49);
        t50 = ebx | ebp | 0x40u;
        wr32(sp0 - 0x28u, t50);
        g->edx = t49;
        g->esp = sp0 - 0x20u;
        cow_cdecl(g, COW_IMG(0x10284b40u), 2, t50, t49);
        t51 = g->edx;
        wr32(sp0 - 0x2cu, 4u);
        wr32(sp0 - 0x30u, rd32(arg2));
        g->ecx = rd32(arg2);
        g->edx = t51;
        t52 = rd32(arg2);
        g->esp = sp0 - 0x2cu;
        cow_cdecl(g, COW_IMG(0x10285870u), 1, t52);
        t53 = g->ecx;
        t54 = g->edx;
        ecx = t53;
        edx = t54;
    }
    if (rd32(esi + 0x50u) != 0u)
    {
        eax = rd32(esi + 0x50u);
        wr32(sp0 - 0x24u, 1u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t55 = cow_cdecl(g, COW_IMG(0x10283f90u), 1, 1u);
        t56 = g->edx;
        t57 = rd32(sp0 + 4u) + 1u;
        t58 = rd8(esi + 0xa0u);
        wr32(sp0 + 4u, t57);
        if ((t58 & 4u) == 0u)
        {
            eax = (t55 & 0xffffff00u) | t58;
            ecx = t57;
            t60 = rd32(esi + 0x6cu);
            wr32(sp0 - 0x24u, t60);
            g->esp = sp0 - 0x24u;
            cow_call_regs(g, COW_IMG(0x102826e0u), g->eax, g->ecx, t60, 1, 0);
            t61 = g->edx;
            edx = t61;
        }
        else
        {
            eax = (t55 & 0xffffff00u) | t58;
            ecx = t57;
            edx = t56;
            g->esp = sp0 - 0x20u;
            cow_call_regs(g, COW_IMG(0x10282de0u), g->eax, g->ecx, edx, 1, 0);
            t59 = g->edx;
            edx = t59;
        }
        t62 = rd32(rd32(esi + 0x50u) + 0x14u);
        wr32(sp0 - 0x24u, t62);
        g->ecx = t62;
        g->esp = sp0 - 0x20u;
        cow_cdecl(g, COW_IMG(0x10281c40u), 1, t62);
        t63 = g->ecx;
        t64 = rd32(rd32(esi + 0x50u) + 0x18u);
        wr32(sp0 - 0x28u, t64);
        g->esp = sp0 - 0x24u;
        cow_cdecl(g, COW_IMG(0x10281d80u), 1, t64);
        t65 = edi | rd32(sp0 - 0xcu);
        wr32(sp0 - 0x2cu, t65);
        t66 = ebx | ebp | 8u;
        wr32(sp0 - 0x30u, t66);
        g->eax = rd32(sp0 - 0xcu);
        g->ecx = t66;
        g->edx = t65;
        t67 = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x28u;
        t68 = cow_cdecl(g, COW_IMG(0x10284b40u), 2, t66, t65);
        t69 = g->ecx;
        t70 = g->edx;
        wr32(sp0 - 0x34u, 1u);
        g->ecx = t69;
        g->edx = t70;
        g->esp = sp0 - 0x30u;
        t71 = cow_cdecl(g, COW_IMG(0x10281c70u), 1, 1u);
        t72 = g->ecx;
        t73 = g->edx;
        wr32(sp0 - 0x38u, 0u);
        g->edx = t73;
        g->esp = sp0 - 0x34u;
        cow_cdecl(g, COW_IMG(0x10281ca0u), 1, 0u);
        t74 = g->edx;
        wr32(sp0 - 0x3cu, 4u);
        wr32(sp0 - 0x40u, rd32(arg2));
        g->ecx = rd32(arg2);
        g->edx = t74;
        t75 = rd32(arg2);
        g->esp = sp0 - 0x3cu;
        cow_cdecl(g, COW_IMG(0x10285870u), 1, t75);
        t76 = g->ecx;
        t77 = g->edx;
        ecx = t76;
        edx = t77;
    }
    if (rd32(esi + 0x5cu) != 0u)
    {
        eax = rd32(esi + 0x5cu);
        wr32(sp0 - 0x24u, 1u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t78 = cow_cdecl(g, COW_IMG(0x10283f90u), 1, 1u);
        t79 = g->ecx;
        t80 = g->edx;
        wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
        g->ecx = t79;
        g->esp = sp0 - 0x24u;
        t81 = cow_call_regs(g, COW_IMG(0x10283240u), g->eax, g->ecx, t80, 1, 0);
        t82 = g->ecx;
        t83 = g->edx;
        wr32(sp0 - 0x28u, 1u);
        cow_cdecl(g, COW_IMG(0x10281c70u), 1, 1u);
        t84 = edi | rd32(sp0 - 0xcu);
        wr32(sp0 - 0x2cu, t84);
        t85 = ebx | ebp | 4u;
        wr32(sp0 - 0x30u, t85);
        g->eax = t84;
        g->ecx = rd32(sp0 - 0xcu);
        g->edx = t85;
        t86 = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x28u;
        t87 = cow_cdecl(g, COW_IMG(0x10284b40u), 2, t85, t84);
        t88 = g->ecx;
        t89 = g->edx;
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x38u, 0xffu);
        wr32(sp0 - 0x3cu, 0xffu);
        wr32(sp0 - 0x40u, 0xffu);
        g->edx = t89;
        g->esp = sp0 - 0x14u;
        t90 = cow_cdecl(g, COW_IMG(0x102824e0u), 11, 0xffu, 0xffu, 0xffu, 0u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), 1u, 1u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
        t91 = g->edx;
        t92 = rd32(esi + 0x94u);
        wr32(sp0 - 0x44u, t92);
        g->ecx = t92;
        g->esp = sp0 - 0x40u;
        cow_cdecl(g, COW_IMG(0x10281ca0u), 1, t92);
        t93 = g->ecx;
        t94 = rd32(rd32(esi + 0x5cu) + 0x14u);
        wr32(sp0 - 0x48u, t94);
        g->eax = t94;
        g->esp = sp0 - 0x44u;
        t95 = cow_cdecl(g, COW_IMG(0x10281c40u), 1, t94);
        t96 = rd32(rd32(esi + 0x5cu) + 0x18u);
        wr32(sp0 - 0x4cu, t96);
        g->edx = t96;
        g->esp = sp0 - 0x48u;
        cow_cdecl(g, COW_IMG(0x10281d80u), 1, t96);
        t97 = g->edx;
        wr32(sp0 - 0x50u, 4u);
        wr32(sp0 - 0x54u, rd32(arg2));
        g->eax = arg2;
        g->ecx = rd32(arg2);
        g->edx = t97;
        t98 = rd32(arg2);
        g->esp = sp0 - 0x50u;
        t99 = cow_cdecl(g, COW_IMG(0x10285870u), 1, t98);
        t100 = g->ecx;
        t101 = g->edx;
        wr32(sp0 - 0x58u, 0u);
        wr32(sp0 - 0x5cu, 0u);
        wr32(sp0 - 0x60u, 0u);
        wr32(sp0 - 0x64u, 0u);
        g->ecx = t100;
        g->edx = t101;
        g->esp = sp0 - 0x38u;
        cow_cdecl(g, COW_IMG(0x102824e0u), 11, 0u, 0u, 0u, 0u, rd32(sp0 - 0x54u), 4u, rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), 0xffu, 0xffu);
        t102 = g->ecx;
        t103 = g->edx;
        ecx = t102;
        edx = t103;
    }
    if (rd32(esi + 0x58u) == 0u)
    {
        eax = rd32(esi + 0x58u);
    }
    else
    {
        eax = rd32(esi + 0x58u);
        wr32(sp0 - 0x24u, 0u);
        g->eax = eax;
        g->esp = sp0 - 0x18u;
        t104 = cow_call_regs(g, COW_IMG(0x10282490u), g->eax, ecx, edx, 1, 3, 0u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
        t105 = g->ecx;
        t106 = rd32(esi + 0x80u);
        wr32(sp0 - 0x28u, t106);
        g->ecx = t105;
        g->edx = t106;
        g->esp = sp0 - 0x24u;
        t107 = cow_cdecl(g, COW_IMG(0x10283f40u), 1, t106);
        t108 = g->ecx;
        t109 = g->edx;
        wr32(sp0 - 0x2cu, 1u);
        g->edx = t109;
        g->esp = sp0 - 0x28u;
        t110 = cow_cdecl(g, COW_IMG(0x10283f90u), 1, 1u);
        t111 = g->edx;
        t112 = rd32(sp0 + 4u) + 1u;
        t113 = rd8(esi + 0xa0u);
        wr32(sp0 + 4u, t112);
        if ((t113 & 2u) != 0u)
        {
            eax = (t110 & 0xffffff00u) | t113;
            ecx = t112;
            edx = t111;
            goto L_10290f6f;
        }
        ecx = t112;
        edx = t111;
        if (rd32(esi + 0x5cu) != 0u)
        {
            eax = rd32(esi + 0x5cu);
            goto L_10290f6f;
        }
        t114 = rd32(esi + 0x74u);
        wr32(sp0 - 0x24u, t114);
        g->eax = t114;
        g->esp = sp0 - 0x24u;
        t115 = cow_call_regs(g, COW_IMG(0x102827f0u), g->eax, g->ecx, edx, 1, 0);
        eax = t115;
L_10290f74: ;
        t117 = rd32(rd32(esi + 0x58u) + 0x14u);
        wr32(sp0 - 0x24u, t117);
        g->edx = t117;
        g->esp = sp0 - 0x20u;
        cow_cdecl(g, COW_IMG(0x10281c40u), 1, t117);
        t118 = g->edx;
        t119 = rd32(rd32(esi + 0x58u) + 0x18u);
        wr32(sp0 - 0x28u, t119);
        g->eax = rd32(esi + 0x58u);
        g->ecx = t119;
        t120 = rd32(esi + 0x58u);
        g->esp = sp0 - 0x24u;
        t121 = cow_cdecl(g, COW_IMG(0x10281d80u), 1, t119);
        t122 = g->ecx;
        t123 = edi | rd32(sp0 - 0xcu);
        wr32(sp0 - 0x2cu, t123);
        t124 = ebx | ebp | 0x10u;
        wr32(sp0 - 0x30u, t124);
        g->ecx = t122;
        g->esp = sp0 - 0x28u;
        cow_cdecl(g, COW_IMG(0x10284b40u), 2, t124, t123);
        t125 = g->ecx;
        wr32(sp0 - 0x34u, 4u);
        wr32(sp0 - 0x38u, rd32(arg2));
        g->eax = rd32(arg2);
        g->ecx = t125;
        g->edx = arg2;
        t126 = rd32(arg2);
        g->esp = sp0 - 0x34u;
        t127 = cow_cdecl(g, COW_IMG(0x10285870u), 1, t126);
        t128 = g->ecx;
        t129 = g->edx;
        wr32(sp0 - 0x3cu, 1u);
        g->esp = sp0 - 0x30u;
        t130 = cow_call_regs(g, COW_IMG(0x10282490u), g->eax, t128, t129, 1, 3, 1u, rd32(sp0 - 0x38u), 4u);
        t131 = g->ecx;
        t132 = g->edx;
        eax = t130;
        ecx = t131;
        edx = t132;
    }
    g->ecx = ecx;
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x10283240u), g->eax, g->ecx, edx, 1, 0);
    t133 = g->ecx;
    t134 = g->edx;
    t135 = -rd32(sp0 + 4u);
    wr32(sp0 - 0x24u, t135);
    cow_cdecl(g, COW_IMG(0x10283f90u), 1, t135);
L_10290fca: ;
    return;
L_10290c2f: ;
    if (ecx != 0xa0009u)
    {
        ebx = 0u;
        goto L_10290c47;
    }
    if (rd32(eax + 0x50u) == 0u)
    {
        ebx = 0u;
        goto L_10290c47;
    }
    ebx = 0x200000u;
    goto L_10290c41;
L_10290f6f: ;
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t116 = cow_call_regs(g, COW_IMG(0x10282de0u), g->eax, g->ecx, edx, 1, 0);
    eax = t116;
    goto L_10290f74;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10290b80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10290b80(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
