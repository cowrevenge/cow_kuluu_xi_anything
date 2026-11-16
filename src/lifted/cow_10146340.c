/* f_0x10146340 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10146340(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10126320u), self + 4u, 0);
    t1 = g->ecx;
    t2 = g->edx;
    wr16(self + 0xeu, 0xffffu);
    wr32(self + 8u, 0u);
    wr8(self + 0xcu, 1u);
    wr16(self + 0x14u, 0u);
    wr16(self + 0x16u, 0u);
    wr16(self + 0x18u, 0u);
    wr16(self + 0x1au, 0u);
    wr8(self + 0x1eu, 0u);
    wr8(self + 0x1fu, 0u);
    wr32(self, COW_IMG(0x10334928u));
    if (rd32(COW_IMG(0x105783e0u)) != 0u)
    {
        ecx = t1;
        edx = t2;
    }
    else
    {
        ecx = t1;
        edx = t2;
        g->esp = sp0 - 8u;
        t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1cu, in_edi, in_esi);
        t4 = g->ecx;
        t5 = g->edx;
        if (t3 == 0u)
        {
            ecx = t4;
            edx = t5;
            wr32(COW_IMG(0x105783e0u), 0u);
        }
        else
        {
            eax = t3;
            edx = t5;
            esi = t3;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t6 = g->ecx;
            t7 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x103348e0u));
            wr32(COW_IMG(0x105783e0u), esi);
            ecx = t6;
            edx = t7;
        }
    }
    if (rd32(COW_IMG(0x105783e8u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t8 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x28u, in_edi, in_esi);
        t9 = g->ecx;
        t10 = g->edx;
        if (t8 == 0u)
        {
            ecx = t9;
            edx = t10;
            wr32(COW_IMG(0x105783e8u), 0u);
        }
        else
        {
            eax = t8;
            edx = t10;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t11 = cow_thiscall(g, COW_IMG(0x101475b0u), eax, 0);
            t12 = g->ecx;
            t13 = g->edx;
            wr32(COW_IMG(0x105783e8u), t11);
            ecx = t12;
            edx = t13;
        }
    }
    if (rd32(COW_IMG(0x105783ecu)) == 0u)
    {
        g->esp = sp0 - 8u;
        t14 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x8cu, in_edi, in_esi);
        t15 = g->ecx;
        t16 = g->edx;
        if (t14 == 0u)
        {
            ecx = t15;
            edx = t16;
            wr32(COW_IMG(0x105783ecu), 0u);
        }
        else
        {
            eax = t14;
            edx = t16;
            esi = t14;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t17 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t18 = g->edx;
            wr32(esi, COW_IMG(0x10333360u));
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            cow_fastcall(g, COW_IMG(0x10146930u), esi + 0x84u, t18, 4, 0u, 0u, 0u, 0u);
            t19 = g->ecx;
            t20 = g->edx;
            wr32(esi, COW_IMG(0x10334898u));
            wr32(COW_IMG(0x105783ecu), esi);
            ecx = t19;
            edx = t20;
        }
    }
    if (rd32(COW_IMG(0x105783f0u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t21 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x60u, in_edi, in_esi);
        t22 = g->ecx;
        t23 = g->edx;
        if (t21 == 0u)
        {
            ecx = t22;
            edx = t23;
            wr32(COW_IMG(0x105783f0u), 0u);
        }
        else
        {
            eax = t21;
            edx = t23;
            esi = t21;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t24 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t25 = g->edx;
            wr32(esi, COW_IMG(0x10333360u));
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            cow_fastcall(g, COW_IMG(0x10146930u), esi + 0x14u, t25, 4, 0u, 0u, 0u, 0u);
            t26 = g->ecx;
            t27 = g->edx;
            wr32(esi, COW_IMG(0x10334850u));
            wr32(COW_IMG(0x105783f0u), esi);
            ecx = t26;
            edx = t27;
        }
    }
    if (rd32(COW_IMG(0x105783f4u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t28 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x20u, in_edi, in_esi);
        t29 = g->ecx;
        t30 = g->edx;
        if (t28 == 0u)
        {
            ecx = t29;
            edx = t30;
            wr32(COW_IMG(0x105783f4u), 0u);
        }
        else
        {
            eax = t28;
            edx = t30;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t31 = cow_thiscall(g, COW_IMG(0x10148430u), eax, 0);
            t32 = g->ecx;
            t33 = g->edx;
            wr32(COW_IMG(0x105783f4u), t31);
            ecx = t32;
            edx = t33;
        }
    }
    if (rd32(COW_IMG(0x105783f8u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t34 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x20u, in_edi, in_esi);
        t35 = g->ecx;
        t36 = g->edx;
        if (t34 == 0u)
        {
            ecx = t35;
            edx = t36;
            wr32(COW_IMG(0x105783f8u), 0u);
        }
        else
        {
            eax = t34;
            edx = t36;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t37 = cow_thiscall(g, COW_IMG(0x10148640u), eax, 0);
            t38 = g->ecx;
            t39 = g->edx;
            wr32(COW_IMG(0x105783f8u), t37);
            ecx = t38;
            edx = t39;
        }
    }
    if (rd32(COW_IMG(0x105783fcu)) == 0u)
    {
        g->esp = sp0 - 8u;
        t40 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x5cu, in_edi, in_esi);
        t41 = g->ecx;
        t42 = g->edx;
        if (t40 == 0u)
        {
            ecx = t41;
            edx = t42;
            wr32(COW_IMG(0x105783fcu), 0u);
        }
        else
        {
            eax = t40;
            edx = t42;
            esi = t40;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t43 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t44 = g->edx;
            wr32(esi, COW_IMG(0x10333360u));
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            cow_fastcall(g, COW_IMG(0x10146930u), esi + 0x14u, t44, 4, 0u, 0u, 0u, 0u);
            t45 = g->ecx;
            t46 = g->edx;
            wr32(esi, COW_IMG(0x10334808u));
            wr32(COW_IMG(0x105783fcu), esi);
            ecx = t45;
            edx = t46;
        }
    }
    if (rd32(COW_IMG(0x10578400u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t47 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x84u, in_edi, in_esi);
        t48 = g->ecx;
        t49 = g->edx;
        if (t47 == 0u)
        {
            ecx = t48;
            edx = t49;
            wr32(COW_IMG(0x10578400u), 0u);
        }
        else
        {
            eax = t47;
            edx = t49;
            esi = t47;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t50 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t51 = g->edx;
            wr32(esi, COW_IMG(0x10333360u));
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            cow_fastcall(g, COW_IMG(0x10146930u), esi + 0x14u, t51, 4, 0u, 0u, 0u, 0u);
            t52 = g->ecx;
            t53 = g->edx;
            wr32(esi, COW_IMG(0x103347c0u));
            wr32(COW_IMG(0x10578400u), esi);
            ecx = t52;
            edx = t53;
        }
    }
    if (rd32(COW_IMG(0x10578404u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t54 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1cu, in_edi, in_esi);
        t55 = g->ecx;
        t56 = g->edx;
        if (t54 == 0u)
        {
            ecx = t55;
            edx = t56;
            wr32(COW_IMG(0x10578404u), 0u);
        }
        else
        {
            edx = t56;
            esi = t54;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
            t57 = g->ecx;
            t58 = g->edx;
            wr32(esi, COW_IMG(0x10334778u));
            wr32(COW_IMG(0x10578404u), esi);
            ecx = t57;
            edx = t58;
        }
    }
    if (rd32(COW_IMG(0x10578408u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t59 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x6cu, in_edi, in_esi);
        t60 = g->ecx;
        t61 = g->edx;
        if (t59 == 0u)
        {
            ecx = t60;
            edx = t61;
            wr32(COW_IMG(0x10578408u), 0u);
        }
        else
        {
            eax = t59;
            edx = t61;
            g->edi = 0xffffffffu;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t62 = cow_thiscall(g, COW_IMG(0x10148ed0u), eax, 0);
            t63 = g->ecx;
            t64 = g->edx;
            wr32(COW_IMG(0x10578408u), t62);
            ecx = t63;
            edx = t64;
        }
    }
    if (rd32(COW_IMG(0x1057840cu)) == 0u)
    {
        g->esp = sp0 - 8u;
        t65 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
        t66 = g->ecx;
        t67 = g->edx;
        if (t65 == 0u)
        {
            ecx = t66;
            edx = t67;
            wr32(COW_IMG(0x1057840cu), 0u);
        }
        else
        {
            eax = t65;
            edx = t67;
            esi = t65;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t68 = g->ecx;
            t69 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10334730u));
            wr32(COW_IMG(0x1057840cu), esi);
            ecx = t68;
            edx = t69;
        }
    }
    if (rd32(COW_IMG(0x10578410u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t70 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x18u, in_edi, in_esi);
        t71 = g->ecx;
        t72 = g->edx;
        if (t70 == 0u)
        {
            ecx = t71;
            edx = t72;
            wr32(COW_IMG(0x10578410u), 0u);
        }
        else
        {
            eax = t70;
            edx = t72;
            esi = t70;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t73 = g->ecx;
            t74 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x103346e8u));
            wr32(esi + 0x14u, 0xffffffffu);
            wr32(COW_IMG(0x10578410u), esi);
            ecx = t73;
            edx = t74;
        }
    }
    if (rd32(COW_IMG(0x10578414u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t75 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x18u, in_edi, in_esi);
        t76 = g->ecx;
        t77 = g->edx;
        if (t75 == 0u)
        {
            ecx = t76;
            edx = t77;
            wr32(COW_IMG(0x10578414u), 0u);
        }
        else
        {
            eax = t75;
            edx = t77;
            esi = t75;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t78 = g->ecx;
            t79 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x103346a0u));
            wr32(COW_IMG(0x10578414u), esi);
            ecx = t78;
            edx = t79;
        }
    }
    if (rd32(COW_IMG(0x10578418u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t80 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x28u, in_edi, in_esi);
        t81 = g->ecx;
        t82 = g->edx;
        if (t80 == 0u)
        {
            ecx = t81;
            edx = t82;
            wr32(COW_IMG(0x10578418u), 0u);
        }
        else
        {
            edx = t82;
            esi = t80;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x101475b0u), esi, 0);
            t83 = g->ecx;
            t84 = g->edx;
            wr32(esi, COW_IMG(0x10334658u));
            wr32(COW_IMG(0x10578418u), esi);
            ecx = t83;
            edx = t84;
        }
    }
    if (rd32(COW_IMG(0x1057841cu)) == 0u)
    {
        g->esp = sp0 - 8u;
        t85 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x24u, in_edi, in_esi);
        t86 = g->ecx;
        t87 = g->edx;
        if (t85 == 0u)
        {
            ecx = t86;
            edx = t87;
            wr32(COW_IMG(0x1057841cu), 0u);
        }
        else
        {
            edx = t87;
            esi = t85;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t88 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
            t89 = g->edx;
            cow_call_regs(g, COW_IMG(0x10146960u), t88, esi + 0x1cu, t89, 0, 4, 0u, 0u, 0u, 0u);
            t90 = g->ecx;
            t91 = g->edx;
            wr32(esi, COW_IMG(0x10334610u));
            wr32(COW_IMG(0x1057841cu), esi);
            ecx = t90;
            edx = t91;
        }
    }
    if (rd32(COW_IMG(0x10578424u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t92 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1cu, in_edi, in_esi);
        t93 = g->ecx;
        t94 = g->edx;
        if (t92 == 0u)
        {
            ecx = t93;
            edx = t94;
            wr32(COW_IMG(0x10578424u), 0u);
        }
        else
        {
            edx = t94;
            esi = t92;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t95 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
            t96 = g->edx;
            cow_call_regs(g, COW_IMG(0x10146960u), t95, esi + 0x14u, t96, 0, 4, 0u, 0u, 0u, 0u);
            t97 = g->ecx;
            t98 = g->edx;
            wr32(esi, COW_IMG(0x103345c8u));
            wr32(COW_IMG(0x10578424u), esi);
            ecx = t97;
            edx = t98;
        }
    }
    if (rd32(COW_IMG(0x10578420u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t99 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x5cu, in_edi, in_esi);
        t100 = g->ecx;
        t101 = g->edx;
        if (t99 == 0u)
        {
            ecx = t100;
            edx = t101;
            wr32(COW_IMG(0x10578420u), 0u);
        }
        else
        {
            eax = t99;
            edx = t101;
            g->edi = 0xffffffffu;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t102 = cow_thiscall(g, COW_IMG(0x1014a170u), eax, 0);
            t103 = g->ecx;
            t104 = g->edx;
            wr32(COW_IMG(0x10578420u), t102);
            ecx = t103;
            edx = t104;
        }
    }
    if (rd32(COW_IMG(0x10578428u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t105 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x24u, in_edi, in_esi);
        t106 = g->ecx;
        t107 = g->edx;
        if (t105 == 0u)
        {
            ecx = t106;
            edx = t107;
            wr32(COW_IMG(0x10578428u), 0u);
        }
        else
        {
            eax = t105;
            edx = t107;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t108 = cow_thiscall(g, COW_IMG(0x10161110u), eax, 0);
            t109 = g->ecx;
            t110 = g->edx;
            wr32(COW_IMG(0x10578428u), t108);
            ecx = t109;
            edx = t110;
        }
    }
    if (rd32(COW_IMG(0x1057842cu)) == 0u)
    {
        g->esp = sp0 - 8u;
        t111 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x64u, in_edi, in_esi);
        t112 = g->ecx;
        t113 = g->edx;
        if (t111 == 0u)
        {
            ecx = t112;
            edx = t113;
            wr32(COW_IMG(0x1057842cu), 0u);
        }
        else
        {
            eax = t111;
            edx = t113;
            g->edi = 0xffffffffu;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t114 = cow_thiscall(g, COW_IMG(0x1014a7d0u), eax, 0);
            t115 = g->ecx;
            t116 = g->edx;
            wr32(COW_IMG(0x1057842cu), t114);
            ecx = t115;
            edx = t116;
        }
    }
    if (rd32(COW_IMG(0x10621900u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t117 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x28u, in_edi, in_esi);
        t118 = g->ecx;
        t119 = g->edx;
        if (t117 == 0u)
        {
            ecx = t118;
            edx = t119;
            wr32(COW_IMG(0x10621900u), 0u);
        }
        else
        {
            eax = t117;
            edx = t119;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t120 = cow_thiscall(g, COW_IMG(0x10161380u), eax, 0);
            t121 = g->ecx;
            t122 = g->edx;
            wr32(COW_IMG(0x10621900u), t120);
            ecx = t121;
            edx = t122;
        }
    }
    if (rd32(COW_IMG(0x10578430u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t123 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
        t124 = g->ecx;
        t125 = g->edx;
        if (t123 == 0u)
        {
            ecx = t124;
            edx = t125;
            wr32(COW_IMG(0x10578430u), 0u);
        }
        else
        {
            edx = t125;
            esi = t123;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
            t126 = g->ecx;
            t127 = g->edx;
            wr32(esi, COW_IMG(0x10334580u));
            wr32(COW_IMG(0x10578430u), esi);
            ecx = t126;
            edx = t127;
        }
    }
    if (rd32(COW_IMG(0x10578438u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t128 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x44u, in_edi, in_esi);
        t129 = g->ecx;
        t130 = g->edx;
        if (t128 == 0u)
        {
            ecx = t129;
            edx = t130;
            wr32(COW_IMG(0x10578438u), 0u);
        }
        else
        {
            eax = t128;
            edx = t130;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t131 = cow_thiscall(g, COW_IMG(0x10210da0u), eax, 2, COW_IMG(0x10371888u), 0u);
            t132 = g->ecx;
            t133 = g->edx;
            wr32(COW_IMG(0x10578438u), t131);
            ecx = t132;
            edx = t133;
        }
    }
    if (rd32(COW_IMG(0x1057843cu)) == 0u)
    {
        g->esp = sp0 - 8u;
        t134 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x58u, in_edi, in_esi);
        t135 = g->ecx;
        t136 = g->edx;
        if (t134 == 0u)
        {
            ecx = t135;
            edx = t136;
            wr32(COW_IMG(0x1057843cu), 0u);
        }
        else
        {
            eax = t134;
            edx = t136;
            g->edi = 0xffffffffu;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t137 = cow_thiscall(g, COW_IMG(0x1014b670u), eax, 0);
            t138 = g->ecx;
            t139 = g->edx;
            wr32(COW_IMG(0x1057843cu), t137);
            ecx = t138;
            edx = t139;
        }
    }
    if (rd32(COW_IMG(0x10578440u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t140 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x5cu, in_edi, in_esi);
        t141 = g->ecx;
        t142 = g->edx;
        if (t140 == 0u)
        {
            ecx = t141;
            edx = t142;
            wr32(COW_IMG(0x10578440u), 0u);
        }
        else
        {
            eax = t140;
            edx = t142;
            g->edi = 0xffffffffu;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t143 = cow_thiscall(g, COW_IMG(0x1014ba60u), eax, 0);
            t144 = g->ecx;
            t145 = g->edx;
            wr32(COW_IMG(0x10578440u), t143);
            ecx = t144;
            edx = t145;
        }
    }
    if (rd32(COW_IMG(0x10578444u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t146 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1cu, in_edi, in_esi);
        t147 = g->ecx;
        t148 = g->edx;
        if (t146 == 0u)
        {
            ecx = t147;
            edx = t148;
            wr32(COW_IMG(0x10578444u), 0u);
        }
        else
        {
            edx = t148;
            esi = t146;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t149 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
            t150 = g->edx;
            cow_fastcall(g, COW_IMG(0x10146930u), esi + 0x14u, t150, 4, 0u, 0u, 0u, 0u);
            t151 = g->ecx;
            t152 = g->edx;
            wr32(esi, COW_IMG(0x10334538u));
            wr32(COW_IMG(0x10578444u), esi);
            ecx = t151;
            edx = t152;
        }
    }
    if (rd32(COW_IMG(0x10578448u)) != 0u) goto L_10146920;
    g->esp = sp0 - 8u;
    t153 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x24u, in_edi, in_esi);
    t154 = g->edx;
    if (t153 == 0u) goto L_1014691a;
    eax = t153;
    edx = t154;
    g->esp = sp0 - 0x10u;
    t155 = cow_thiscall(g, COW_IMG(0x101615e0u), eax, 0);
    wr32(COW_IMG(0x10578448u), t155);
    g->edi = in_edi;
    return self;
L_1014691a: ;
    wr32(COW_IMG(0x10578448u), 0u);
L_10146920: ;
    g->edi = in_edi;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10146340(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10146340(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
