/* f_0x1026be32 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1026be32(Guest* g)
{
    uint32_t loc_8;
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(arg1 + 0x18u);
    wr32(arg1 + 0x18u, arg2);
    wr32(arg2 + 0x14u, arg1);
    wr32(arg2 + 0x18u, t1);
    if (t1 != 0u)
    {
        loc_8 = t1;
        wr32(loc_8 + 0x14u, arg2);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026be32(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1026be32(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
