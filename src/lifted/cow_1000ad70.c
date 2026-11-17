/* f_0x1000ad70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1000ad70(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, sp0 - 0x20u);
    t1 = rd32(self + 0x94u);
    wr32(sp0 - 0x30u, t1);
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, rd32(rd32(t1) + 0x20u), rd32(t1), 2, t1, sp0 - 0x20u);
    wr32(sp0 - 0x2cu, sp0 - 0x24u);
    t2 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x30u, t2);
    t3 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x34u, t3);
    wr32(sp0 - 0x38u, (uint16_t)arg2);
    wr32(sp0 - 0x3cu, (uint16_t)arg1);
    t4 = rd32(self + 0xcu);
    wr32(sp0 - 0x40u, t4);
    g->eax = rd32(rd32(self + 0xcu));
    t5 = rd32(rd32(self + 0xcu));
    t6 = cow_thiscall(g, rd32(t5 + 0x68u), (uint16_t)arg1, 6, t4, (uint16_t)arg1, (uint16_t)arg2, t3, t2, sp0 - 0x24u);
    return rd32(sp0 - 0x24u) & ((int32_t)t6 < 0) - 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000ad70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1000ad70(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
