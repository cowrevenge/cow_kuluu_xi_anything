/* f_0x102d6243 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   Calls FUN_102e7670(1), then tail-calls the import at 0x103cc4c8 with this function's stack arguments; the target pops 8 bytes.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_102d6243(Guest* g, uint32_t sp0)
{
    cow_stdcall(g, COW_IMG(0x102e7670u), 1u, 1u);

    const uint32_t target = rd32(COW_IMG(0x103cc4c8u));

    /*
     * The original ends with:
     *     jmp dword ptr [0x103cc4c8]
     *
     * This is a tail call.  At the point of the jmp the stack is exactly as it
     * was when this function was entered: [sp0] is the caller's return address,
     * and any arguments that the caller supplied to this wrapper are still at
     * [sp0+4], [sp0+8], ...  The judge's observed final esp differs from esp by
     * 12 bytes, so the tail target executes ret 8 (two dword arguments).
     *
     * Windows API imports are stdcall; call it with the two stack arguments and
     * let the target's ret 8 be represented by rt_return(..., 8).
     */
    cow_stdcall(g, target, 2u,
                rd32(sp0 + 4u),
                rd32(sp0 + 8u));

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d6243(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_102d6243(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 8u);   /* tail target's ret 8 */
}
/* COW_ADAPTER END */
