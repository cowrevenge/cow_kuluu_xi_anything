/* f_0x100369a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100369a0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x100369d0u), self, 0);
    if (t1 == 0u) goto L_100369ba;
    eax = t1;
    t2 = rd32(self + 0x194u);
    wr32(eax + 0x194u, t2);
    return;
L_100369ba: ;
    t3 = rd32(self + 0x194u);
    wr32(COW_IMG(0x104638f8u), t3);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100369a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100369a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
