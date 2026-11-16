/* f_0x101a6d00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101a6d00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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

    if (rd32(self + 0x18u) == 0u)
    {
        ecx = rd32(self + 0x18u);
        edx = in_edx;
    }
    else
    {
        ecx = rd32(self + 0x18u);
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(ecx)), ecx, 1, 1u);
        t1 = g->ecx;
        t2 = g->edx;
        wr32(self + 0x18u, 0u);
        ecx = t1;
        edx = t2;
    }
    if (rd32(COW_IMG(0x106627e8u)) != 0u)
    {
        eax = rd32(COW_IMG(0x106627e8u));
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t3 = g->edx;
        wr32(COW_IMG(0x106627e8u), 0u);
        edx = t3;
    }
    if (rd32(self + 0x1cu) == 0u)
    {
        eax = rd32(self + 0x1cu);
    }
    else
    {
        eax = rd32(self + 0x1cu);
        g->edx = edx;
        g->esp = sp0 - 4u;
        t4 = cow_call_regs(g, COW_IMG(0x101a7170u), eax, self, g->edx, 0, 1, 0u);
        t5 = g->edx;
        eax = t4;
        edx = t5;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, 0u, 2u);
    t7 = g->edx;
    g->edx = t7;
    return t6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a6d00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a6d00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
