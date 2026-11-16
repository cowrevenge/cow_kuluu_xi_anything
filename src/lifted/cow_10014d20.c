/* f_0x10014d20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
void cow_fn_10014d20(Guest* g)
{
    double d1;
    uint32_t ecx;

    d1 = (double)rdf32(rd32(COW_IMG(0x104568fcu)) + 0x28u);
    if (!(d1 < (double)rdf32(COW_IMG(0x1032961cu))))
    {
        ecx = rd32(COW_IMG(0x104568fcu));
        goto L_10014d3d;
    }
    fpush(g, (double)rdf32(COW_IMG(0x1032961cu)));
    return;
L_10014d3d: ;
    fpush(g, (double)rdf32(ecx + 0x28u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10014d20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10014d20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
