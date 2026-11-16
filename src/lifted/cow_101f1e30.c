/* f_0x101f1e30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101f1e30(Guest* g)
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x1033a5d8u));
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x101f1100u), self, 0);
    t2 = g->edx;
    if (rd32(COW_IMG(0x10663744u)) == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10663744u));
        edx = t2;
        g->eax = rd32(ecx);
        g->edx = edx;
        t3 = rd32(ecx);
        g->esp = sp0 - 8u;
        t4 = cow_thiscall(g, rd32(t3), ecx, 1, 1u);
        t5 = g->edx;
        wr32(COW_IMG(0x10663744u), 0u);
        eax = t4;
        edx = t5;
    }
    if (rd32(COW_IMG(0x10663748u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10663748u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t6 = rd32(ecx);
        g->esp = sp0 - 8u;
        t7 = cow_thiscall(g, rd32(t6), ecx, 1, 1u);
        t8 = g->edx;
        wr32(COW_IMG(0x10663748u), 0u);
        eax = t7;
        edx = t8;
    }
    if (rd32(COW_IMG(0x1066374cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066374cu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t9 = rd32(ecx);
        g->esp = sp0 - 8u;
        t10 = cow_thiscall(g, rd32(t9), ecx, 1, 1u);
        t11 = g->edx;
        wr32(COW_IMG(0x1066374cu), 0u);
        eax = t10;
        edx = t11;
    }
    if (rd32(COW_IMG(0x10663750u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10663750u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x10663750u));
        g->edx = rd32(ecx);
        t12 = rd32(ecx);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t12), ecx, 1, 1u);
        t13 = g->ecx;
        t14 = g->edx;
        wr32(COW_IMG(0x10663750u), 0u);
        ecx = t13;
        edx = t14;
    }
    if (rd32(COW_IMG(0x10663754u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10663754u));
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t15 = g->ecx;
        t16 = g->edx;
        wr32(COW_IMG(0x10663754u), 0u);
        ecx = t15;
        edx = t16;
    }
    if (rd32(COW_IMG(0x10663758u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10663758u));
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t17 = g->ecx;
        t18 = g->edx;
        wr32(COW_IMG(0x10663758u), 0u);
        ecx = t17;
        edx = t18;
    }
    if (rd32(COW_IMG(0x1066375cu)) != 0u)
    {
        eax = rd32(COW_IMG(0x1066375cu));
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t19 = g->ecx;
        t20 = g->edx;
        wr32(COW_IMG(0x1066375cu), 0u);
        ecx = t19;
        edx = t20;
    }
    if (rd32(COW_IMG(0x10663760u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10663760u));
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t21 = g->ecx;
        t22 = g->edx;
        wr32(COW_IMG(0x10663760u), 0u);
        ecx = t21;
        edx = t22;
    }
    if (rd32(COW_IMG(0x10663764u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10663764u));
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t23 = g->ecx;
        t24 = g->edx;
        wr32(COW_IMG(0x10663764u), 0u);
        ecx = t23;
        edx = t24;
    }
    if (rd32(COW_IMG(0x10663768u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10663768u));
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t25 = g->ecx;
        t26 = g->edx;
        wr32(COW_IMG(0x10663768u), 0u);
        ecx = t25;
        edx = t26;
    }
    if (rd32(COW_IMG(0x1066376cu)) != 0u)
    {
        eax = rd32(COW_IMG(0x1066376cu));
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t27 = g->ecx;
        t28 = g->edx;
        wr32(COW_IMG(0x1066376cu), 0u);
        ecx = t27;
        edx = t28;
    }
    if (rd32(COW_IMG(0x10663770u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10663770u));
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t29 = g->ecx;
        t30 = g->edx;
        wr32(COW_IMG(0x10663770u), 0u);
        ecx = t29;
        edx = t30;
    }
    if (rd32(COW_IMG(0x10663774u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10663774u));
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t31 = g->ecx;
        t32 = g->edx;
        wr32(COW_IMG(0x10663774u), 0u);
        ecx = t31;
        edx = t32;
    }
    if (rd32(COW_IMG(0x10663778u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10663778u));
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t33 = g->ecx;
        t34 = g->edx;
        wr32(COW_IMG(0x10663778u), 0u);
        ecx = t33;
        edx = t34;
    }
    if (rd32(COW_IMG(0x106634c0u)) != 0u)
    {
        eax = rd32(COW_IMG(0x106634c0u));
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t35 = g->edx;
        wr32(COW_IMG(0x106634c0u), 0u);
        edx = t35;
    }
    if (rd32(COW_IMG(0x106634c4u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x106634c4u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x106634c4u));
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(ecx)), ecx, 1, 1u);
        t36 = g->ecx;
        t37 = g->edx;
        wr32(COW_IMG(0x106634c4u), 0u);
        ecx = t36;
        edx = t37;
    }
    if (rd32(COW_IMG(0x1066377cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1066377cu));
    }
    else
    {
        eax = rd32(COW_IMG(0x1066377cu));
        g->eax = eax;
        g->esp = sp0 - 8u;
        t38 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t39 = g->edx;
        wr32(COW_IMG(0x1066377cu), 0u);
        eax = t38;
        edx = t39;
    }
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x101f6870u), eax, self, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f1e30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101f1e30(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
