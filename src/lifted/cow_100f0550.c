/* f_0x100f0550 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the global pointer at 0x104df770 is nonzero, copies the first byte of the argument string/pointer to offset 0x15114 of that block and returns 1; otherwise returns 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_100f0550(Guest* g, uint32_t global, uint32_t param)
{
    if (global == 0u)
    {
        return 0u;
    }

    const uint32_t byte = rd8(param);

    wr8(global + 0x15114u, (uint8_t)byte);

    g->edx = (g->edx & 0xFFFFFF00u) | byte;
    g->ecx = param;

    return (global & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f0550(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t global = rd32(COW_IMG(0x104DF770u));
    const uint32_t param = (global != 0u) ? rd32(sp0 + 4u) : 0u;

    const uint32_t result = cow_fn_100f0550(g, global, param);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
