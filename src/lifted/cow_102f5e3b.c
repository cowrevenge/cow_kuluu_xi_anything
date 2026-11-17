/* f_0x102f5e3b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102f5e3b(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(arg1 + 0x18cu);
    wr8(t1 + 0x10u, 0u);
    wr8(t1 + 0x11u, 0u);
    wr32(t1, COW_IMG(0x102f5da8u));
    wr8(t1 + 0x14u, 1u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, rd32(rd32(arg1) + 0x10u), self, 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    g->eax = rd32(arg1 + 0x190u);
    g->edx = t3;
    t4 = rd32(arg1 + 0x190u);
    g->esp = sp0 - 8u;
    t5 = cow_thiscall_cdecl(g, rd32(t4), t2, 1, arg1);
    t6 = g->edx;
    wr32(arg1 + 0x8cu, 0u);
    g->edx = t6;
    return t5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f5e3b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f5e3b(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
