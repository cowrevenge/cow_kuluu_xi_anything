/* f_0x101ebc20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101ebc20(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    t1 = rd32(self + 0x14u);
    wr32(sp0 - 0x1cu, t1);
    wr32(sp0 - 0x20u, sp0 - 8u);
    g->edi = 0u;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, t1, 1u, 1u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0x80808080u);
    wr32(sp0 - 0x20u, 0x18u);
    wr32(sp0 - 0x24u, 8u);
    g->eax = 8u;
    g->edx = 0x18u;
    t2 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x18u), 5, 8u, 0x18u, 0x80808080u, 0u, 0u);
    t3 = g->edx;
    g->edi = in_edi;
    g->edx = t3;
    return t2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ebc20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ebc20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
