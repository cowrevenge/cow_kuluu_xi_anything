/* f_0x1000c7c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1000c7c0(Guest* g)
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
    uint32_t t2;
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

    if (rd32(self + 0x814u) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x814u);
        g->edx = in_edx;
        t1 = rd32(eax);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t1 + 8u), t1, 1, eax);
        t2 = g->ecx;
        t3 = g->edx;
        wr32(self + 0x814u, 0u);
        ecx = t2;
        edx = t3;
    }
    if (rd32(self + 0x818u) != 0u)
    {
        eax = rd32(self + 0x818u);
        g->edx = rd32(eax);
        t4 = rd32(eax);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t4 + 8u), ecx, 1, eax);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(self + 0x818u, 0u);
        ecx = t5;
        edx = t6;
    }
    if (rd32(self + 0x81cu) != 0u)
    {
        eax = rd32(self + 0x81cu);
        g->edx = edx;
        t7 = rd32(eax);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t7 + 8u), t7, 1, eax);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(self + 0x81cu, 0u);
        ecx = t8;
        edx = t9;
    }
    if (rd32(self + 0x820u) != 0u)
    {
        eax = rd32(self + 0x820u);
        g->edx = rd32(eax);
        t10 = rd32(eax);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t10 + 8u), ecx, 1, eax);
        t11 = g->ecx;
        t12 = g->edx;
        wr32(self + 0x820u, 0u);
        ecx = t11;
        edx = t12;
    }
    if (rd32(self + 0x824u) != 0u)
    {
        eax = rd32(self + 0x824u);
        t13 = rd32(eax);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t13 + 8u), t13, 1, eax);
        t14 = g->ecx;
        wr32(self + 0x824u, 0u);
        ecx = t14;
    }
    if (rd32(self + 0x82cu) == 0u)
    {
        eax = rd32(self + 0x82cu);
    }
    else
    {
        eax = rd32(self + 0x82cu);
        g->eax = eax;
        g->esp = sp0 - 8u;
        t15 = cow_thiscall(g, rd32(rd32(eax) + 8u), ecx, 1, eax);
        wr32(self + 0x82cu, 0u);
        eax = t15;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000c7c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1000c7c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
