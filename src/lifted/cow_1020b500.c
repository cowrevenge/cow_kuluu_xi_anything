/* f_0x1020b500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1020b500(Guest* g)
{
    uint32_t eax;
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
    uint32_t t11;
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
    const uint32_t in_ebp = g->ebp;

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x101f67c0u), self, 1, 0u);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(self, COW_IMG(0x1033b948u));
    if (rd32(COW_IMG(0x10664498u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10664498u));
        ecx = t1;
        edx = t2;
    }
    else
    {
        eax = rd32(COW_IMG(0x10664498u));
        ecx = t1;
        edx = t2;
        g->eax = eax;
        g->esp = sp0 - 4u;
        t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x38u, in_edi, in_ebp);
        t4 = g->ecx;
        t5 = g->edx;
        if (t3 == 0u)
        {
            eax = t3;
            ecx = t4;
            edx = t5;
            wr32(COW_IMG(0x10664498u), 0u);
        }
        else
        {
            eax = t3;
            edx = t5;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t6 = cow_thiscall(g, COW_IMG(0x1020c470u), eax, 0);
            t7 = g->ecx;
            t8 = g->edx;
            wr32(COW_IMG(0x10664498u), t6);
            eax = t6;
            ecx = t7;
            edx = t8;
        }
    }
    if (rd32(COW_IMG(0x1066449cu)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t9 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_ebp);
        t10 = g->ecx;
        t11 = g->edx;
        if (t9 == 0u)
        {
            ecx = t10;
            edx = t11;
            wr32(COW_IMG(0x1066449cu), 0u);
        }
        else
        {
            eax = t9;
            edx = t11;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t12 = cow_thiscall(g, COW_IMG(0x1020cc30u), eax, 0);
            t13 = g->ecx;
            t14 = g->edx;
            wr32(COW_IMG(0x1066449cu), t12);
            ecx = t13;
            edx = t14;
        }
    }
    if (rd32(COW_IMG(0x106644a0u)) != 0u)
    {
        eax = rd32(COW_IMG(0x106644a0u));
    }
    else
    {
        eax = rd32(COW_IMG(0x106644a0u));
        g->eax = eax;
        g->esp = sp0 - 8u;
        t15 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_esi, in_edi);
        t16 = g->ecx;
        t17 = g->edx;
        if (t15 == 0u)
        {
            eax = t15;
            ecx = t16;
            edx = t17;
            wr32(COW_IMG(0x106644a0u), 0u);
        }
        else
        {
            eax = t15;
            edx = t17;
            esi = t15;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t18 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t19 = g->ecx;
            t20 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x1033b900u));
            wr32(COW_IMG(0x106644a0u), esi);
            eax = t18;
            ecx = t19;
            edx = t20;
        }
    }
    if (rd32(COW_IMG(0x106644a4u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 8u;
        t21 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_esi, in_edi);
        t22 = g->ecx;
        t23 = g->edx;
        if (t21 == 0u)
        {
            eax = t21;
            ecx = t22;
            edx = t23;
            wr32(COW_IMG(0x106644a4u), 0u);
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
            t25 = g->ecx;
            t26 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x1033b8b8u));
            wr32(COW_IMG(0x106644a4u), esi);
            eax = t24;
            ecx = t25;
            edx = t26;
        }
    }
    if (rd32(COW_IMG(0x106644acu)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 8u;
        t27 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1cu, in_esi, in_edi);
        t28 = g->ecx;
        t29 = g->edx;
        if (t27 == 0u)
        {
            eax = t27;
            ecx = t28;
            edx = t29;
            wr32(COW_IMG(0x106644acu), 0u);
        }
        else
        {
            eax = t27;
            edx = t29;
            esi = t27;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
            t30 = g->ecx;
            t31 = g->edx;
            wr32(esi, COW_IMG(0x1033b870u));
            wr8(esi + 0x14u, 0u);
            wr8(esi + 0x15u, 0u);
            wr16(esi + 0x18u, 1u);
            wr16(esi + 0x1au, 1u);
            wr32(COW_IMG(0x106644acu), esi);
            eax = 1u;
            ecx = t30;
            edx = t31;
        }
    }
    if (rd32(COW_IMG(0x106644b0u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 8u;
        t32 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_esi, in_edi);
        t33 = g->ecx;
        t34 = g->edx;
        if (t32 == 0u)
        {
            eax = t32;
            ecx = t33;
            edx = t34;
            wr32(COW_IMG(0x106644b0u), 0u);
        }
        else
        {
            eax = t32;
            edx = t34;
            esi = t32;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t35 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
            t36 = g->ecx;
            t37 = g->edx;
            wr32(esi, COW_IMG(0x1033b828u));
            wr32(COW_IMG(0x106644b0u), esi);
            eax = t35;
            ecx = t36;
            edx = t37;
        }
    }
    if (rd32(COW_IMG(0x106644a8u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 8u;
        t38 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_esi, in_edi);
        t39 = g->ecx;
        t40 = g->edx;
        if (t38 == 0u)
        {
            eax = t38;
            ecx = t39;
            edx = t40;
            wr32(COW_IMG(0x106644a8u), 0u);
        }
        else
        {
            eax = t38;
            edx = t40;
            esi = t38;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t41 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
            t42 = g->ecx;
            t43 = g->edx;
            wr32(esi, COW_IMG(0x1033b7e0u));
            wr32(COW_IMG(0x106644a8u), esi);
            eax = t41;
            ecx = t42;
            edx = t43;
        }
    }
    if (rd32(COW_IMG(0x106644b4u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 8u;
        t44 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_esi, in_edi);
        t45 = g->ecx;
        t46 = g->edx;
        if (t44 == 0u)
        {
            eax = t44;
            ecx = t45;
            edx = t46;
            wr32(COW_IMG(0x106644b4u), 0u);
        }
        else
        {
            eax = t44;
            edx = t46;
            esi = t44;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t47 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t48 = g->ecx;
            t49 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x1033b798u));
            wr32(COW_IMG(0x106644b4u), esi);
            eax = t47;
            ecx = t48;
            edx = t49;
        }
    }
    if (rd32(COW_IMG(0x106644b8u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 8u;
        t50 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_esi, in_edi);
        t51 = g->ecx;
        t52 = g->edx;
        if (t50 == 0u)
        {
            eax = t50;
            ecx = t51;
            edx = t52;
            wr32(COW_IMG(0x106644b8u), 0u);
        }
        else
        {
            eax = t50;
            edx = t52;
            esi = t50;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t53 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
            t54 = g->ecx;
            t55 = g->edx;
            wr32(esi, COW_IMG(0x1033b750u));
            wr32(COW_IMG(0x106644b8u), esi);
            eax = t53;
            ecx = t54;
            edx = t55;
        }
    }
    if (rd32(COW_IMG(0x106644bcu)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 8u;
        t56 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x28u, in_esi, in_edi);
        t57 = g->ecx;
        t58 = g->edx;
        if (t56 == 0u)
        {
            eax = t56;
            ecx = t57;
            edx = t58;
            wr32(COW_IMG(0x106644bcu), 0u);
        }
        else
        {
            eax = t56;
            edx = t58;
            esi = t56;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t59 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
            t60 = g->ecx;
            t61 = g->edx;
            wr32(esi, COW_IMG(0x1033b708u));
            wr32(esi + 0x14u, 0u);
            wr8(esi + 0x18u, 0u);
            wr32(COW_IMG(0x106644bcu), esi);
            eax = t59;
            ecx = t60;
            edx = t61;
        }
    }
    if (rd32(COW_IMG(0x106644c0u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 8u;
        t62 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x74u, in_esi, in_edi);
        t63 = g->ecx;
        t64 = g->edx;
        if (t62 == 0u)
        {
            eax = t62;
            ecx = t63;
            edx = t64;
            wr32(COW_IMG(0x106644c0u), 0u);
        }
        else
        {
            eax = t62;
            edx = t64;
            g->edi = 0xffffffffu;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t65 = cow_thiscall(g, COW_IMG(0x1020ed00u), eax, 0);
            t66 = g->ecx;
            t67 = g->edx;
            wr32(COW_IMG(0x106644c0u), t65);
            eax = t65;
            ecx = t66;
            edx = t67;
        }
    }
    if (rd32(COW_IMG(0x106644c4u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 8u;
        t68 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x18u, in_esi, in_edi);
        t69 = g->ecx;
        t70 = g->edx;
        if (t68 == 0u)
        {
            eax = t68;
            ecx = t69;
            edx = t70;
            wr32(COW_IMG(0x106644c4u), 0u);
        }
        else
        {
            eax = t68;
            edx = t70;
            esi = t68;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t71 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t72 = g->ecx;
            t73 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x1033b6c0u));
            wr32(COW_IMG(0x106644c4u), esi);
            eax = t71;
            ecx = t72;
            edx = t73;
        }
    }
    if (rd32(COW_IMG(0x106644c8u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 8u;
        t74 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1cu, in_esi, in_edi);
        t75 = g->ecx;
        t76 = g->edx;
        if (t74 == 0u)
        {
            eax = t74;
            ecx = t75;
            edx = t76;
            wr32(COW_IMG(0x106644c8u), 0u);
        }
        else
        {
            eax = t74;
            edx = t76;
            esi = t74;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t77 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
            t78 = g->ecx;
            t79 = g->edx;
            wr32(esi, COW_IMG(0x1033b678u));
            wr32(COW_IMG(0x106644c8u), esi);
            eax = t77;
            ecx = t78;
            edx = t79;
        }
    }
    if (rd32(COW_IMG(0x106644ccu)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 8u;
        t80 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1cu, in_esi, in_edi);
        t81 = g->ecx;
        t82 = g->edx;
        if (t80 == 0u)
        {
            eax = t80;
            ecx = t81;
            edx = t82;
            wr32(COW_IMG(0x106644ccu), 0u);
        }
        else
        {
            eax = t80;
            edx = t82;
            esi = t80;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t83 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t84 = g->ecx;
            t85 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x1033b630u));
            wr32(COW_IMG(0x106644ccu), esi);
            eax = t83;
            ecx = t84;
            edx = t85;
        }
    }
    if (rd32(COW_IMG(0x106644d0u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 8u;
        t86 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1cu, in_esi, in_edi);
        t87 = g->ecx;
        t88 = g->edx;
        if (t86 == 0u)
        {
            eax = t86;
            ecx = t87;
            edx = t88;
            wr32(COW_IMG(0x106644d0u), 0u);
        }
        else
        {
            eax = t86;
            edx = t88;
            esi = t86;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t89 = cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
            t90 = g->ecx;
            t91 = g->edx;
            wr32(esi, COW_IMG(0x1033b5e8u));
            wr32(COW_IMG(0x106644d0u), esi);
            eax = t89;
            ecx = t90;
            edx = t91;
        }
    }
    if (rd32(COW_IMG(0x106644d4u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 8u;
        t92 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1cu, in_esi, in_edi);
        t93 = g->ecx;
        t94 = g->edx;
        if (t92 == 0u)
        {
            ecx = t93;
            edx = t94;
            wr32(COW_IMG(0x106644d4u), 0u);
        }
        else
        {
            eax = t92;
            edx = t94;
            esi = t92;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
            t95 = g->ecx;
            t96 = g->edx;
            wr32(esi, COW_IMG(0x1033b5a0u));
            wr8(esi + 0x14u, 0u);
            wr8(esi + 0x15u, 0u);
            wr16(esi + 0x18u, 0u);
            wr16(esi + 0x1au, 0u);
            wr32(COW_IMG(0x106644d4u), esi);
            ecx = t95;
            edx = t96;
        }
    }
    if (rd32(COW_IMG(0x106644dcu)) != 0u)
    {
        eax = rd32(COW_IMG(0x106644dcu));
    }
    else
    {
        eax = rd32(COW_IMG(0x106644dcu));
        g->eax = eax;
        g->esp = sp0 - 4u;
        t97 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x24u, in_edi, in_ebp);
        t98 = g->ecx;
        t99 = g->edx;
        if (t97 == 0u)
        {
            eax = t97;
            ecx = t98;
            edx = t99;
            wr32(COW_IMG(0x106644dcu), 0u);
        }
        else
        {
            eax = t97;
            ecx = t98;
            edx = t99;
            wr32(eax, 0xffffffffu);
            wr32(eax + 4u, 0x284u);
            wr32(eax + 8u, 0u);
            wr32(eax + 0xcu, 0u);
            wr16(eax + 0x14u, 0u);
            wr16(eax + 0x12u, 0u);
            wr16(eax + 0x10u, 0u);
            wr32(eax + 0x1cu, 0u);
            wr32(eax + 0x20u, 0u);
            wr8(eax + 0x16u, 0u);
            wr8(eax + 0x17u, 0u);
            wr8(eax + 0x18u, 0u);
            wr32(COW_IMG(0x106644dcu), eax);
        }
    }
    if (rd32(COW_IMG(0x106644e0u)) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 4u;
        t100 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x24u, in_edi, in_ebp);
        t101 = g->edx;
        if (t100 == 0u)
        {
            edx = t101;
            wr32(COW_IMG(0x106644e0u), 0u);
        }
        else
        {
            eax = t100;
            edx = t101;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t102 = cow_thiscall(g, COW_IMG(0x1020ba40u), eax, 1, 0xeu);
            t103 = g->edx;
            wr32(COW_IMG(0x106644e0u), t102);
            edx = t103;
        }
    }
    wr32(self + 0x8fcu, 0u);
    edi = self + 0x900u;
    eax = 0u;
    ecx = 0xau;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1020be90u), self, 0);
    g->edi = in_edi;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020b500(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020b500(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
