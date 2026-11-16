/* f_0x103281df - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_103281df(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebp = g->ebp;

    t1 = rd32(in_ebp - 0x30u);
    g->edx = in_edx;
    t2 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, t1);
    t3 = g->edx;
    g->edx = t3;
    return t2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103281df(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103281df(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
