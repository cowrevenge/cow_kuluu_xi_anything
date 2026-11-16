/* f_0x100729e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100729e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(self + 0x38u);
    wr32(self, COW_IMG(0x1032c908u));
    if (t1 == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = t1;
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, self, in_edx, 1, 1, eax);
        t2 = g->ecx;
        t3 = g->edx;
        wr32(self + 0x38u, 0u);
        ecx = t2;
        edx = t3;
    }
    if (rd32(self + 0x45u) != 0u)
    {
        eax = rd32(self + 0x45u);
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t4 = g->edx;
        wr32(self + 0x45u, 0u);
        edx = t4;
    }
    t5 = rd32(COW_IMG(0x1047d138u)) - 1u;
    wr32(COW_IMG(0x1047d138u), t5);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x100747c0u), t5, self, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100729e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100729e0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
