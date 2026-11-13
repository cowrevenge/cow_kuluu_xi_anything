/* f_0x10112280 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the object pointer in ecx, first calling FUN_10311bf0 with it if the low bit of the byte argument is set.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10112280(Guest* g, uint32_t self, uint32_t arg)
{
    if (arg & 1u)
    {
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1u, self);
    }
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10112280(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg = rd8(sp0 + 4u);
    const uint32_t result = cow_fn_10112280(g, self, arg);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
