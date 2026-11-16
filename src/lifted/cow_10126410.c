/* f_0x10126410 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10126410(Guest* g)
{
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr8(arg1 + 0x14u, 1u);
    t1 = rd32(self + 0x18u) + 1u;
    wr32(self + 0x18u, t1);
    t2 = rd32(self + 0x14u) - 1u;
    wr32(self + 0x14u, t2);
    if (rd32(self + 8u) != 0u)
    {
        edx = rd32(self + 8u);
        wr32(edx + 0xcu, arg1);
    }
    t3 = rd32(self + 8u);
    wr32(arg1 + 0xcu, 0u);
    wr32(arg1 + 8u, t3);
    t4 = rd32(self + 0xcu);
    wr32(self + 8u, arg1);
    if (t4 != 0u)
    {
        edx = t4;
    }
    else
    {
        edx = t4;
        wr32(self + 0xcu, arg1);
    }
    wr32(arg1 + 0x10u, 0u);
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10126410(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10126410(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
