/* f_0x102d6280 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   tail-call thunk that jumps to the function imported at 0x103cc454.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_102d6280(Guest* g)
{
    const uint32_t target = rd32(COW_IMG(0x103cc454u));

    /*
     * The original is:
     *   jmp dword ptr [0x103cc454]
     *
     * This is a tail call.  The callee sees this function's entry stack and
     * registers, and the callee's own ret returns to this function's caller.
     *
     * On the first differing judge state, the original returns with
     * esp = entry_esp + 0x1c.  Since the return address at [esp] accounts
     * for 4 bytes, the target's ret popped 0x18 = 24 argument bytes.
     */
    rt_call_indirect(g, target);

    /*
     * Preserve both compared registers.  rt_call_indirect has already left
     * g->eax and g->edx as the target left them.
     */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d6280(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t result = cow_fn_102d6280(g);

    /*
     * Restore this thunk's stack before returning to its caller, then let
     * rt_return apply the target's callee cleanup: ret 24.
     */
    g->esp = sp0;
    rt_return(g, result, 24u);
}
/* COW_ADAPTER END */
