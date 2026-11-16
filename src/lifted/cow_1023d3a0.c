/* f_0x1023d3a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1023d3a0(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 76u);

    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0x2cu, 0xbdu);
    wr32(sp0 - 0x30u, 8u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0xbdu);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x34u, 0xbeu);
    wr32(sp0 - 0x38u, 8u);
    wr32(sp0 - 0x14u, t1);
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x30u;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0xbeu);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x3cu, 0xbfu);
    wr32(sp0 - 0x40u, 8u);
    wr32(sp0 - 0x10u, t4);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x38u;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0xbfu);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x44u, 0xc0u);
    wr32(sp0 - 0x48u, 8u);
    wr32(sp0 - 0xcu, t7);
    g->esp = sp0 - 0x40u;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0xc0u);
    wr32(sp0 - 8u, t10);
    wr32(sp0 - 4u, 0u);
    t11 = rd32(self + 0x14u);
    wr16(sp0 - 0x1cu, 0u);
    wr16(sp0 - 0x1au, 0u);
    wr16(sp0 - 0x18u, 0u);
    wr16(sp0 - 0x16u, 0u);
    wr32(sp0 - 0x20u, sp0 - 0x14u);
    wr32(sp0 - 0x2cu, sp0 - 0x1cu);
    g->edx = t11;
    t12 = rd32(sp0 + t11 * 4u - 0x20u);
    g->esp = sp0 - 0x28u;
    t13 = cow_call_regs(g, COW_IMG(0x1011a730u), sp0 - 0x1cu, rd32(self + 8u), g->edx, 0, 1, sp0 - 0x1cu);
    t14 = g->edx;
    wr32(sp0 - 0x2cu, sp0 - 0x1cu);
    g->ecx = sp0 - 0x1cu;
    t15 = cow_cdecl(g, COW_IMG(0x1023bf50u), 1, sp0 - 0x1cu);
    t16 = g->ecx;
    wr32(sp0 - 0x30u, sp0 - 0x1cu);
    wr32(sp0 - 0x34u, t12);
    g->edx = sp0 - 0x1cu;
    g->esp = sp0 - 0x2cu;
    t17 = cow_cdecl(g, COW_IMG(0x1023c040u), 2, t12, sp0 - 0x1cu);
    t18 = g->edx;
    g->edx = t18;
    return t17;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023d3a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1023d3a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
