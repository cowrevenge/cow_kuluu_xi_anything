/* f_0x101d97e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101d97e0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 40u);

    t1 = rd32(COW_IMG(0x10578204u));
    wr16(sp0 - 0x18u, 0u);
    wr16(sp0 - 0x16u, 0u);
    wr16(sp0 - 0x14u, 0u);
    wr16(sp0 - 0x12u, 0u);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, sp0 - 8u);
    g->esp = sp0 - 0x1cu;
    t2 = cow_call_regs(g, COW_IMG(0x1013e560u), sp0 - 8u, t1, g->edx, 0, 1, sp0 - 8u);
    wr32(sp0 - 0x10u, rd32(t2));
    wr32(sp0 - 0x20u, sp0 - 0x18u);
    t3 = rd32(t2 + 4u);
    wr32(sp0 - 0xcu, t3);
    t4 = rd32(t2);
    cow_thiscall(g, COW_IMG(0x1011a710u), arg1, 1, sp0 - 0x18u);
    t5 = (uint32_t)(int16_t)rd16(sp0 - 0xau) + (uint32_t)(int16_t)rd16(sp0 - 0x16u) - (uint32_t)(int16_t)rd16(sp0 - 0xeu);
    wr32(sp0 - 0x20u, t5);
    t6 = (uint32_t)(int16_t)rd16(sp0 - 0x18u);
    wr32(sp0 - 0x24u, t6);
    g->edx = (uint32_t)(int16_t)rd16(sp0 - 0x16u);
    t7 = rd16(sp0 - 0x16u);
    t8 = cow_call_regs(g, COW_IMG(0x10119110u), t5, arg1, g->edx, 0, 2, t6, t5);
    t9 = g->edx;
    g->edx = t9;
    return t8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d97e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d97e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
