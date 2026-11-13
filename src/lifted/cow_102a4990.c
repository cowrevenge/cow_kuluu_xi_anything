/* f_0x102a4990 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Adds 0x40 to the first stack argument, stores it back, and tail-calls FUN_102b39e0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102a4990(Guest* g, uint32_t sp0)
{
    const uint32_t arg = rd32(sp0 + 4u) + 0x40u;

    wr32(sp0 + 4u, arg);

    /*
     * This is a tail jump, not a call.  FUN_102b39e0 must see the original
     * stack pointer and the modified argument already in place at [esp+4].
     *
     * cow_cdecl() emulates a call, so it will push a return address and the
     * argument.  Start with esp advanced by those 8 bytes so that after the
     * helper's pushes the callee sees esp == sp0 and [esp+4] == arg.
     */
    g->esp = sp0 + 8u;
    cow_cdecl(g, COW_IMG(0x102b39e0u), 1u, arg);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a4990(Guest* g)
{
    const uint32_t sp0 = g->esp;

    cow_fn_102a4990(g, sp0);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
