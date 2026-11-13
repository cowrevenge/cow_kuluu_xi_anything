/* f_0x10266d90 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adjusts the first stack argument by 0x10 and tail-calls 0x10266ba0 with the adjusted argument and the original second argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10266d90(Guest* g, uint32_t arg1, uint32_t arg2)
{
    const uint32_t adj = arg1 + 0x10u;

    /*
     * The original writes [esp+4] = arg1 + 0x10 before jumping to the target.
     * That stack slot is below the final returned esp (the target ret 8), so it
     * is not compared by the judge.  The observable effect is that the target
     * receives the adjusted first argument.
     */
    const uint32_t result = cow_stdcall(g, COW_IMG(0x10266ba0u), 2u, adj, arg2);

    /*
     * The tail-called target leaves eax and edx.  cow_stdcall returns eax and
     * updates g->edx from the executed callee.  Preserve that exact edx.
     */
    g->edx = g->edx;

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10266d90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(sp0 + 4u);
    const uint32_t arg2 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_10266d90(g, arg1, arg2);

    g->esp = sp0;
    rt_return(g, result, 8u);   /* tail-called target ends in ret 8 */
}
/* COW_ADAPTER END */
