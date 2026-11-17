/* f_0x100f7680 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 2 if the global at 0x104df908 is null; otherwise tail-calls FUN_100f24b0 with the five stack arguments and the global as `this`.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_100f7680(Guest* g, uint32_t global, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5)
{
    if (global == 0u)
    {
        return 2u;
    }

    return cow_thiscall(g, COW_IMG(0x100F24B0u), global, 5u, a1, a2, a3, a4, a5);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f7680(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t global = rd32(COW_IMG(0x104DF908u));

    uint32_t a1 = 0u, a2 = 0u, a3 = 0u, a4 = 0u, a5 = 0u;
    if (global != 0u)
    {
        a1 = rd32(sp0 + 4u);
        a2 = rd32(sp0 + 8u);
        a3 = rd32(sp0 + 12u);
        a4 = rd32(sp0 + 16u);
        a5 = rd32(sp0 + 20u);
    }

    const uint32_t result = cow_fn_100f7680(g, global, a1, a2, a3, a4, a5);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
