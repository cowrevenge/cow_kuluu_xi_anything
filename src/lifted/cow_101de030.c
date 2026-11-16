/* f_0x101de030 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101de030(Guest* g)
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;

    wr8(self + 0xdu, 0u);
    wr8(self + 0xcu, 0u);
    wr8(self + 0x10u, 0u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x100e5700u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    g->esp = sp0 - 8u;
    t4 = cow_stdcall(g, COW_IMG(0x100e56e0u), 0);
    t5 = g->edx;
    g->esi = self;
    g->edx = t5;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x101de060u), self, 2, t4, t1);
    t7 = g->edx;
    g->esi = in_esi;
    g->edx = t7;
    return t6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101de030(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101de030(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
