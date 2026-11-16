/* f_0x1025a880 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1025a880(Guest* g)
{
    uint32_t eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 8u) == 0u) goto L_1025a894;
    eax = rd32(self + 8u);
    wr32(eax + 4u, arg1);
    wr32(self + 8u, arg1);
    g->edx = arg1;
    return;
L_1025a894: ;
    wr32(self + 4u, arg1);
    wr32(self + 8u, arg1);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025a880(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1025a880(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
