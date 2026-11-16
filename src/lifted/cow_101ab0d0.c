/* f_0x101ab0d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101ab0d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
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

    g->esp = sp0 - 4u;
    t1 = cow_fastcall(g, COW_IMG(0x101a19b0u), self, in_edx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(COW_IMG(0x10662794u), t1);
    t4 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t2, t3, 1, 1, 0x24u);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u)
    {
        ecx = t5;
        edx = t6;
        wr32(COW_IMG(0x1066279cu), 0u);
    }
    else
    {
        eax = t4;
        edx = t6;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t7 = cow_thiscall(g, COW_IMG(0x101a2e00u), eax, 1, rd32(COW_IMG(0x10662794u)));
        t8 = g->ecx;
        t9 = g->edx;
        wr32(COW_IMG(0x1066279cu), t7);
        ecx = t8;
        edx = t9;
    }
    g->esp = sp0 - 4u;
    t10 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, 0x50u);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 == 0u)
    {
        ecx = t11;
        edx = t12;
        wr32(COW_IMG(0x106627a0u), 0u);
    }
    else
    {
        eax = t10;
        g->edx = rd32(COW_IMG(0x1066279cu));
        t13 = rd32(COW_IMG(0x1066279cu));
        g->esp = sp0 - 4u;
        t14 = cow_thiscall(g, COW_IMG(0x101a36f0u), eax, 2, rd32(COW_IMG(0x10662794u)), t13);
        t15 = g->ecx;
        t16 = g->edx;
        wr32(COW_IMG(0x106627a0u), t14);
        ecx = t15;
        edx = t16;
    }
    g->esp = sp0 - 4u;
    t17 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, 0x50u);
    if (t17 == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = t17;
        g->esp = sp0 - 4u;
        t18 = cow_thiscall(g, COW_IMG(0x101a3dc0u), eax, 2, rd32(COW_IMG(0x10662794u)), rd32(COW_IMG(0x1066279cu)));
        eax = t18;
    }
    t19 = rd32(COW_IMG(0x1066279cu));
    t20 = rd32(COW_IMG(0x106627a0u));
    wr32(COW_IMG(0x106627a4u), eax);
    g->edx = t20;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101a2e60u), t19, 2, t20, eax);
    t21 = g->ecx;
    t22 = g->edx;
    t23 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t21, t22, 1, 1, 0x10u);
    t24 = g->ecx;
    t25 = g->edx;
    if (t23 == 0u)
    {
        ecx = t24;
        edx = t25;
        wr32(COW_IMG(0x106627a8u), 0u);
    }
    else
    {
        eax = t23;
        edx = t25;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t26 = cow_thiscall(g, COW_IMG(0x101a4440u), eax, 1, rd32(COW_IMG(0x10662794u)));
        t27 = g->ecx;
        t28 = g->edx;
        wr32(COW_IMG(0x106627a8u), t26);
        ecx = t27;
        edx = t28;
    }
    g->esp = sp0 - 4u;
    t29 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, 0x4cu);
    t30 = g->ecx;
    t31 = g->edx;
    if (t29 == 0u)
    {
        ecx = t30;
        edx = t31;
        wr32(COW_IMG(0x106627acu), 0u);
    }
    else
    {
        eax = t29;
        g->edx = rd32(COW_IMG(0x106627a8u));
        t32 = rd32(COW_IMG(0x106627a8u));
        g->esp = sp0 - 4u;
        t33 = cow_thiscall(g, COW_IMG(0x101a46c0u), eax, 2, rd32(COW_IMG(0x10662794u)), t32);
        t34 = g->ecx;
        t35 = g->edx;
        wr32(COW_IMG(0x106627acu), t33);
        ecx = t34;
        edx = t35;
    }
    g->esp = sp0 - 4u;
    t36 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, 0x4cu);
    t37 = g->ecx;
    t38 = g->edx;
    if (t36 == 0u)
    {
        ecx = t37;
        edx = t38;
        wr32(COW_IMG(0x106627b0u), 0u);
    }
    else
    {
        eax = t36;
        g->edx = rd32(COW_IMG(0x106627a8u));
        t39 = rd32(COW_IMG(0x106627a8u));
        g->esp = sp0 - 4u;
        t40 = cow_thiscall(g, COW_IMG(0x101a4d70u), eax, 2, rd32(COW_IMG(0x10662794u)), t39);
        t41 = g->ecx;
        t42 = g->edx;
        wr32(COW_IMG(0x106627b0u), t40);
        ecx = t41;
        edx = t42;
    }
    g->esp = sp0 - 4u;
    t43 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, 0x48u);
    t44 = g->ecx;
    t45 = g->edx;
    if (t43 == 0u)
    {
        ecx = t44;
        edx = t45;
        wr32(COW_IMG(0x106627b4u), 0u);
    }
    else
    {
        eax = t43;
        g->edx = rd32(COW_IMG(0x106627a8u));
        t46 = rd32(COW_IMG(0x106627a8u));
        g->esp = sp0 - 4u;
        t47 = cow_thiscall(g, COW_IMG(0x101a54f0u), eax, 2, rd32(COW_IMG(0x10662794u)), t46);
        t48 = g->ecx;
        t49 = g->edx;
        wr32(COW_IMG(0x106627b4u), t47);
        ecx = t48;
        edx = t49;
    }
    if (rd32(COW_IMG(0x106627b8u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t50 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x20u, in_edi, in_esi);
        t51 = g->ecx;
        t52 = g->edx;
        if (t50 == 0u)
        {
            ecx = t51;
            edx = t52;
            wr32(COW_IMG(0x106627b8u), 0u);
        }
        else
        {
            eax = t50;
            edx = t52;
            esi = t50;
            g->edx = edx;
            t53 = rd32(COW_IMG(0x10662794u));
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t54 = g->ecx;
            t55 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi + 0x14u, t53);
            wr32(esi, COW_IMG(0x103378b8u));
            wr32(COW_IMG(0x106627b8u), esi);
            ecx = t54;
            edx = t55;
        }
    }
    if (rd32(COW_IMG(0x106627bcu)) == 0u)
    {
        g->esp = sp0 - 8u;
        t56 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x58u, in_edi, in_esi);
        t57 = g->ecx;
        t58 = g->edx;
        if (t56 == 0u)
        {
            ecx = t57;
            edx = t58;
            wr32(COW_IMG(0x106627bcu), 0u);
        }
        else
        {
            eax = t56;
            edx = t58;
            esi = t56;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t59 = g->ecx;
            t60 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10337870u));
            wr8(esi + 0x51u, 0u);
            wr32(esi + 0x54u, 0u);
            wr32(COW_IMG(0x106627bcu), esi);
            ecx = t59;
            edx = t60;
        }
    }
    if (rd32(COW_IMG(0x106627c0u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t61 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
        t62 = g->ecx;
        t63 = g->edx;
        if (t61 == 0u)
        {
            ecx = t62;
            edx = t63;
            wr32(COW_IMG(0x106627c0u), 0u);
        }
        else
        {
            eax = t61;
            edx = t63;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t64 = cow_thiscall(g, COW_IMG(0x101a6430u), eax, 0);
            t65 = g->ecx;
            t66 = g->edx;
            wr32(COW_IMG(0x106627c0u), t64);
            ecx = t65;
            edx = t66;
        }
    }
    if (rd32(COW_IMG(0x106627c4u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t67 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x70u, in_edi, in_esi);
        t68 = g->ecx;
        t69 = g->edx;
        if (t67 == 0u)
        {
            ecx = t68;
            edx = t69;
            wr32(COW_IMG(0x106627c4u), 0u);
        }
        else
        {
            eax = t67;
            edx = t69;
            esi = t67;
            g->edx = edx;
            t70 = rd32(COW_IMG(0x10662794u));
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t71 = g->ecx;
            t72 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi + 0x14u, t70);
            wr32(esi + 0x18u, 0u);
            wr32(esi + 0x20u, 0u);
            wr32(esi + 0x68u, 0u);
            wr8(esi + 0x6cu, 0u);
            wr32(esi, COW_IMG(0x10337828u));
            wr32(COW_IMG(0x106627c4u), esi);
            ecx = t71;
            edx = t72;
        }
    }
    if (rd32(COW_IMG(0x106627c8u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t73 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x18u, in_edi, in_esi);
        t74 = g->ecx;
        t75 = g->edx;
        if (t73 == 0u)
        {
            ecx = t74;
            edx = t75;
            wr32(COW_IMG(0x106627c8u), 0u);
        }
        else
        {
            eax = t73;
            edx = t75;
            esi = t73;
            g->edx = edx;
            t76 = rd32(COW_IMG(0x10662794u));
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t77 = g->ecx;
            t78 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi + 0x14u, t76);
            wr32(esi, COW_IMG(0x103377e0u));
            wr32(COW_IMG(0x106627c8u), esi);
            ecx = t77;
            edx = t78;
        }
    }
    if (rd32(COW_IMG(0x106627d8u)) != 0u)
    {
        eax = rd32(COW_IMG(0x106627d8u));
    }
    else
    {
        g->esp = sp0 - 4u;
        t79 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, 0x670u);
        t80 = g->ecx;
        t81 = g->edx;
        if (t79 == 0u)
        {
            eax = t79;
            ecx = t80;
            edx = t81;
            wr32(COW_IMG(0x106627d8u), 0u);
        }
        else
        {
            eax = t79;
            edx = t81;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t82 = cow_thiscall(g, COW_IMG(0x101a83c0u), eax, 0);
            t83 = g->ecx;
            t84 = g->edx;
            wr32(COW_IMG(0x106627d8u), t82);
            eax = t82;
            ecx = t83;
            edx = t84;
        }
    }
    if (rd32(COW_IMG(0x106627d4u)) == 0u)
    {
        g->esp = sp0 - 4u;
        t85 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, 8u);
        t86 = g->ecx;
        t87 = g->edx;
        if (t85 == 0u)
        {
            eax = t85;
            ecx = t86;
            edx = t87;
            wr32(COW_IMG(0x106627d4u), 0u);
        }
        else
        {
            eax = t85;
            g->eax = eax;
            g->edx = rd32(COW_IMG(0x106627d8u));
            t88 = rd32(COW_IMG(0x106627d8u));
            g->esp = sp0 - 4u;
            t89 = cow_thiscall(g, COW_IMG(0x101a8750u), eax, 1, t88);
            t90 = g->ecx;
            t91 = g->edx;
            wr32(COW_IMG(0x106627d4u), t89);
            eax = t89;
            ecx = t90;
            edx = t91;
        }
    }
    if (rd32(COW_IMG(0x106627ccu)) == 0u)
    {
        g->esp = sp0 - 4u;
        t92 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, 0x48u);
        t93 = g->ecx;
        t94 = g->edx;
        if (t92 == 0u)
        {
            eax = t92;
            ecx = t93;
            edx = t94;
            wr32(COW_IMG(0x106627ccu), 0u);
        }
        else
        {
            eax = t92;
            edx = t94;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t95 = cow_thiscall(g, COW_IMG(0x101a6c10u), eax, 1, rd32(COW_IMG(0x106627d4u)));
            t96 = g->ecx;
            t97 = g->edx;
            wr32(COW_IMG(0x106627ccu), t95);
            eax = t95;
            ecx = t96;
            edx = t97;
        }
    }
    if (rd32(COW_IMG(0x106627d0u)) != 0u) goto L_101ab44c;
    g->esp = sp0 - 4u;
    t98 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, 0x18u);
    if (t98 == 0u)
    {
        eax = t98;
        goto L_101ab446;
    }
    eax = t98;
    g->esp = sp0 - 4u;
    t99 = cow_thiscall(g, COW_IMG(0x101a7280u), eax, 1, rd32(COW_IMG(0x106627d4u)));
    wr32(COW_IMG(0x106627d0u), t99);
    return t99;
L_101ab446: ;
    wr32(COW_IMG(0x106627d0u), 0u);
L_101ab44c: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ab0d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ab0d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
