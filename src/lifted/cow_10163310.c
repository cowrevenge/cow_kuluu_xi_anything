/* f_0x10163310 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns 1 when the object's field at +0xc is null, otherwise tail-calls FUN_1019ed00 with that field in ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_10163310(Guest* g, uint32_t self)
{
    const uint32_t ecx = rd32(self + 0xCu);

    if (ecx == 0u)
    {
        return 1u;
    }

    return cow_thiscall_cdecl(g, COW_IMG(0x1019ed00u), ecx, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10163310(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10163310(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
