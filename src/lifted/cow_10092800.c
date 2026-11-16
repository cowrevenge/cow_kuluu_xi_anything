/* f_0x10092800 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10092800(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    if ((rd32(self + 0x134u) & 0x20000u) == 0u) goto L_10092856;
    if (rd32(self + 0xa8u) != 0u)
    {
        ecx = rd32(self + 0xa8u);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(ecx) + 0x18u), ecx, 1, 1u);
        wr32(self + 0xa8u, 0u);
    }
    wr32(rd32(self + 0xa0u) + 0x76cu, 0u);
    wr32(self + 0xa8u, 0u);
    t1 = rd32(self + 0x134u);
    wr16(self + 0x202u, 0u);
    wr32(self + 0x134u, t1 & 0xfffdffffu);
    return t1 & 0xfffdffffu;
L_10092856: ;
    wr16(self + 0x202u, 0u);
    return in_eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10092800(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10092800(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
