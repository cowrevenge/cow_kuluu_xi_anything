/* f_0x100dc1b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100dc1b0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = arg1 * 0x3e8u - rd32(rd32(COW_IMG(0x10492e10u)) + 0xcu) * 0x3e8u;
    wr32(rd32(COW_IMG(0x10492e10u)) + 0x14u, t1);
    t2 = arg2 + rd32(rd32(COW_IMG(0x10492e10u)) + 0x14u) - rd32(rd32(COW_IMG(0x10492e10u)) + 0x10u);
    t3 = rd32(COW_IMG(0x10492e10u));
    wr32(t3 + 0x14u, t2);
    return (t3 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100dc1b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100dc1b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
