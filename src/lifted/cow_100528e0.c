/* f_0x100528e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Dereferences the pointer stored at [ecx] and returns the dword pointed to by that result.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_100528e0(Guest* g, uint32_t self)
{
    (void)g;
    uint32_t ptr = rd32(self);
    return rd32(ptr);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100528e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100528e0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
