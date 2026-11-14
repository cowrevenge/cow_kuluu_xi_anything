/* f_0x10037320 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets a global flag byte, then returns whether a global pointer is nonzero and differs from another global.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10037320(Guest* g)
{
    (void)g;

    const uint32_t v = rd32(COW_IMG(0x10463944u));

    wr8(COW_IMG(0x10463909u), 1u);

    if (v == 0u)
    {
        return 0u;
    }

    const uint32_t other = rd32(COW_IMG(0x10463940u));
    return (v & 0xFFFFFF00u) | (uint32_t)(v != other);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10037320(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10037320(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
