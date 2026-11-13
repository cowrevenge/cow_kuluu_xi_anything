/* f_0x10080d10 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   stores the low 16 bits of the stack argument into a global word at 0x1047d3fc.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10080d10(Guest* g, uint32_t param)
{
    (void)g;
    wr16(COW_IMG(0x1047d3fcu), (uint16_t)param);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10080d10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd16(sp0 + 4u);
    cow_fn_10080d10(g, param);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
