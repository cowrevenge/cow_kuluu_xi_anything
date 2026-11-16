/* f_0x102f550d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102f550d(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(self + 8u, arg1);
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10311bfbu), 1, arg1);
    wr32(self + 0xcu, t1);
    return (-(t1 != 0u) & 0x7ff8fff2u) - 0x7ff8fff2u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f550d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f550d(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
