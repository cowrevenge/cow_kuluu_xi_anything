/* f_0x10227ab0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10227ab0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if ((uint32_t)(int16_t)rd32(sp0 + 4u) == 5u)
    {
        edx = rd32(sp0 + 4u);
        goto L_10227ad0;
    }
    eax = (uint32_t)(int16_t)rd32(sp0 + 4u) - 5u;
    edx = rd32(sp0 + 4u);
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_10227ae1;
    }
    t1 = rd32(sp0 + 8u);
    wr32(sp0 + 4u, edx);
    wr32(sp0 + 8u, t1);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x10222150u), t1, self, edx);
L_10227ad0: ;
    if (rd32(self + 0x40u) == 0u)
    {
        eax = rd32(self + 0x40u);
    }
    else
    {
        eax = rd32(self + 0x40u);
        if ((int32_t)rd32(self + 0x30u) < (int32_t)eax)
        {
            g->eax = eax;
            g->esp = sp0;
            t2 = cow_fastcall(g, COW_IMG(0x10227eb0u), self, edx, 0);
            t3 = g->edx;
            eax = t2;
            edx = t3;
        }
    }
L_10227ae1: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10227ab0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10227ab0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
