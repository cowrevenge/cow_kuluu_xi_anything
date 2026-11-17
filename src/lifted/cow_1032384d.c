/* f_0x1032384d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1032384d(Guest* g)
{
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    cow_cdecl(g, COW_IMG(0x103236cbu), 3, arg1, arg2, COW_IMG(0x103d3790u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1032384d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1032384d(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
