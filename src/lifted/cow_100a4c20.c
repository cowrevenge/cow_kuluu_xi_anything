/* f_0x100a4c20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100a4c20(Guest* g)
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

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x100a89e0u), self, 0);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(self, COW_IMG(0x1032db40u));
    wr32(self + 0x5e4u, 0u);
    wr8(self + 0x5e0u, 0u);
    wr8(self + 0x5e1u, 0u);
    wr8(self + 0x5e2u, 0u);
    t3 = cow_stdcall(g, COW_IMG(0x103149e0u), 0);
    t4 = cow_divs(g, t3, 0x78u);
    t5 = cow_mods(g, t3, 0x78u);
    wr32(self + 0x5e8u, t5);
    g->ecx = 0x78u;
    g->edx = self + 0x160u;
    cow_cdecl(g, COW_IMG(0x10026e30u), 5, self + 0x160u, 0u, 0xbf800000u, 0u, 0x3f800000u);
    t6 = g->ecx;
    t7 = g->edx;
    t8 = rd32(self + 0x5c8u);
    wr32(self + 0x174u, 0u);
    wr32(self + 0x178u, t8);
    wr8(self + 0x17cu, 0u);
    wr8(self + 0x5ecu, 1u);
    t9 = cow_stdcall(g, COW_IMG(0x103149e0u), 0);
    wr8(self + 0x5f4u, 0u);
    t10 = cow_divs(g, t9, 0x78u);
    t11 = cow_mods(g, t9, 0x78u);
    wr32(self + 0x5f0u, t11);
    g->edx = t11;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a4c20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a4c20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
