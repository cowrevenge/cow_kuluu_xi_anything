/* f_0x1031e7d1 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1031e7d1(Guest* g)
{
    double d2;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const double xin0 = ST(0);
    const double xin1 = ST(1);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 4u, in_eax);
    wrf80(sp0 - 0x24u, xin0);
    wrf80(sp0 - 0x30u, xin1);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x1031dfe0u), 6, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t1 = g->edx;
    d2 = cow_take_float(g);
    g->edx = t1;
    g->top = (g->top + 2u) & 7u;
    fpush(g, d2);
    return in_eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031e7d1(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031e7d1(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
