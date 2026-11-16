/* f_0x10204140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10204140(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(COW_IMG(0x106643dcu), 0u);
    wr8(COW_IMG(0x106643a6u), 0u);
    wr32(COW_IMG(0x106643e4u), 0u);
    wr32(COW_IMG(0x106643e8u), 0u);
    wr32(COW_IMG(0x106643fcu), 0u);
    wr32(COW_IMG(0x106643ecu), 0u);
    wr32(COW_IMG(0x106643e0u), 0u);
    wr8(self + 0x40u, 0u);
    wr8(self + 0x42u, 0u);
    wr8(self + 0x41u, 0u);
    wr16(self + 0x46u, 0u);
    wr16(self + 0x44u, 0u);
    wr32(self + 0x48u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    t2 = g->edx;
    t3 = rd32(rd32(t1) + 0x114u);
    t4 = rd32(t1);
    wr32(self + 0x4cu, t3);
    g->eax = t4;
    g->esp = sp0 - 0xcu;
    t5 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 0u);
    t6 = rd32(rd32(t5) + 0x1e8u);
    wr32(self + 0x50u, t6);
    t7 = rd32(rd32(t5) + 0x1ecu);
    wr32(self + 0x54u, t7);
    t8 = rd32(rd32(t5) + 0x1f0u);
    t9 = rd32(t5);
    wr32(self + 0x58u, t8);
    g->eax = t8;
    g->esp = sp0 - 8u;
    t10 = cow_call_regs(g, COW_IMG(0x10201fb0u), g->eax, g->ecx, t9, 1, 0);
    t11 = g->edx;
    g->esp = sp0;
    g->edx = t11;
    return cow_tailcall(g, COW_IMG(0x10202c30u), t10, self, t11);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10204140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10204140(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
