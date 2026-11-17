/* f_0x10316337 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10316337(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->df = 0;
    t1 = rd32(sp0 + 0x10u);
    g->eax = 0u;
    g->esp = sp0 - 0x14u;
    t2 = cow_call_regs(g, COW_IMG(0x10320fb3u), g->eax, self, in_edx, 1, 8, arg1, arg2, arg3, t1, in_eax, 0u, 0u, 0u);
    wr32(sp0 + 0x10u, t2);
    return rd32(sp0 + 0x10u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10316337(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10316337(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
