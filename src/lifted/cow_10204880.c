/* f_0x10204880 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10204880(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
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

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    t2 = g->edx;
    t3 = rd32(rd32(t1) + 0x75cu);
    t4 = rd32(t1);
    wr32(self + 0x898u, t3);
    g->eax = t4;
    g->esp = sp0 - 8u;
    t5 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t6 = rd32(rd32(t5) + 0x12cu);
    t7 = rd32(t5);
    wr32(self + 0x34u, t6);
    wr8(self + 0x49u, 1u);
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x101f6700u), t6, self, t7, 0, 1, 0xfu);
    t8 = g->edx;
    wr16(self + 0x16u, 4u);
    wr32(self + 0x30u, COW_IMG(0x10385378u));
    wr16(self + 0x26u, 0x10u);
    wr8(self + 0x2cu, 4u);
    wr8(self + 0x2du, 4u);
    g->eax = 4u;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385474u), 1u, 0u);
    t10 = g->edx;
    g->edx = t10;
    return t9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10204880(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10204880(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
