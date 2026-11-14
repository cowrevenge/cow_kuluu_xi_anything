/* f_0x1030ffd6 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Loads a pointer from a global and tail-calls the function stored at offset 0x2c0 from it.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1030ffd6(Guest* g)
{
    const uint32_t obj = rd32(COW_IMG(0x10456A2Cu));
    const uint32_t target = rd32(obj + 0x2C0u);

    /* Preserve the original register state at the indirect jump. */
    g->eax = obj;

    /* Tail call: invoke the target with the current guest state. */
    rt_call_indirect(g, target);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030ffd6(Guest* g)
{
    const uint32_t sp0 = g->esp;

    cow_fn_1030ffd6(g);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
