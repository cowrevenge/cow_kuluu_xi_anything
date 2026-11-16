/* f_0x101aa000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101aa000(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x106626ccu)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x106626ccu));
        g->eax = rd32(ecx);
        g->edx = in_edx;
        t1 = rd32(ecx);
        g->esp = sp0 - 4u;
        t2 = cow_thiscall(g, rd32(t1), ecx, 1, 1u);
        t3 = g->edx;
        wr32(COW_IMG(0x106626ccu), 0u);
        eax = t2;
        edx = t3;
    }
    if (rd32(COW_IMG(0x10662718u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662718u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t4 = rd32(ecx);
        g->esp = sp0 - 4u;
        t5 = cow_thiscall(g, rd32(t4), ecx, 1, 1u);
        t6 = g->edx;
        wr32(COW_IMG(0x10662718u), 0u);
        eax = t5;
        edx = t6;
    }
    if (rd32(COW_IMG(0x1066271cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066271cu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t7 = rd32(ecx);
        g->esp = sp0 - 4u;
        t8 = cow_thiscall(g, rd32(t7), ecx, 1, 1u);
        t9 = g->edx;
        wr32(COW_IMG(0x1066271cu), 0u);
        eax = t8;
        edx = t9;
    }
    if (rd32(COW_IMG(0x10662720u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662720u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t10 = rd32(ecx);
        g->esp = sp0 - 4u;
        t11 = cow_thiscall(g, rd32(t10), ecx, 1, 1u);
        t12 = g->edx;
        wr32(COW_IMG(0x10662720u), 0u);
        eax = t11;
        edx = t12;
    }
    if (rd32(COW_IMG(0x10662724u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662724u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t13 = rd32(ecx);
        g->esp = sp0 - 4u;
        t14 = cow_thiscall(g, rd32(t13), ecx, 1, 1u);
        t15 = g->edx;
        wr32(COW_IMG(0x10662724u), 0u);
        eax = t14;
        edx = t15;
    }
    if (rd32(COW_IMG(0x10662728u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662728u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t16 = rd32(ecx);
        g->esp = sp0 - 4u;
        t17 = cow_thiscall(g, rd32(t16), ecx, 1, 1u);
        t18 = g->edx;
        wr32(COW_IMG(0x10662728u), 0u);
        eax = t17;
        edx = t18;
    }
    if (rd32(COW_IMG(0x1066272cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066272cu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t19 = rd32(ecx);
        g->esp = sp0 - 4u;
        t20 = cow_thiscall(g, rd32(t19), ecx, 1, 1u);
        t21 = g->edx;
        wr32(COW_IMG(0x1066272cu), 0u);
        eax = t20;
        edx = t21;
    }
    if (rd32(COW_IMG(0x10662730u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662730u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t22 = rd32(ecx);
        g->esp = sp0 - 4u;
        t23 = cow_thiscall(g, rd32(t22), ecx, 1, 1u);
        t24 = g->edx;
        wr32(COW_IMG(0x10662730u), 0u);
        eax = t23;
        edx = t24;
    }
    if (rd32(COW_IMG(0x10662734u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662734u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t25 = rd32(ecx);
        g->esp = sp0 - 4u;
        t26 = cow_thiscall(g, rd32(t25), ecx, 1, 1u);
        t27 = g->edx;
        wr32(COW_IMG(0x10662734u), 0u);
        eax = t26;
        edx = t27;
    }
    if (rd32(COW_IMG(0x10662738u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662738u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t28 = rd32(ecx);
        g->esp = sp0 - 4u;
        t29 = cow_thiscall(g, rd32(t28), ecx, 1, 1u);
        t30 = g->edx;
        wr32(COW_IMG(0x10662738u), 0u);
        eax = t29;
        edx = t30;
    }
    if (rd32(COW_IMG(0x1066273cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066273cu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t31 = rd32(ecx);
        g->esp = sp0 - 4u;
        t32 = cow_thiscall(g, rd32(t31), ecx, 1, 1u);
        t33 = g->edx;
        wr32(COW_IMG(0x1066273cu), 0u);
        eax = t32;
        edx = t33;
    }
    if (rd32(COW_IMG(0x10662740u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662740u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t34 = rd32(ecx);
        g->esp = sp0 - 4u;
        t35 = cow_thiscall(g, rd32(t34), ecx, 1, 1u);
        t36 = g->edx;
        wr32(COW_IMG(0x10662740u), 0u);
        eax = t35;
        edx = t36;
    }
    if (rd32(COW_IMG(0x10662744u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662744u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t37 = rd32(ecx);
        g->esp = sp0 - 4u;
        t38 = cow_thiscall(g, rd32(t37), ecx, 1, 1u);
        t39 = g->edx;
        wr32(COW_IMG(0x10662744u), 0u);
        eax = t38;
        edx = t39;
    }
    if (rd32(COW_IMG(0x10662748u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662748u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t40 = rd32(ecx);
        g->esp = sp0 - 4u;
        t41 = cow_thiscall(g, rd32(t40), ecx, 1, 1u);
        t42 = g->edx;
        wr32(COW_IMG(0x10662748u), 0u);
        eax = t41;
        edx = t42;
    }
    if (rd32(COW_IMG(0x1066274cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066274cu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t43 = rd32(ecx);
        g->esp = sp0 - 4u;
        t44 = cow_thiscall(g, rd32(t43), ecx, 1, 1u);
        t45 = g->edx;
        wr32(COW_IMG(0x1066274cu), 0u);
        eax = t44;
        edx = t45;
    }
    if (rd32(COW_IMG(0x10662750u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662750u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t46 = rd32(ecx);
        g->esp = sp0 - 4u;
        t47 = cow_thiscall(g, rd32(t46), ecx, 1, 1u);
        t48 = g->edx;
        wr32(COW_IMG(0x10662750u), 0u);
        eax = t47;
        edx = t48;
    }
    if (rd32(COW_IMG(0x10662754u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662754u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t49 = rd32(ecx);
        g->esp = sp0 - 4u;
        t50 = cow_thiscall(g, rd32(t49), ecx, 1, 1u);
        t51 = g->edx;
        wr32(COW_IMG(0x10662754u), 0u);
        eax = t50;
        edx = t51;
    }
    if (rd32(COW_IMG(0x10662758u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662758u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t52 = rd32(ecx);
        g->esp = sp0 - 4u;
        t53 = cow_thiscall(g, rd32(t52), ecx, 1, 1u);
        t54 = g->edx;
        wr32(COW_IMG(0x10662758u), 0u);
        eax = t53;
        edx = t54;
    }
    if (rd32(COW_IMG(0x1066276cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066276cu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t55 = rd32(ecx);
        g->esp = sp0 - 4u;
        t56 = cow_thiscall(g, rd32(t55), ecx, 1, 1u);
        t57 = g->edx;
        wr32(COW_IMG(0x1066276cu), 0u);
        eax = t56;
        edx = t57;
    }
    if (rd32(COW_IMG(0x1066277cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066277cu));
        g->eax = eax;
        g->edx = rd32(ecx);
        t58 = rd32(ecx);
        g->esp = sp0 - 4u;
        t59 = cow_thiscall(g, rd32(t58), ecx, 1, 1u);
        t60 = g->edx;
        wr32(COW_IMG(0x1066277cu), 0u);
        eax = t59;
        edx = t60;
    }
    if (rd32(COW_IMG(0x10662780u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662780u));
        g->eax = rd32(ecx);
        t61 = rd32(ecx);
        g->esp = sp0 - 4u;
        t62 = cow_thiscall(g, rd32(t61), ecx, 1, 1u);
        wr32(COW_IMG(0x10662780u), 0u);
        eax = t62;
    }
    if (rd32(COW_IMG(0x10662770u)) == 0u)
    {
        edx = rd32(COW_IMG(0x10662770u));
    }
    else
    {
        edx = rd32(COW_IMG(0x10662770u));
        g->eax = rd32(edx);
        t63 = rd32(edx);
        g->esp = sp0 - 4u;
        t64 = cow_thiscall(g, rd32(t63), edx, 1, 1u);
        wr32(COW_IMG(0x10662770u), 0u);
        eax = t64;
        edx = 0u;
    }
    if (rd32(COW_IMG(0x10662774u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10662774u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x10662774u));
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(ecx)), ecx, 1, 1u);
        t65 = rd32(COW_IMG(0x10662770u));
        wr32(COW_IMG(0x10662774u), 0u);
        ecx = 0u;
        edx = t65;
    }
    if (rd32(COW_IMG(0x10662778u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10662778u));
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(eax)), eax, 1, 1u);
        t66 = rd32(COW_IMG(0x10662774u));
        t67 = rd32(COW_IMG(0x10662770u));
        wr32(COW_IMG(0x10662778u), 0u);
        ecx = t66;
        edx = t67;
    }
    if (rd32(COW_IMG(0x1066275cu)) != 0u)
    {
        eax = rd32(COW_IMG(0x1066275cu));
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(eax)), eax, 1, 1u);
        t68 = rd32(COW_IMG(0x10662774u));
        t69 = rd32(COW_IMG(0x10662770u));
        wr32(COW_IMG(0x1066275cu), 0u);
        ecx = t68;
        edx = t69;
    }
    if (rd32(COW_IMG(0x10662760u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10662760u));
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(eax)), eax, 1, 1u);
        t70 = rd32(COW_IMG(0x10662774u));
        t71 = rd32(COW_IMG(0x10662770u));
        wr32(COW_IMG(0x10662760u), 0u);
        ecx = t70;
        edx = t71;
    }
    if (rd32(COW_IMG(0x10662764u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10662764u));
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(eax)), eax, 1, 1u);
        t72 = rd32(COW_IMG(0x10662774u));
        t73 = rd32(COW_IMG(0x10662770u));
        wr32(COW_IMG(0x10662764u), 0u);
        ecx = t72;
        edx = t73;
    }
    if (rd32(COW_IMG(0x10662768u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10662768u));
    }
    else
    {
        eax = rd32(COW_IMG(0x10662768u));
        g->eax = eax;
        g->esp = sp0 - 4u;
        t74 = cow_thiscall(g, rd32(rd32(eax)), eax, 1, 1u);
        t75 = rd32(COW_IMG(0x10662774u));
        t76 = rd32(COW_IMG(0x10662770u));
        wr32(COW_IMG(0x10662768u), 0u);
        eax = t74;
        ecx = t75;
        edx = t76;
    }
    if (edx != 0u)
    {
        g->eax = rd32(edx);
        g->edx = edx;
        t77 = rd32(edx);
        g->esp = sp0 - 4u;
        t78 = cow_thiscall(g, rd32(t77), edx, 1, 1u);
        t79 = g->edx;
        t80 = rd32(COW_IMG(0x10662774u));
        wr32(COW_IMG(0x10662770u), 0u);
        eax = t78;
        ecx = t80;
        edx = t79;
    }
    if (ecx != 0u)
    {
        g->edx = rd32(ecx);
        t81 = rd32(ecx);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(t81), ecx, 1, 1u);
        t82 = g->edx;
        wr32(COW_IMG(0x10662774u), 0u);
        edx = t82;
    }
    if (rd32(COW_IMG(0x10662784u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662784u));
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(ecx)), ecx, 1, 1u);
        wr32(COW_IMG(0x10662784u), 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101aa000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101aa000(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
