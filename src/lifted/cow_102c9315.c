/* f_0x102c9315 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   tail-calls the function pointer stored at param_2+0x24 with arguments (param_2+0x28, param_1).

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102c9315(Guest* g, uint32_t param_1, uint32_t param_2)
{
    const uint32_t target = rd32(param_2 + 0x24u);
    const uint32_t arg0 = rd32(param_2 + 0x28u);

    cow_cdecl(g, target, 2u, arg0, param_1);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c9315(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd32(sp0 + 4u);
    const uint32_t param_2 = rd32(sp0 + 8u);

    cow_fn_102c9315(g, param_1, param_2);

    g->esp = sp0 + 0x1cu;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
