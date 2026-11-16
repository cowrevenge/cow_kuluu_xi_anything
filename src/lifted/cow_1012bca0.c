/* f_0x1012bca0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1012bca0(Guest* g)
{
    uint32_t eax;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(sp0 + 8u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(sp0 + 8u);
        goto L_1012bcbd;
    }
    eax = (in_eax & 0xffffff00u) | rd8(sp0 + 8u);
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, COW_IMG(0x1036f5f4u));
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x10080dc0u), eax, self, in_edx);
L_1012bcbd: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012bca0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012bca0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
