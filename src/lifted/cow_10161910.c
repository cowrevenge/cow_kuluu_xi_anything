/* f_0x10161910 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10161910(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
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

    if (rd32(COW_IMG(0x10621934u)) != 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x10621934u));
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1036c98cu));
        t2 = g->edx;
        wr32(COW_IMG(0x10621934u), t1);
        edx = t2;
    }
    t3 = rd32(self + 8u);
    wr32(COW_IMG(0x10621938u), t3);
    g->eax = t3;
    g->esp = sp0 - 4u;
    t4 = cow_fastcall(g, COW_IMG(0x1018ebc0u), rd32(rd32(self + 0x18u) + 0x64044u), edx, 0);
    t5 = g->edx;
    t6 = cow_fastcall(g, COW_IMG(0x101295d0u), rd32(self + 0x18u), t5, 4, 0u, 0u, 0u, 0u);
    g->edx = rd32(self + 0x18u);
    t7 = rd32(self + 0x18u);
    t8 = cow_call_regs(g, COW_IMG(0x1018ebf0u), t6, rd32(t7 + 0x64044u), g->edx, 1, 0);
    t9 = g->edx;
    g->esp = sp0;
    g->edx = t9;
    return cow_tailcall(g, COW_IMG(0x10162d60u), t8, self, t9);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10161910(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10161910(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
