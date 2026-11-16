/* f_0x101fea40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101fea40(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0xcu) == 0u)
    {
        eax = rd32(self + 0xcu);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0xcu);
        g->eax = eax;
        g->esp = sp0 - 8u;
        t1 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, self, in_edx, 1, 1, eax);
        t2 = g->edx;
        wr32(self + 0xcu, 0u);
        eax = t1;
        edx = t2;
    }
    if (rd32(self + 0x14u) != 0u)
    {
        edi = rd32(self + 0x14u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t3 = cow_thiscall(g, COW_IMG(0x101c8230u), edi, 0);
        t4 = g->ecx;
        t5 = g->edx;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t4, t5, 1, 1, edi);
        t6 = g->edx;
        wr32(self + 0x14u, 0u);
        edx = t6;
    }
    t7 = rd32(sp0 + 4u);
    wr32(sp0 + 8u, 2u);
    wr32(t7 + 0x40u, 0u);
    t8 = rd32(COW_IMG(0x1057847cu));
    wr32(sp0 + 4u, 0u);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x10150ce0u), t7, t8, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fea40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fea40(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
