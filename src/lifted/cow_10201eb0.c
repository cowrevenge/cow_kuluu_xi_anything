/* f_0x10201eb0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the stack argument with its low byte set to 1 when the byte at offset 0x7a is nonzero and the 16-bit value at offset 0x1c is at least 0x700, otherwise with its low byte cleared.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10201eb0(Guest* g, uint32_t param)
{
    (void)g;

    uint32_t eax = param;

    if ((uint8_t)rd8((uint32_t)(param + 0x7au)) == 0u)
    {
        return eax & 0xFFFFFF00u;
    }

    if ((uint16_t)rd16((uint32_t)(param + 0x1cu)) < 0x700u)
    {
        return eax & 0xFFFFFF00u;
    }

    return (eax & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10201eb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_10201eb0(g, param);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
