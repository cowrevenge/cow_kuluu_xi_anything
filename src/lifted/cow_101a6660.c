/* f_0x101a6660 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_101a6660(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->eax = rd32(arg3);
    g->edx = in_edx;
    t1 = rd32(arg3);
    t2 = cow_thiscall(g, rd32(t1 + 0x18u), arg3, 2, 0x11u, 0u);
    t3 = g->edx;
    g->edx = t3;
    return t2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a6660(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a6660(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
