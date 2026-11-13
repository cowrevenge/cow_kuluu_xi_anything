/* f_0x100e79c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Returns the zero-extended byte at offset 0xCC from the struct pointer passed as the first stack argument, preserving upper 16 bits of eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_100e79c0(Guest* g, uint32_t param)
{
    (void)g;
    uint32_t eax = param;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(rd8(param + 0xCCu));
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e79c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_100e79c0(g, param);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
