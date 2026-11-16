/* f_0x100f36c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=11 */
uint32_t cow_fn_100f36c0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg10 = rd32(g->esp + 0x28u);
    const uint32_t arg11 = rd32(g->esp + 0x2cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd16(self + 0x1058u) == 0u) goto L_100f36d6;
    return 3u;
L_100f36d6: ;
    wr32(self, arg1);
    wr16(self + 0x1058u, (uint16_t)arg2);
    wr32(self + 0x1048u, arg11);
    wr32(self + 0x104cu, arg10);
    wr32(self + 0x1050u, 0u);
    wr32(self + 0x38u, rd32(arg3));
    t1 = rd32(arg3 + 4u);
    wr32(self + 0xb8u, arg5);
    wr32(self + 0x3cu, t1);
    wr32(self + 0x40u, arg4);
    if (arg8 == 0u) goto L_100f373d;
    if (arg9 == 0u) goto L_100f373d;
    eax = 1u;
L_100f373f: ;
    wr8(self + 0xc4u, (uint8_t)eax);
    wr8(self + 0x88u, 0u);
    g->esp = sp0 - 4u;
    t2 = cow_fastcall(g, COW_IMG(0x100f3050u), self, arg7, 5, arg6, arg7, arg8, arg9, 0x32u);
    t3 = g->edx;
    if (t2 != 0u)
    {
        edx = t3;
        goto L_100f3775;
    }
    eax = t2;
    wr16(self + 0x1058u, (uint16_t)eax);
    return 0x10u;
L_100f373d: ;
    eax = 0u;
    goto L_100f373f;
L_100f3775: ;
    g->esp = sp0 - 4u;
    t4 = cow_fastcall(g, COW_IMG(0x100f32b0u), self, edx, 1, COW_IMG(0x103620ecu));
    return t4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f36c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f36c0(g);
    g->esp = sp0;
    rt_return(g, r, 44u);
}
/* COW_ADAPTER END */
