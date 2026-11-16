/* f_0x100f33d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100f33d0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd16(self + 0x1058u) == 0u) goto L_100f33e3;
    return 3u;
L_100f33e3: ;
    wr32(self, arg1);
    wr16(self + 0x1058u, (uint16_t)arg2);
    wr32(self + 0x104cu, 0u);
    wr32(self + 0x1050u, 0u);
    wr32(self + 0x1048u, 0u);
    wr8(self + 0x88u, 0u);
    if ((uint16_t)arg3 != 0u) goto L_100f3421;
    g->esp = sp0;
    t1 = cow_fastcall(g, COW_IMG(0x100f32b0u), self, (arg1 & 0xffff0000u) | (uint16_t)arg2, 1, COW_IMG(0x10362308u));
    return t1;
L_100f3421: ;
    g->esp = sp0;
    t2 = cow_fastcall(g, COW_IMG(0x100f32b0u), self, (arg1 & 0xffff0000u) | (uint16_t)arg2, 1, COW_IMG(0x10362314u));
    return t2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f33d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f33d0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
