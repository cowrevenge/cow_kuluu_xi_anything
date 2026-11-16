/* f_0x102dd5e4 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102dd5e4(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 4u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        ecx = rd32(self + 4u);
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(ecx)), ecx, 1, 1u);
        t1 = g->edx;
        edx = t1;
    }
    if (rd32(self) != 0u)
    {
        ecx = rd32(self);
        g->edx = edx;
        g->esp = sp0;
        cow_thiscall(g, rd32(rd32(ecx)), ecx, 1, 1u);
        t2 = g->edx;
        edx = t2;
    }
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102dd5e4(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102dd5e4(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
