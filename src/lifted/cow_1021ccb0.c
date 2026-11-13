/* f_0x1021ccb0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns 1 if the global at 0x104DFD98 is zero, otherwise returns the global with its low byte set to whether *(self+0x14) differs from *(global+0x198C8).

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1021ccb0(Guest* g, uint32_t self)
{
    (void)g;

    const uint32_t global = rd32(COW_IMG(0x104DFD98u));

    if (global == 0u)
    {
        return 1u;
    }

    const uint32_t a = rd32(self + 0x14u);
    const uint32_t b = rd32(global + 0x198C8u);

    return (global & 0xFFFFFF00u) | (a != b ? 1u : 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021ccb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1021ccb0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
