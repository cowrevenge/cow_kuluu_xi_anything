/* f_0x10074db0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10074db0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);

    COW_AT(10074db0)
    t1 = rd32(rd32(self + 0xd58u) + 0xcu);
    t2 = rd32(self + 0xd58u);
    wr32(self + 0xd58u, t1);
    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x100748f0u), t2, in_edx, 0);
    t3 = g->ecx;
    t4 = rd32(self + 0xd50u);
    wr32(t3 + 0xcu, t4);
    wr32(self + 0xd50u, t3);
    wr32(t3 + 4u, arg1);
    t5 = rd32(self + 0xd44u) + 1u;
    wr32(self + 0xd44u, t5);
    g->esi = in_esi;
    g->edx = t4;
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10074db0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10074db0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
