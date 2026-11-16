/* f_0x1031b1ac - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1031b1ac(Guest* g)
{
    const uint32_t in_eax = g->eax;
    const double xin0 = ST(0);

    if ((in_eax & 0x80000u) == 0u) goto L_1031b1b9;
    return 7u;
L_1031b1b9: ;
    g->top = (g->top + 1u) & 7u;
    fpush(g, fr(g, xin0 + rdf64(COW_IMG(0x1034a380u))));
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031b1ac(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031b1ac(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
