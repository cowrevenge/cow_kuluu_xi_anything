/* f_0x10163080 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns the sign-extended 16-bit value at offset 0x56 of the object pointed to by ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10163080(Guest* g, uint32_t self)
{
    (void)g;
    return (uint32_t)(int32_t)(int16_t)rd16(self + 0x56u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10163080(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10163080(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* ret */
}
/* COW_ADAPTER END */
