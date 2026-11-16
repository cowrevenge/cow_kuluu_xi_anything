/* f_0x100b2200 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b2200(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr8(COW_IMG(0x10488208u), 1u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, sp0 - 4u);
    wr16(rd32(self + 0x260u) + 0x164u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 1u);
    wr16(COW_IMG(0x10482f40u), 0u);
    wr16(COW_IMG(0x104855aau), 0u);
    g->eax = 0u;
    g->edx = sp0 - 4u;
    g->esp = sp0 - 0x1cu;
    t1 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x20u, t1);
    wr32(sp0 - 0x24u, 1u);
    g->ecx = t2;
    t4 = cow_call_regs(g, COW_IMG(0x100964a0u), g->eax, g->ecx, t3, 1, 2, 1u, t1);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x20u, t4);
    wr32(sp0 - 0x24u, COW_IMG(0x103d3c84u));
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x100ad660u), t4, t5, t6, 1, 7, COW_IMG(0x103d3c84u), t4, 0u, sp0 - 4u, 0u, 0u, 0u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 3u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b2200(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b2200(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
