/* f_0x10205640 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the byte argument equals 1, loads ecx from a global and calls a cdecl thunk with (0, 2); otherwise returns immediately.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10205640(Guest* g, uint32_t param)
{
    if ((uint8_t)param == 1u)
    {
        g->ecx = rd32(COW_IMG(0x1057847cu));
        cow_cdecl(g, COW_IMG(0x10150cc0u), 2u, 0u, 2u);
    }

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10205640(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd8(sp0 + 4u);

    const uint32_t result = cow_fn_10205640(g, param);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
