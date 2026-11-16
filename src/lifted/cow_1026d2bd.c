/* f_0x1026d2bd - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1026d2bd(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 + 0x10054u) == 0u)
    {
        t1 = rd32(arg1 + 0x10050u);
        eax = t1;
    }
    else
    {
        eax = 0u;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026d2bd(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1026d2bd(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
