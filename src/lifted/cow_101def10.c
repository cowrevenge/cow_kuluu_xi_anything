/* f_0x101def10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101def10(Guest* g)
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
    t1 = cow_thiscall(g, COW_IMG(0x101def70u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t5 = g->edx;
    t6 = rd32(rd32(t4) + 0x12cu);
    wr32(self + 0x58u, t6);
    wr32(self + 0x34u, t6);
    wr8(self + 0x49u, 1u);
    t7 = cow_call_regs(g, COW_IMG(0x101f6700u), t6, self, t5, 0, 1, 0xfu);
    t8 = g->edx;
    wr16(self + 0x16u, 1u);
    wr32(self + 0x30u, COW_IMG(0x1037f194u));
    wr16(self + 0x26u, 0x10u);
    t9 = cow_fastcall(g, COW_IMG(0x101decc0u), self, t8, 0);
    t10 = g->edx;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037f1acu), 1u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101def10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101def10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
