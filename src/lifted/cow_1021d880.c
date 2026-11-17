/* f_0x1021d880 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1021d880(Guest* g)
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

    t1 = rd32(self + 0x14u);
    wr32(self, COW_IMG(0x1033bdd0u));
    if (t1 == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = t1;
        g->edx = in_edx;
        t2 = rd32(eax);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t2 + 0x24u), t2, 1, eax);
        t3 = g->ecx;
        t4 = g->edx;
        ecx = t3;
        edx = t4;
    }
    if (rd32(self + 0x14u) != 0u)
    {
        eax = rd32(self + 0x14u);
        if (eax != 0u)
        {
            wr32(self + 0x14u, 0u);
            g->edx = rd32(eax);
            t5 = rd32(eax);
            g->esp = sp0 - 8u;
            cow_thiscall(g, rd32(t5 + 8u), ecx, 1, eax);
            t6 = g->ecx;
            t7 = g->edx;
            ecx = t6;
            edx = t7;
        }
    }
    if (rd32(self + 0x1cu) != 0u)
    {
        eax = rd32(self + 0x1cu);
        if (eax != 0u)
        {
            wr32(self + 0x1cu, 0u);
            g->edx = edx;
            t8 = rd32(eax);
            g->esp = sp0 - 8u;
            cow_thiscall(g, rd32(t8 + 8u), t8, 1, eax);
            t9 = g->ecx;
            t10 = g->edx;
            ecx = t9;
            edx = t10;
        }
    }
    if (rd32(self + 0x18u) != 0u)
    {
        eax = rd32(self + 0x18u);
        if (eax != 0u)
        {
            wr32(self + 0x18u, 0u);
            g->edx = rd32(eax);
            t11 = rd32(eax);
            g->esp = sp0 - 8u;
            cow_thiscall(g, rd32(t11 + 8u), ecx, 1, eax);
            t12 = g->ecx;
            t13 = g->edx;
            ecx = t12;
            edx = t13;
        }
    }
    if (rd32(self + 0x10u) == 0u)
    {
        eax = rd32(self + 0x10u);
    }
    else
    {
        eax = rd32(self + 0x10u);
        if (eax != 0u)
        {
            wr32(self + 0x10u, 0u);
            g->eax = eax;
            g->edx = edx;
            t14 = rd32(eax);
            g->esp = sp0 - 8u;
            t15 = cow_thiscall(g, rd32(t14 + 8u), t14, 1, eax);
            t16 = g->ecx;
            t17 = g->edx;
            eax = t15;
            ecx = t16;
            edx = t17;
        }
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_stdcall(g, rd32(COW_IMG(0x103294c0u)), 0);   /* ole32.dll!CoFreeUnusedLibraries */
    t18 = g->ecx;
    t19 = g->edx;
    if (rd32(self + 0x1cu) == 0u)
    {
        ecx = t18;
        edx = t19;
    }
    else
    {
        eax = rd32(self + 0x1cu);
        ecx = t18;
        g->edx = rd32(eax);
        t20 = rd32(eax);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t20 + 8u), ecx, 1, eax);
        t21 = g->ecx;
        t22 = g->edx;
        ecx = t21;
        edx = t22;
    }
    if (rd32(self + 0x18u) != 0u)
    {
        eax = rd32(self + 0x18u);
        g->edx = edx;
        t23 = rd32(eax);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t23 + 8u), t23, 1, eax);
        t24 = g->ecx;
        t25 = g->edx;
        ecx = t24;
        edx = t25;
    }
    if (rd32(self + 0x14u) != 0u)
    {
        eax = rd32(self + 0x14u);
        g->edx = rd32(eax);
        t26 = rd32(eax);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t26 + 8u), ecx, 1, eax);
        t27 = g->ecx;
        t28 = g->edx;
        ecx = t27;
        edx = t28;
    }
    if (rd32(self + 0x10u) != 0u)
    {
        esi = rd32(self + 0x10u);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(esi) + 8u), ecx, 1, esi);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021d880(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1021d880(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
