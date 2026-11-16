/* f_0x101ab520 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101ab520(Guest* g)
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    g->eax = rd32(COW_IMG(0x10662794u));
    t1 = rd32(COW_IMG(0x10662794u));
    g->esp = sp0 - 4u;
    t2 = cow_call_regs(g, COW_IMG(0x101a19f0u), g->eax, g->ecx, in_edx, 1, 1, t1);
    t3 = g->edx;
    if (rd32(COW_IMG(0x1066279cu)) == 0u)
    {
        eax = t2;
        edx = t3;
    }
    else
    {
        eax = t2;
        ecx = rd32(COW_IMG(0x1066279cu));
        g->eax = eax;
        g->edx = rd32(ecx);
        t4 = rd32(ecx);
        g->esp = sp0 - 4u;
        t5 = cow_thiscall(g, rd32(t4), ecx, 1, 1u);
        t6 = g->edx;
        wr32(COW_IMG(0x1066279cu), 0u);
        eax = t5;
        edx = t6;
    }
    if (rd32(COW_IMG(0x106627a0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106627a0u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t7 = rd32(ecx);
        g->esp = sp0 - 4u;
        t8 = cow_thiscall(g, rd32(t7), ecx, 1, 1u);
        t9 = g->edx;
        wr32(COW_IMG(0x106627a0u), 0u);
        eax = t8;
        edx = t9;
    }
    if (rd32(COW_IMG(0x106627a4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106627a4u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t10 = rd32(ecx);
        g->esp = sp0 - 4u;
        t11 = cow_thiscall(g, rd32(t10), ecx, 1, 1u);
        t12 = g->edx;
        wr32(COW_IMG(0x106627a4u), 0u);
        eax = t11;
        edx = t12;
    }
    if (rd32(COW_IMG(0x106627a8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106627a8u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t13 = rd32(ecx);
        g->esp = sp0 - 4u;
        t14 = cow_thiscall(g, rd32(t13), ecx, 1, 1u);
        t15 = g->edx;
        wr32(COW_IMG(0x106627a8u), 0u);
        eax = t14;
        edx = t15;
    }
    if (rd32(COW_IMG(0x106627acu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106627acu));
        g->eax = eax;
        g->edx = rd32(ecx);
        t16 = rd32(ecx);
        g->esp = sp0 - 4u;
        t17 = cow_thiscall(g, rd32(t16), ecx, 1, 1u);
        t18 = g->edx;
        wr32(COW_IMG(0x106627acu), 0u);
        eax = t17;
        edx = t18;
    }
    if (rd32(COW_IMG(0x106627b0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106627b0u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t19 = rd32(ecx);
        g->esp = sp0 - 4u;
        t20 = cow_thiscall(g, rd32(t19), ecx, 1, 1u);
        t21 = g->edx;
        wr32(COW_IMG(0x106627b0u), 0u);
        eax = t20;
        edx = t21;
    }
    if (rd32(COW_IMG(0x106627b4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106627b4u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t22 = rd32(ecx);
        g->esp = sp0 - 4u;
        t23 = cow_thiscall(g, rd32(t22), ecx, 1, 1u);
        t24 = g->edx;
        wr32(COW_IMG(0x106627b4u), 0u);
        eax = t23;
        edx = t24;
    }
    if (rd32(COW_IMG(0x106627b8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106627b8u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t25 = rd32(ecx);
        g->esp = sp0 - 4u;
        t26 = cow_thiscall(g, rd32(t25), ecx, 1, 1u);
        t27 = g->edx;
        wr32(COW_IMG(0x106627b8u), 0u);
        eax = t26;
        edx = t27;
    }
    if (rd32(COW_IMG(0x106627bcu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106627bcu));
        g->eax = eax;
        g->edx = rd32(ecx);
        t28 = rd32(ecx);
        g->esp = sp0 - 4u;
        t29 = cow_thiscall(g, rd32(t28), ecx, 1, 1u);
        t30 = g->edx;
        wr32(COW_IMG(0x106627bcu), 0u);
        eax = t29;
        edx = t30;
    }
    if (rd32(COW_IMG(0x106627c0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106627c0u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t31 = rd32(ecx);
        g->esp = sp0 - 4u;
        t32 = cow_thiscall(g, rd32(t31), ecx, 1, 1u);
        t33 = g->edx;
        wr32(COW_IMG(0x106627c0u), 0u);
        eax = t32;
        edx = t33;
    }
    if (rd32(COW_IMG(0x106627c4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106627c4u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t34 = rd32(ecx);
        g->esp = sp0 - 4u;
        t35 = cow_thiscall(g, rd32(t34), ecx, 1, 1u);
        t36 = g->edx;
        wr32(COW_IMG(0x106627c4u), 0u);
        eax = t35;
        edx = t36;
    }
    if (rd32(COW_IMG(0x106627c8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106627c8u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t37 = rd32(ecx);
        g->esp = sp0 - 4u;
        t38 = cow_thiscall(g, rd32(t37), ecx, 1, 1u);
        t39 = g->edx;
        wr32(COW_IMG(0x106627c8u), 0u);
        eax = t38;
        edx = t39;
    }
    if (rd32(COW_IMG(0x106627ccu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106627ccu));
        g->eax = eax;
        g->edx = rd32(ecx);
        t40 = rd32(ecx);
        g->esp = sp0 - 4u;
        t41 = cow_thiscall(g, rd32(t40), ecx, 1, 1u);
        t42 = g->edx;
        wr32(COW_IMG(0x106627ccu), 0u);
        eax = t41;
        edx = t42;
    }
    if (rd32(COW_IMG(0x106627d0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106627d0u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t43 = rd32(ecx);
        g->esp = sp0 - 4u;
        t44 = cow_thiscall(g, rd32(t43), ecx, 1, 1u);
        t45 = g->edx;
        wr32(COW_IMG(0x106627d0u), 0u);
        eax = t44;
        edx = t45;
    }
    if (rd32(COW_IMG(0x106627d4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106627d4u));
        g->edx = rd32(ecx);
        t46 = rd32(ecx);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(t46), ecx, 1, 1u);
        t47 = g->edx;
        wr32(COW_IMG(0x106627d4u), 0u);
        edx = t47;
    }
    if (rd32(COW_IMG(0x106627d8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106627d8u));
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(ecx)), ecx, 1, 1u);
        wr32(COW_IMG(0x106627d8u), 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ab520(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101ab520(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
