/* f_0x10055650 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10055650(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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

    if (rd32(self + 4u) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 4u);
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, self, in_edx, 1, 1, eax);
        t1 = g->ecx;
        t2 = g->edx;
        ecx = t1;
        edx = t2;
    }
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
    }
    else
    {
        eax = rd32(self + 8u);
        g->eax = eax;
        g->esp = sp0 - 4u;
        t3 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    if (rd32(self) != 0u)
    {
        esi = rd32(self);
        g->edx = edx;
        g->esp = sp0 - 4u;
        t5 = cow_call_regs(g, COW_IMG(0x1018c620u), eax, esi, g->edx, 1, 0);
        t6 = g->ecx;
        t7 = g->edx;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t6, t7, 1, 1, esi);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10055650(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10055650(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
