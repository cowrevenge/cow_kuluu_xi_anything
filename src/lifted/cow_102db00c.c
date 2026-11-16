/* f_0x102db00c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102db00c(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 4u) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 4u);
        if (rd32(self + 0x38u) == 0u)
        {
            ecx = self;
            edx = in_edx;
        }
        else
        {
            g->edx = in_edx;
            g->esp = sp0 - 4u;
            cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
            t1 = g->edx;
            ecx = eax;
            edx = t1;
        }
    }
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
    }
    else
    {
        eax = rd32(self + 8u);
        if (rd32(self + 0x3cu) != 0u)
        {
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t2 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
            t3 = g->edx;
            eax = t2;
            edx = t3;
        }
    }
    if (rd32(self + 0x4cu) != 0u)
    {
        edi = rd32(self + 0x4cu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t4 = cow_thiscall(g, COW_IMG(0x102db00cu), edi, 0);
        t5 = g->ecx;
        t6 = g->edx;
        g->edx = t6;
        t7 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, edi);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
    if (rd32(self + 0x50u) != 0u)
    {
        esi = rd32(self + 0x50u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t9 = cow_thiscall(g, COW_IMG(0x102db00cu), esi, 0);
        t10 = g->ecx;
        t11 = g->edx;
        g->edx = t11;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, esi);
        t12 = g->edx;
        edx = t12;
    }
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102db00c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102db00c(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
