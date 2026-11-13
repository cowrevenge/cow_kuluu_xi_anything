/* f_0x100bda10 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 0 if the global at 0x10578428 is null; otherwise tail-calls 0x10161250 with the same stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100bda10(Guest* g, uint32_t sp0)
{
    const uint32_t self = rd32(COW_IMG(0x10578428u));

    if (self == 0u)
    {
        return 0u;
    }

    const uint32_t arg = rd32(sp0 + 4u);
    wr32(sp0 + 4u, arg);

    return cow_stdcall(g, COW_IMG(0x10161250u), 1u, arg);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100bda10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100bda10(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
