/* f_0x10074ed0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10074ed0(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(rd32(self + 0xd58u) + 0xcu);
    t2 = rd32(self + 0xd58u);
    wr32(self + 0xd58u, t1);
    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x100748f0u), t2, in_edx, 0);
    t3 = g->ecx;
    wr32(t3 + 0xcu, arg1);
    t4 = rd32(arg1 + 8u);
    t5 = rd32(arg1 + 8u);
    wr32(t3 + 8u, t4);
    if (t5 != 0u)
    {
        ecx = t3;
        t6 = rd32(arg1 + 8u);
        wr32(t6 + 0xcu, ecx);
        edx = t6;
    }
    else
    {
        ecx = t3;
        edx = t4;
        wr32(self + 0xd50u, ecx);
    }
    wr32(arg1 + 8u, ecx);
    wr32(ecx + 4u, arg2);
    t7 = rd32(self + 0xd44u) + 1u;
    wr32(self + 0xd44u, t7);
    g->edx = edx;
    return ecx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10074ed0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10074ed0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
