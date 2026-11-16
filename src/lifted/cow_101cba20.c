/* f_0x101cba20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101cba20(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd16(rd32(arg2 + 0x14b4u));
    t2 = (arg1 & 0xffff0000u) | rd16(arg1);
    cow_cdecl(g, COW_IMG(0x101cb990u), 4, t2, t1, arg1 + 0x10u, arg3);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cba20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101cba20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
