/* f_0x10014e80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10014e80(Guest* g)
{
    double d2;
    uint32_t t1;
    const uint32_t sp0 = g->esp;

    t1 = rd32(COW_IMG(0x104568fcu));
    d2 = (double)rdf32(sp0 + 4u);
    wrf32(t1 + 0x300u, (float)d2);
    return t1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10014e80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10014e80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
