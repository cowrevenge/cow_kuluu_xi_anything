/* f_0x10221230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10221230(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(self + 0x68u) | arg1;
    wr32(self + 0x68u, t1);
    g->eax = arg1;
    g->edx = rd32(COW_IMG(0x103860d0u));
    t2 = rd32(COW_IMG(0x103860d0u));
    t3 = rd32(COW_IMG(0x103860d4u));
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x10220d30u), 1, t2);
    t5 = g->edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10220de0u), self + 0x18u, 2, t4, t3);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10221230(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10221230(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
