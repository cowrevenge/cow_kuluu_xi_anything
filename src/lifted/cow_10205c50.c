/* f_0x10205c50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10205c50(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    t1 = rd32(self + 0x14u) + 1u;
    wr32(sp0 - 0x1cu, t1);
    wr32(sp0 - 0x20u, sp0 - 8u);
    g->edi = 0u;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, t1, 1u, 1u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0x80808080u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    g->edx = 0u;
    t2 = rd32(self + 0x18u);
    t3 = cow_thiscall(g, COW_IMG(0x1011fb60u), t2, 5, 0u, 0u, 0x80808080u, 0u, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x14u, 0xc7u);
    g->edx = t5;
    t6 = cow_call_regs(g, COW_IMG(0x10193850u), t3, g->ecx, g->edx, 1, 1, 0xc7u);
    t7 = g->edx;
    wr32(self + 0x14u, t6);
    g->edi = in_edi;
    g->edx = t7;
    return t6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10205c50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10205c50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
