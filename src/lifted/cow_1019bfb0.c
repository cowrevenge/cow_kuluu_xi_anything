/* f_0x1019bfb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1019bfb0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd32(self + 0x28u) == 0u)
    {
        eax = rd32(self + 0x28u);
        goto L_1019bfd2;
    }
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x100dc080u), 0);
    if (t1 - rd32(self + 0x28u) >= 3u)
    {
        eax = t1 - rd32(self + 0x28u);
        goto L_1019bfcb;
    }
    eax = t1 - rd32(self + 0x28u);
    return (eax & 0xffffff00u) | 1u;
L_1019bfcb: ;
    wr32(self + 0x28u, 0u);
L_1019bfd2: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019bfb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019bfb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
