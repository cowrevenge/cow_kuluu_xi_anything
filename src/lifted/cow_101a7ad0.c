/* f_0x101a7ad0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets the low byte of the stack argument to 1 if its signed value is between 1 and 200 inclusive, otherwise to 0, preserving the upper three bytes.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_101a7ad0(Guest* g, uint32_t param)
{
    uint32_t eax = param;
    int32_t v = (int32_t)eax;

    if (v > 0 && v <= 200)
    {
        eax = (eax & 0xFFFFFF00u) | 1u;
    }
    else
    {
        eax = (eax & 0xFFFFFF00u);
    }

    g->edx = g->edx; /* original never writes edx */
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a7ad0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101a7ad0(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
