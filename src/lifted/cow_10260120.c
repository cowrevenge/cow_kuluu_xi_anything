/* f_0x10260120 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10260120(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = rd32(self + 0x154u);
    t2 = rd32(self + 0x150u);
    g->eax = rd32(self);
    g->edx = t2;
    t3 = rd32(self);
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, rd32(t3 + 0xb4u), self, 2, t2, t1);
    t5 = g->ecx;
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_stdcall(g, rd32(COW_IMG(0x10329400u)), 0);   /* winmm.dll!timeGetTime */
    t8 = g->edx;
    wr32(self + 0xfcu, t7);
    g->edx = t8;
    return t7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10260120(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10260120(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
