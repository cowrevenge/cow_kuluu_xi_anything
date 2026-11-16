/* f_0x102eef7a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102eef7a(Guest* g)
{
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(arg1 + 0xc4u, 0u);
    wr32(arg1 + 0x7cu, 0u);
    wr32(arg1 + 0x178u, 0u);
    wr8(rd32(arg1 + 0x190u) + 0x50u, 0u);
    t1 = rd32(arg1 + 0x190u);
    wr8(t1 + 0x51u, 0u);
    wr32(rd32(arg1 + 0x190u) + 0x58u, 0u);
    g->edx = t1;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102eef7a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102eef7a(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
