/* f_0x100821d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100821d0(Guest* g)
{
    double d1;
    uint32_t t2;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    d1 = (double)rdf32(COW_IMG(0x1035825cu));
    wrf32(arg2, (float)d1);
    wr32(arg2 + 4u, rd32(COW_IMG(0x10358260u)));
    t2 = rd32(COW_IMG(0x10358264u));
    wr32(arg2 + 8u, t2);
    wr32(arg2 + 0xcu, rd32(COW_IMG(0x10358268u)));
    g->edx = t2;
    return (arg2 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100821d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100821d0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
