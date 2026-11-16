/* f_0x1031b7ed - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1031b7ed(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = cow_thiscall(g, rd32(COW_IMG(0x1032928cu)), self, 3, rd32(COW_IMG(0x109f8404u)), 0u, 0x140u);
    wr32(COW_IMG(0x109f83fcu), t1);
    if (t1 != 0u)
    {
        eax = t1;
        goto L_1031b80a;
    }
    eax = t1;
    return eax;
L_1031b80a: ;
    wr32(COW_IMG(0x109f83f4u), 0u);
    wr32(COW_IMG(0x109f83f8u), 0u);
    wr32(COW_IMG(0x109f83ecu), eax);
    wr32(COW_IMG(0x109f8400u), arg1);
    wr32(COW_IMG(0x109f83e4u), 0x10u);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031b7ed(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031b7ed(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
