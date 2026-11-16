/* f_0x101509d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101509d0(Guest* g)
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

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, 0u, 2u);
    t2 = g->edx;
    g->edx = t2;
    t3 = rd32(COW_IMG(0x1057847cu));
    cow_thiscall(g, COW_IMG(0x10150cc0u), t3, 2, 0u, 2u);
    t4 = g->ecx;
    t5 = g->edx;
    if (rd32(self + 0x74u) == 0u)
    {
        ecx = t4;
        edx = t5;
    }
    else
    {
        eax = rd32(self + 0x74u);
        ecx = t4;
        edx = t5;
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t6 = g->ecx;
        t7 = g->edx;
        wr32(self + 0x74u, 0u);
        ecx = t6;
        edx = t7;
    }
    if (rd32(self + 0x70u) != 0u)
    {
        eax = rd32(self + 0x70u);
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        wr32(self + 0x70u, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101509d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101509d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
