/* f_0x10095630 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10095630(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10193890u), 1, 8u);
    t2 = g->edx;
    t3 = (self & 0xffffff00u) | (uint8_t)t1 == 0u;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x100fd6b0u), 1, t3);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10095630(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10095630(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
