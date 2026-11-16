/* f_0x100337c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100337c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = rd32(self + 8u);
    wr32(self, COW_IMG(0x1032a844u));
    if (t1 == 0u)
    {
        ecx = self;
    }
    else
    {
        eax = t1;
        t2 = rd32(eax);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(t2 + 8u), t2, 1, eax);
        t3 = g->ecx;
        wr32(self + 8u, 0u);
        ecx = t3;
    }
    if (rd32(self + 0xcu) != 0u)
    {
        eax = rd32(self + 0xcu);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), ecx, 1, eax);
        wr32(self + 0xcu, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100337c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100337c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
