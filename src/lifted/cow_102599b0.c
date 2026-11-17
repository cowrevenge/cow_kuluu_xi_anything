/* f_0x102599b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102599b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
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
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0x1cu, self);
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t1 = cow_thiscall(g, COW_IMG(0x10259150u), self, 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        goto L_10259dcc;
    }
    eax = t1;
    edx = t2;
    if (arg1 == 0u) goto L_10259dcc;
    wr32(sp0 - 0x2cu, in_esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t3 = cow_thiscall(g, COW_IMG(0x1018d2b0u), sp0 - 0xcu, 0);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x1018d3d0u), arg1, 0);
    t6 = g->edx;
    if (rd32(self + 4u) == 0u)
    {
        eax = t5;
        edx = t6;
        goto L_10259db4;
    }
    edx = t6;
    esi = rd32(self + 4u);
    edi = self;
L_102599f9: ;
    if (rd32(esi + 8u) - 1u > 7u)
    {
        eax = rd32(esi + 8u) - 1u;
        goto L_10259da9;
    }
    eax = rd32(esi + 8u) - 1u;
    t7 = rd32(COW_IMG(0x10259dd8u) + eax * 4u);
    switch (t7 - RD)
    {
    case 0x10259a0du: goto L_10259a0d;
    case 0x10259a1eu: goto L_10259a1e;
    case 0x10259a2eu: goto L_10259a2e;
    case 0x10259a3eu: goto L_10259a3e;
    case 0x10259adcu: goto L_10259adc;
    case 0x10259b36u: goto L_10259b36;
    case 0x10259be0u: goto L_10259be0;
    case 0x10259d12u: goto L_10259d12;
    default: rt_fatal(g, COW_IMG(0x10259a06u), "switch");
    }
    return 0;
L_102599f5: ;
    edi = rd32(sp0 - 0x1cu);
    goto L_102599f9;
L_10259a0d: ;
    wr32(sp0 - 0x30u, COW_IMG(0x1034f2b8u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t130 = cow_thiscall(g, COW_IMG(0x1018d440u), arg1, 1, COW_IMG(0x1034f2b8u));
    t131 = g->edx;
    eax = t130;
    edx = t131;
L_10259da9: ;
    if (rd32(esi + 4u) != 0u)
    {
        esi = rd32(esi + 4u);
        goto L_102599f5;
    }
L_10259db4: ;
    g->esp = sp0 - 0x2cu;
    cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xcu, edx, 0);
    t132 = g->edx;
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x24u);
    g->edx = t132;
    return 1u;
L_10259a1e: ;
    wr32(sp0 - 0x30u, esi + 0xcu);
    g->eax = esi + 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t128 = cow_thiscall(g, COW_IMG(0x1018d450u), arg1, 1, esi + 0xcu);
    t129 = g->edx;
    eax = t128;
    edx = t129;
    goto L_10259da9;
L_10259a2e: ;
    wr32(sp0 - 0x30u, esi + 0xcu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t126 = cow_thiscall(g, COW_IMG(0x1018d450u), arg1, 1, esi + 0xcu);
    t127 = g->edx;
    eax = t126;
    edx = t127;
    goto L_10259da9;
L_10259a3e: ;
    if (rd32(esi + 0x10u) == 0u)
    {
        eax = rd32(esi + 0x10u);
        goto L_10259da9;
    }
    eax = rd32(esi + 0x10u);
    if (rd32(esi + 0xcu) != 0u)
    {
        ecx = rd32(esi + 0xcu);
        goto L_10259aaf;
    }
    ecx = rd32(esi + 0xcu);
    if (rd32(eax + 0xcu) != 2u) goto L_10259a72;
    wr32(sp0 - 0x30u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t99 = cow_stdcall(g, COW_IMG(0x10259170u), 1, esi);
    t100 = g->edx;
    if (rd32(t99 + 8u) != 7u)
    {
        eax = t99;
        ecx = rd32(t99 + 8u);
        edx = t100;
        goto L_10259c0b;
    }
    eax = t99;
    edx = t100;
    wr32(eax + 8u, 0u);
    goto L_10259da9;
L_10259a72: ;
    t107 = rd32(esi + 0x14u);
    wr32(sp0 - 0x30u, t107);
    g->eax = eax;
    g->edx = t107;
    g->esp = sp0 - 0x2cu;
    t108 = cow_cdecl(g, COW_IMG(0x10258e30u), 1, t107);
    t109 = g->edx;
    wr32(sp0 - 0x30u, t108);
    cow_thiscall(g, COW_IMG(0x1018d440u), arg1, 1, t108);
    t110 = rd32(rd32(esi + 0x10u) + 0x1cu);
    wr32(sp0 - 0x30u, t110);
    t111 = rd32(rd32(esi + 0x10u) + 0x34u);
    wr32(sp0 - 0x34u, t111);
    t112 = rd32(rd32(esi + 0x10u) + 0x10u);
    wr32(sp0 - 0x38u, t112);
    wr32(sp0 - 0x3cu, 0u);
    t113 = rd32(esi + 0xcu);
    wr32(sp0 - 0x40u, t113);
    g->eax = t112;
    g->edx = t111;
    t114 = cow_cdecl(g, COW_IMG(0x10258e70u), 5, t113, 0u, t112, t111, t110);
    t115 = g->edx;
    wr32(sp0 - 0x30u, t114);
    g->edx = t115;
    t116 = cow_thiscall(g, COW_IMG(0x1018d440u), arg1, 1, t114);
    t117 = g->edx;
    eax = t116;
    edx = t117;
    goto L_10259da9;
L_10259aaf: ;
    t118 = rd32(eax + 0x1cu);
    wr32(sp0 - 0x30u, t118);
    t119 = rd32(eax + 0x34u);
    wr32(sp0 - 0x34u, t119);
    t120 = rd32(eax + 0x10u);
    wr32(sp0 - 0x38u, t120);
    t121 = rd32(esi + 0x14u) == 0u;
    wr32(sp0 - 0x3cu, t121);
    wr32(sp0 - 0x40u, ecx);
    g->eax = t120;
    g->edx = t121;
    g->esp = sp0 - 0x2cu;
    t122 = cow_cdecl(g, COW_IMG(0x10258e70u), 5, ecx, t121, t120, t119, t118);
    t123 = g->edx;
    wr32(sp0 - 0x30u, t122);
    g->edx = t123;
    t124 = cow_thiscall(g, COW_IMG(0x1018d440u), arg1, 1, t122);
    t125 = g->edx;
    eax = t124;
    edx = t125;
    goto L_10259da9;
L_10259adc: ;
    if (rd32(esi + 0x10u) == 0u)
    {
        eax = rd32(esi + 0x10u);
    }
    else
    {
        eax = rd32(esi + 0x10u);
        if (rd32(esi + 0xcu) == 0u)
        {
            ecx = rd32(esi + 0xcu);
            goto L_10259b05;
        }
        ecx = rd32(esi + 0xcu);
        if (rd32(ecx + 8u) != 2u)
        {
            edx = rd32(ecx + 8u);
            goto L_10259afb;
        }
        ecx = rd32(ecx + 0xcu);
L_10259b08: ;
        t91 = rd32(eax + 0x18u) == 4u;
        wr32(sp0 - 0x30u, t91);
        t92 = rd32(eax + 0x1cu);
        wr32(sp0 - 0x34u, t92);
        t93 = rd32(eax + 0x34u);
        wr32(sp0 - 0x38u, t93);
        t94 = rd32(eax + 0x10u);
        wr32(sp0 - 0x3cu, t94);
        wr32(sp0 - 0x40u, ecx);
        g->eax = t94;
        g->edx = t93;
        g->esp = sp0 - 0x2cu;
        t95 = cow_cdecl(g, COW_IMG(0x10258170u), 5, ecx, t94, t93, t92, t91);
        t96 = g->edx;
        wr32(sp0 - 0x30u, t95);
        g->edx = t96;
        t97 = cow_thiscall(g, COW_IMG(0x1018d440u), arg1, 1, t95);
        t98 = g->edx;
        eax = t97;
        edx = t98;
    }
    goto L_10259da9;
L_10259afb: ;
    if (edx != 3u) goto L_10259b05;
    ecx = rd32(ecx + 0xcu);
    goto L_10259b08;
L_10259b05: ;
    ecx = 0xffffffffu;
    goto L_10259b08;
L_10259b36: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t64 = cow_thiscall(g, COW_IMG(0x1018d3d0u), sp0 - 0xcu, 0);
    t65 = g->edx;
    wr32(sp0 - 0x30u, esi);
    g->edx = t65;
    t66 = cow_stdcall(g, COW_IMG(0x10259170u), 1, esi);
    t67 = g->edx;
    if (t66 == 0u)
    {
        eax = t66;
        edx = t67;
    }
    else
    {
        eax = t66;
        edx = t67;
        if (rd32(eax + 8u) != 7u)
        {
            wr32(sp0 - 0x30u, eax);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x2cu;
            t68 = cow_stdcall(g, COW_IMG(0x10259170u), 1, eax);
            t69 = g->edx;
            if (t68 == 0u)
            {
                eax = t68;
                edx = t69;
            }
            else
            {
                eax = t68;
                edx = t69;
                if (rd32(eax + 8u) == 2u)
                {
                    if (rd32(eax + 0xcu) == 0u)
                    {
                        if (rd32(rd32(eax + 0x10u) + 0x10u) != 2u)
                        {
                            ecx = rd32(rd32(eax + 0x10u) + 0x10u);
                            eax = rd32(eax + 0x10u);
                            goto L_10259b86;
                        }
                        eax = rd32(eax + 0x10u);
                        t70 = rd32(eax + 0x1cu);
                        wr32(sp0 - 0x30u, t70);
                        t71 = rd32(eax + 0x34u);
                        wr32(sp0 - 0x34u, t71);
                        t72 = rd32(esi + 0xcu);
                        wr32(sp0 - 0x38u, t72);
                        g->eax = t72;
                        g->edx = t71;
                        g->esp = sp0 - 0x2cu;
                        t73 = cow_cdecl(g, COW_IMG(0x10258f20u), 3, t72, t71, t70);
                        t74 = g->edx;
                        eax = t73;
                        edx = t74;
L_10259b9c: ;
                        wr32(sp0 - 0x30u, eax);
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x2cu;
                        t80 = cow_thiscall(g, COW_IMG(0x1018d430u), sp0 - 0xcu, 1, eax);
                        t81 = g->edx;
                        eax = t80;
                        edx = t81;
                    }
                }
            }
        }
    }
L_10259ba9: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t82 = cow_thiscall(g, COW_IMG(0x1018d480u), sp0 - 0xcu, 0);
    t83 = g->edx;
    if (t82 != 0u)
    {
        eax = t82;
        wr32(sp0 - 0x30u, sp0 - 0xcu);
        g->eax = eax;
        g->edx = sp0 - 0xcu;
        g->esp = sp0 - 0x2cu;
        t89 = cow_thiscall(g, COW_IMG(0x1018d450u), arg1, 1, sp0 - 0xcu);
        t90 = g->edx;
        eax = t89;
        edx = t90;
    }
    else
    {
        eax = t82;
        edx = t83;
        t84 = rd32(esi + 0xcu);
        wr32(sp0 - 0x30u, t84);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        t85 = cow_cdecl(g, COW_IMG(0x10258ef0u), 1, t84);
        t86 = g->edx;
        wr32(sp0 - 0x30u, t85);
        g->edx = t86;
        t87 = cow_thiscall(g, COW_IMG(0x1018d440u), arg1, 1, t85);
        t88 = g->edx;
        eax = t87;
        edx = t88;
    }
    goto L_10259da9;
L_10259b86: ;
    if (ecx != 3u) goto L_10259ba9;
    t75 = rd32(eax + 0x1cu);
    wr32(sp0 - 0x30u, t75);
    t76 = rd32(eax + 0x34u);
    wr32(sp0 - 0x34u, t76);
    t77 = rd32(esi + 0xcu);
    wr32(sp0 - 0x38u, t77);
    g->eax = t77;
    g->edx = t76;
    g->esp = sp0 - 0x2cu;
    t78 = cow_cdecl(g, COW_IMG(0x10258f80u), 3, t77, t76, t75);
    t79 = g->edx;
    eax = t78;
    edx = t79;
    goto L_10259b9c;
L_10259be0: ;
    if (rd32(esi + 0x10u) == 0u)
    {
        eax = rd32(esi + 0x10u);
        goto L_10259da9;
    }
    eax = rd32(esi + 0x10u);
    if (rd32(eax + 0xcu) != 2u)
    {
        ecx = rd32(eax + 0xcu);
        goto L_10259c3c;
    }
    wr32(sp0 - 0x30u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t24 = cow_stdcall(g, COW_IMG(0x10259170u), 1, esi);
    t25 = g->edx;
    if (rd32(t24 + 8u) != 7u)
    {
        eax = t24;
        ecx = rd32(t24 + 8u);
        edx = t25;
        goto L_10259c0b;
    }
    eax = t24;
    edx = t25;
    wr32(eax + 8u, 0u);
    goto L_10259da9;
L_10259c0b: ;
    if (ecx == 1u)
    {
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        t101 = cow_thiscall(g, COW_IMG(0x1018d470u), eax + 0xcu, 0);
        t102 = g->edx;
        if (rd8(t101) != 0x20u)
        {
            eax = t101;
            edx = t102;
        }
        else
        {
            edx = t102;
            edi = eax + 0xcu;
            eax = t101;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x2cu;
            t103 = cow_thiscall(g, COW_IMG(0x1018d470u), edi, 0);
            t104 = g->edx;
            wr32(sp0 - 0x30u, t103 + 1u);
            g->eax = t103 + 1u;
            g->edx = t104;
            t105 = cow_thiscall(g, COW_IMG(0x1018d430u), edi, 1, t103 + 1u);
            t106 = g->edx;
            eax = t105;
            edx = t106;
        }
    }
    goto L_10259da9;
L_10259c3c: ;
    if (ecx == 1u) goto L_10259c46;
    if (rd32(esi + 0xcu) != 0u) goto L_10259c68;
L_10259c46: ;
    t57 = rd32(eax + 0x1cu);
    wr32(sp0 - 0x30u, t57);
    t58 = rd32(eax + 0x34u);
    wr32(sp0 - 0x34u, t58);
    t59 = rd32(eax + 0x10u);
    wr32(sp0 - 0x38u, t59);
    wr32(sp0 - 0x3cu, 0u);
    g->eax = t59;
    g->edx = t58;
    g->esp = sp0 - 0x2cu;
    t60 = cow_cdecl(g, COW_IMG(0x10258d20u), 4, 0u, t59, t58, t57);
    t61 = g->edx;
    wr32(sp0 - 0x30u, t60);
    g->edx = t61;
    t62 = cow_thiscall(g, COW_IMG(0x1018d440u), arg1, 1, t60);
    t63 = g->edx;
    eax = t62;
    edx = t63;
    goto L_10259da9;
L_10259c68: ;
    if (rd32(eax + 0x30u) == 0u) goto L_10259cb5;
    if (rd32(eax + 0x34u) != 0u)
    {
        ecx = rd32(eax + 0x34u);
        goto L_10259c94;
    }
    t26 = rd32(eax + 0x1cu);
    wr32(sp0 - 0x30u, t26);
    wr32(sp0 - 0x34u, 0u);
    t27 = rd32(eax + 0x10u);
    wr32(sp0 - 0x38u, t27);
    wr32(sp0 - 0x3cu, 1u);
    g->eax = eax;
    g->edx = t27;
    g->esp = sp0 - 0x2cu;
    t28 = cow_cdecl(g, COW_IMG(0x10258d20u), 4, 1u, t27, 0u, t26);
    t29 = g->edx;
    wr32(sp0 - 0x30u, t28);
    g->edx = t29;
    t30 = cow_thiscall(g, COW_IMG(0x1018d440u), arg1, 1, t28);
    t31 = g->edx;
    eax = t30;
    edx = t31;
    goto L_10259da9;
L_10259c94: ;
    wr32(sp0 - 0x30u, 0xffffffffu);
    t32 = rd32(eax + 0x1cu);
    wr32(sp0 - 0x34u, t32);
    wr32(sp0 - 0x38u, ecx);
    t33 = rd32(eax + 0x10u);
    wr32(sp0 - 0x3cu, t33);
    wr32(sp0 - 0x40u, 0u);
    eax = t33;
    edx = t32;
    loc_30 = 0xffffffffu;
    loc_34 = t32;
    loc_38 = ecx;
    loc_3c = t33;
    loc_40 = 0u;
L_10259ca0: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t45 = cow_cdecl(g, COW_IMG(0x10258d90u), 5, loc_40, loc_3c, loc_38, loc_34, loc_30);
    t46 = g->edx;
    wr32(sp0 - 0x30u, t45);
    g->edx = t46;
    t47 = cow_thiscall(g, COW_IMG(0x1018d440u), arg1, 1, t45);
    t48 = g->edx;
    eax = t47;
    edx = t48;
    goto L_10259da9;
L_10259cb5: ;
    if (rd32(eax + 0x2cu) == 0u) goto L_10259cec;
    eax = rd32(eax + 0x2cu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t34 = cow_thiscall(g, COW_IMG(0x10258710u), eax, 0);
    t35 = g->edx;
    if (t34 == 0u) goto L_10259cec;
    eax = t34;
    edx = t35;
    t36 = rd32(esi + 0x10u);
    g->eax = eax;
    g->esp = sp0 - 0x2cu;
    t37 = cow_thiscall(g, COW_IMG(0x102586f0u), rd32(t36 + 0x2cu), 0);
    wr32(sp0 - 0x30u, t37);
    t38 = rd32(t36 + 0x1cu);
    wr32(sp0 - 0x34u, t38);
    t39 = rd32(t36 + 0x34u);
    wr32(sp0 - 0x38u, t39);
    t40 = rd32(t36 + 0x10u);
    wr32(sp0 - 0x3cu, t40);
    g->eax = t39;
    g->edx = t38;
    t41 = rd32(t36 + 0x2cu);
    g->esp = sp0 - 0x3cu;
    t42 = cow_thiscall(g, COW_IMG(0x10258710u), t41, 0);
    t43 = g->ecx;
    t44 = g->edx;
    wr32(sp0 - 0x40u, t42);
    eax = t42;
    ecx = t43;
    edx = t44;
    loc_30 = rd32(sp0 - 0x30u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = t42;
    goto L_10259ca0;
L_10259cec: ;
    t49 = rd32(rd32(esi + 0x10u) + 0x1cu);
    wr32(sp0 - 0x30u, t49);
    t50 = rd32(rd32(esi + 0x10u) + 0x34u);
    wr32(sp0 - 0x34u, t50);
    t51 = rd32(rd32(esi + 0x10u) + 0x10u);
    wr32(sp0 - 0x38u, t51);
    wr32(sp0 - 0x3cu, 1u);
    g->eax = rd32(esi + 0x10u);
    g->edx = t51;
    t52 = rd32(esi + 0x10u);
    g->esp = sp0 - 0x2cu;
    t53 = cow_cdecl(g, COW_IMG(0x10258d20u), 4, 1u, t51, t50, t49);
    t54 = g->edx;
    wr32(sp0 - 0x30u, t53);
    g->edx = t54;
    t55 = cow_thiscall(g, COW_IMG(0x1018d440u), arg1, 1, t53);
    t56 = g->edx;
    eax = t55;
    edx = t56;
    goto L_10259da9;
L_10259d12: ;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, COW_IMG(0x1018d2b0u), sp0 - 0x18u, 0);
    t8 = g->edx;
    if (rd32(esi + 0xcu) != 2u)
    {
        eax = rd32(esi + 0xcu);
        ecx = rd32(esi + 0x2cu);
        if (ecx == 0u)
        {
            if (rd32(esi + 0x30u) == 0u)
            {
                wr32(sp0 - 0x30u, esi + 0x20u);
                edx = esi + 0x20u;
                loc_30 = esi + 0x20u;
            }
            else
            {
                ecx = rd32(esi + 0x30u);
                t14 = rd32(esi + 0x10u);
                wr32(sp0 - 0x30u, t14);
                t15 = rd32(esi + 0x14u);
                wr32(sp0 - 0x34u, t15);
                wr32(sp0 - 0x38u, sp0 - 0x18u);
                if (rd32(esi + 0x34u) != 0u)
                {
                    edx = rd32(ecx);
                    loc_30 = t14;
                    loc_34 = t15;
                    g->eax = sp0 - 0x18u;
                    g->edx = edx;
                    g->esp = sp0 - 0x2cu;
                    t18 = cow_thiscall(g, rd32(edx + 0x18u), ecx, 3, sp0 - 0x18u, loc_34, loc_30);
                    t19 = g->edx;
                    wr32(sp0 - 0x30u, sp0 - 0x18u);
                    eax = t18;
                    edx = t19;
                    loc_30 = sp0 - 0x18u;
                }
                else
                {
                    edx = rd32(ecx);
                    loc_30 = t14;
                    loc_34 = t15;
                    g->eax = sp0 - 0x18u;
                    g->edx = edx;
                    g->esp = sp0 - 0x2cu;
                    t16 = cow_thiscall(g, rd32(edx + 0x10u), ecx, 3, sp0 - 0x18u, loc_34, loc_30);
                    t17 = g->edx;
                    wr32(sp0 - 0x30u, sp0 - 0x18u);
                    eax = t16;
                    edx = t17;
                    loc_30 = sp0 - 0x18u;
                }
            }
        }
        else
        {
            t11 = rd32(esi + 0x10u);
            wr32(sp0 - 0x30u, t11);
            t12 = rd32(esi + 0x14u);
            wr32(sp0 - 0x34u, t12);
            wr32(sp0 - 0x38u, sp0 - 0x18u);
            g->edx = sp0 - 0x18u;
            g->esp = sp0 - 0x2cu;
            cow_thiscall(g, COW_IMG(0x10258760u), ecx, 3, sp0 - 0x18u, t12, t11);
            t13 = g->edx;
            wr32(sp0 - 0x30u, sp0 - 0x18u);
            eax = sp0 - 0x18u;
            edx = t13;
            loc_30 = sp0 - 0x18u;
        }
    }
    else
    {
        eax = rd32(esi + 0xcu);
        ecx = rd32(esi + 0x2cu);
        edx = t8;
        if (ecx == 0u)
        {
            wr32(sp0 - 0x30u, esi + 0x20u);
            loc_30 = esi + 0x20u;
        }
        else
        {
            t9 = rd32(esi + 0x10u);
            wr32(sp0 - 0x30u, t9);
            wr32(sp0 - 0x34u, 0xffffffffu);
            wr32(sp0 - 0x38u, sp0 - 0x18u);
            g->edx = sp0 - 0x18u;
            g->esp = sp0 - 0x2cu;
            cow_thiscall(g, COW_IMG(0x10258760u), ecx, 3, sp0 - 0x18u, 0xffffffffu, t9);
            t10 = g->edx;
            wr32(sp0 - 0x30u, sp0 - 0x18u);
            eax = sp0 - 0x18u;
            edx = t10;
            loc_30 = sp0 - 0x18u;
        }
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t20 = cow_thiscall(g, COW_IMG(0x1018d450u), arg1, 1, loc_30);
    t21 = g->edx;
    t22 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x18u, t21, 0);
    t23 = g->edx;
    eax = t22;
    edx = t23;
    goto L_10259da9;
L_10259dcc: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102599b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102599b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
