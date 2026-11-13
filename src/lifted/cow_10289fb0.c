/* f_0x10289fb0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Tail-calls FUN_1027ebf0 with the sole stack argument increased by 0x1c.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10289fb0(Guest* g, uint32_t sp0, uint32_t param_1)
{
    const uint32_t modified = param_1 + 0x1Cu;

    /* Original: mov dword ptr [esp + 4], eax */
    wr32(sp0 + 4u, modified);

    /* Tail call to 0x1027ebf0, which is cdecl and ends in a bare ret. */
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x1027ebf0u), 1u, modified);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10289fb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd32(sp0 + 4u);

    cow_fn_10289fb0(g, sp0, param_1);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
