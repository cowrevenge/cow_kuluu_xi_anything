/* f_0x101f1b80 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the sole stack argument equals 0x200, loads a global into ecx and calls FUN_1015b8a0; otherwise returns immediately.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_101f1b80(Guest* g, uint32_t param_1)
{
    if (param_1 != 0x200u)
    {
        /* The original does not modify eax or edx on this path. */
        return g->eax;
    }

    g->ecx = rd32(COW_IMG(0x10621808u));

    uint32_t eax = cow_cdecl(g, COW_IMG(0x1015b8a0u), 0);
    g->eax = eax;

    /* Preserve whatever the call left in edx. */
    g->edx = g->edx;

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f1b80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_101f1b80(g, param_1);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
