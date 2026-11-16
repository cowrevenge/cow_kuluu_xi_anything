/* f_0x100a5680 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100a5680(Guest* g)
{
    uint32_t ecx;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(COW_IMG(0x10487f18u)) & 1u) goto L_100a569e;
    ecx = (self & 0xffffff00u) | rd8(COW_IMG(0x10487f18u));
    wr8(COW_IMG(0x10487f18u), (uint8_t)(ecx | 1u));
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x100814e0u), (in_eax & 0xffffff00u) | 1u, COW_IMG(0x10487f58u), in_edx);
L_100a569e: ;
    return (in_eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a5680(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a5680(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
