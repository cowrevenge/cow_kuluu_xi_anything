/* f_0x10057d30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10057d30(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd32(rd32(sp0 + 4u)) == 1u)
    {
        eax = rd32(rd32(sp0 + 4u)) - 1u;
        goto L_10057d3e;
    }
    eax = rd32(rd32(sp0 + 4u)) - 1u;
    if (eax != 3u)
    {
        eax = eax - 3u;
        goto L_10057d4f;
    }
    eax = eax - 3u;
L_10057d3e: ;
    if (self == 0u) goto L_10057d4f;
    t1 = rd32(self);
    wr32(sp0 + 4u, 1u);
    g->esp = sp0;
    g->edx = t1;
    return cow_tailcall(g, rd32(t1 + 0x18u), eax, self, t1);
L_10057d4f: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10057d30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10057d30(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
