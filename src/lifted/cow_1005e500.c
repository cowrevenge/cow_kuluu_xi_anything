/* f_0x1005e500 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns the dword pointed to by the pointer stored at [self], or 0 if that pointer is null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1005e500(Guest* g, uint32_t self)
{
    (void)g;
    const uint32_t ptr = rd32(self);
    if (ptr == 0u)
    {
        return 0u;
    }
    return rd32(ptr);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1005e500(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1005e500(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
