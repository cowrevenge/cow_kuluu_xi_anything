/* f_0x1021d9b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1021d9b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 580u);

    wr32(sp0 - 0x220u, in_ebx);
    wr32(sp0 - 0x224u, in_esi);
    wr32(sp0 - 0x228u, in_edi);
    wr32(sp0 - 0x20cu, 0u);
    wr32(sp0 - 0x22cu, self + 0x10u);
    wr32(sp0 - 0x230u, COW_IMG(0x10385e60u));
    wr32(sp0 - 0x234u, 3u);
    wr32(sp0 - 0x238u, 0u);
    wr32(sp0 - 0x23cu, COW_IMG(0x1033fe08u));
    wr32(sp0 - 0x21cu, 0u);
    wr32(sp0 - 0x214u, 0u);
    wr32(sp0 - 0x218u, 0u);
    wr32(sp0 - 0x210u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x228u;
    t1 = cow_thiscall(g, rd32(COW_IMG(0x103294a4u)), self, 5, COW_IMG(0x1033fe08u), 0u, 3u, COW_IMG(0x10385e60u), self + 0x10u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((int32_t)t1 >= 0)
    {
        ecx = t2;
        edx = t3;
        goto L_1021da35;
    }
    ecx = t2;
    edx = t3;
    if (0u)
    {
        wr32(sp0 - 0x22cu, 0u);
        g->edx = edx;
        t4 = rd32(0u);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t4 + 8u), t4, 1, 0u);
        t5 = g->ecx;
        t6 = g->edx;
        ecx = t5;
        edx = t6;
    }
    if (0u)
    {
        wr32(sp0 - 0x22cu, 0u);
        g->edx = rd32(0u);
        t7 = rd32(0u);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t7 + 8u), ecx, 1, 0u);
        t8 = g->ecx;
        t9 = g->edx;
        ecx = t8;
        edx = t9;
    }
    if (0u)
    {
        wr32(sp0 - 0x22cu, 0u);
        t10 = rd32(0u);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t10 + 8u), t10, 1, 0u);
        t11 = g->ecx;
        ecx = t11;
    }
    if (0u)
    {
        wr32(sp0 - 0x22cu, 0u);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(rd32(0u) + 8u), ecx, 1, 0u);
    }
    return 0x80004005u;
L_1021da35: ;
    wr32(sp0 - 0x22cu, 0x188u);
    g->edx = edx;
    g->esp = sp0 - 0x220u;
    t12 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x188u, in_edi, in_esi);
    t13 = g->edx;
    if (t12 == 0u)
    {
        edx = t13;
        eax = 0u;
    }
    else
    {
        eax = t12;
        edx = t13;
        wr32(sp0 - 0x22cu, sp0 - 0x20cu);
        wr32(sp0 - 0x230u, 0u);
        g->edx = edx;
        g->esp = sp0 - 0x228u;
        t14 = cow_thiscall(g, COW_IMG(0x1021de90u), eax, 2, 0u, sp0 - 0x20cu);
        t15 = g->edx;
        eax = t14;
        edx = t15;
    }
    t16 = rd32(sp0 - 0x20cu);
    wr32(self + 0x20u, eax);
    if ((int32_t)t16 >= 0)
    {
        ecx = t16;
        goto L_1021daab;
    }
    ecx = t16;
    if (rd32(sp0 - 0x210u) != 0u)
    {
        eax = rd32(sp0 - 0x210u);
        wr32(sp0 - 0x22cu, eax);
        g->edx = rd32(eax);
        t17 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t17 + 8u), ecx, 1, eax);
        t18 = g->ecx;
        t19 = g->edx;
        ecx = t18;
        edx = t19;
    }
    if (rd32(sp0 - 0x218u) != 0u)
    {
        eax = rd32(sp0 - 0x218u);
        wr32(sp0 - 0x22cu, eax);
        g->edx = edx;
        t20 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t20 + 8u), t20, 1, eax);
        t21 = g->ecx;
        t22 = g->edx;
        ecx = t21;
        edx = t22;
    }
    if (rd32(sp0 - 0x214u) != 0u)
    {
        eax = rd32(sp0 - 0x214u);
        wr32(sp0 - 0x22cu, eax);
        g->edx = rd32(eax);
        t23 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t23 + 8u), ecx, 1, eax);
        t24 = g->edx;
        edx = t24;
    }
    if (rd32(sp0 - 0x21cu) != 0u)
    {
        eax = rd32(sp0 - 0x21cu);
        wr32(sp0 - 0x22cu, eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
    }
    g->ebx = rd32(sp0 - 0x220u);
    g->esi = rd32(sp0 - 0x224u);
    g->edi = rd32(sp0 - 0x228u);
    return 0x80004005u;
L_1021daab: ;
    if (eax == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = eax + 0xcu;
    }
    wr32(sp0 - 0x22cu, eax);
    wr32(sp0 - 0x230u, sp0 - 0x21cu);
    g->esp = sp0 - 0x228u;
    cow_fastcall(g, COW_IMG(0x1021dd20u), ecx, sp0 - 0x21cu, 2, sp0 - 0x21cu, eax);
    wr32(sp0 - 0x22cu, COW_IMG(0x10385e40u));
    t25 = rd32(sp0 - 0x21cu);
    wr32(sp0 - 0x230u, t25);
    t26 = rd32(self + 0x10u);
    wr32(sp0 - 0x234u, t26);
    g->eax = t26;
    g->edx = t25;
    t27 = rd32(rd32(self + 0x10u));
    t28 = cow_thiscall(g, rd32(t27 + 0xcu), t27, 3, t26, t25, COW_IMG(0x10385e40u));
    t29 = g->ecx;
    t30 = g->edx;
    wr32(sp0 - 0x20cu, t28);
    if ((int32_t)t28 >= 0)
    {
        edx = t30;
        goto L_1021db23;
    }
    eax = t28;
    ecx = t29;
    edx = t30;
    if (rd32(sp0 - 0x210u) == 0u)
    {
        esi = eax;
    }
    else
    {
        esi = eax;
        eax = rd32(sp0 - 0x210u);
        wr32(sp0 - 0x22cu, eax);
        g->edx = edx;
        t31 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t31 + 8u), t31, 1, eax);
        t32 = g->ecx;
        t33 = g->edx;
        ecx = t32;
        edx = t33;
    }
    if (rd32(sp0 - 0x218u) != 0u)
    {
        eax = rd32(sp0 - 0x218u);
        wr32(sp0 - 0x22cu, eax);
        g->edx = rd32(eax);
        t34 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t34 + 8u), ecx, 1, eax);
        t35 = g->ecx;
        t36 = g->edx;
        ecx = t35;
        edx = t36;
    }
    if (rd32(sp0 - 0x214u) != 0u)
    {
        eax = rd32(sp0 - 0x214u);
        wr32(sp0 - 0x22cu, eax);
        t37 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t37 + 8u), t37, 1, eax);
        t38 = g->ecx;
        ecx = t38;
    }
    if (rd32(sp0 - 0x21cu) != 0u)
    {
        eax = rd32(sp0 - 0x21cu);
        wr32(sp0 - 0x22cu, eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), ecx, 1, eax);
    }
    g->ebx = rd32(sp0 - 0x220u);
    g->esi = rd32(sp0 - 0x224u);
    g->edi = rd32(sp0 - 0x228u);
    return esi;
L_1021db23: ;
    wr32(sp0 - 0x22cu, 0x104u);
    wr32(sp0 - 0x230u, sp0 - 0x208u);
    wr32(sp0 - 0x234u, 0xffffffffu);
    wr32(sp0 - 0x238u, arg1);
    wr32(sp0 - 0x23cu, 0u);
    wr32(sp0 - 0x240u, 0u);
    g->esp = sp0 - 0x228u;
    cow_thiscall(g, rd32(COW_IMG(0x10329144u)), arg1, 6, 0u, 0u, arg1, 0xffffffffu, sp0 - 0x208u, 0x104u);
    wr32(sp0 - 0x22cu, sp0 - 0x218u);
    wr32(sp0 - 0x230u, COW_IMG(0x10385e30u));
    wr32(sp0 - 0x234u, sp0 - 0x208u);
    t39 = rd32(self + 0x10u);
    wr32(sp0 - 0x238u, t39);
    g->eax = t39;
    g->edx = rd32(rd32(self + 0x10u));
    t40 = rd32(rd32(self + 0x10u));
    t41 = cow_thiscall(g, rd32(t40 + 0x38u), sp0 - 0x208u, 4, t39, sp0 - 0x208u, COW_IMG(0x10385e30u), sp0 - 0x218u);
    t42 = g->ecx;
    t43 = g->edx;
    wr32(sp0 - 0x20cu, t41);
    if ((int32_t)t41 >= 0) goto L_1021dbaa;
    eax = t41;
    ecx = t42;
    edx = t43;
    if (rd32(sp0 - 0x210u) == 0u)
    {
        esi = eax;
    }
    else
    {
        esi = eax;
        eax = rd32(sp0 - 0x210u);
        wr32(sp0 - 0x22cu, eax);
        g->edx = rd32(eax);
        t44 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t44 + 8u), ecx, 1, eax);
        t45 = g->ecx;
        t46 = g->edx;
        ecx = t45;
        edx = t46;
    }
    if (rd32(sp0 - 0x218u) != 0u)
    {
        eax = rd32(sp0 - 0x218u);
        wr32(sp0 - 0x22cu, eax);
        g->edx = edx;
        t47 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t47 + 8u), t47, 1, eax);
        t48 = g->ecx;
        t49 = g->edx;
        ecx = t48;
        edx = t49;
    }
    if (rd32(sp0 - 0x214u) != 0u)
    {
        eax = rd32(sp0 - 0x214u);
        wr32(sp0 - 0x22cu, eax);
        g->edx = rd32(eax);
        t50 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t50 + 8u), ecx, 1, eax);
        t51 = g->edx;
        edx = t51;
    }
    if (rd32(sp0 - 0x21cu) == 0u) goto L_1021dc64;
    eax = rd32(sp0 - 0x21cu);
    wr32(sp0 - 0x22cu, eax);
    g->esp = sp0 - 0x228u;
    cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
    g->ebx = rd32(sp0 - 0x220u);
    g->esi = rd32(sp0 - 0x224u);
    g->edi = rd32(sp0 - 0x228u);
    return esi;
L_1021dbaa: ;
    wr32(sp0 - 0x22cu, sp0 - 0x214u);
    wr32(sp0 - 0x230u, COW_IMG(0x10385e28u));
    t52 = rd32(sp0 - 0x21cu);
    wr32(sp0 - 0x234u, t52);
    g->eax = t52;
    g->edx = rd32(rd32(sp0 - 0x21cu));
    t53 = rd32(rd32(sp0 - 0x21cu));
    g->esp = sp0 - 0x228u;
    t54 = cow_thiscall(g, rd32(t53 + 0x2cu), sp0 - 0x214u, 3, t52, COW_IMG(0x10385e28u), sp0 - 0x214u);
    t55 = g->ecx;
    t56 = g->edx;
    wr32(sp0 - 0x20cu, t54);
    if ((int32_t)t54 >= 0) goto L_1021dc0e;
    eax = t54;
    ecx = t55;
    edx = t56;
    if (rd32(sp0 - 0x210u) == 0u)
    {
        esi = eax;
    }
    else
    {
        esi = eax;
        eax = rd32(sp0 - 0x210u);
        wr32(sp0 - 0x22cu, eax);
        g->edx = rd32(eax);
        t57 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t57 + 8u), ecx, 1, eax);
        t58 = g->ecx;
        t59 = g->edx;
        ecx = t58;
        edx = t59;
    }
    if (rd32(sp0 - 0x218u) != 0u)
    {
        eax = rd32(sp0 - 0x218u);
        wr32(sp0 - 0x22cu, eax);
        g->edx = edx;
        t60 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t60 + 8u), t60, 1, eax);
        t61 = g->ecx;
        t62 = g->edx;
        ecx = t61;
        edx = t62;
    }
    if (rd32(sp0 - 0x214u) != 0u)
    {
        eax = rd32(sp0 - 0x214u);
        wr32(sp0 - 0x22cu, eax);
        g->edx = rd32(eax);
        t63 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t63 + 8u), ecx, 1, eax);
        t64 = g->edx;
        edx = t64;
    }
    if (rd32(sp0 - 0x21cu) == 0u) goto L_1021dc64;
    eax = rd32(sp0 - 0x21cu);
    wr32(sp0 - 0x22cu, eax);
    g->esp = sp0 - 0x228u;
    cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
    g->ebx = rd32(sp0 - 0x220u);
    g->esi = rd32(sp0 - 0x224u);
    g->edi = rd32(sp0 - 0x228u);
    return esi;
L_1021dc0e: ;
    wr32(sp0 - 0x22cu, sp0 - 0x210u);
    wr32(sp0 - 0x230u, COW_IMG(0x10385e18u));
    t65 = rd32(sp0 - 0x218u);
    wr32(sp0 - 0x234u, t65);
    g->eax = t65;
    g->edx = rd32(rd32(sp0 - 0x218u));
    t66 = rd32(rd32(sp0 - 0x218u));
    g->esp = sp0 - 0x228u;
    t67 = cow_thiscall(g, rd32(t66 + 0x2cu), sp0 - 0x210u, 3, t65, COW_IMG(0x10385e18u), sp0 - 0x210u);
    t68 = g->ecx;
    t69 = g->edx;
    wr32(sp0 - 0x20cu, t67);
    if ((int32_t)t67 >= 0) goto L_1021dc72;
    eax = t67;
    ecx = t68;
    edx = t69;
    if (rd32(sp0 - 0x210u) == 0u)
    {
        esi = eax;
    }
    else
    {
        esi = eax;
        eax = rd32(sp0 - 0x210u);
        wr32(sp0 - 0x22cu, eax);
        g->edx = rd32(eax);
        t70 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t70 + 8u), ecx, 1, eax);
        t71 = g->ecx;
        t72 = g->edx;
        ecx = t71;
        edx = t72;
    }
    if (rd32(sp0 - 0x218u) != 0u)
    {
        eax = rd32(sp0 - 0x218u);
        wr32(sp0 - 0x22cu, eax);
        g->edx = edx;
        t73 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t73 + 8u), t73, 1, eax);
        t74 = g->ecx;
        t75 = g->edx;
        ecx = t74;
        edx = t75;
    }
    if (rd32(sp0 - 0x214u) != 0u)
    {
        eax = rd32(sp0 - 0x214u);
        wr32(sp0 - 0x22cu, eax);
        g->edx = rd32(eax);
        t76 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t76 + 8u), ecx, 1, eax);
        t77 = g->edx;
        edx = t77;
    }
    if (rd32(sp0 - 0x21cu) != 0u)
    {
        eax = rd32(sp0 - 0x21cu);
        wr32(sp0 - 0x22cu, eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
    }
L_1021dc64: ;
    g->ebx = rd32(sp0 - 0x220u);
    g->esi = rd32(sp0 - 0x224u);
    g->edi = rd32(sp0 - 0x228u);
    return esi;
L_1021dc72: ;
    t78 = rd32(sp0 - 0x214u);
    wr32(sp0 - 0x22cu, t78);
    t79 = rd32(sp0 - 0x210u);
    wr32(sp0 - 0x230u, t79);
    t80 = rd32(self + 0x10u);
    wr32(sp0 - 0x234u, t80);
    g->eax = t80;
    g->edx = rd32(rd32(self + 0x10u));
    t81 = rd32(rd32(self + 0x10u));
    g->esp = sp0 - 0x228u;
    t82 = cow_thiscall(g, rd32(t81 + 0x2cu), t79, 3, t80, t79, t78);
    t83 = g->ecx;
    t84 = g->edx;
    wr32(sp0 - 0x20cu, t82);
    if ((int32_t)t82 >= 0)
    {
        eax = t82;
        goto L_1021dcca;
    }
    eax = t82;
    ecx = t83;
    edx = t84;
    if (rd32(sp0 - 0x210u) == 0u)
    {
        esi = eax;
    }
    else
    {
        esi = eax;
        eax = rd32(sp0 - 0x210u);
        wr32(sp0 - 0x22cu, eax);
        g->edx = rd32(eax);
        t85 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t85 + 8u), ecx, 1, eax);
        t86 = g->edx;
        edx = t86;
    }
    if (rd32(sp0 - 0x218u) == 0u)
    {
        eax = rd32(sp0 - 0x218u);
    }
    else
    {
        eax = rd32(sp0 - 0x218u);
        wr32(sp0 - 0x22cu, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x228u;
        t87 = cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t88 = g->edx;
        eax = t87;
        edx = t88;
    }
    g->eax = eax;
    g->esp = sp0 - 0x228u;
    t89 = cow_fastcall(g, COW_IMG(0x1021de20u), sp0 - 0x214u, edx, 0);
    t90 = g->edx;
    cow_fastcall(g, COW_IMG(0x1021de10u), sp0 - 0x21cu, t90, 0);
    g->ebx = rd32(sp0 - 0x220u);
    g->esi = rd32(sp0 - 0x224u);
    g->edi = rd32(sp0 - 0x228u);
    return esi;
L_1021dcca: ;
    wr32(sp0 - 0x22cu, self + 0x14u);
    g->edx = self + 0x14u;
    g->esp = sp0 - 0x228u;
    cow_thiscall(g, COW_IMG(0x1021de30u), self + 0x10u, 1, self + 0x14u);
    t91 = g->edx;
    wr32(sp0 - 0x22cu, self + 0x18u);
    g->eax = self + 0x18u;
    g->edx = t91;
    t92 = cow_thiscall(g, COW_IMG(0x1021de50u), self + 0x10u, 1, self + 0x18u);
    t93 = g->edx;
    wr32(sp0 - 0x22cu, self + 0x1cu);
    g->edx = t93;
    t94 = cow_thiscall(g, COW_IMG(0x1021de70u), self + 0x10u, 1, self + 0x1cu);
    t95 = g->edx;
    t96 = cow_fastcall(g, COW_IMG(0x1021de20u), sp0 - 0x210u, t95, 0);
    t97 = g->edx;
    t98 = cow_fastcall(g, COW_IMG(0x1021de10u), sp0 - 0x218u, t97, 0);
    t99 = g->edx;
    t100 = cow_fastcall(g, COW_IMG(0x1021de20u), sp0 - 0x214u, t99, 0);
    t101 = g->edx;
    cow_fastcall(g, COW_IMG(0x1021de10u), sp0 - 0x21cu, t101, 0);
    g->ebx = rd32(sp0 - 0x220u);
    g->esi = rd32(sp0 - 0x224u);
    g->edi = rd32(sp0 - 0x228u);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021d9b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021d9b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
