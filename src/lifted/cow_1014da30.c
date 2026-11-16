/* f_0x1014da30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1014da30(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    t1 = rd32(self + 8u);
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x10118f70u), in_eax, t1, g->edx, 0, 1, self + 0x54u);
    t3 = g->ecx;
    t4 = rd16(self + 0x54u);
    t5 = rd16(self + 0x56u);
    wr16(self + 0x1cu, (uint16_t)(t4 + 0x14u));
    wr16(self + 0x1eu, (uint16_t)(t5 + 0x1eu));
    g->ecx = (t3 & 0xffff0000u) | (uint16_t)(t5 + 0x1eu);
    t6 = cow_call_regs(g, COW_IMG(0x10312090u), (t2 & 0xffff0000u) | (uint16_t)(t4 + 0x14u), g->ecx, g->edx, 1, 3, self + 0x44u, COW_IMG(0x103d3c84u), 0xfu);
    t7 = g->ecx;
    t8 = rd16(self + 0x54u);
    t9 = rd16(self + 0x56u);
    wr16(self + 0x14u, (uint16_t)(t8 + 0x12u));
    wr16(self + 0x16u, (uint16_t)(t9 + 8u));
    g->edx = self + 0x24u;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x10312090u), (t6 & 0xffff0000u) | (uint16_t)(t8 + 0x12u), g->ecx, g->edx, 1, 3, self + 0x24u, COW_IMG(0x103d3c84u), 0x1fu);
    t10 = g->edx;
    t11 = rd32(self + 8u);
    wr16(self + 0x5cu, 5u);
    wr32(self + 0x60u, 0u);
    wr8(t11 + 0x63u, 0u);
    g->edx = t10;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014da30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014da30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
