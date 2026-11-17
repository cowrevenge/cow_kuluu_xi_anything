/* f_0x1022f850 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1022f850(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10220cf0u), 2, 0u, 0x23u);
    t2 = g->edx;
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x101170f0u), arg1, 3, 4u, 5u, t1);
    t3 = g->edx;
    g->eax = arg3;
    g->edx = t3;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, arg2 + 0x190u);
    t5 = g->edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101171b0u), arg1, 4, 0x10u, 0u, t4, arg3);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022f850(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1022f850(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
