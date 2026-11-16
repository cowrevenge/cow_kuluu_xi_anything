/* f_0x1022f330 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1022f330(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->eax = arg1;
    t1 = cow_thiscall(g, COW_IMG(0x1022f140u), COW_IMG(0x10668380u) + arg1 * 0x94u, 1, arg2);
    if (rd8(t1) != 0x2bu)
    {
        eax = t1;
    }
    else
    {
        eax = t1;
        eax = eax + 1u;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022f330(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022f330(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
