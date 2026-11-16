/* f_0x1015d700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1015d700(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg2, 4u);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x18u;
    t4 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg2, 3u);
    t5 = g->ecx;
    t6 = g->edx;
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x1cu;
    t7 = cow_cdecl(g, COW_IMG(0x10257820u), 2, arg2, 2u);
    t8 = g->ecx;
    t9 = g->edx;
    g->edx = t9;
    g->esp = sp0 - 0x20u;
    t10 = cow_cdecl(g, COW_IMG(0x10257820u), 2, arg2, 1u);
    t11 = g->edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101569f0u), arg1, 8, t10, t7, t4, t1, 0u, 0u, 0u, COW_IMG(0x103d3c84u));
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015d700(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015d700(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
