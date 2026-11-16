/* f_0x10143470 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10143470(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x2bfu);
    t2 = g->edx;
    t3 = rd32(COW_IMG(0x105781f8u));
    wr32(sp0 + 8u, 1u);
    wr32(sp0 + 4u, t1);
    g->edx = t2;
    return cow_tailcall(g, COW_IMG(0x1013a320u), t1, t3, t2);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10143470(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10143470(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
