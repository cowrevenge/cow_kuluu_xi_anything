/* f_0x1024b980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1024b980(Guest* g)
{
    double d1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    d1 = fr(g, (double)(int32_t)rd32(arg1) * (double)rdf32(COW_IMG(0x10330250u)));
    wrf32(COW_IMG(0x106690ecu), (float)d1);
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024b980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1024b980(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
