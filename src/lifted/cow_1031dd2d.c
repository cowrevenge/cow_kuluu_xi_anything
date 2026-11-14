/* f_0x1031dd2d - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_1032466a with the two stack arguments unless the first argument is -1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_1031dd2d(Guest* g, uint32_t param1, uint32_t param2)
{
    if (param1 == 0xFFFFFFFFu)
    {
        /* Original leaves eax and edx untouched on this path. */
        g->edx = g->edx;
        return g->eax;
    }

    /*
     * Original pushes param2, then param1, then calls 0x1032466a.
     * Therefore the callee sees arguments in source order: param1, param2.
     * The callee is cdecl, so the caller pops the two arguments.
     */
    uint32_t eax = cow_cdecl(g, COW_IMG(0x1032466au), 2u, param1, param2);

    /*
     * The original does not save/restore edx around the call, so whatever
     * the callee leaves in edx is what is returned to the caller.
     * cow_cdecl updates g->edx by executing the callee.
     */
    g->edx = g->edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031dd2d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_1031dd2d(g, param1, param2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
