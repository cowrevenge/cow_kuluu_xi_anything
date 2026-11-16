/* f_0x10072990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10072990(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd16(self + 0x1au);
    wr32(self + 0x14u, 0u);
    t2 = rd8(COW_IMG(0x1047d12cu));
    wr16(self + 0x1au, (t2 & 1u) | (t1 & 0xfffeu));
    wr8(COW_IMG(0x1047d12cu), 0u);
    wr32(self + 0x28u, 0u);
    g->edx = (in_edx & 0xffff0000u) | (t2 & 1u) | (t1 & 0xfffeu);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10072990(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10072990(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
