/* f_0x101be200 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 0 when the second stack byte is 1 (preserving the caller's upper EAX bits), otherwise returns 1 if the first stack word is '-' (0x2D) and 0 otherwise.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101be200(Guest* g, uint32_t eax_in, uint32_t param1, uint32_t param2)
{
    (void)g;

    if ((uint8_t)param2 == 1u)
    {
        return eax_in & 0xFFFFFF00u;
    }

    return ((uint16_t)param1 == 0x2Du) ? 1u : 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101be200(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t eax_in = g->eax;
    const uint32_t param2 = rd8(sp0 + 8u);
    uint32_t param1 = 0u;

    if ((uint8_t)param2 != 1u)
    {
        param1 = rd16(sp0 + 4u);
    }

    const uint32_t result = cow_fn_101be200(g, eax_in, param1, param2);

    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
