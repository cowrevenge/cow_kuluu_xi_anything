/* f_0x10209bf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10209bf0(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;

    wr32(self, COW_IMG(0x1033b3a0u));
    g->esi = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101f7020u), self, 3, 0u, 0u, 1u);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(self + 0x58u) == 0u)
    {
        ecx = t1;
        edx = t2;
    }
    else
    {
        eax = rd32(self + 0x58u);
        ecx = t1;
        edx = t2;
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t3 = g->ecx;
        t4 = g->edx;
        wr32(self + 0x58u, 0u);
        ecx = t3;
        edx = t4;
    }
    if (rd32(self + 0x5cu) == 0u)
    {
        eax = rd32(self + 0x5cu);
    }
    else
    {
        eax = rd32(self + 0x5cu);
        g->eax = eax;
        g->esp = sp0 - 4u;
        t5 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t6 = g->edx;
        wr32(self + 0x5cu, 0u);
        eax = t5;
        edx = t6;
    }
    g->esp = sp0;
    g->esi = in_esi;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x101f6870u), eax, self, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10209bf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10209bf0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
