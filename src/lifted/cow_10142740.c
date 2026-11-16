/* f_0x10142740 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10142740(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x10578294u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10578294u));
        goto L_10142765;
    }
    eax = rd32(COW_IMG(0x10578294u));
    if (rd32(eax + 8u) == 0u) goto L_10142765;
    ecx = rd32(eax + 8u);
    wr32(sp0 + 8u, 0xdu);
    wr32(sp0 + 4u, 0x10u);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x10118b60u), eax, ecx, in_edx);
L_10142765: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10142740(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10142740(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
