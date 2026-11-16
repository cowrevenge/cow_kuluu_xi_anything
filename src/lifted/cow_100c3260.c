/* f_0x100c3260 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100c3260(Guest* g)
{
    uint32_t t1;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(arg1 + 0x5cu, 0u);
    wr32(arg1 + 0x60u, 0u);
    if (rd32(self) != 0u) goto L_100c327c;
    wr32(self, arg1);
    wr32(self + 4u, arg1);
    g->edx = 0u;
    return arg1;
L_100c327c: ;
    wr32(rd32(self + 4u) + 0x5cu, arg1);
    t1 = rd32(self + 4u);
    wr32(arg1 + 0x60u, t1);
    wr32(self + 4u, arg1);
    g->edx = t1;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c3260(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100c3260(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
