/* f_0x1010f240 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1010f240(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    const uint32_t self = g->ecx;

    t1 = cow_thiscall(g, COW_IMG(0x1010d220u), self, 0);
    if (t1 == 0u) goto L_1010f260;
    eax = t1;
    if (rd32(eax + 0x64u) == 0u) goto L_1010f260;
    ecx = rd32(eax + 0x64u);
    if (rd32(eax + 0x68u) == 0u) goto L_1010f260;
    eax = rd32(eax + 0x68u);
    if (rd32(eax + 8u) != 1u) goto L_1010f260;
    return ecx;
L_1010f260: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010f240(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010f240(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
