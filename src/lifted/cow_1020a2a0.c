/* f_0x1020a2a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1020a2a0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr8(self + 0x50u, (uint8_t)arg1);
    if ((uint32_t)(int8_t)arg1 - 1u > 6u) goto L_1020a310;
    t1 = rd32(COW_IMG(0x1020a314u) + (uint32_t)(int8_t)arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1020a2bau: goto L_1020a2ba;
    case 0x1020a2c3u: goto L_1020a2c3;
    case 0x1020a2ccu: goto L_1020a2cc;
    case 0x1020a2d5u: goto L_1020a2d5;
    default: rt_fatal(g, COW_IMG(0x1020a2b3u), "switch");
    }
    return;
L_1020a2ba: ;
    wr32(self + 0x30u, COW_IMG(0x103855e8u));
L_1020a2dc: ;
    wr16(self + 0x16u, 5u);
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x101f6700u), (uint32_t)(int8_t)arg1 - 1u, self, in_edx, 0, 1, 0xfu);
    t2 = g->edx;
    wr16(self + 0x26u, 0x10u);
    wr8(self + 0x2cu, 0u);
    wr8(self + 0x2du, 4u);
    wr8(self + 0x51u, 1u);
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385618u), 1u, 0u);
L_1020a310: ;
    return;
L_1020a2c3: ;
    wr32(self + 0x30u, COW_IMG(0x10385600u));
    goto L_1020a2dc;
L_1020a2cc: ;
    wr32(self + 0x30u, COW_IMG(0x103855f4u));
    goto L_1020a2dc;
L_1020a2d5: ;
    wr32(self + 0x30u, COW_IMG(0x1038560cu));
    goto L_1020a2dc;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020a2a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1020a2a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
