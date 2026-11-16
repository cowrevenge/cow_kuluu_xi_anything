/* f_0x10328599 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   sets eax to a fixed image address and tail-calls FUN_10316337 with the original stack arguments.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10328599(Guest* g, uint32_t sp0)
{
    g->eax = COW_IMG(0x1034C9D8u);

    /*
     * This is a tail call:
     *
     *   10328599: mov eax, 0x1034c9d8
     *   1032859e: jmp  0x10316337
     *
     * FUN_10316337 is entered with the same stack pointer as this function.
     * Its bare `ret` returns to this function's caller.
     *
     * To make cow_cdecl emulate that while still using the existing stack
     * arguments at:
     *
     *   [sp0 +  4] param_1
     *   [sp0 +  8] param_2
     *   [sp0 + 12] param_3
     *   [sp0 + 16] param_4
     *
     * enter the helper with esp = sp0 + 4.  cow_cdecl will push its own
     * return address at sp0, leaving the callee's esp = sp0, so the callee's
     * stack arguments are the original ones.  If the callee writes through
     * those argument slots, the writes are visible in the caller's stack.
     */
    g->esp = sp0 + 4u;
    cow_cdecl(g, COW_IMG(0x10316337u), 0u);

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10328599(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10328599(g, sp0);

    g->esp = sp0;
    rt_return(g, result, 0u);   /* target ends in a bare ret */
}
/* COW_ADAPTER END */
