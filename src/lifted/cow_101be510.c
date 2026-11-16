/* f_0x101be510 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101be510(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x28u, sp0 - 0x24u);
    wr32(sp0 - 0x2cu, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t1 = cow_cdecl(g, COW_IMG(0x103124c7u), 3, arg1, sp0 - 0x24u, rd32(sp0 - 0x24u));
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        goto L_101be532;
    }
    eax = t1;
    edx = t2;
    g->edx = edx;
    return 0xffffffffu;
L_101be532: ;
    g->edx = edx;
    return rd32(sp0 - 0x10u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101be510(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101be510(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
