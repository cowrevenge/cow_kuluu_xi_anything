/* f_0x100f28b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If a global pointer is set and the first argument is null, calls a helper with the second argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_100f28b0(Guest* g, uint32_t global, uint32_t arg0, uint32_t arg1)
{
    if (global == 0u)
    {
        /* Original did not write eax or edx on this path. */
        return g->eax;
    }

    if (arg0 != 0u)
    {
        /* Original did not write edx on this path. */
        return arg0;
    }

    /*
     * Original:
     *   mov eax, [esp + 8]
     *   push eax
     *   call 0x100f27e0
     *   ret
     *
     * ecx has already been loaded with the global value by the original, and the
     * callee is described as __thiscall with one stack argument popped by the callee.
     */
    cow_thiscall(g, COW_IMG(0x100f27e0u), global, 1u, arg1);

    /* eax and edx are whatever the callee left behind. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f28b0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    /*
     * Read only the stack arguments the original would read on this path.
     * If the global is zero, the original returns before touching [esp+4] or [esp+8].
     */
    const uint32_t global = rd32(COW_IMG(0x104DF908u));

    uint32_t arg0 = 0u;
    uint32_t arg1 = 0u;

    if (global != 0u)
    {
        arg0 = rd32(sp0 + 4u);

        if (arg0 == 0u)
        {
            arg1 = rd32(sp0 + 8u);
        }
    }

    const uint32_t result = cow_fn_100f28b0(g, global, arg0, arg1);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
