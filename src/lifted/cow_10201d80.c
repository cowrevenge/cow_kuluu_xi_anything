/* f_0x10201d80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10201d80(Guest* g)
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x106643a8u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x106643a8u));
        g->eax = rd32(ecx);
        g->edx = in_edx;
        t1 = rd32(ecx);
        g->esp = sp0 - 4u;
        t2 = cow_thiscall(g, rd32(t1), ecx, 1, 1u);
        t3 = g->edx;
        wr32(COW_IMG(0x106643a8u), 0u);
        eax = t2;
        edx = t3;
    }
    if (rd32(COW_IMG(0x106643acu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106643acu));
        g->eax = eax;
        g->edx = rd32(ecx);
        t4 = rd32(ecx);
        g->esp = sp0 - 4u;
        t5 = cow_thiscall(g, rd32(t4), ecx, 1, 1u);
        t6 = g->edx;
        wr32(COW_IMG(0x106643acu), 0u);
        eax = t5;
        edx = t6;
    }
    if (rd32(COW_IMG(0x106643b0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106643b0u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t7 = rd32(ecx);
        g->esp = sp0 - 4u;
        t8 = cow_thiscall(g, rd32(t7), ecx, 1, 1u);
        t9 = g->edx;
        wr32(COW_IMG(0x106643b0u), 0u);
        eax = t8;
        edx = t9;
    }
    if (rd32(COW_IMG(0x106643b4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106643b4u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t10 = rd32(ecx);
        g->esp = sp0 - 4u;
        t11 = cow_thiscall(g, rd32(t10), ecx, 1, 1u);
        t12 = g->edx;
        wr32(COW_IMG(0x106643b4u), 0u);
        eax = t11;
        edx = t12;
    }
    if (rd32(COW_IMG(0x106643b8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106643b8u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t13 = rd32(ecx);
        g->esp = sp0 - 4u;
        t14 = cow_thiscall(g, rd32(t13), ecx, 1, 1u);
        t15 = g->edx;
        wr32(COW_IMG(0x106643b8u), 0u);
        eax = t14;
        edx = t15;
    }
    if (rd32(COW_IMG(0x106643bcu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106643bcu));
        g->eax = eax;
        g->edx = rd32(ecx);
        t16 = rd32(ecx);
        g->esp = sp0 - 4u;
        t17 = cow_thiscall(g, rd32(t16), ecx, 1, 1u);
        t18 = g->edx;
        wr32(COW_IMG(0x106643bcu), 0u);
        eax = t17;
        edx = t18;
    }
    if (rd32(COW_IMG(0x106643c0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106643c0u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t19 = rd32(ecx);
        g->esp = sp0 - 4u;
        t20 = cow_thiscall(g, rd32(t19), ecx, 1, 1u);
        t21 = g->edx;
        wr32(COW_IMG(0x106643c0u), 0u);
        eax = t20;
        edx = t21;
    }
    if (rd32(COW_IMG(0x106643c4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106643c4u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t22 = rd32(ecx);
        g->esp = sp0 - 4u;
        t23 = cow_thiscall(g, rd32(t22), ecx, 1, 1u);
        t24 = g->edx;
        wr32(COW_IMG(0x106643c4u), 0u);
        eax = t23;
        edx = t24;
    }
    if (rd32(COW_IMG(0x106643c8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106643c8u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t25 = rd32(ecx);
        g->esp = sp0 - 4u;
        t26 = cow_thiscall(g, rd32(t25), ecx, 1, 1u);
        t27 = g->edx;
        wr32(COW_IMG(0x106643c8u), 0u);
        eax = t26;
        edx = t27;
    }
    if (rd32(COW_IMG(0x106643ccu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106643ccu));
        g->eax = eax;
        g->edx = rd32(ecx);
        t28 = rd32(ecx);
        g->esp = sp0 - 4u;
        t29 = cow_thiscall(g, rd32(t28), ecx, 1, 1u);
        t30 = g->edx;
        wr32(COW_IMG(0x106643ccu), 0u);
        eax = t29;
        edx = t30;
    }
    if (rd32(COW_IMG(0x106643d0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106643d0u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t31 = rd32(ecx);
        g->esp = sp0 - 4u;
        t32 = cow_thiscall(g, rd32(t31), ecx, 1, 1u);
        t33 = g->edx;
        wr32(COW_IMG(0x106643d0u), 0u);
        eax = t32;
        edx = t33;
    }
    if (rd32(COW_IMG(0x106643d4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106643d4u));
        g->edx = rd32(ecx);
        t34 = rd32(ecx);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(t34), ecx, 1, 1u);
        t35 = g->edx;
        wr32(COW_IMG(0x106643d4u), 0u);
        edx = t35;
    }
    if (rd32(COW_IMG(0x106643d8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106643d8u));
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(ecx)), ecx, 1, 1u);
        wr32(COW_IMG(0x106643d8u), 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10201d80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10201d80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
