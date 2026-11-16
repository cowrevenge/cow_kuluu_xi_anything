/* f_0x100194f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100194f0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, rd32(COW_IMG(0x10329400u)), self, 0);
    t2 = rd32(self + 0xcu);
    t3 = rd32(self + 0x1cu);
    t4 = rd32(self + 0x14u);
    wr32(self + 0xcu, t1);
    t5 = t1 + t4 - t2 - t3;
    wr32(self + 0x14u, t5);
    wr32(self + 0x18u, 0u);
    wr32(self + 0x1cu, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100194f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100194f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
