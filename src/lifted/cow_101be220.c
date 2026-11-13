/* f_0x101be220 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 0 with the upper 24 bits of the incoming EAX preserved when the second stack argument is 1; otherwise returns 1 if the first stack argument is 0x5e and 0 otherwise.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101be220(Guest* g, uint32_t eax0, uint32_t byteArg, uint32_t wordArg)
{
    (void)g;

    if ((uint8_t)byteArg == 1u)
    {
        return eax0 & 0xFFFFFF00u;
    }

    return ((uint16_t)wordArg == 0x5eu) ? 1u : 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101be220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t eax0 = g->eax;
    const uint32_t byteArg = rd8(sp0 + 8u);
    uint32_t wordArg = 0u;

    if ((uint8_t)byteArg != 1u)
    {
        wordArg = rd16(sp0 + 4u);
    }

    const uint32_t result = cow_fn_101be220(g, eax0, byteArg, wordArg);

    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
