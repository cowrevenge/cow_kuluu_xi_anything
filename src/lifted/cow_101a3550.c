/* f_0x101a3550 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101a3550(Guest* g)
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
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x10123a70u), in_eax, self, g->edx, 1, 4, 0x3eu, 0x59u, 1u, 0xffffffffu);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        esi = 0xffffffffu;
    }
    else
    {
        edx = t3;
        g->edx = edx;
        t4 = rd32(self + 4u);
        g->esp = sp0 - 8u;
        t5 = cow_thiscall(g, COW_IMG(0x101a2890u), t4, 1, 0u);
        t6 = g->ecx;
        t7 = g->edx;
        eax = t5;
        ecx = t6;
        edx = t7;
        esi = t5;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x5au, 1u, 0xffffffffu);
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 == 0u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
    }
    else
    {
        edx = t10;
        g->edx = edx;
        t11 = rd32(self + 4u);
        g->esp = sp0 - 8u;
        t12 = cow_thiscall(g, COW_IMG(0x101a2890u), t11, 1, 2u);
        t13 = g->ecx;
        t14 = g->edx;
        eax = t12;
        ecx = t13;
        edx = t14;
        esi = t12;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t15 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x5bu, 1u, 0xffffffffu);
    t16 = g->ecx;
    t17 = g->edx;
    if ((uint8_t)t15 == 0u)
    {
        eax = t15;
        ecx = t16;
        edx = t17;
    }
    else
    {
        edx = t17;
        g->edx = edx;
        t18 = rd32(self + 4u);
        g->esp = sp0 - 8u;
        t19 = cow_thiscall(g, COW_IMG(0x101a2890u), t18, 1, 4u);
        t20 = g->ecx;
        t21 = g->edx;
        eax = t19;
        ecx = t20;
        edx = t21;
        esi = t19;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t22 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x5cu, 1u, 0xffffffffu);
    t23 = g->ecx;
    t24 = g->edx;
    if ((uint8_t)t22 == 0u)
    {
        eax = t22;
        ecx = t23;
        edx = t24;
    }
    else
    {
        edx = t24;
        g->edx = edx;
        t25 = rd32(self + 4u);
        g->esp = sp0 - 8u;
        t26 = cow_thiscall(g, COW_IMG(0x101a2890u), t25, 1, 6u);
        t27 = g->ecx;
        t28 = g->edx;
        eax = t26;
        ecx = t27;
        edx = t28;
        esi = t26;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t29 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x5du, 1u, 0xffffffffu);
    t30 = g->ecx;
    t31 = g->edx;
    if ((uint8_t)t29 == 0u)
    {
        eax = t29;
        ecx = t30;
        edx = t31;
    }
    else
    {
        edx = t31;
        g->edx = edx;
        t32 = rd32(self + 4u);
        g->esp = sp0 - 8u;
        t33 = cow_thiscall(g, COW_IMG(0x101a2890u), t32, 1, 8u);
        t34 = g->ecx;
        t35 = g->edx;
        eax = t33;
        ecx = t34;
        edx = t35;
        esi = t33;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t36 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x5eu, 1u, 0xffffffffu);
    t37 = g->ecx;
    t38 = g->edx;
    if ((uint8_t)t36 == 0u)
    {
        eax = t36;
        ecx = t37;
        edx = t38;
    }
    else
    {
        edx = t38;
        g->edx = edx;
        t39 = rd32(self + 4u);
        g->esp = sp0 - 8u;
        t40 = cow_thiscall(g, COW_IMG(0x101a2890u), t39, 1, 0xau);
        t41 = g->ecx;
        t42 = g->edx;
        eax = t40;
        ecx = t41;
        edx = t42;
        esi = t40;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t43 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x5fu, 1u, 0xffffffffu);
    t44 = g->ecx;
    t45 = g->edx;
    if ((uint8_t)t43 == 0u)
    {
        eax = t43;
        ecx = t44;
        edx = t45;
    }
    else
    {
        edx = t45;
        g->edx = edx;
        t46 = rd32(self + 4u);
        g->esp = sp0 - 8u;
        t47 = cow_thiscall(g, COW_IMG(0x101a2890u), t46, 1, 0xcu);
        t48 = g->ecx;
        t49 = g->edx;
        eax = t47;
        ecx = t48;
        edx = t49;
        esi = t47;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t50 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x60u, 1u, 0xffffffffu);
    t51 = g->ecx;
    t52 = g->edx;
    if ((uint8_t)t50 == 0u)
    {
        eax = t50;
        ecx = t51;
        edx = t52;
    }
    else
    {
        edx = t52;
        g->edx = edx;
        t53 = rd32(self + 4u);
        g->esp = sp0 - 8u;
        t54 = cow_thiscall(g, COW_IMG(0x101a2890u), t53, 1, 0xeu);
        t55 = g->ecx;
        t56 = g->edx;
        eax = t54;
        ecx = t55;
        edx = t56;
        esi = t54;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t57 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x61u, 1u, 0xffffffffu);
    t58 = g->ecx;
    t59 = g->edx;
    if ((uint8_t)t57 == 0u)
    {
        eax = t57;
        ecx = t58;
        edx = t59;
    }
    else
    {
        edx = t59;
        g->edx = edx;
        t60 = rd32(self + 4u);
        g->esp = sp0 - 8u;
        t61 = cow_thiscall(g, COW_IMG(0x101a2890u), t60, 1, 0x10u);
        t62 = g->ecx;
        t63 = g->edx;
        eax = t61;
        ecx = t62;
        edx = t63;
        esi = t61;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t64 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x58u, 1u, 0xffffffffu);
    t65 = g->edx;
    if ((uint8_t)t64 == 0u)
    {
        eax = t64;
        edx = t65;
    }
    else
    {
        edx = t65;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t66 = cow_thiscall(g, COW_IMG(0x101a2890u), rd32(self + 4u), 1, 0x12u);
        t67 = g->edx;
        eax = t66;
        edx = t67;
        esi = t66;
    }
    if ((int32_t)esi < 0) goto L_101a36e1;
    if (rd32(rd32(COW_IMG(0x106627a0u)) + 8u) == 0u) goto L_101a36bf;
    eax = rd32(rd32(COW_IMG(0x106627a0u)) + 8u);
    ecx = rd32(COW_IMG(0x106627a0u));
    g->edx = edx;
    g->esp = sp0;
    t68 = cow_call_regs(g, COW_IMG(0x101a3d00u), eax, ecx, g->edx, 0, 1, 1u);
    t69 = g->edx;
    t70 = cow_thiscall(g, COW_IMG(0x101a3cf0u), rd32(COW_IMG(0x106627a0u)), 0);
    return (t70 & 0xffffff00u) | 1u;
L_101a36bf: ;
    if (rd32(rd32(COW_IMG(0x106627a4u)) + 8u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x106627a4u)) + 8u);
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x106627a4u)) + 8u);
        ecx = rd32(COW_IMG(0x106627a4u));
        g->edx = edx;
        g->esp = sp0;
        t71 = cow_call_regs(g, COW_IMG(0x101a43b0u), eax, ecx, g->edx, 0, 1, 1u);
        t72 = g->edx;
        t73 = cow_thiscall(g, COW_IMG(0x101a43a0u), rd32(COW_IMG(0x106627a4u)), 0);
        eax = t73;
    }
    return (eax & 0xffffff00u) | 1u;
L_101a36e1: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a3550(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a3550(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
