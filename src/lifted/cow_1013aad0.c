/* f_0x1013aad0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1013aad0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1013cba0u), arg1, self, in_edx, 0, 1, arg1);
    t1 = g->edx;
    if (rd32(COW_IMG(0x10578208u)) == 0u)
    {
        edx = t1;
        goto L_1013aaff;
    }
    eax = rd32(COW_IMG(0x10578208u));
    edx = t1;
    if (rd32(eax + 8u) == 0u) goto L_1013aaff;
    t2 = rd32(rd32(self + 8u) + 0x34u) | 0x800000u;
    wr32(rd32(self + 8u) + 0x34u, t2);
    g->edx = edx;
    return t2;
L_1013aaff: ;
    t3 = rd32(rd32(self + 8u) + 0x34u) & 0xff7fffffu;
    wr32(rd32(self + 8u) + 0x34u, t3);
    g->edx = edx;
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013aad0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013aad0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
