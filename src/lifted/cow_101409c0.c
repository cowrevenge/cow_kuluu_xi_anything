/* f_0x101409c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101409c0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr16(self + 0x1cu, 0u);
    wr32(self + 0x20u, 1u);
    wr16(self + 0x1eu, 0x3cu);
    g->edx = in_edx;
    t1 = cow_call_regs(g, COW_IMG(0x10118f70u), self + 0x14u, rd32(self + 8u), g->edx, 0, 1, self + 0x14u);
    t2 = g->edx;
    g->edx = t2;
    return t1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101409c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101409c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
