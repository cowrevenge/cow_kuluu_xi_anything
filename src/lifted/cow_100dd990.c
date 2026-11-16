/* f_0x100dd990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=1 */
void cow_fn_100dd990(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = g->esp;

    t1 = (uint8_t)rd32(sp0 + 4u);
    wr32(sp0 + 4u, t1);
    fpush(g, fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10331818u))) * (double)rdf32(COW_IMG(0x1032ae50u))));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100dd990(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100dd990(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
