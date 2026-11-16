/* f_0x10134530 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10134530(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    if (rd8(sp0 + 8u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(sp0 + 8u);
        goto L_1013455a;
    }
    if (rd32(COW_IMG(0x105781b8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x105781b8u));
        goto L_1013455a;
    }
    eax = rd32(COW_IMG(0x105781b8u));
    t1 = (self & 0xffffff00u) | rd8(eax + 0x14fu);
    t2 = rd32(eax + 0x150u);
    wr32(sp0 + 8u, t1);
    wr32(sp0 + 4u, t2);
    g->esp = sp0;
    g->edx = t2;
    return cow_tailcall(g, COW_IMG(0x100ed530u), eax, t1, t2);
L_1013455a: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10134530(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10134530(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
