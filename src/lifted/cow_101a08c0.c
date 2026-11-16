/* f_0x101a08c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101a08c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(self + 8u);
    wr32(self, COW_IMG(0x10337204u));
    if (t1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = t1;
        g->eax = rd32(ecx);
        g->edx = in_edx;
        t2 = rd32(ecx);
        g->esp = sp0 - 4u;
        t3 = cow_thiscall(g, rd32(t2), ecx, 1, 1u);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    if (rd32(self + 4u) != 0u)
    {
        ecx = rd32(self + 4u);
        g->eax = eax;
        g->edx = rd32(ecx);
        t5 = rd32(ecx);
        g->esp = sp0 - 4u;
        t6 = cow_thiscall(g, rd32(t5), ecx, 1, 1u);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    if (rd32(self + 0x18u) != 0u)
    {
        ecx = rd32(self + 0x18u);
        g->eax = rd32(ecx);
        g->edx = edx;
        t8 = rd32(ecx);
        g->esp = sp0 - 4u;
        t9 = cow_thiscall(g, rd32(t8), ecx, 1, 1u);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
    if (rd32(self + 0x10u) != 0u)
    {
        ecx = rd32(self + 0x10u);
        g->edx = rd32(ecx);
        t11 = rd32(ecx);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(t11), ecx, 1, 1u);
        t12 = g->edx;
        edx = t12;
    }
    if (rd32(self + 0x14u) != 0u)
    {
        ecx = rd32(self + 0x14u);
        g->esp = sp0;
        cow_thiscall(g, rd32(rd32(ecx)), ecx, 1, 1u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a08c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101a08c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
