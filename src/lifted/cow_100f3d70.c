/* f_0x100f3d70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_100f3d70(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd16(self + 0x1058u) == 0u) goto L_100f3d82;
    return 3u;
L_100f3d82: ;
    wr32(self, arg1);
    wr32(self + 0x104cu, arg4);
    wr32(self + 0xd4u, 0xfffffffeu);
    wr32(self + 0xd8u, 0xfffffffeu);
    wr16(self + 0x1058u, (uint16_t)arg2);
    wr32(self + 0x1050u, 0u);
    wr32(self + 0x1054u, 0u);
    wr32(self + 0x1048u, arg5);
    wr32(self + 0xdcu, 1u);
    if ((int32_t)arg3 >= 0) goto L_100f3df5;
    wr32(self + 0xe0u, 0xffffffffu);
    g->eax = 0xffffffffu;
    g->esp = sp0;
    t1 = cow_fastcall(g, COW_IMG(0x100f32b0u), self, arg5, 1, COW_IMG(0x103622b8u));
    return t1;
L_100f3df5: ;
    wr32(self + 0xe0u, (int32_t)arg3 > 0);
    g->eax = (int32_t)arg3 > 0;
    g->esp = sp0;
    t2 = cow_fastcall(g, COW_IMG(0x100f32b0u), self, (int32_t)arg3 > 0, 1, COW_IMG(0x103622b8u));
    return t2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f3d70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f3d70(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
