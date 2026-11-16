/* f_0x1010c520 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1010c520(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self) == 0u)
    {
        eax = rd32(self);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_cdecl(g, COW_IMG(0x10311f70u), 1, eax);
        t2 = g->edx;
        wr32(self, 0u);
        eax = t1;
        edx = t2;
    }
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x101090a0u), eax, self + 0x1010u, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010c520(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1010c520(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
