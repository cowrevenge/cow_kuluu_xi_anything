/* f_0x101be1e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 0 when the second stack argument is 1, otherwise returns 1 if the first stack argument is 0x5d and 0 otherwise.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101be1e0(Guest* g, uint32_t byteArg, uint32_t wordArg, uint32_t eaxIn)
{
    (void)g;

    if (byteArg == 1u)
    {
        return eaxIn & 0xFFFFFF00u;
    }

    return (wordArg == 0x5Du) ? 1u : 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101be1e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t eaxIn = g->eax;

    const uint32_t byteArg = rd8(sp0 + 8u);
    uint32_t wordArg = 0u;

    if (byteArg != 1u)
    {
        g->eax = 0u;
        wordArg = rd16(sp0 + 4u);
    }

    const uint32_t result = cow_fn_101be1e0(g, byteArg, wordArg, eaxIn);

    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
