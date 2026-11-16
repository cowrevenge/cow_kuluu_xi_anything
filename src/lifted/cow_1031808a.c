/* f_0x1031808a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1031808a(Guest* g)
{
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (!(rdf64(arg1) >= rdf64(COW_IMG(0x1034a1d8u)))) goto L_1031809f;
    return 1u;
L_1031809f: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031808a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031808a(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
