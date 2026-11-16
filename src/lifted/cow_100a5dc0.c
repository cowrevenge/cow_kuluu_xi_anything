/* f_0x100a5dc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100a5dc0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x70u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x70u);
        g->edx = in_edx;
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x100024f0u), 1, eax);
        t1 = g->edx;
        edx = t1;
    }
    g->esp = sp0;
    t2 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    if (t2 == 0u)
    {
        eax = t2;
        goto L_100a5e08;
    }
    eax = t2;
    if (rd32(eax + 0x70u) == 0u)
    {
        edx = rd32(eax + 0x70u);
        goto L_100a5e01;
    }
    edx = rd32(eax + 0x70u);
    if (rd32(edx + 0x120u) >> 7u & 1u) goto L_100a5e08;
    if (rd32(edx + 0x12cu) >> 0xdu & 1u) goto L_100a5e08;
    edx = rd32(edx + 0x12cu) >> 0xdu;
L_100a5e01: ;
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x100a5ec0u), eax, eax, edx);
L_100a5e08: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a5dc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a5dc0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
