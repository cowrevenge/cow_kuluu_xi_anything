/* f_0x10202c90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10202c90(Guest* g)
{
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(COW_IMG(0x10663b52u) + arg1 * 0x7cu) == 0u) goto L_10202cb1;
    return COW_IMG(0x10663adeu) + arg1 * 0x7cu;
L_10202cb1: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10202c90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10202c90(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
