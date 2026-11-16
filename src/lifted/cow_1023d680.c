/* f_0x1023d680 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1023d680(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;

    wr32(self, COW_IMG(0x1033c9b0u));
    g->esi = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101f7020u), self, 3, 0u, 0u, 1u);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(self + 0x58u) == 0u)
    {
        eax = rd32(self + 0x58u);
        edx = t2;
    }
    else
    {
        eax = rd32(self + 0x58u);
        ecx = t1;
        edx = t2;
        g->eax = eax;
        g->esp = sp0 - 4u;
        t3 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t4 = g->edx;
        wr32(self + 0x58u, 0u);
        eax = t3;
        edx = t4;
    }
    g->esp = sp0;
    g->esi = in_esi;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x101f6870u), eax, self, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023d680(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1023d680(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
