/* f_0x1018eaa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1018eaa0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x103368d0u));
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1018ee20u), self, 1, 1u);
    t1 = g->edx;
    if (rd32(self + 4u) == 0u)
    {
        eax = rd32(self + 4u);
        edx = t1;
    }
    else
    {
        eax = rd32(self + 4u);
        edx = t1;
        if (rd32(self + 0xcu) != 0u)
        {
            ecx = rd32(self + 0xcu);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t2 = cow_thiscall(g, COW_IMG(0x1018e8d0u), ecx, 1, eax);
            t3 = g->edx;
            eax = t2;
            edx = t3;
        }
    }
    if (rd32(self + 4u) != 0u)
    {
        edi = rd32(self + 4u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t4 = cow_thiscall(g, COW_IMG(0x1018e0e0u), edi, 0);
        t5 = g->ecx;
        t6 = g->edx;
        g->edx = t6;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, edi);
        t7 = g->edx;
        wr32(self + 4u, 0u);
        edx = t7;
    }
    if (rd32(self + 0xcu) != 0u)
    {
        ecx = rd32(self + 0xcu);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(ecx)), ecx, 1, 1u);
        wr32(self + 0xcu, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018eaa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1018eaa0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
