/* f_0x102738f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102738f0(Guest* g)
{
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(arg1, 1u);
    wr32(arg1 + 4u, 0xffffffffu);
    wr32(arg1 + 8u, 0u);
    wr32(arg1 + 0xcu, 0u);
    wr32(arg1 + 0x10u, 0u);
    wr32(arg1 + 0x14u, 0xffffffffu);
    wr32(arg1 + 0x18u, 0u);
    wr32(arg1 + 0x1cu, 0u);
    wr32(arg1 + 0x20u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102738f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102738f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
