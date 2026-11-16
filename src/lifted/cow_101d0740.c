/* f_0x101d0740 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_101d0740(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 8u) != 0u)
    {
        ecx = rd32(self + 8u);
        goto L_101d0751;
    }
    return 1u;
L_101d0751: ;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x101d0a60u), in_eax, ecx, in_edx, 1, 0);
    t2 = g->edx;
    cow_thiscall(g, COW_IMG(0x101d09e0u), rd32(self + 8u), 2, COW_IMG(0x1037e32au), 2u);
    t3 = (int32_t)rd32(rd32(self + 8u) + 0xcu) >= (int32_t)rd32(rd32(self + 8u) + 0x10u);
    g->edx = rd32(rd32(self + 8u) + 0x10u);
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d0740(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d0740(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
