/* f_0x101d3e70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101d3e70(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    esi = 0u;
    edi = self + 0x4cu;
L_101d3e77: ;
    eax = 0u;
    edx = edi;
L_101d3e7b: ;
    if (rd32(edx) != 0u) goto L_101d3e9b;
    if ((int32_t)(eax + 1u) < 81)
    {
        eax = eax + 1u;
        edx = edx + 4u;
        goto L_101d3e7b;
    }
    eax = eax + 1u;
    if ((int32_t)(esi + 1u) < 2)
    {
        esi = esi + 1u;
        edi = edi + 0x144u;
        goto L_101d3e77;
    }
    return eax & 0xffff0000u;
L_101d3e9b: ;
    g->esp = sp0;
    g->edx = eax + esi * 0x51u;
    return cow_tailcall(g, COW_IMG(0x101cd990u), eax + esi * 0x48u, rd32(eax * 4u + esi * 0x144u + self + 0x4cu), eax + esi * 0x51u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d3e70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d3e70(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
