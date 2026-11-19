/* f_0x1006e790 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1006e790(Guest* g)
{
    double d1;
    double d2;
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t self = g->ecx;

    COW_AT(1006e790)
    d1 = fr(g, cos((double)rdf32(sp0 + 0xcu)));
    wrf32(self + 0x8e4u, (float)d1);
    wrf32(self + 0x8d0u, (float)d1);
    d2 = fr(g, sin((double)rdf32(sp0 + 0xcu)));
    wr32(sp0 + 0xcu, self + 0x8d0u);
    wrf32(self + 0x8d4u, (float)d2);
    wrf32(self + 0x8e0u, (float)-d2);
    g->edx = rd32(self);
    return cow_tailcall(g, rd32(rd32(self) + 0x20u), self + 0x8d0u, self, rd32(self));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006e790(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1006e790(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
