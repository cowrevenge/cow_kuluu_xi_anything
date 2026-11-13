/* f_0x10009750 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the global cursor hook flag is set, tail-calls SetCursor with the cursor argument; otherwise returns.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10009750(Guest* g, uint32_t param)
{
    if (rd32(COW_IMG(0x10456bf8u)) != 0u)
    {
        const uint32_t target = rd32(COW_IMG(0x10329380u));
        cow_stdcall(g, target, 1u, param);
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10009750(Guest* g)
{
    const uint32_t sp0 = g->esp;
    uint32_t param = 0u;

    if (rd32(COW_IMG(0x10456bf8u)) != 0u)
    {
        param = rd32(sp0 + 4u);
    }

    cow_fn_10009750(g, param);

    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
