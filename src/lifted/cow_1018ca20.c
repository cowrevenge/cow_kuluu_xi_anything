/* f_0x1018ca20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1018ca20(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd32(self + 0xcu) == 0u)
    {
        edx = rd32(self + 0xcu);
        goto L_1018ca3d;
    }
    edx = rd32(self + 0xcu);
    if ((uint32_t)(int16_t)rd16(edx + 0x1cu) == rd8(self + 3u))
    {
        edx = (uint32_t)(int16_t)rd16(edx + 0x1cu);
        goto L_1018ca3b;
    }
    eax = rd8(self + 3u);
    edx = (uint32_t)(int16_t)rd16(edx + 0x1cu);
    g->edx = edx;
    g->esp = sp0;
    t1 = cow_thiscall(g, COW_IMG(0x1018c980u), self, 1, eax);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_1018ca3b: ;
L_1018ca3d: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018ca20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018ca20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
