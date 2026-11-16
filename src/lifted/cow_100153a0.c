/* f_0x100153a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100153a0(Guest* g)
{
    double d1;
    uint32_t eax;
    const uint32_t sp0 = g->esp;

    if (rd32(COW_IMG(0x104568fcu)) == 0u)
    {
        eax = rd32(COW_IMG(0x104568fcu));
    }
    else
    {
        eax = rd32(COW_IMG(0x104568fcu));
        d1 = fr(g, (double)rdf32(sp0 + 8u) / fr(g, fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10329ce4u))) * (double)rdf32(COW_IMG(0x10329d38u))));
        wrf32(eax + 0x2f0u, (float)d1);
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100153a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100153a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
