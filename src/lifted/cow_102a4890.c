/* f_0x102a4890 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102a4890(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = cow_stdcall(g, COW_IMG(0x102a3dc0u), 0);
    wr32(t1 + 0x1cu, arg1);
    wr32(t1 + 0x24u, arg2);
    wr8(t1 + 0x28u, 0u);
    wr32(t1 + 0x2cu, rd32(COW_IMG(0x109a2858u)));
    t2 = rd32(rd32(rd32(COW_IMG(0x109a2858u)) + 0x3cu) + 0x20u);
    wr32(t1 + 0x20u, t2);
    g->edx = t2;
    return t1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a4890(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a4890(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
