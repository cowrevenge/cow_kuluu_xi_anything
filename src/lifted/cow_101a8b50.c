/* f_0x101a8b50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101a8b50(Guest* g)
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 1, 0x20u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        wr32(COW_IMG(0x10662db8u), 0u);
    }
    else
    {
        eax = t1;
        edx = t3;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t4 = cow_thiscall(g, COW_IMG(0x101ba280u), eax, 0);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(COW_IMG(0x10662db8u), t4);
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    g->eax = eax;
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, 0x1a0u);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 == 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        wr32(COW_IMG(0x1066268cu), 0u);
    }
    else
    {
        eax = t7;
        edx = t9;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t10 = cow_thiscall(g, COW_IMG(0x1018d640u), eax, 0);
        t11 = g->ecx;
        t12 = g->edx;
        wr32(COW_IMG(0x1066268cu), t10);
        eax = t10;
        ecx = t11;
        edx = t12;
    }
    g->eax = eax;
    g->esp = sp0 - 4u;
    t13 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, 0x508u);
    t14 = g->ecx;
    t15 = g->edx;
    if (t13 == 0u)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        wr32(COW_IMG(0x10662690u), 0u);
    }
    else
    {
        eax = t13;
        edx = t15;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t16 = cow_thiscall(g, COW_IMG(0x1018dcd0u), eax, 0);
        t17 = g->ecx;
        t18 = g->edx;
        wr32(COW_IMG(0x10662690u), t16);
        eax = t16;
        ecx = t17;
        edx = t18;
    }
    g->eax = eax;
    g->esp = sp0 - 4u;
    t19 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, 0x20u);
    t20 = g->edx;
    if (t19 == 0u)
    {
        edx = t20;
        eax = 0u;
    }
    else
    {
        eax = t19;
        edx = t20;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t21 = cow_thiscall(g, COW_IMG(0x1018e9b0u), eax, 0);
        t22 = g->edx;
        eax = t21;
        edx = t22;
    }
    wr32(COW_IMG(0x10662694u), eax);
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1018eb00u), eax, 0);
    t23 = g->edx;
    t24 = rd32(COW_IMG(0x10662694u));
    t25 = rd32(COW_IMG(0x10578158u));
    wr32(t25 + 0x64044u, t24);
    g->eax = t24;
    t26 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t25, t23, 1, 1, 0x20u);
    t27 = g->edx;
    if (t26 == 0u)
    {
        edx = t27;
        eax = 0u;
    }
    else
    {
        eax = t26;
        edx = t27;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t28 = cow_thiscall(g, COW_IMG(0x1018ea00u), eax, 0);
        t29 = g->edx;
        eax = t28;
        edx = t29;
    }
    wr32(COW_IMG(0x10662698u), eax);
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1018eb00u), eax, 0);
    t30 = g->ecx;
    t31 = rd32(COW_IMG(0x1057815cu));
    t32 = rd32(COW_IMG(0x10662698u));
    wr32(t31 + 0x64044u, t32);
    g->eax = t31;
    t33 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t30, t32, 1, 1, 0x4e34u);
    t34 = g->ecx;
    t35 = g->edx;
    if (t33 == 0u)
    {
        eax = t33;
        ecx = t34;
        edx = t35;
        wr32(COW_IMG(0x10662dc0u), 0u);
    }
    else
    {
        eax = t33;
        edx = t35;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t36 = cow_thiscall(g, COW_IMG(0x101bcef0u), eax, 0);
        t37 = g->ecx;
        t38 = g->edx;
        wr32(COW_IMG(0x10662dc0u), t36);
        eax = t36;
        ecx = t37;
        edx = t38;
    }
    g->eax = eax;
    g->esp = sp0 - 4u;
    t39 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, 0x10u);
    t40 = g->edx;
    if (t39 == 0u)
    {
        eax = t39;
        goto L_101a8c6c;
    }
    eax = t39;
    edx = t40;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t41 = cow_thiscall(g, COW_IMG(0x101bcba0u), eax, 0);
    wr32(COW_IMG(0x10662dbcu), t41);
    return t41;
L_101a8c6c: ;
    wr32(COW_IMG(0x10662dbcu), 0u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a8b50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a8b50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
