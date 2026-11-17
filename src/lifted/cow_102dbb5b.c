/* f_0x102dbb5b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102dbb5b(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 216u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0xd0u, sp0 - 0xccu);
    wr32(sp0 - 0xd4u, arg1);
    g->eax = arg1;
    g->edx = sp0 - 0xccu;
    g->esp = sp0 - 0xccu;
    t1 = cow_thiscall_cdecl(g, rd32(rd32(arg1) + 0xcu), rd32(arg1), 2, arg1, sp0 - 0xccu);
    t2 = g->edx;
    g->edx = t2;
    return t1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102dbb5b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102dbb5b(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
