/* f_0x101f7290 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns the dword from the 16-byte-stride table at 0x106637b8 indexed by the stack argument, or 0 if the byte at 0x106637a8 is zero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_101f7290(Guest* g, uint32_t arg, uint32_t enabled)
{
    (void)g;

    if (enabled == 0u)
    {
        return 0u;
    }

    return rd32(COW_IMG(0x106637b8u) + (uint32_t)(arg << 4u));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f7290(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t byte = rd8(COW_IMG(0x106637a8u));
    uint32_t arg = 0u;

    if (byte != 0u)
    {
        arg = rd32(sp0 + 4u);
    }

    const uint32_t result = cow_fn_101f7290(g, arg, byte);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
