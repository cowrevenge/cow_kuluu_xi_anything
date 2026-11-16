/* f_0x1008a9e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1008a9e0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = (arg2 & 1u) << 2u ^ ((rd32(COW_IMG(0x1047d6a8u) + arg1 * 4u) & 0xffffff00u) | (rd32(COW_IMG(0x1047d6a8u) + arg1 * 4u) & 0xfbu));
    t2 = rd32(COW_IMG(0x1047d6a8u) + arg1 * 4u);
    wr32(COW_IMG(0x1047d6a8u) + arg1 * 4u, t1);
    return (t2 & 0xffffff00u) | (t2 & 0xfbu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008a9e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1008a9e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
