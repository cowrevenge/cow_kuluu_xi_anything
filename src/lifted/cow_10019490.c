/* f_0x10019490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10019490(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10019210u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(self, COW_IMG(0x1032a118u));
    g->edx = t3;
    t4 = cow_thiscall(g, rd32(COW_IMG(0x10329400u)), t2, 0);
    t5 = g->edx;
    wr32(self + 0xcu, t4);
    wr32(self + 0x14u, 0u);
    wr32(self + 0x18u, 0u);
    wr32(self + 0x1cu, 0u);
    cow_fastcall(g, COW_IMG(0x100194f0u), self, t5, 0);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10019490(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10019490(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
