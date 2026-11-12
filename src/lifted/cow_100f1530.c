/* f_0x100f1530 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns the low bit of the first byte at the pointer argument, with upper bits of eax preserved from the pointer value.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100f1530(Guest* g, uint32_t param)
{
    (void)g;
    uint32_t eax = param;
    /* mov al, byte ptr [eax] */
    eax = (eax & 0xFFFFFF00u) | (uint8_t)(rd8(eax));
    /* and al, 1 */
    eax = (eax & 0xFFFFFF00u) | ((uint8_t)eax & 1u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f1530(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100f1530(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);   /* ret */
}
/* COW_ADAPTER END */
