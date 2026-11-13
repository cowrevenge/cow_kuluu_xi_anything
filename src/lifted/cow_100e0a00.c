/* f_0x100e0a00 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the global pointer at 0x104dfd98 is null returns 0; otherwise clears the byte at offset 0x1a698 and returns that pointer with its low byte forced to 1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100e0a00(Guest* g)
{
    (void)g;

    const uint32_t p = rd32(COW_IMG(0x104DFD98u));

    if (p == 0u)
    {
        return 0u;
    }

    wr8(p + 0x1A698u, 0u);
    return (p & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e0a00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100e0a00(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
