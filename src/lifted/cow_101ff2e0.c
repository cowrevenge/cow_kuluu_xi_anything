/* f_0x101ff2e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101ff2e0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x1cu) == 0u) goto L_101ff2ff;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x101feec0u), in_eax, self, g->edx, 0, 1, 0u);
    t1 = g->edx;
    wr8(self + 0x53u, 0u);
    t2 = rd32(COW_IMG(0x1062193cu));
    wr8(t2 + 0x4cu, 0u);
    g->edx = t1;
    return t2;
L_101ff2ff: ;
    wr8(self + 0x53u, 0u);
    wr8(rd32(COW_IMG(0x1062193cu)) + 0x4cu, 0u);
    return in_eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ff2e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ff2e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
