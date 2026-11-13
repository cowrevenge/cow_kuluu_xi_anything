/* f_0x102575d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the stack argument with its low byte set to 1 unless the argument is null or points to '#' or '.', in which case the low byte is cleared.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102575d0(Guest* g, uint32_t param)
{
    uint32_t eax;

    if (param == 0u)
    {
        eax = 0u;
    }
    else
    {
        uint32_t c = rd8(param);
        eax = (param & 0xFFFFFF00u) | ((c == 0x23u || c == 0x2eu) ? 0u : 1u);
    }

    g->edx = g->edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102575d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_102575d0(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
