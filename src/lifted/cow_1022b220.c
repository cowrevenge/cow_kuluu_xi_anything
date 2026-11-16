/* f_0x1022b220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1022b220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        g->esp = sp0;
        cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10386934u), 1u, 0u);
        cow_thiscall(g, COW_IMG(0x1022c3a0u), rd32(COW_IMG(0x10667a70u)), 3, arg1, arg2, arg3);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022b220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1022b220(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
