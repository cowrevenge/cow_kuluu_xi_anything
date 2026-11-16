/* f_0x10230150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10230150(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if ((uint32_t)(int16_t)rd32(sp0 + 4u) == 5u) goto L_10230189;
    eax = (uint32_t)(int16_t)rd32(sp0 + 4u) - 5u;
    edx = rd32(sp0 + 4u);
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_10230170;
    }
    t1 = rd32(sp0 + 8u);
    wr32(sp0 + 4u, edx);
    wr32(sp0 + 8u, t1);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10222150u), t1, self, edx);
    return;
L_10230170: ;
    t2 = rd32(self + 8u);
    wr32(sp0 + 8u, 1u);
    wr32(sp0 + 4u, t2);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), edx);
    return;
L_10230189: ;
    if ((int32_t)((uint32_t)(int16_t)rd16(sp0 + 8u) & 0x80000001u) >= 0)
    {
        edx = (uint32_t)(int16_t)rd16(sp0 + 8u) & 0x80000001u;
    }
    else
    {
        edx = (uint32_t)(int16_t)rd16(sp0 + 8u) & 0x80000001u;
        edx = (edx - 1u | 0xfffffffeu) + 1u;
    }
    wr8(self + 0x6eu, (uint8_t)edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10230150(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10230150(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
