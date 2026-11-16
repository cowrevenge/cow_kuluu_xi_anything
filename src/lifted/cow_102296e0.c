/* f_0x102296e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102296e0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(self + 0x89u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = (in_edx & 0xffffff00u) | rd8(rd32(self + 8u) + 0x30u);
        goto L_10229706;
    }
    eax = rd32(self + 8u);
    edx = (in_edx & 0xffffff00u) | rd8(rd32(self + 8u) + 0x30u);
    wr8(eax + 0x30u, (uint8_t)(edx | 4u));
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = (edx & 0xffffff00u) | (uint8_t)(edx | 4u);
        goto L_10229717;
    }
    eax = rd32(self + 8u);
    edx = (edx & 0xffffff00u) | (uint8_t)(edx | 4u);
    wr32(eax + 0x34u, rd32(eax + 0x34u) | 1u);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1022a2a0u), eax, self, edx);
L_10229706: ;
    wr8(eax + 0x30u, edx & 0xfbu);
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = (edx & 0xffffff00u) | (edx & 0xfbu);
    }
    else
    {
        eax = rd32(self + 8u);
        edx = (edx & 0xffffff00u) | (edx & 0xfbu);
        wr32(eax + 0x34u, rd32(eax + 0x34u) & 0xfffffffeu);
    }
L_10229717: ;
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1022a2a0u), eax, self, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102296e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102296e0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
