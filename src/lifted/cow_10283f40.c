/* f_0x10283f40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10283f40(Guest* g)
{
    double d1;
    const uint32_t sp0 = g->esp;

    d1 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(sp0 + 4u));
    wrf32(rd32(COW_IMG(0x1099d200u)) + 0x14u, (float)d1);
    wr32(COW_IMG(0x109a2730u), 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10283f40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10283f40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
