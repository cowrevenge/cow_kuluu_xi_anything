/* f_0x10285850 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Tail-calls the function pointer stored at param_1 + 0x18 with param_1 as its sole stack argument, or returns 0 if that pointer is null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10285850(Guest* g, uint32_t param_1)
{
    const uint32_t fn = rd32(param_1 + 0x18u);

    if (fn == 0u)
    {
        g->edx = g->edx;
        return 0u;
    }

    /*
     * Original:
     *   mov dword ptr [esp + 4], ecx
     *   jmp eax
     *
     * This is a tail call to a cdecl function pointer taking one stack argument.
     * The thunk itself returns with a bare ret, so the adapter will use rt_return(..., 0u).
     */
    const uint32_t result = cow_cdecl(g, fn, 1u, param_1);

    /*
     * Preserve edx exactly as the tail-called callee left it.  The helper updates
     * g->edx when it executes the callee; if the callee is an imported function,
     * the helper is responsible for the same observable register effects.
     */
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10285850(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_10285850(g, param_1);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
