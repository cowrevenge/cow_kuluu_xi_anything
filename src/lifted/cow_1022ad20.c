/* f_0x1022ad20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1022ad20(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(self + 0x88u) != 1u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x88u);
        goto L_1022ad37;
    }
    t1 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t1);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x1022aca0u), t1, self, in_edx);
L_1022ad37: ;
    if ((uint8_t)eax != 2u) goto L_1022ad48;
    t2 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t2);
    g->esp = sp0;
    g->edx = t2;
    return cow_tailcall(g, COW_IMG(0x1022ace0u), eax, self, t2);
L_1022ad48: ;
    t3 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t3);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x1022ac60u), t3, self, in_edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022ad20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022ad20(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
