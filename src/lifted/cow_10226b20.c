/* f_0x10226b20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10226b20(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd32(self + 0x64u) == 0u) goto L_10226b58;
    eax = rd32(self + 0x64u);
    if (eax == 1u) goto L_10226b43;
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_10226b6d;
    }
    t1 = rd32(sp0 + 8u);
    t2 = rd32(sp0 + 4u);
    wr32(sp0 + 8u, t1);
    wr32(sp0 + 4u, t2);
    g->esp = sp0;
    g->edx = t2;
    return cow_tailcall(g, COW_IMG(0x10226ae0u), t1, self, t2);
L_10226b43: ;
    t3 = rd32(sp0 + 8u);
    t4 = rd32(sp0 + 4u);
    wr32(sp0 + 8u, t3);
    wr32(sp0 + 4u, t4);
    g->esp = sp0;
    g->edx = t4;
    return cow_tailcall(g, COW_IMG(0x10226a70u), t3, self, t4);
L_10226b58: ;
    t5 = rd32(sp0 + 8u);
    t6 = rd32(sp0 + 4u);
    wr32(sp0 + 8u, t5);
    wr32(sp0 + 4u, t6);
    g->esp = sp0;
    g->edx = t6;
    return cow_tailcall(g, COW_IMG(0x102269a0u), t5, self, t6);
L_10226b6d: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10226b20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10226b20(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
