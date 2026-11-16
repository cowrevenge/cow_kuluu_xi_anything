/* f_0x101a2920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101a2920(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x1dc0u) != arg1) goto L_101a2937;
    ecx = rd32(self + 0x1dc0u);
    return ecx;
L_101a2937: ;
    if ((int32_t)arg1 < 40) goto L_101a2941;
    eax = arg1 - 0x28u;
L_101a2948: ;
    if ((int32_t)eax < 0) goto L_101a2951;
L_101a294c: ;
    if ((int32_t)eax < 40) goto L_101a2953;
L_101a2951: ;
    eax = 0u;
L_101a2953: ;
    wr32(self + 0x1dc0u, eax);
    t1 = rd32(self + 0x1db8u);
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101a2890u), self, 1, t1);
    return rd32(self + 0x1dc0u);
L_101a2941: ;
    if ((int32_t)arg1 >= 0)
    {
        eax = arg1;
        goto L_101a294c;
    }
    eax = arg1 + 0x28u;
    goto L_101a2948;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a2920(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a2920(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
