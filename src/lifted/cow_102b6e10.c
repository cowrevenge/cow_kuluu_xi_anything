/* f_0x102b6e10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102b6e10(Guest* g)
{
    double d116;
    double d123;
    double d131;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t117;
    uint32_t t118;
    uint32_t t119;
    uint32_t t12;
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t124;
    uint32_t t125;
    uint32_t t126;
    uint32_t t127;
    uint32_t t128;
    uint32_t t129;
    uint32_t t13;
    uint32_t t130;
    uint32_t t132;
    uint32_t t133;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    t1 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x14u, t1);
    g->eax = t1;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, t1, in_edi, in_esi);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 - 0x18u, arg1);
    wr32(sp0 - 0x1cu, COW_IMG(0x103c22dcu));
    g->ecx = t3;
    g->edx = t4;
    g->esp = sp0 - 0x14u;
    t5 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c22dcu), arg1);
    t6 = g->ecx;
    t7 = g->edx;
    if ((int32_t)arg2 < 1)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        edi = t1 + 1u;
    }
    else
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        edi = t1 + 1u;
        wr32(sp0 - 0x14u, edi);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, edi, in_edi, in_esi);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(sp0 - 0x18u, rd32(arg1));
        wr32(sp0 - 0x1cu, COW_IMG(0x103bda40u));
        g->eax = rd32(arg1);
        g->ecx = t8;
        g->edx = t9;
        t10 = rd32(arg1);
        g->esp = sp0 - 0x14u;
        t11 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bda40u), t10);
        t12 = g->ecx;
        t13 = g->edx;
        wr32(sp0 - 0x20u, edi);
        g->edx = t13;
        t14 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, edi, COW_IMG(0x103bda40u), rd32(sp0 - 0x18u));
        t15 = g->edx;
        t16 = rd32(arg1 + 0xcu);
        wr32(sp0 - 0x24u, t16);
        wr32(sp0 - 0x28u, COW_IMG(0x103bda30u));
        g->ecx = t16;
        g->edx = t15;
        g->esp = sp0 - 0x20u;
        t17 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bda30u), t16);
        t18 = g->ecx;
        t19 = g->edx;
        wr32(sp0 - 0x2cu, edi);
        g->ecx = t18;
        t20 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, edi, COW_IMG(0x103bda30u), rd32(sp0 - 0x24u));
        t21 = g->ecx;
        t22 = rd32(arg1 + 0x10u);
        wr32(sp0 - 0x30u, t22);
        wr32(sp0 - 0x34u, COW_IMG(0x103bda20u));
        g->ecx = t21;
        g->edx = t22;
        g->esp = sp0 - 0x2cu;
        t23 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bda20u), t22);
        t24 = g->ecx;
        t25 = g->edx;
        wr32(sp0 - 0x38u, edi);
        g->ecx = t24;
        g->edx = t25;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, edi, COW_IMG(0x103bda20u), rd32(sp0 - 0x30u));
        t26 = g->ecx;
        t27 = g->edx;
        wr32(sp0 - 0x3cu, arg1 + 0x14u);
        wr32(sp0 - 0x40u, COW_IMG(0x103c22ccu));
        g->eax = arg1 + 0x14u;
        g->ecx = t26;
        g->edx = t27;
        g->esp = sp0 - 0x38u;
        t28 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c22ccu), arg1 + 0x14u);
        t29 = g->ecx;
        t30 = g->edx;
        if ((int32_t)arg2 < 2)
        {
            eax = t28;
            ecx = t29;
            edx = t30;
        }
        else
        {
            ecx = t29;
            edx = t30;
            wr32(sp0 - 0x14u, edi + 1u);
            wr32(sp0 - 0x18u, arg2);
            wr32(sp0 - 0x1cu, arg1 + 0x14u);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_cdecl(g, COW_IMG(0x10274ad0u), 3, arg1 + 0x14u, arg2, edi + 1u);
            t31 = g->ecx;
            t32 = g->edx;
            wr32(sp0 - 0x20u, edi + 1u);
            wr32(sp0 - 0x24u, arg2);
            wr32(sp0 - 0x28u, arg1 + 0x20u);
            g->eax = arg1 + 0x20u;
            g->ecx = t31;
            g->edx = t32;
            g->esp = sp0 - 0x1cu;
            t33 = cow_cdecl(g, COW_IMG(0x10274ad0u), 3, arg1 + 0x20u, arg2, edi + 1u);
            t34 = g->ecx;
            t35 = g->edx;
            eax = t33;
            ecx = t34;
            edx = t35;
        }
        wr32(sp0 - 0x14u, edi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t36 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, edi, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t37 = g->edx;
        t38 = rd32(arg1 + 0x30u);
        wr32(sp0 - 0x18u, t38);
        wr32(sp0 - 0x1cu, COW_IMG(0x103c22bcu));
        g->ecx = t38;
        g->edx = t37;
        g->esp = sp0 - 0x14u;
        t39 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c22bcu), t38);
        t40 = g->ecx;
        t41 = g->edx;
        wr32(sp0 - 0x20u, edi);
        g->ecx = t40;
        t42 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, edi, COW_IMG(0x103c22bcu), rd32(sp0 - 0x18u));
        t43 = g->ecx;
        t44 = rd32(arg1 + 0x34u);
        wr32(sp0 - 0x24u, t44);
        wr32(sp0 - 0x28u, COW_IMG(0x103c22b0u));
        g->ecx = t43;
        g->edx = t44;
        g->esp = sp0 - 0x20u;
        t45 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c22b0u), t44);
        t46 = g->ecx;
        t47 = g->edx;
        if ((int32_t)arg2 < 2)
        {
            eax = t45;
            ecx = t46;
            edx = t47;
        }
        else
        {
            ecx = t46;
            edx = t47;
            if (rd32(arg1 + 0x34u) == 0u)
            {
                eax = rd32(arg1 + 0x34u);
                wr32(sp0 - 0x14u, edi + 1u);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edi + 1u;
                g->esp = sp0 - 8u;
                t51 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, edi + 1u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
                t52 = g->ecx;
                t53 = g->edx;
                wr32(sp0 - 0x18u, COW_IMG(0x103be9fcu));
                g->ecx = t52;
                g->edx = t53;
                g->esp = sp0 - 0x10u;
                t54 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be9fcu), rd32(sp0 - 0x14u));
                t55 = g->ecx;
                t56 = g->edx;
                eax = t54;
                ecx = t55;
                edx = t56;
            }
            else
            {
                eax = rd32(arg1 + 0x34u);
                wr32(sp0 - 0x14u, edi + 1u);
                wr32(sp0 - 0x18u, arg2);
                wr32(sp0 - 0x1cu, eax);
                g->eax = eax;
                g->ecx = edi + 1u;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t48 = cow_cdecl(g, COW_IMG(0x102a96e0u), 3, eax, arg2, edi + 1u);
                t49 = g->ecx;
                t50 = g->edx;
                eax = t48;
                ecx = t49;
                edx = t50;
            }
        }
        wr32(sp0 - 0x14u, edi);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, edi, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t57 = g->ecx;
        t58 = g->edx;
        t59 = rd32(arg1 + 0x44u);
        wr32(sp0 - 0x18u, t59);
        wr32(sp0 - 0x1cu, COW_IMG(0x103c22a0u));
        g->eax = t59;
        g->ecx = t57;
        g->edx = t58;
        g->esp = sp0 - 0x14u;
        t60 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c22a0u), t59);
        t61 = g->ecx;
        t62 = g->edx;
        wr32(sp0 - 0x20u, edi);
        g->edx = t62;
        t63 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, edi, COW_IMG(0x103c22a0u), rd32(sp0 - 0x18u));
        t64 = g->edx;
        t65 = rd32(arg1 + 0x48u);
        wr32(sp0 - 0x24u, t65);
        wr32(sp0 - 0x28u, COW_IMG(0x103c2290u));
        g->ecx = t65;
        g->edx = t64;
        g->esp = sp0 - 0x20u;
        t66 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c2290u), t65);
        t67 = g->ecx;
        t68 = g->edx;
        wr32(sp0 - 0x2cu, edi);
        g->ecx = t67;
        t69 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, edi, COW_IMG(0x103c2290u), rd32(sp0 - 0x24u));
        t70 = g->ecx;
        t71 = rd32(arg1 + 0x4cu);
        wr32(sp0 - 0x30u, t71);
        wr32(sp0 - 0x34u, COW_IMG(0x103c2280u));
        g->ecx = t70;
        g->edx = t71;
        g->esp = sp0 - 0x2cu;
        t72 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c2280u), t71);
        t73 = g->ecx;
        t74 = g->edx;
        if ((int32_t)arg2 < 2)
        {
            eax = t72;
            ecx = t73;
            edx = t74;
        }
        else
        {
            ecx = t73;
            edx = t74;
            t75 = rd32(arg1 + 0x48u);
            wr32(sp0 + 0xcu, 0u);
            if ((int32_t)t75 <= 0)
            {
                eax = t75;
                goto L_102b6f87;
            }
            ebp = 0u;
L_102b6f61: ;
            wr32(sp0 - 0x14u, edi + 1u);
            wr32(sp0 - 0x18u, arg2);
            t76 = ebp + rd32(arg1 + 0x4cu);
            wr32(sp0 - 0x1cu, t76);
            g->edx = edx;
            g->esp = sp0;
            cow_cdecl(g, COW_IMG(0x102b70c0u), 7, t76, arg2, edi + 1u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
            t77 = g->edx;
            t78 = rd32(sp0 + 0xcu) + 1u;
            t79 = rd32(arg1 + 0x48u);
            t80 = rd32(sp0 + 0xcu);
            wr32(sp0 + 0xcu, t78);
            if ((int32_t)(t80 + 1u) < (int32_t)t79)
            {
                ecx = t79;
                edx = t77;
                ebp = ebp + 0x28u;
                goto L_102b6f61;
            }
            eax = t78;
            ecx = t79;
            edx = t77;
        }
L_102b6f87: ;
        wr32(sp0 - 0x14u, edi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t81 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, edi, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t82 = g->edx;
        t83 = rd32(arg1 + 0x50u);
        wr32(sp0 - 0x18u, t83);
        wr32(sp0 - 0x1cu, COW_IMG(0x103c2270u));
        g->ecx = t83;
        g->edx = t82;
        g->esp = sp0 - 0x14u;
        t84 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c2270u), t83);
        t85 = g->ecx;
        t86 = g->edx;
        eax = t84;
        ecx = t85;
        edx = t86;
    }
    if ((int32_t)arg2 >= 2)
    {
        wr32(sp0 - 0x14u, edi);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t87 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, edi, in_edi, in_esi);
        t88 = g->ecx;
        t89 = g->edx;
        wr32(sp0 - 0x18u, arg1 + 0x54u);
        wr32(sp0 - 0x1cu, COW_IMG(0x103c2264u));
        g->ecx = t88;
        g->edx = t89;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c2264u), arg1 + 0x54u);
        t90 = g->ecx;
        t91 = g->edx;
        wr32(sp0 + 0xcu, 0x12u);
        ecx = t90;
        edx = t91;
        ebp = arg1 + 0x54u;
L_102b6fc6: ;
        wr32(sp0 - 0x14u, edi + 1u);
        wr32(sp0 - 0x18u, arg2);
        wr32(sp0 - 0x1cu, ebp);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10274ad0u), 3, ebp, arg2, edi + 1u);
        t92 = g->ecx;
        t93 = g->edx;
        t94 = rd32(sp0 + 0xcu) - 1u;
        t95 = rd32(sp0 + 0xcu);
        wr32(sp0 + 0xcu, t94);
        if (t95 != 1u)
        {
            ecx = t92;
            edx = t93;
            ebp = ebp + 0xcu;
            goto L_102b6fc6;
        }
        eax = t94;
        ecx = t92;
        edx = t93;
        wr32(sp0 - 0x14u, edi);
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 8u;
        t96 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, edi, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t97 = g->ecx;
        t98 = rd32(arg1 + 0x12cu);
        wr32(sp0 - 0x18u, t98);
        wr32(sp0 - 0x1cu, COW_IMG(0x103c2250u));
        g->ecx = t97;
        g->edx = t98;
        g->esp = sp0 - 0x14u;
        t99 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c2250u), t98);
        t100 = g->ecx;
        t101 = g->edx;
        wr32(sp0 - 0x20u, edi);
        g->ecx = t100;
        g->edx = t101;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, edi, COW_IMG(0x103c2250u), rd32(sp0 - 0x18u));
        t102 = g->ecx;
        t103 = g->edx;
        t104 = rd32(arg1 + 0x130u);
        wr32(sp0 - 0x24u, t104);
        wr32(sp0 - 0x28u, COW_IMG(0x103c2240u));
        g->eax = t104;
        g->edx = t103;
        g->esp = sp0 - 0x20u;
        t105 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c2240u), t104);
        t106 = g->edx;
        wr32(sp0 + 0xcu, arg1 + 0x134u);
        eax = t105;
        ecx = arg1 + 0x134u;
        edx = t106;
        ebp = 0u;
L_102b701f: ;
        wr32(sp0 - 0x14u, edi);
        g->ecx = ecx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, edi, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t107 = g->ecx;
        t108 = rd32(rd32(sp0 + 0xcu));
        wr32(sp0 - 0x18u, t108);
        wr32(sp0 - 0x1cu, ebp);
        wr32(sp0 - 0x20u, COW_IMG(0x103c2228u));
        g->eax = t108;
        g->edx = rd32(sp0 + 0xcu);
        t109 = rd32(sp0 + 0xcu);
        g->esp = sp0 - 0x18u;
        t110 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c2228u), ebp);
        t111 = g->edx;
        t112 = rd32(sp0 + 0xcu) + 4u;
        wr32(sp0 + 0xcu, t112);
        if ((int32_t)(ebp + 1u) < 4)
        {
            eax = t110;
            ecx = t112;
            edx = t111;
            ebp = ebp + 1u;
            goto L_102b701f;
        }
        eax = t110;
        ecx = t112;
        edx = t111;
        wr32(sp0 - 0x14u, edi);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t113 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, edi, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t114 = g->ecx;
        t115 = g->edx;
        wr32(sp0 - 0x18u, t114);
        d116 = (double)rdf32(arg1 + 0x144u);
        wrf64(sp0 - 0x18u, d116);
        wr32(sp0 - 0x1cu, COW_IMG(0x103c221cu));
        g->ecx = t114;
        g->edx = t115;
        g->esp = sp0 - 0x14u;
        t117 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c221cu), cow_dlo(d116));
        t118 = g->ecx;
        t119 = g->edx;
        wr32(sp0 - 0x20u, edi);
        g->ecx = t118;
        g->edx = t119;
        t120 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, edi, COW_IMG(0x103c221cu), rd32(sp0 - 0x18u));
        t121 = g->ecx;
        t122 = g->edx;
        d123 = (double)rdf32(arg1 + 0x144u);
        wrf64(sp0 - 0x18u, d123);
        wr32(sp0 - 0x1cu, COW_IMG(0x103c220cu));
        g->edx = t122;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c220cu), cow_dlo(d123));
        t124 = g->edx;
        wr32(sp0 - 0x20u, edi + 1u);
        wr32(sp0 - 0x24u, arg2);
        wr32(sp0 - 0x28u, arg1 + 0x148u);
        g->eax = edi + 1u;
        g->ecx = arg1 + 0x148u;
        g->edx = t124;
        g->esp = sp0 - 0xcu;
        t125 = cow_cdecl(g, COW_IMG(0x10280d30u), 7, arg1 + 0x148u, arg2, edi + 1u, COW_IMG(0x103c220cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
        t126 = g->ecx;
        t127 = g->edx;
        wr32(sp0 - 0x2cu, edi);
        g->ecx = t126;
        g->edx = t127;
        g->esp = sp0 - 0x20u;
        t128 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, edi, arg1 + 0x148u, arg2);
        t129 = g->ecx;
        t130 = g->edx;
        d131 = (double)rdf32(arg1 + 0x188u);
        wrf64(sp0 - 0x18u, d131);
        wr32(sp0 - 0x1cu, COW_IMG(0x103c21fcu));
        g->edx = t130;
        g->esp = sp0 - 0x14u;
        t132 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c21fcu), cow_dlo(d131));
        t133 = g->edx;
        eax = t132;
        edx = t133;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b6e10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102b6e10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
