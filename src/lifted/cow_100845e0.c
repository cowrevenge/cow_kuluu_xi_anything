/* f_0x100845e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the object pointer at [this + 0x70] is null, return 0; otherwise tail-call FUN_10098360 with that pointer in ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_100845e0(Guest* g, uint32_t self)
{
    const uint32_t obj = rd32(self + 0x70u);

    if (obj == 0u)
    {
        /* xor eax, eax; ret  -- edx is left unchanged */
        return 0u;
    }

    /* Tail jmp 0x10098360 with ecx = obj.  The target ends in a bare ret,
       so use the caller-pops form and set ecx as the this/first register arg. */
    const uint32_t result = cow_thiscall_cdecl(g, COW_IMG(0x10098360u), obj, 0u);

    /* Preserve the target's final edx for the caller-visible state. */
    g->edx = g->edx;

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100845e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100845e0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
