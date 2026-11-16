/* f_0x10126580 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10126580(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd32(sp0 + 4u) == 0u) goto L_101265c1;
    eax = rd32(sp0 + 4u);
    if (rd32(self) != eax)
    {
        edx = rd32(eax);
        esi = rd32(eax + 4u);
    }
    else
    {
        edx = rd32(eax);
        esi = rd32(eax + 4u);
        wr32(self, edx);
    }
    if (rd32(self + 4u) == eax)
    {
        wr32(self + 4u, esi);
    }
    wr32(eax + 0x10u, 0u);
    if (edx != 0u)
    {
        wr32(edx + 4u, esi);
    }
    if (esi != 0u)
    {
        wr32(esi, edx);
    }
    t1 = rd32(self + 0x10u);
    wr32(sp0 + 4u, eax);
    wr32(self + 0x10u, t1 - 1u);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10126410u), eax, self, edx);
    return;
L_101265c1: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10126580(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10126580(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
