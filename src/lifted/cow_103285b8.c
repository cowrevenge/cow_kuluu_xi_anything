/* f_0x103285b8 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Loads `this` from [ebp-0x14] and tail-calls exception::~exception(this).

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_103285b8(Guest* g, uint32_t ebp)
{
    const uint32_t self = rd32(ebp - 0x14u);
    cow_thiscall_cdecl(g, COW_IMG(0x10327511u), self, 0);
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103285b8(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_103285b8(g, g->ebp);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
