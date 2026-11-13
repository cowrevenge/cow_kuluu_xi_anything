/* f_0x1021d960 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls the function at vtable slot 0x1c of the object in [this+0x14], returning 1 unless that call returns a negative signed value, in which case it returns the call result with its low byte cleared.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1021d960(Guest* g, uint32_t self)
{
    const uint32_t obj = rd32(self + 0x14u);

    if (obj == 0u)
    {
        return 1u;
    }

    const uint32_t vtable = rd32(obj);
    const uint32_t target = rd32(vtable + 0x1cu);

    /* Preserve the register state the original has at the call site. */
    g->eax = obj;
    g->ecx = vtable;

    /* Original: push eax; call dword ptr [ecx + 0x1c]
       No caller-side stack cleanup is present, so the callee pops the argument. */
    cow_stdcall(g, target, 1u, obj);

    const uint32_t r = g->eax;

    /* test eax, eax / jge: signed comparison */
    if ((int32_t)r >= 0)
    {
        return (r & 0xFFFFFF00u) | 1u;
    }

    /* xor al, al: clears only the low byte */
    return r & 0xFFFFFF00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021d960(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1021d960(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
