/* f_0x1013a9d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1013a9d0(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0x18u, in_esi);
    if (rd32(COW_IMG(0x10578204u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578204u));
        if (rd32(ecx + 8u) != 0u)
        {
            t1 = rd32(self + 8u);
            wr16(sp0 - 0xcu, 0u);
            wr16(sp0 - 0xau, 0u);
            wr16(sp0 - 8u, 0u);
            wr16(sp0 - 6u, 0u);
            wr16(sp0 - 0x14u, 0u);
            wr16(sp0 - 0x12u, 0u);
            wr16(sp0 - 0x10u, 0u);
            wr16(sp0 - 0xeu, 0u);
            wr32(sp0 - 0x1cu, sp0 - 0xcu);
            g->esp = sp0 - 0x18u;
            t2 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0xcu, t1, g->edx, 0, 1, sp0 - 0xcu);
            wr32(sp0 - 0x1cu, sp0 - 0x14u);
            cow_call_regs(g, COW_IMG(0x10118f70u), t2, rd32(rd32(COW_IMG(0x10578204u)) + 8u), g->edx, 0, 1, sp0 - 0x14u);
            t3 = (uint32_t)(int16_t)(rd32(sp0 - 0xau) + rd32(sp0 - 0x12u) - rd32(sp0 - 6u));
            wr32(sp0 - 0x1cu, t3);
            t4 = (uint32_t)(int16_t)rd16(sp0 - 0x14u);
            wr32(sp0 - 0x20u, t4);
            cow_call_regs(g, COW_IMG(0x10119110u), t3, rd32(self + 8u), g->edx, 0, 2, t4, t3);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013a9d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1013a9d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
