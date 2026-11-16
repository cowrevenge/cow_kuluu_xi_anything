/* f_0x10117070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10117070(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd32(sp0 + 4u) == 0u) goto L_10117099;
    eax = rd32(sp0 + 4u);
    if (rd32(self) == 0u)
    {
        edx = rd32(self);
        goto L_101170b0;
    }
    edx = rd32(self);
    if (edx == 1u) goto L_1011709c;
    wr16(eax, 0u);
    wr16(eax + 2u, 0u);
    wr16(eax + 4u, 0u);
    wr16(eax + 6u, 0u);
L_10117099: ;
    return;
L_1011709c: ;
    t1 = (uint32_t)(int16_t)rd16(rd32(self + 4u) + 0x3au);
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10118980u), rd32(rd32(self + 4u) + 0x5cu), 2, eax, t1);
    return;
L_101170b0: ;
    t2 = rd32(self + 4u);
    wr32(sp0 + 4u, eax);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10119020u), eax, t2, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10117070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10117070(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
