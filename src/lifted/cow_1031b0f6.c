/* f_0x1031b0f6 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1031b0f6(Guest* g)
{
    double x0;
    const uint32_t in_eax = g->eax;
    const uint32_t in_ebp = g->ebp;

    if ((int8_t)rd8(in_ebp - 0x90u) > 0)
    {
        x0 = rdf80(COW_IMG(0x103d0980u));
    }
    else
    {
        x0 = rdf80(COW_IMG(0x103d0980u));
        wr8(in_ebp - 0x90u, 1u);
    }
    g->top = (g->top + 2u) & 7u;
    fpush(g, x0);
    return in_eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031b0f6(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031b0f6(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
