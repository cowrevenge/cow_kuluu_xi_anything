/* f_0x101908e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_101c4940 with the global object at [0x10662dcc] as this, passing the dump string, the two stack arguments, and 1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_101908e0(Guest* g, uint32_t param1, uint32_t param2)
{
    const uint32_t self = rd32(COW_IMG(0x10662DCCu));

    const uint32_t result = cow_thiscall(
        g,
        COW_IMG(0x101C4940u),
        self,
        4u,
        COW_IMG(0x10377CD4u),
        param1,
        param2,
        1u
    );

    g->edx = g->edx;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101908e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param2 = rd32(sp0 + 8u);
    const uint32_t param1 = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_101908e0(g, param1, param2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
