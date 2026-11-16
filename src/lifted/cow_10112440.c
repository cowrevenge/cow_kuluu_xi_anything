/* f_0x10112440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10112440(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    if (rd8(self + 5u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 5u);
        goto L_1011246a;
    }
    if (rd32(rd32(self + 0x10u) + 4u) == 0u)
    {
        eax = rd32(self + 0x10u);
        goto L_1011246a;
    }
    eax = rd32(self + 0x10u);
    if (rd32(eax + 8u) == 0u) goto L_1011246a;
    edx = rd32(eax + 8u);
    if (rd32(eax + 8u) == 0u)
    {
        eax = rd32(eax + 8u);
    }
    else
    {
        eax = rd32(eax + 8u);
        wr32(self + 0x10u, eax);
    }
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x10112380u), eax, self, g->edx, 0, 1, 0u);
    return t1;
L_1011246a: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10112440(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10112440(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
