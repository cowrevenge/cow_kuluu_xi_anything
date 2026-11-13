/* f_0x10263240 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the result of calling the vtable slot at offset 0x14 of the object stored at self+0x98, or 0x8004020a if that object pointer is null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10263240(Guest* g, uint32_t self)
{
    const uint32_t member = rd32(self + 0x98u);

    if (member == 0u)
    {
        return 0x8004020Au;
    }

    const uint32_t vtable = rd32(member);
    const uint32_t target = rd32(vtable + 0x14u);

    /* The original has ecx = vtable at the indirect call. */
    g->ecx = vtable;

    /* Original pushes member, then calls; the following bare ret implies the callee pops the argument. */
    return cow_stdcall(g, target, 1u, member);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10263240(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10263240(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
