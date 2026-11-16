/* f_0x100f3a60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=9 */
uint32_t cow_fn_100f3a60(Guest* g)
{
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd16(self + 0x1058u) == 0u) goto L_100f3a79;
    return 3u;
L_100f3a79: ;
    wr32(self, arg1);
    wr16(self + 0x1058u, (uint16_t)arg2);
    wr32(self + 0x1048u, arg9);
    wr32(self + 0x38u, arg3);
    wr32(self + 0x104cu, arg8);
    wr32(self + 0x1050u, 0u);
    wr32(self + 0x3cu, arg4);
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x100f3010u), 4, self + 0x44u, arg5, 0x10u, in_esi);
    wr8(self + 0x88u, 0u);
    wr32(self + 0xb8u, 1u);
    wr8(self + 0xc4u, 0u);
    g->esp = sp0 - 8u;
    t1 = cow_fastcall(g, COW_IMG(0x100f3050u), self, arg7, 5, arg6, arg7, 0u, 0u, 0x10u);
    t2 = g->edx;
    if (t1 != 0u)
    {
        edx = t2;
        goto L_100f3b06;
    }
    wr16(self + 0x1058u, 0u);
    return 0x10u;
L_100f3b06: ;
    g->esp = sp0 - 8u;
    t3 = cow_fastcall(g, COW_IMG(0x100f32b0u), self, edx, 1, COW_IMG(0x10362148u));
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f3a60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f3a60(g);
    g->esp = sp0;
    rt_return(g, r, 36u);
}
/* COW_ADAPTER END */
