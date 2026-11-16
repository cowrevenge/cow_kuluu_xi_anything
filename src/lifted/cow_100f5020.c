/* f_0x100f5020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100f5020(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 == 0u)
    {
        t1 = rd32(arg1 + 0xa0u);
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10310438u), 2, t1, arg1 + 0xe48u);
    }
    g->edx = arg1 + 8u;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x100f3f10u), arg1, 3, arg2, 0u, arg1 + 8u);
    t3 = g->edx;
    g->edx = t3;
    return t2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f5020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f5020(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
