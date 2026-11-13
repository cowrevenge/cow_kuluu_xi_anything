/* f_0x10142020 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets a global mode byte and related flags when the byte argument is 0, 1, or 2.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10142020(Guest* g, uint32_t param)
{
    const uint32_t result = (g->eax & 0xFFFFFF00u) | (param & 0xFFu);

    g->eax = result;
    g->edx = g->edx;   /* original leaves edx unchanged */

    if ((uint8_t)param <= 2u)
    {
        const uint32_t p1 = COW_IMG(0x1057825cu);
        wr8(p1, (uint8_t)(rd8(p1) | 2u));

        wr8(COW_IMG(0x10578260u), (uint8_t)param);
        wr8(COW_IMG(0x105782AAu), 1u);
    }

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10142020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd8(sp0 + 4u);
    const uint32_t result = cow_fn_10142020(g, param);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
