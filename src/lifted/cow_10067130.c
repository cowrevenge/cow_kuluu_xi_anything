/* f_0x10067130 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10067130(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->eax = arg2;
    t1 = cow_cdecl(g, COW_IMG(0x10067160u), 2, arg1, arg2);
    wr32(t1, 0u);
    wr32(t1 + 4u, 0u);
    t2 = (rd32(t1) & 0xffff00ffu) | ((rd32(t1) >> 8u & 0xe2u) << 8u >> 8u | 2u) << 8u;
    wr32(t1, t2);
    return t1 + (t2 >> 8u & 0x1fu) * 4u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10067130(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10067130(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
