/* f_0x10008aa0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   stores the low byte of the first stack argument into global byte at 0x10455c3a.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10008aa0(Guest* g, uint32_t param)
{
    (void)g;
    wr8(COW_IMG(0x10455c3au), (uint8_t)(param & 0xFFu));
    /* eax: low byte set to param's low byte, upper bytes preserved from entry */
    return (g->eax & 0xFFFFFF00u) | (uint8_t)(param & 0xFFu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10008aa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_10008aa0(g, param);
    g->esp = sp0;
    rt_return(g, result, 4u);   /* ret 4 */
}
/* COW_ADAPTER END */
