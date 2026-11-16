/* f_0x101a2780 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101a2780(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 384u);

    wr32(sp0 - 0x164u, COW_IMG(0x103d3c84u));
    wr32(sp0 - 0x168u, arg2);
    wr32(sp0 - 0x16cu, sp0 - 0x160u);
    g->edx = sp0 - 0x160u;
    g->esp = sp0 - 0x160u;
    cow_stdcall(g, COW_IMG(0x101a2610u), 3, sp0 - 0x160u, arg2, COW_IMG(0x103d3c84u));
    t1 = g->edx;
    wr32(sp0 - 0x164u, 1u);
    wr32(sp0 - 0x168u, 0u);
    wr32(sp0 - 0x16cu, 0u);
    wr32(sp0 - 0x170u, 0x17cu);
    wr32(sp0 - 0x174u, arg1);
    wr32(sp0 - 0x178u, sp0 - 0x160u);
    wr32(sp0 - 0x17cu, 1u);
    g->eax = arg1;
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x101b9880u), sp0 - 0x120u, 7, 1u, sp0 - 0x160u, arg1, 0x17cu, 0u, 0u, 1u);
    t3 = g->edx;
    wr32(sp0 - 0x164u, 0u);
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x101b9bc0u), sp0 - 0x120u, 1, 0u);
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x101b9a00u), sp0 - 0x120u, 0);
    t7 = g->edx;
    g->edx = t7;
    return t6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a2780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a2780(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
