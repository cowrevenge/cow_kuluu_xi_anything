/* f_0x102e2005 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102e2005(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t self = g->ecx;

    t1 = (self & 0xffff0000u) | (uint16_t)g->fcw | 0xc00u;
    t2 = g->fcw;
    g->fcw = (uint16_t)t1;
    t3 = (self & 0xffff0000u) | (uint16_t)t2;
    wr32(COW_IMG(0x109b1a4cu), t3);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e2005(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102e2005(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
