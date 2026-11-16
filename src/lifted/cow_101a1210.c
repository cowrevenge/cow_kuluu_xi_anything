/* f_0x101a1210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101a1210(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x101b9550u), rd32(self + 0x1cu), in_edx, 1, 0xffffffffu);
    t1 = g->edx;
    if ((int32_t)rd32(self + 0xcu) <= 0)
    {
        edx = t1;
        goto L_101a123e;
    }
    eax = rd32(self + 0xcu);
    edx = t1;
    if (rd8(self + 0x18u) == 0u) goto L_101a123e;
    t2 = rd32(self + 0x1cu);
    wr8(self + 0x18u, 0u);
    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x101b9530u), t2, edx, 0);
    return 1u;
L_101a123e: ;
    g->esp = sp0 - 4u;
    t3 = cow_fastcall(g, COW_IMG(0x101b9530u), rd32(self + 0x1cu), edx, 0);
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a1210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a1210(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
