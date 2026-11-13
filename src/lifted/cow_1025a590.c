/* f_0x1025a590 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   tail-jump thunk that sets ECX to a fixed global object and jumps to 0x10257860.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1025a590(Guest* g)
{
    const uint32_t target = COW_IMG(0x10257860u);
    const uint32_t self = COW_IMG(0x10669454u);

    /*
     * Original:
     *   mov ecx, 0x10669454
     *   jmp 0x10257860
     *
     * This is the classic fixed-`this` tail thunk.  The callee is reached
     * with ECX set to the fixed object and with the caller's stack left
     * exactly as it was.  Use thiscall: ECX is the self pointer, and any
     * stack arguments / cleanup are handled by the target's own ret.
     */
    return cow_thiscall(g, target, self, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025a590(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1025a590(g);
    g->esp = sp0;

    /*
     * The target at 0x10257860 is itself a tail thunk with no explicit ret
     * given here.  The original 0x1025a590 pushes no stack arguments and
     * consumes none itself, so the caller-visible ESP after return is the
     * callee's normal cleanup.  With stack_args=0 and no visible `ret N`,
     * use 0.
     */
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
