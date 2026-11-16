/* f_0x100f2370 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=10 */
uint32_t cow_fn_100f2370(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg10 = rd32(g->esp + 0x28u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(self + 0x20u) != 0u)
    {
        ecx = rd32(self + 0x20u);
        goto L_100f2381;
    }
    return 0x10u;
L_100f2381: ;
    wr16(self + 8u, (uint16_t)(rd16(self + 8u) + 1u));
    if (rd16(self + 8u) == 0u)
    {
        wr16(self + 8u, 1u);
    }
    t1 = (arg1 & 0xffff0000u) | rd16(self + 8u);
    g->esp = sp0;
    t2 = cow_thiscall(g, COW_IMG(0x100f3790u), ecx, 12, self, t1, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    return t2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f2370(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f2370(g);
    g->esp = sp0;
    rt_return(g, r, 40u);
}
/* COW_ADAPTER END */
