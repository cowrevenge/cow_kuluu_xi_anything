/* f_0x1025fd70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_1025fd70(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 40u);

    COW_AT(1025fd70)
    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327858u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, arg4);
    wr32(sp0 - 0x1cu, arg3);
    wr32(sp0 - 0x20u, arg2);
    wr32(sp0 - 0x24u, arg1);
    wr32(sp0 - 0x10u, self);
    g->edx = arg2;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x1025e280u), self, 4, arg1, arg2, arg3, arg4);
    t2 = g->edx;
    wr32(self + 0xe0u, COW_IMG(0x1034073cu));
    wr32(sp0 - 4u, 0u);
    wr32(self + 0xecu, 0u);
    wr32(self + 0x120u, 0u);
    wr32(self + 0x124u, 0u);
    wr32(self, COW_IMG(0x10340678u));
    wr32(self + 0xcu, COW_IMG(0x10340638u));
    wr32(self + 0x10u, COW_IMG(0x10340624u));
    wr32(self + 0xe0u, COW_IMG(0x10340600u));
    wr32(self + 0xe4u, COW_IMG(0x103405ecu));
    cow_fastcall(g, COW_IMG(0x1025fe60u), self, t2, 0);
    t3 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t3);
    g->esi = in_esi;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025fd70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1025fd70(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
