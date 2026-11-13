/* f_0x10314508 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns 1 unless the exponent field of the 64-bit stack argument is all ones.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_10314508(Guest* g, uint32_t value)
{
    (void)g;
    return ((uint16_t)value & 0x7FF0u) != 0x7FF0u ? 1u : 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10314508(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10314508(g, rd32(sp0 + 0xAu));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
