/* f_0x10043df0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10043df0(Guest* g)
{
    uint32_t edx;
    uint32_t esi;
    const uint32_t self = g->ecx;

    wr32(self, COW_IMG(0x1032afd4u));
    edx = self + 4u;
    esi = 2u;
L_10043e03: ;
    wr32(edx, 0u);
    if (esi != 1u)
    {
        edx = edx + 0x20u;
        esi = esi - 1u;
        goto L_10043e03;
    }
    edx = edx + 0x20u;
    wr8(self + 0x44u, 0u);
    wr8(self + 0x45u, 0u);
    g->edx = edx;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10043df0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10043df0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
