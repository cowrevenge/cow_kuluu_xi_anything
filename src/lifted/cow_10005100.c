/* f_0x10005100 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10005100(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;

    t1 = rd32(COW_IMG(0x1034a11cu));
    t2 = rd32(COW_IMG(0x1034a120u));
    wr32(COW_IMG(0x10455b10u), rd32(COW_IMG(0x1034a118u)));
    t3 = rd32(COW_IMG(0x1034a124u));
    wr32(COW_IMG(0x10455b14u), t1);
    wr32(COW_IMG(0x10455b18u), t2);
    wr32(COW_IMG(0x10455b1cu), t3);
    g->edx = t2;
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10005100(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10005100(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
