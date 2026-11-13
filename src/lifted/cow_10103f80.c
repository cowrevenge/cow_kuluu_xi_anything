/* f_0x10103f80 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Zeroes 42 DWORDs at the address supplied as the sole stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10103f80(Guest* g, uint32_t dst)
{
    (void)g;
    for (uint32_t i = 0; i < 0x2au; ++i) {
        wr32(dst + i * 4u, 0u);
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10103f80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd32(sp0 + 4u);

    cow_fn_10103f80(g, param_1);

    g->eax = 0u;
    g->ecx = 0u;
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
