/* f_0x101a27e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101a27e0(Guest* g)
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
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 612u);

    wr32(sp0 - 0x244u, in_esi);
    wr32(sp0 - 0x248u, 1u);
    wr32(sp0 - 0x24cu, 0u);
    wr32(sp0 - 0x250u, 0u);
    wr32(sp0 - 0x254u, 0x140u);
    wr32(sp0 - 0x258u, self + 0x1dc6u);
    wr32(sp0 - 0x25cu, COW_IMG(0x1037aa38u));
    wr32(sp0 - 0x260u, 1u);
    g->eax = self + 0x1dc6u;
    g->edx = in_edx;
    g->esp = sp0 - 0x244u;
    t1 = cow_thiscall(g, COW_IMG(0x101b9880u), sp0 - 0x120u, 7, 1u, COW_IMG(0x1037aa38u), self + 0x1dc6u, 0x140u, 0u, 0u, 1u);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x101b9a10u), sp0 - 0x120u, 0);
    t4 = g->edx;
    wr32(sp0 - 0x248u, 1u);
    wr32(sp0 - 0x24cu, 0u);
    wr32(sp0 - 0x250u, 0u);
    wr32(sp0 - 0x254u, 0x140u);
    wr32(sp0 - 0x258u, self + 0x1f06u);
    wr32(sp0 - 0x25cu, COW_IMG(0x1037aa2cu));
    wr32(sp0 - 0x260u, 1u);
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x101b9880u), sp0 - 0x240u, 7, 1u, COW_IMG(0x1037aa2cu), self + 0x1f06u, 0x140u, 0u, 0u, 1u);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x101b9a10u), sp0 - 0x240u, 0);
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x101b9a00u), sp0 - 0x240u, 0);
    t10 = g->edx;
    cow_thiscall(g, COW_IMG(0x101b9a00u), sp0 - 0x120u, 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a27e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101a27e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
