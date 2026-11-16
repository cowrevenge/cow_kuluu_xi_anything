/* f_0x10056390 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10056390(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = rd32(self + 0x194u);
    wr32(self, COW_IMG(0x1032b758u));
    g->edx = self + 0x54u;
    g->esp = sp0 - 8u;
    t2 = cow_stdcall(g, COW_IMG(0x10178610u), 5, t1, self + 0x54u, 0u, 0u, 0u);
    t3 = g->edx;
    wr32(self + 0x1acu, t2);
    g->esp = sp0;
    g->edx = t3;
    cow_tailcall(g, COW_IMG(0x10044970u), t2, self, t3);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10056390(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10056390(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
