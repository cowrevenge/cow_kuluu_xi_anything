/* f_0x101a1360 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_101a1360(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x101b9550u), rd32(self + 0x90u), in_edx, 1, 0xffffffffu);
    t1 = g->edx;
    t2 = rd32(self + 0x84u);
    t3 = cow_fastcall(g, COW_IMG(0x101b9530u), rd32(self + 0x90u), t1, 0);
    return (t3 & 0xffffff00u) | (int32_t)t2 > 0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a1360(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a1360(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
