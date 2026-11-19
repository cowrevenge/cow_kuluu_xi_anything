/* f_0x1006e710 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1006e710(Guest* g)
{
    double d1;
    double d2;
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t self = g->ecx;

    COW_AT(1006e710)
    d1 = fr(g, sin((double)rdf32(sp0 + 0xcu)));
    wrf32(self + 0x868u, (float)d1);
    wrf32(self + 0x874u, (float)-d1);
    d2 = fr(g, cos((double)rdf32(sp0 + 0xcu)));
    wr32(sp0 + 0xcu, self + 0x850u);
    wrf32(self + 0x878u, (float)d2);
    wrf32(self + 0x864u, (float)d2);
    g->edx = self + 0x850u;
    return cow_tailcall(g, rd32(rd32(self) + 0x20u), rd32(self), self, self + 0x850u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006e710(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1006e710(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
