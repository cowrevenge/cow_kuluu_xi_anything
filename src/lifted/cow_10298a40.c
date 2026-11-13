/* f_0x10298a40 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   stores the two byte arguments into adjacent image bytes and returns the modified eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10298a40(Guest* g, uint32_t param_1, uint32_t param_2)
{
    g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)param_1;
    g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)param_2;

    wr8(COW_IMG(0x109a282du), (uint8_t)param_1);
    wr8(COW_IMG(0x109a282cu), (uint8_t)param_2);

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10298a40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd8(sp0 + 4u);
    const uint32_t param_2 = rd8(sp0 + 8u);

    const uint32_t result = cow_fn_10298a40(g, param_1, param_2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
