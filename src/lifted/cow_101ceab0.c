/* f_0x101ceab0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns the sign-extended byte at offset 6 of the object pointed to by ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101ceab0(Guest* g, uint32_t self)
{
    (void)g;
    return (uint32_t)(int32_t)(int8_t)rd8(self + 6u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ceab0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101ceab0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* ret */
}
/* COW_ADAPTER END */
