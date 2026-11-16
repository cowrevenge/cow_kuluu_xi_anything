/* f_0x1020bc80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1020bc80(Guest* g)
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x1033b948u));
    if (rd32(COW_IMG(0x10664498u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10664498u));
        g->eax = rd32(ecx);
        g->edx = in_edx;
        t1 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        t2 = cow_thiscall(g, rd32(t1), ecx, 1, 1u);
        t3 = g->edx;
        wr32(COW_IMG(0x10664498u), 0u);
        eax = t2;
        edx = t3;
    }
    if (rd32(COW_IMG(0x1066449cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066449cu));
        g->eax = eax;
        g->edx = rd32(ecx);
        t4 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        t5 = cow_thiscall(g, rd32(t4), ecx, 1, 1u);
        t6 = g->edx;
        wr32(COW_IMG(0x1066449cu), 0u);
        eax = t5;
        edx = t6;
    }
    if (rd32(COW_IMG(0x106644a0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106644a0u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t7 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        t8 = cow_thiscall(g, rd32(t7), ecx, 1, 1u);
        t9 = g->edx;
        wr32(COW_IMG(0x106644a0u), 0u);
        eax = t8;
        edx = t9;
    }
    if (rd32(COW_IMG(0x106644a4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106644a4u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t10 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        t11 = cow_thiscall(g, rd32(t10), ecx, 1, 1u);
        t12 = g->edx;
        wr32(COW_IMG(0x106644a4u), 0u);
        eax = t11;
        edx = t12;
    }
    if (rd32(COW_IMG(0x106644acu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106644acu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t13 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        t14 = cow_thiscall(g, rd32(t13), ecx, 1, 1u);
        t15 = g->edx;
        wr32(COW_IMG(0x106644acu), 0u);
        eax = t14;
        edx = t15;
    }
    if (rd32(COW_IMG(0x106644b0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106644b0u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t16 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        t17 = cow_thiscall(g, rd32(t16), ecx, 1, 1u);
        t18 = g->edx;
        wr32(COW_IMG(0x106644b0u), 0u);
        eax = t17;
        edx = t18;
    }
    if (rd32(COW_IMG(0x106644a8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106644a8u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t19 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        t20 = cow_thiscall(g, rd32(t19), ecx, 1, 1u);
        t21 = g->edx;
        wr32(COW_IMG(0x106644a8u), 0u);
        eax = t20;
        edx = t21;
    }
    if (rd32(COW_IMG(0x106644b4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106644b4u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t22 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        t23 = cow_thiscall(g, rd32(t22), ecx, 1, 1u);
        t24 = g->edx;
        wr32(COW_IMG(0x106644b4u), 0u);
        eax = t23;
        edx = t24;
    }
    if (rd32(COW_IMG(0x106644b8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106644b8u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t25 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        t26 = cow_thiscall(g, rd32(t25), ecx, 1, 1u);
        t27 = g->edx;
        wr32(COW_IMG(0x106644b8u), 0u);
        eax = t26;
        edx = t27;
    }
    if (rd32(COW_IMG(0x106644bcu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106644bcu));
        g->eax = eax;
        g->edx = rd32(ecx);
        t28 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        t29 = cow_thiscall(g, rd32(t28), ecx, 1, 1u);
        t30 = g->edx;
        wr32(COW_IMG(0x106644bcu), 0u);
        eax = t29;
        edx = t30;
    }
    if (rd32(COW_IMG(0x106644c0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106644c0u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t31 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        t32 = cow_thiscall(g, rd32(t31), ecx, 1, 1u);
        t33 = g->edx;
        wr32(COW_IMG(0x106644c0u), 0u);
        eax = t32;
        edx = t33;
    }
    if (rd32(COW_IMG(0x106644c4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106644c4u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t34 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        t35 = cow_thiscall(g, rd32(t34), ecx, 1, 1u);
        t36 = g->edx;
        wr32(COW_IMG(0x106644c4u), 0u);
        eax = t35;
        edx = t36;
    }
    if (rd32(COW_IMG(0x106644c8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106644c8u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t37 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        t38 = cow_thiscall(g, rd32(t37), ecx, 1, 1u);
        t39 = g->edx;
        wr32(COW_IMG(0x106644c8u), 0u);
        eax = t38;
        edx = t39;
    }
    if (rd32(COW_IMG(0x106644ccu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106644ccu));
        g->eax = eax;
        g->edx = rd32(ecx);
        t40 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        t41 = cow_thiscall(g, rd32(t40), ecx, 1, 1u);
        t42 = g->edx;
        wr32(COW_IMG(0x106644ccu), 0u);
        eax = t41;
        edx = t42;
    }
    if (rd32(COW_IMG(0x106644d0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106644d0u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t43 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        t44 = cow_thiscall(g, rd32(t43), ecx, 1, 1u);
        t45 = g->edx;
        wr32(COW_IMG(0x106644d0u), 0u);
        eax = t44;
        edx = t45;
    }
    if (rd32(COW_IMG(0x106644d4u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x106644d4u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x106644d4u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t46 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        t47 = cow_thiscall(g, rd32(t46), ecx, 1, 1u);
        t48 = g->ecx;
        t49 = g->edx;
        wr32(COW_IMG(0x106644d4u), 0u);
        eax = t47;
        ecx = t48;
        edx = t49;
    }
    if (rd32(COW_IMG(0x106644dcu)) != 0u)
    {
        esi = rd32(COW_IMG(0x106644dcu));
        if (rd32(esi + 0x1cu) != 0u)
        {
            eax = rd32(esi + 0x1cu);
            g->esp = sp0 - 0xcu;
            cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
            t50 = g->ecx;
            t51 = g->edx;
            wr32(esi + 0x1cu, 0u);
            ecx = t50;
            edx = t51;
        }
        if (rd32(esi + 0x20u) == 0u)
        {
            eax = rd32(esi + 0x20u);
        }
        else
        {
            eax = rd32(esi + 0x20u);
            g->eax = eax;
            g->esp = sp0 - 0xcu;
            t52 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
            t53 = g->ecx;
            t54 = g->edx;
            wr32(esi + 0x20u, 0u);
            eax = t52;
            ecx = t53;
            edx = t54;
        }
        wr32(esi, 0xffffffffu);
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t55 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, esi);
        t56 = g->ecx;
        t57 = g->edx;
        wr32(COW_IMG(0x106644dcu), 0u);
        eax = t55;
        ecx = t56;
        edx = t57;
    }
    if (rd32(COW_IMG(0x106644e0u)) != 0u)
    {
        esi = rd32(COW_IMG(0x106644e0u));
        if (rd32(esi + 0x1cu) != 0u)
        {
            eax = rd32(esi + 0x1cu);
            g->esp = sp0 - 0xcu;
            cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
            t58 = g->ecx;
            t59 = g->edx;
            wr32(esi + 0x1cu, 0u);
            ecx = t58;
            edx = t59;
        }
        if (rd32(esi + 0x20u) == 0u)
        {
            eax = rd32(esi + 0x20u);
        }
        else
        {
            eax = rd32(esi + 0x20u);
            g->eax = eax;
            g->esp = sp0 - 0xcu;
            t60 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
            t61 = g->ecx;
            t62 = g->edx;
            wr32(esi + 0x20u, 0u);
            eax = t60;
            ecx = t61;
            edx = t62;
        }
        wr32(esi, 0xffffffffu);
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t63 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, esi);
        t64 = g->edx;
        wr32(COW_IMG(0x106644e0u), 0u);
        eax = t63;
        edx = t64;
    }
    wr32(COW_IMG(0x106644e4u), 0u);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x101f6870u), eax, self, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020bc80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1020bc80(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
