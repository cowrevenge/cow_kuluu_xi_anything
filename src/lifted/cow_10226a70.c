/* f_0x10226a70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10226a70(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if ((uint32_t)(int16_t)rd32(sp0 + 4u) == 5u) goto L_10226acb;
    eax = (uint32_t)(int16_t)rd32(sp0 + 4u) - 5u;
    edx = rd32(sp0 + 4u);
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_10226a95;
    }
    eax = eax - 1u;
    if (eax == 2u) goto L_10226ad8;
    t1 = rd32(sp0 + 8u);
    wr32(sp0 + 4u, edx);
    wr32(sp0 + 8u, t1);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10222150u), t1, self, edx);
    return;
L_10226a95: ;
    wr32(self + 0x64u, 0u);
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x102211b0u), rd32(COW_IMG(0x105781f8u)) + 0x20u, 1, 2u);
    t2 = rd32(COW_IMG(0x10667144u));
    wr32(sp0 + 8u, 0u);
    t3 = rd32(t2 + 8u);
    wr32(sp0 + 4u, t3);
    g->edx = t2;
    cow_tailcall(g, COW_IMG(0x1015db80u), t3, COW_IMG(0x10621838u), t2);
    return;
L_10226acb: ;
    t4 = rd32(self + 0x30u);
    wr32(self + 0x64u, 2u);
    wr32(self + 0x68u, t4);
L_10226ad8: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10226a70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10226a70(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
