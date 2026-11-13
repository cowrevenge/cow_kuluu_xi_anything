/* f_0x1027c9f0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the object pointer at offset 0x1c of the argument is non-null, tail-call the function pointer at offset 0x18 of that object, passing the object pointer as the sole stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1027c9f0(Guest* g, uint32_t param_1)
{
    const uint32_t obj = rd32(param_1 + 0x1cu);

    if (obj == 0u)
    {
        return;
    }

    /* The original stores obj into [esp + 4] and then tail-jumps to [obj + 0x18].
       Emulate that as a tail call with one stack argument. */
    wr32(g->esp + 4u, obj);
    cow_stdcall(g, rd32(obj + 0x18u), 1u, obj);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027c9f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd32(sp0 + 4u);

    cow_fn_1027c9f0(g, param_1);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
