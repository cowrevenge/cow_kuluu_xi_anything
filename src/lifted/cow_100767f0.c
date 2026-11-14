/* f_0x100767f0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls thunk 0x10152ef0 with (9, 0x66), then calls 0x100767c0 with the function's stack argument and the thunk's return value.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100767f0(Guest* g, uint32_t param_1)
{
    uint32_t uVar1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x66u);
    cow_cdecl(g, COW_IMG(0x100767c0u), 2, param_1, uVar1);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100767f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd32(sp0 + 4u);

    cow_fn_100767f0(g, param_1);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
