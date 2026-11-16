/* f_0x101e42b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101e42b0(Guest* g)
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x103394c0u));
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x101e4570u), self, 0);
    t2 = g->edx;
    if (rd32(COW_IMG(0x1066352cu)) == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        ecx = rd32(COW_IMG(0x1066352cu));
        edx = t2;
        g->eax = rd32(ecx);
        g->edx = edx;
        t3 = rd32(ecx);
        g->esp = sp0 - 8u;
        t4 = cow_thiscall(g, rd32(t3), ecx, 1, 1u);
        t5 = g->edx;
        wr32(COW_IMG(0x1066352cu), 0u);
        eax = t4;
        edx = t5;
    }
    if (rd32(COW_IMG(0x10663528u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10663528u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t6 = rd32(ecx);
        g->esp = sp0 - 8u;
        t7 = cow_thiscall(g, rd32(t6), ecx, 1, 1u);
        t8 = g->edx;
        wr32(COW_IMG(0x10663528u), 0u);
        eax = t7;
        edx = t8;
    }
    if (rd32(COW_IMG(0x10663530u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10663530u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t9 = rd32(ecx);
        g->esp = sp0 - 8u;
        t10 = cow_thiscall(g, rd32(t9), ecx, 1, 1u);
        t11 = g->edx;
        wr32(COW_IMG(0x10663530u), 0u);
        eax = t10;
        edx = t11;
    }
    if (rd32(COW_IMG(0x10663534u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10663534u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t12 = rd32(ecx);
        g->esp = sp0 - 8u;
        t13 = cow_thiscall(g, rd32(t12), ecx, 1, 1u);
        t14 = g->edx;
        wr32(COW_IMG(0x10663534u), 0u);
        eax = t13;
        edx = t14;
    }
    if (rd32(COW_IMG(0x10663538u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10663538u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t15 = rd32(ecx);
        g->esp = sp0 - 8u;
        t16 = cow_thiscall(g, rd32(t15), ecx, 1, 1u);
        t17 = g->edx;
        wr32(COW_IMG(0x10663538u), 0u);
        eax = t16;
        edx = t17;
    }
    if (rd32(COW_IMG(0x1066353cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066353cu));
        g->eax = eax;
        g->edx = rd32(ecx);
        t18 = rd32(ecx);
        g->esp = sp0 - 8u;
        t19 = cow_thiscall(g, rd32(t18), ecx, 1, 1u);
        t20 = g->edx;
        wr32(COW_IMG(0x1066353cu), 0u);
        eax = t19;
        edx = t20;
    }
    if (rd32(COW_IMG(0x10663540u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10663540u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t21 = rd32(ecx);
        g->esp = sp0 - 8u;
        t22 = cow_thiscall(g, rd32(t21), ecx, 1, 1u);
        t23 = g->edx;
        wr32(COW_IMG(0x10663540u), 0u);
        eax = t22;
        edx = t23;
    }
    if (rd32(COW_IMG(0x10663554u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10663554u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t24 = rd32(ecx);
        g->esp = sp0 - 8u;
        t25 = cow_thiscall(g, rd32(t24), ecx, 1, 1u);
        t26 = g->edx;
        wr32(COW_IMG(0x10663554u), 0u);
        eax = t25;
        edx = t26;
    }
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x101f6870u), eax, self, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e42b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e42b0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
