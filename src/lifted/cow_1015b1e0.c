/* f_0x1015b1e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns the sign-extended byte at offset (param + ecx + 4) from the buffer pointed to by param.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1015b1e0(Guest* g, uint32_t self, uint32_t param)
{
    (void)g;
    return (uint32_t)(int32_t)(int8_t)rd8(param + self + 4u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015b1e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1015b1e0(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
