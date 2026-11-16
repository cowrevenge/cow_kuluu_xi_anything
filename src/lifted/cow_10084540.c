/* f_0x10084540 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
void cow_fn_10084540(Guest* g)
{
    uint32_t ecx;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x70u) == 0u) goto L_1008454c;
    ecx = rd32(self + 0x70u);
    g->esp = sp0;
    cow_tailcall(g, COW_IMG(0x1009aec0u), in_eax, ecx, in_edx);
    return;
L_1008454c: ;
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10084540(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10084540(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
