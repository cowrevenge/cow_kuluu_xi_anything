/* f_0x1028a040 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adds 0x1c to both stack arguments, stores the adjusted values back into the stack slots, and tail-calls FUN_1027eb30 with them.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1028a040(Guest* g, uint32_t sp0, uint32_t param1, uint32_t param2)
{
    const uint32_t a1 = param1 + 0x1Cu;
    const uint32_t a2 = param2 + 0x1Cu;

    /* Preserve the original's writes to the stack argument slots. */
    wr32(sp0 + 4u, a1);
    wr32(sp0 + 8u, a2);

    /*
     * Tail call to 0x1027eb30.
     *
     * The target is cdecl and ends in a bare ret, so the caller pops the
     * arguments.  To make the target see the same stack layout as the original
     * tail jump, start the helper call with esp positioned so that the helper's
     * pushed arguments and return address leave the target at sp0.
     */
    g->esp = sp0 + 12u;
    cow_cdecl(g, COW_IMG(0x1027eb30u), 2u, a1, a2);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028a040(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);

    cow_fn_1028a040(g, sp0, param1, param2);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);   /* target ends in a bare ret */
}
/* COW_ADAPTER END */
