/* f_0x10191aa0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   returns whether the dword at offset 0xC of the object is non-zero, preserving upper bits of eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10191aa0(Guest* g, uint32_t self)
{
    uint32_t val = rd32(self + 0xCu);
    /* mov eax, [ecx+0xc] sets eax to val. test/setne modifies only al based on val!=0. */
    return (val & 0xFFFFFF00u) | ((val != 0) ? 1u : 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10191aa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10191aa0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
