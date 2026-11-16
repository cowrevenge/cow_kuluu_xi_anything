/* f_0x101fbd00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101fbd00(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x38u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x38u);
        g->esp = sp0;
        cow_call_regs(g, COW_IMG(0x101fbe40u), eax, self, in_edx, 0, 1, 0u);
        t1 = g->edx;
        edx = t1;
    }
    t2 = rd32(COW_IMG(0x10663888u));
    wr32(t2 + 0x94u, 0u);
    wr16(t2 + 0x7au, 0u);
    g->edx = edx;
    return t2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fbd00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fbd00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
