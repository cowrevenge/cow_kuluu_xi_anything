/* f_0x10123640 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   sign-extends the low byte of the stack argument, shifts it left by 4, and returns that shifted value with its low byte replaced by the table byte at 0x1036e0f0 + shifted.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10123640(Guest* g, uint32_t param)
{
    (void)g;

    uint32_t eax = (uint32_t)(int32_t)(int8_t)(param & 0xFFu);
    uint32_t shifted = (uint32_t)(eax << 4);
    uint32_t addr = (uint32_t)(shifted + COW_IMG(0x1036E0F0u));

    return (shifted & 0xFFFFFF00u) | (uint32_t)rd8(addr);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10123640(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd8(sp0 + 4u);
    const uint32_t result = cow_fn_10123640(g, param);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
