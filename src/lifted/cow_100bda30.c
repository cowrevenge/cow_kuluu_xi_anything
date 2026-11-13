/* f_0x100bda30 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the global pointer at 0x10578448 is null, return 0; otherwise tail-call 0x10161720 with the original stack argument and the global pointer in ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100bda30(Guest* g)
{
    const uint32_t self = rd32(COW_IMG(0x10578448u));
    if (self == 0u)
    {
        return 0u;
    }

    const uint32_t sp0 = g->esp;
    const uint32_t arg = rd32(sp0 + 4u);

    /* Preserve the original's memory touch on the tail path. */
    wr32(sp0 + 4u, arg);

    /*
     * The original jumps to 0x10161720 with:
     *   ecx = global pointer
     *   eax = stack argument
     *   esp = original entry esp
     *
     * Emulate the tail call by invoking the target with the same logical
     * arguments.  The target is treated as a thiscall-style callee because
     * ecx is deliberately loaded from the global and left live for the jump.
     */
    g->eax = arg;
    g->ecx = self;
    g->esp = sp0;

    return cow_thiscall(g, COW_IMG(0x10161720u), self, 1u, arg);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100bda30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100bda30(g);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
