/* f_0x1000cff0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1000cff0(Guest* g)
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

    t1 = rd32(self + 4u);
    wr32(self, COW_IMG(0x10329a3cu));
    if (t1 == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = t1;
        g->edx = in_edx;
        t2 = rd32(eax);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(t2 + 8u), t2, 1, eax);
        t3 = g->ecx;
        t4 = g->edx;
        wr32(self + 4u, 0u);
        ecx = t3;
        edx = t4;
    }
    if (rd32(self + 0xcu) != 0u)
    {
        eax = rd32(self + 0xcu);
        g->edx = rd32(eax);
        t5 = rd32(eax);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(t5 + 8u), ecx, 1, eax);
        t6 = g->edx;
        wr32(self + 0xcu, 0u);
        edx = t6;
    }
    if (rd32(self + 8u) != 0u)
    {
        eax = rd32(self + 8u);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        wr32(self + 8u, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000cff0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1000cff0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
