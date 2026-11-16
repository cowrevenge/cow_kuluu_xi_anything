/* f_0x1019f6d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1019f6d0(Guest* g)
{
    uint32_t ecx;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(COW_IMG(0x10662790u)) & 1u) goto L_1019f6ee;
    ecx = (self & 0xffffff00u) | rd8(COW_IMG(0x10662790u));
    wr8(COW_IMG(0x10662790u), (uint8_t)(ecx | 1u));
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x101be440u), (in_eax & 0xffffff00u) | 1u, COW_IMG(0x1066278cu), in_edx);
L_1019f6ee: ;
    return (in_eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019f6d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019f6d0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
