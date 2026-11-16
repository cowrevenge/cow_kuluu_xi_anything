/* f_0x10009780 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10009780(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x10456bf8u)) == 0u) goto L_100097b3;
    t1 = rd32(sp0 + 4u);
    t2 = rd32(self + 0xcu);
    g->eax = t2;
    g->edx = (uint8_t)t1;
    t3 = rd32(rd32(self + 0xcu));
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, rd32(t3 + 0x30u), t3, 2, t2, (uint8_t)t1);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t4;
        edx = t6;
        goto L_100097e5;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    wr32(sp0 + 4u, 0u);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, rd32(COW_IMG(0x10329380u)), eax, ecx, edx);
L_100097b3: ;
    if (rd32(COW_IMG(0x10456a7cu)) != 3u)
    {
        eax = (rd32(COW_IMG(0x10456a7cu)) & 0xffffff00u) | rd8(sp0 + 4u);
        goto L_100097d3;
    }
    eax = (rd32(COW_IMG(0x10456a7cu)) & 0xffffff00u) | rd8(sp0 + 4u);
    if ((uint8_t)eax != 0u)
    {
        edx = in_edx;
        goto L_100097e5;
    }
    wr32(sp0 + 4u, 0u);
    g->esp = sp0;
    return cow_tailcall(g, rd32(COW_IMG(0x10329380u)), eax, self, in_edx);
L_100097d3: ;
    if ((uint8_t)eax == 0u)
    {
        edx = in_edx;
        goto L_100097e5;
    }
    wr32(sp0 + 4u, 0u);
    g->esp = sp0;
    return cow_tailcall(g, rd32(COW_IMG(0x10329380u)), eax, self, in_edx);
L_100097e5: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10009780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10009780(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
