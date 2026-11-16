/* f_0x10287fd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10287fd0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t159;
    uint32_t t16;
    uint32_t t160;
    uint32_t t161;
    uint32_t t162;
    uint32_t t163;
    uint32_t t164;
    uint32_t t165;
    uint32_t t166;
    uint32_t t167;
    uint32_t t168;
    uint32_t t169;
    uint32_t t17;
    uint32_t t170;
    uint32_t t171;
    uint32_t t172;
    uint32_t t173;
    uint32_t t174;
    uint32_t t175;
    uint32_t t176;
    uint32_t t177;
    uint32_t t178;
    uint32_t t179;
    uint32_t t18;
    uint32_t t180;
    uint32_t t181;
    uint32_t t182;
    uint32_t t183;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((rd32(sp0 + 4u) & 0xfu) == 0u)
    {
        ebx = rd32(sp0 + 4u);
        goto L_10287fed;
    }
    ebx = rd32(sp0 + 4u);
    g->ebx = ebx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b8e8cu), 0x10u);
    g->ebx = in_ebx;
    return 0u;
L_10287fed: ;
    if (rd8(ebx) != 0x44u) goto L_1028865a;
    if (rd8(ebx + 1u) != 0x4du) goto L_1028865a;
    if (rd8(ebx + 2u) != 0x42u) goto L_1028865a;
    wr32(ebx + 8u, ebx);
    wr32(ebx + 0xcu, 0u);
    if (rd32(COW_IMG(0x109a2788u)) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        t1 = cow_cdecl(g, COW_IMG(0x10288680u), 1, ebx);
        t2 = g->ecx;
        t3 = g->edx;
        g->ebx = ebx;
        g->ecx = t2;
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t3, 1, 5, rd32(COW_IMG(0x109a2788u)), COW_IMG(0x103b8e70u), t1, ebx, in_edi);
        t4 = g->ecx;
        t5 = g->edx;
        ecx = t4;
        edx = t5;
    }
    g->ebx = ebx + 0x10u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_cdecl(g, COW_IMG(0x102886a0u), 3, ebx + 0x10u, in_edi, in_esi);
    t7 = g->edx;
    wr32(t6 + 8u, COW_IMG(0x10277a70u));
    wr32(t6 + 0xcu, COW_IMG(0x10277ad0u));
    wr32(t6 + 0x10u, COW_IMG(0x10278010u));
    wr32(t6 + 0x18u, COW_IMG(0x102784b0u));
    g->ebx = ebx + 0x10u;
    g->ecx = t6 + 0xacu;
    g->edx = t7;
    g->esp = sp0 - 0xcu;
    t8 = cow_cdecl(g, COW_IMG(0x102886a0u), 3, t6 + 0xacu, ebx + 0x10u, in_edi);
    t9 = g->ecx;
    t10 = g->edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_fastcall(g, COW_IMG(0x102750b0u), t9, t10, 0);
    t12 = g->edx;
    t13 = rd32(t6 + 0x24u);
    wr32(sp0 + 4u, t11);
    t14 = rd32(t6 + 0x28u);
    if ((int32_t)rd32(t6 + 0x28u) > (int32_t)t13)
    {
        ecx = t13;
        edx = t12;
        ebx = t14;
        esi = t6;
        edi = t8;
    }
    else
    {
        ecx = t13;
        edx = t12;
        esi = t6;
        edi = t8;
        ebx = ecx;
    }
    if ((int32_t)ebx <= 0)
    {
        wr32(esi + 0x1cu, 0u);
        wr32(esi + 0x20u, 0u);
    }
    else
    {
        wr32(esi + 0x1cu, edi);
        if (rd32(COW_IMG(0x109a2788u)) != 0u)
        {
            g->ecx = ecx;
            g->esp = sp0 - 0x18u;
            t15 = cow_cdecl(g, COW_IMG(0x10288680u), 1, edi);
            t16 = g->ecx;
            g->ebx = ebx;
            g->ecx = t16;
            t17 = rd32(COW_IMG(0x109a2788u));
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t17, 1, 5, t17, COW_IMG(0x103b8e40u), t15, edi, ebx);
            t18 = g->ecx;
            t19 = g->edx;
            ecx = t18;
            edx = t19;
        }
        t20 = ebx * 4u + edi;
        wr32(esi + 0x20u, t20);
        if (rd32(COW_IMG(0x109a2788u)) == 0u)
        {
            ebp = ebx * 4u;
            edi = t20;
        }
        else
        {
            ebp = ebx * 4u;
            edi = t20;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t21 = cow_cdecl(g, COW_IMG(0x10288680u), 1, edi);
            t22 = g->ecx;
            t23 = g->edx;
            g->ebx = ebx;
            g->ecx = t22;
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t23, 1, 5, rd32(COW_IMG(0x109a2788u)), COW_IMG(0x103b8e0cu), t21, edi, ebx);
            t24 = g->ecx;
            t25 = g->edx;
            ecx = t24;
            edx = t25;
        }
        edi = ebp + edi;
    }
    if ((int32_t)rd32(esi + 0x38u) <= (int32_t)rd32(esi + 0x34u))
    {
        ebx = rd32(esi + 0x34u);
    }
    else
    {
        eax = rd32(esi + 0x38u);
        ebx = eax;
    }
    if ((int32_t)ebx <= 0)
    {
        wr32(esi + 0x2cu, 0u);
        wr32(esi + 0x30u, 0u);
    }
    else
    {
        wr32(esi + 0x2cu, edi);
        if (rd32(COW_IMG(0x109a2788u)) != 0u)
        {
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t26 = cow_cdecl(g, COW_IMG(0x10288680u), 1, edi);
            t27 = g->edx;
            g->ebx = ebx;
            g->ecx = rd32(COW_IMG(0x109a2788u));
            t28 = rd32(COW_IMG(0x109a2788u));
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t27, 1, 5, t28, COW_IMG(0x103b8ddcu), t26, edi, ebx);
            t29 = g->ecx;
            t30 = g->edx;
            ecx = t29;
            edx = t30;
        }
        t31 = ebx * 4u + edi;
        wr32(esi + 0x30u, t31);
        if (rd32(COW_IMG(0x109a2788u)) == 0u)
        {
            ebp = ebx * 4u;
            edi = t31;
        }
        else
        {
            ebp = ebx * 4u;
            edi = t31;
            g->ecx = ecx;
            g->esp = sp0 - 0x18u;
            t32 = cow_cdecl(g, COW_IMG(0x10288680u), 1, edi);
            t33 = g->ecx;
            g->ebx = ebx;
            g->ecx = t33;
            t34 = rd32(COW_IMG(0x109a2788u));
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t34, 1, 5, t34, COW_IMG(0x103b8da8u), t32, edi, ebx);
            t35 = g->ecx;
            t36 = g->edx;
            ecx = t35;
            edx = t36;
        }
        edi = ebp + edi;
    }
    if ((int32_t)rd32(esi + 0x48u) <= (int32_t)rd32(esi + 0x44u))
    {
        ebx = rd32(esi + 0x44u);
    }
    else
    {
        eax = rd32(esi + 0x48u);
        ebx = eax;
    }
    if ((int32_t)ebx <= 0)
    {
        wr32(esi + 0x3cu, 0u);
        wr32(esi + 0x40u, 0u);
    }
    else
    {
        wr32(esi + 0x3cu, edi);
        if (rd32(COW_IMG(0x109a2788u)) != 0u)
        {
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t37 = cow_cdecl(g, COW_IMG(0x10288680u), 1, edi);
            t38 = g->ecx;
            t39 = g->edx;
            g->ebx = ebx;
            g->ecx = t38;
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t39, 1, 5, rd32(COW_IMG(0x109a2788u)), COW_IMG(0x103b8d78u), t37, edi, ebx);
            t40 = g->ecx;
            t41 = g->edx;
            ecx = t40;
            edx = t41;
        }
        t42 = ebx * 4u + edi;
        wr32(esi + 0x40u, t42);
        if (rd32(COW_IMG(0x109a2788u)) == 0u)
        {
            ebp = ebx * 4u;
            edi = t42;
        }
        else
        {
            ebp = ebx * 4u;
            edi = t42;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t43 = cow_cdecl(g, COW_IMG(0x10288680u), 1, edi);
            t44 = g->edx;
            g->ebx = ebx;
            g->ecx = rd32(COW_IMG(0x109a2788u));
            t45 = rd32(COW_IMG(0x109a2788u));
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t44, 1, 5, t45, COW_IMG(0x103b8d44u), t43, edi, ebx);
            t46 = g->ecx;
            t47 = g->edx;
            ecx = t46;
            edx = t47;
        }
        edi = ebp + edi;
    }
    if ((int32_t)rd32(esi + 0x5cu) <= (int32_t)rd32(esi + 0x58u))
    {
        ebp = rd32(esi + 0x58u);
    }
    else
    {
        eax = rd32(esi + 0x5cu);
        ebp = eax;
    }
    if ((int32_t)ebp <= 0)
    {
        wr32(esi + 0x4cu, 0u);
        wr32(esi + 0x50u, 0u);
        wr32(esi + 0x54u, 0u);
    }
    else
    {
        wr32(esi + 0x4cu, edi);
        if (rd32(COW_IMG(0x109a2788u)) == 0u)
        {
            ecx = rd32(COW_IMG(0x109a2788u));
        }
        else
        {
            ecx = rd32(COW_IMG(0x109a2788u));
            g->ecx = ecx;
            g->esp = sp0 - 0x18u;
            t48 = cow_cdecl(g, COW_IMG(0x10288680u), 1, edi);
            t49 = g->ecx;
            g->ebx = ebx;
            g->ecx = t49;
            t50 = rd32(COW_IMG(0x109a2788u));
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t50, 1, 5, t50, COW_IMG(0x103b8d14u), t48, edi, ebp);
            t51 = g->ecx;
            t52 = g->edx;
            ecx = t51;
            edx = t52;
        }
        t53 = ebp * 4u + edi;
        wr32(esi + 0x50u, t53);
        if (rd32(COW_IMG(0x109a2788u)) == 0u)
        {
            ebx = ebp * 4u;
            edi = t53;
        }
        else
        {
            ebx = ebp * 4u;
            edi = t53;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t54 = cow_cdecl(g, COW_IMG(0x10288680u), 1, edi);
            t55 = g->ecx;
            t56 = g->edx;
            g->ebx = ebx;
            g->ecx = t55;
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t56, 1, 5, rd32(COW_IMG(0x109a2788u)), COW_IMG(0x103b8ce4u), t54, edi, ebp);
            t57 = g->ecx;
            t58 = g->edx;
            ecx = t57;
            edx = t58;
        }
        wr32(esi + 0x54u, ebx + edi);
        if (rd32(COW_IMG(0x109a2788u)) == 0u)
        {
            edi = ebx + edi;
        }
        else
        {
            edi = ebx + edi;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t59 = cow_cdecl(g, COW_IMG(0x10288680u), 1, edi);
            t60 = g->edx;
            g->ebx = ebx;
            g->ecx = rd32(COW_IMG(0x109a2788u));
            t61 = rd32(COW_IMG(0x109a2788u));
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t60, 1, 5, t61, COW_IMG(0x103b8cb0u), t59, edi, ebp);
            t62 = g->ecx;
            t63 = g->edx;
            ecx = t62;
            edx = t63;
        }
        edi = ebx + edi;
    }
    if ((int32_t)rd32(esi + 0x6cu) <= (int32_t)rd32(esi + 0x68u))
    {
        ebx = rd32(esi + 0x68u);
    }
    else
    {
        eax = rd32(esi + 0x6cu);
        ebx = eax;
    }
    if ((int32_t)ebx <= 0)
    {
        wr32(esi + 0x60u, 0u);
        wr32(esi + 0x64u, 0u);
    }
    else
    {
        wr32(esi + 0x60u, edi);
        if (rd32(COW_IMG(0x109a2788u)) == 0u)
        {
            ecx = rd32(COW_IMG(0x109a2788u));
        }
        else
        {
            ecx = rd32(COW_IMG(0x109a2788u));
            g->ecx = ecx;
            g->esp = sp0 - 0x18u;
            t64 = cow_cdecl(g, COW_IMG(0x10288680u), 1, edi);
            t65 = g->ecx;
            g->ebx = ebx;
            g->ecx = t65;
            t66 = rd32(COW_IMG(0x109a2788u));
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t66, 1, 5, t66, COW_IMG(0x103b8c84u), t64, edi, ebx);
            t67 = g->ecx;
            t68 = g->edx;
            ecx = t67;
            edx = t68;
        }
        t69 = ebx * 4u + edi;
        wr32(esi + 0x64u, t69);
        if (rd32(COW_IMG(0x109a2788u)) == 0u)
        {
            ebp = ebx * 4u;
            edi = t69;
        }
        else
        {
            ebp = ebx * 4u;
            edi = t69;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t70 = cow_cdecl(g, COW_IMG(0x10288680u), 1, edi);
            t71 = g->ecx;
            t72 = g->edx;
            g->ebx = ebx;
            g->ecx = t71;
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t72, 1, 5, rd32(COW_IMG(0x109a2788u)), COW_IMG(0x103b8c54u), t70, edi, ebx);
            t73 = g->ecx;
            t74 = g->edx;
            ecx = t73;
            edx = t74;
        }
        edi = ebp + edi;
    }
    if ((int32_t)rd32(esi + 0x80u) <= (int32_t)rd32(esi + 0x7cu))
    {
        ebp = rd32(esi + 0x7cu);
    }
    else
    {
        eax = rd32(esi + 0x80u);
        ebp = eax;
    }
    if ((int32_t)ebp <= 0)
    {
        wr32(esi + 0x70u, 0u);
        wr32(esi + 0x74u, 0u);
        wr32(esi + 0x78u, 0u);
    }
    else
    {
        wr32(esi + 0x70u, edi);
        if (rd32(COW_IMG(0x109a2788u)) == 0u)
        {
            ecx = rd32(COW_IMG(0x109a2788u));
        }
        else
        {
            ecx = rd32(COW_IMG(0x109a2788u));
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t75 = cow_cdecl(g, COW_IMG(0x10288680u), 1, edi);
            t76 = g->edx;
            g->ebx = ebx;
            g->ecx = rd32(COW_IMG(0x109a2788u));
            t77 = rd32(COW_IMG(0x109a2788u));
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t76, 1, 5, t77, COW_IMG(0x103b8c28u), t75, edi, ebp);
            t78 = g->ecx;
            t79 = g->edx;
            ecx = t78;
            edx = t79;
        }
        t80 = ebp * 4u + edi;
        wr32(esi + 0x74u, t80);
        if (rd32(COW_IMG(0x109a2788u)) == 0u)
        {
            ebx = ebp * 4u;
            edi = t80;
        }
        else
        {
            ebx = ebp * 4u;
            edi = t80;
            g->ecx = ecx;
            g->esp = sp0 - 0x18u;
            t81 = cow_cdecl(g, COW_IMG(0x10288680u), 1, edi);
            t82 = g->ecx;
            g->ebx = ebx;
            g->ecx = t82;
            t83 = rd32(COW_IMG(0x109a2788u));
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t83, 1, 5, t83, COW_IMG(0x103b8bf8u), t81, edi, ebp);
            t84 = g->ecx;
            t85 = g->edx;
            ecx = t84;
            edx = t85;
        }
        wr32(esi + 0x78u, ebx + edi);
        if (rd32(COW_IMG(0x109a2788u)) == 0u)
        {
            edi = ebx + edi;
        }
        else
        {
            edi = ebx + edi;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t86 = cow_cdecl(g, COW_IMG(0x10288680u), 1, edi);
            t87 = g->ecx;
            t88 = g->edx;
            g->ebx = ebx;
            g->ecx = t87;
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t88, 1, 5, rd32(COW_IMG(0x109a2788u)), COW_IMG(0x103b8bc4u), t86, edi, ebp);
            t89 = g->ecx;
            t90 = g->edx;
            ecx = t89;
            edx = t90;
        }
        edi = ebx + edi;
    }
    if ((int32_t)rd32(esi + 0x94u) <= (int32_t)rd32(esi + 0x90u))
    {
        ebp = rd32(esi + 0x90u);
    }
    else
    {
        eax = rd32(esi + 0x94u);
        ebp = eax;
    }
    if ((int32_t)ebp <= 0)
    {
        wr32(esi + 0x84u, 0u);
        wr32(esi + 0x88u, 0u);
        wr32(esi + 0x8cu, 0u);
    }
    else
    {
        wr32(esi + 0x84u, edi);
        if (rd32(COW_IMG(0x109a2788u)) != 0u)
        {
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t91 = cow_cdecl(g, COW_IMG(0x10288680u), 1, edi);
            t92 = g->edx;
            g->ebx = 0u;
            g->ecx = rd32(COW_IMG(0x109a2788u));
            t93 = rd32(COW_IMG(0x109a2788u));
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t92, 1, 5, t93, COW_IMG(0x103b8b94u), t91, edi, ebp);
            t94 = g->ecx;
            t95 = g->edx;
            ecx = t94;
            edx = t95;
        }
        t96 = ebp * 4u + edi;
        wr32(esi + 0x88u, t96);
        if (rd32(COW_IMG(0x109a2788u)) == 0u)
        {
            ebx = ebp * 4u;
            edi = t96;
        }
        else
        {
            ebx = ebp * 4u;
            edi = t96;
            g->ecx = ecx;
            g->esp = sp0 - 0x18u;
            t97 = cow_cdecl(g, COW_IMG(0x10288680u), 1, edi);
            t98 = g->ecx;
            g->ebx = ebx;
            g->ecx = t98;
            t99 = rd32(COW_IMG(0x109a2788u));
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t99, 1, 5, t99, COW_IMG(0x103b8b60u), t97, edi, ebp);
            t100 = g->ecx;
            t101 = g->edx;
            ecx = t100;
            edx = t101;
        }
        wr32(esi + 0x8cu, ebx + edi);
        if (rd32(COW_IMG(0x109a2788u)) == 0u)
        {
            edi = ebx + edi;
        }
        else
        {
            edi = ebx + edi;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t102 = cow_cdecl(g, COW_IMG(0x10288680u), 1, edi);
            t103 = g->ecx;
            t104 = g->edx;
            g->ebx = ebx;
            g->ecx = t103;
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t104, 1, 5, rd32(COW_IMG(0x109a2788u)), COW_IMG(0x103b8b2cu), t102, edi, ebp);
            t105 = g->ecx;
            t106 = g->edx;
            ecx = t105;
            edx = t106;
        }
        edi = ebx + edi;
    }
    if ((int32_t)rd32(esi + 0x5cu) <= (int32_t)rd32(esi + 0x58u))
    {
        ebp = rd32(esi + 0x58u);
    }
    else
    {
        eax = rd32(esi + 0x5cu);
        ebp = eax;
    }
    if ((int32_t)ebp <= 0)
    {
        wr32(esi + 0x98u, 0u);
    }
    else
    {
        wr32(esi + 0x98u, edi);
        if (rd32(COW_IMG(0x109a2788u)) != 0u)
        {
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t107 = cow_cdecl(g, COW_IMG(0x10288680u), 1, edi);
            t108 = g->edx;
            g->ebx = 0u;
            g->ecx = rd32(COW_IMG(0x109a2788u));
            t109 = rd32(COW_IMG(0x109a2788u));
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t108, 1, 5, t109, COW_IMG(0x103b8af4u), t107, edi, ebp);
            t110 = g->ecx;
            t111 = g->edx;
            ecx = t110;
            edx = t111;
        }
        edi = ebp * 4u + edi;
    }
    if ((int32_t)rd32(esi + 0x5cu) <= (int32_t)rd32(esi + 0x58u))
    {
        ebp = rd32(esi + 0x58u);
    }
    else
    {
        eax = rd32(esi + 0x5cu);
        ebp = eax;
    }
    if ((int32_t)ebp <= 0)
    {
        wr32(esi + 0x98u, 0u);
    }
    else
    {
        wr32(esi + 0xa0u, edi);
        if (rd32(COW_IMG(0x109a2788u)) != 0u)
        {
            g->ecx = ecx;
            g->esp = sp0 - 0x18u;
            t112 = cow_cdecl(g, COW_IMG(0x10288680u), 1, edi);
            t113 = g->ecx;
            g->ebx = 0u;
            t114 = rd32(COW_IMG(0x109a2788u));
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t114, 1, 5, t114, COW_IMG(0x103b8ac0u), t112, edi, ebp);
            t115 = g->edx;
            edx = t115;
        }
        edi = ebp * 4u + edi;
    }
    t116 = rd32(esi + 0x5cu);
    if ((int32_t)rd32(esi + 0x5cu) > (int32_t)rd32(esi + 0xa4u))
    {
        ecx = rd32(esi + 0xa4u);
        ebp = t116;
    }
    else
    {
        ecx = rd32(esi + 0xa4u);
        ebp = ecx;
    }
    if ((int32_t)ebp <= 0)
    {
        wr32(esi + 0x9cu, 0u);
    }
    else
    {
        wr32(esi + 0x9cu, edi);
        if (rd32(COW_IMG(0x109a2788u)) != 0u)
        {
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t117 = cow_cdecl(g, COW_IMG(0x10288680u), 1, edi);
            t118 = g->ecx;
            t119 = g->edx;
            g->ebx = 0u;
            g->ecx = t118;
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t119, 1, 5, rd32(COW_IMG(0x109a2788u)), COW_IMG(0x103b8a8cu), t117, edi, ecx);
            t120 = g->ecx;
            t121 = g->edx;
            ecx = t120;
            edx = t121;
        }
        edi = ebp * 4u + edi;
    }
    g->esp = sp0 - 0x10u;
    t122 = cow_fastcall(g, COW_IMG(0x102750b0u), ecx, edx, 0);
    t123 = g->ecx;
    t124 = g->edx;
    t125 = t122 - rd32(sp0 + 4u);
    wr32(COW_IMG(0x109a2770u), t125);
    t126 = cow_fastcall(g, COW_IMG(0x102750b0u), t123, t124, 0);
    t127 = g->ecx;
    t128 = g->edx;
    g->ebx = t126;
    g->ecx = t127;
    g->edx = t128;
    t129 = cow_cdecl(g, COW_IMG(0x102886f0u), 2, esi, edi);
    t130 = g->ecx;
    t131 = g->edx;
    g->esp = sp0 - 0x18u;
    t132 = cow_fastcall(g, COW_IMG(0x102750b0u), t130, t131, 0);
    t133 = g->ecx;
    t134 = g->edx;
    wr32(COW_IMG(0x109a2774u), t132 - t126);
    t135 = cow_fastcall(g, COW_IMG(0x102750b0u), t133, t134, 0);
    t136 = g->ecx;
    t137 = g->edx;
    g->ebx = t135;
    g->ecx = t136;
    g->edx = t137;
    g->esp = sp0 - 8u;
    t138 = cow_cdecl(g, COW_IMG(0x10288970u), 6, esi, t129, esi, edi, in_edi, in_esi);
    t139 = g->ecx;
    t140 = g->edx;
    g->esp = sp0 - 0x20u;
    t141 = cow_fastcall(g, COW_IMG(0x102750b0u), t139, t140, 0);
    t142 = g->ecx;
    t143 = g->edx;
    wr32(COW_IMG(0x109a2778u), t141 - t135);
    t144 = cow_fastcall(g, COW_IMG(0x102750b0u), t142, t143, 0);
    t145 = g->ecx;
    t146 = g->edx;
    g->ebx = t144;
    g->ecx = t145;
    g->edx = t146;
    g->esp = sp0 - 0x18u;
    t147 = cow_cdecl(g, COW_IMG(0x10288bd0u), 4, esi, t138, esi, t129);
    t148 = g->ecx;
    t149 = g->edx;
    g->esp = sp0 - 0x28u;
    t150 = cow_fastcall(g, COW_IMG(0x102750b0u), t148, t149, 0);
    t151 = g->ecx;
    t152 = g->edx;
    wr32(COW_IMG(0x109a277cu), t150 - t144);
    t153 = cow_fastcall(g, COW_IMG(0x102750b0u), t151, t152, 0);
    t154 = g->ecx;
    t155 = g->edx;
    g->ebx = t153;
    g->ecx = t154;
    g->edx = t155;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10288c40u), 8, esi, t147, esi, t138, esi, t129, esi, edi);
    t156 = g->ecx;
    t157 = g->edx;
    g->esp = sp0 - 0x30u;
    t158 = cow_fastcall(g, COW_IMG(0x102750b0u), t156, t157, 0);
    t159 = g->ecx;
    t160 = g->edx;
    wr32(COW_IMG(0x109a2780u), t158 - t153);
    g->eax = t158 - t153;
    g->ecx = t159;
    g->edx = t160;
    t161 = cow_cdecl(g, COW_IMG(0x10288de0u), 1, esi);
    t162 = g->ecx;
    t163 = g->edx;
    g->ecx = t162;
    g->edx = t163;
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x10288e20u), 1, esi);
    t164 = g->ecx;
    t165 = g->edx;
    g->esp = sp0 - 0x38u;
    t166 = cow_fastcall(g, COW_IMG(0x102750b0u), t164, t165, 0);
    t167 = g->edx;
    g->ebx = t153;
    g->ecx = arg2;
    g->edx = t167;
    g->esp = sp0 - 0x20u;
    t168 = cow_cdecl(g, COW_IMG(0x10288e80u), 8, esi, arg2, esi, esi, esi, t147, esi, t138);
    t169 = g->ecx;
    t170 = g->edx;
    g->esp = sp0 - 0x40u;
    t171 = cow_fastcall(g, COW_IMG(0x102750b0u), t169, t170, 0);
    t172 = g->ecx;
    t173 = g->edx;
    wr32(COW_IMG(0x109a2750u), t171 - t166);
    t174 = cow_fastcall(g, COW_IMG(0x102750b0u), t172, t173, 0);
    t175 = g->ecx;
    t176 = g->edx;
    g->ebx = t168;
    g->ecx = t175;
    g->edx = t176;
    g->esp = sp0;
    cow_bridge_indirect(g, COW_IMG(0x10289010u), 0u, 18u, (const uint32_t[]){esi, t168, esi, arg2, esi, esi, esi, t147, esi, t138, esi, t129, esi, edi, in_edi, in_esi, in_ebp, in_ebx}, g->ecx, g->edx, g->eax, 72u);
    t177 = g->ecx;
    t178 = g->edx;
    g->esp = sp0 - 0x10u;
    t179 = cow_fastcall(g, COW_IMG(0x102750b0u), t177, t178, 0);
    wr32(COW_IMG(0x109a2754u), t179 - t174);
    t180 = (rd32(esi + 0xa8u) & 0xffff00ffu) | (uint8_t)(rd32(esi + 0xa8u) >> 8u | 2u) << 8u;
    wr32(esi + 0xa8u, t180);
    g->ebx = in_ebx;
    return esi;
L_1028865a: ;
    g->ebx = ebx;
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0;
    t181 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b8a4cu), in_ebx);
    t182 = g->ecx;
    t183 = g->edx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x102755e0u), g->eax, g->ecx, t183, 1, 2, ebx, 0x100u);
    g->ebx = in_ebx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10287fd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10287fd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
