/* f_0x1032834b - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10311bf0 with the stack argument at [ebp+8], then returns.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1032834b(Guest* g, uint32_t ebp)
{
    const uint32_t param = rd32(ebp + 8u);
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, param);
    /* After the call and pop ecx, eax is whatever FUN_10311bf0 left in it.
       edx is also whatever FUN_10311bf0 left in it (or unchanged if it didn't touch edx).
       We must preserve both exactly as the callee leaves them. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1032834b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t ebp_val = g->ebp;
    const uint32_t result = cow_fn_1032834b(g, ebp_val);
    /* edx must be whatever the callee left in it. Since cow_cdecl updates g->edx
       to reflect the callee's state, we just need to ensure g->edx is correct.
       The original does not modify edx after the call (pop ecx only touches ecx),
       so g->edx already holds the callee's return value for edx. */
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
