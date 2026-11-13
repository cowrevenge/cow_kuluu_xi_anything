/* f_0x100f95e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Stores the dword at [arg2 + 4] into [arg0 + 0x3aeac], returns arg2 with its low byte forced to 1, and leaves edx equal to arg0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_100f95e0(Guest* g, uint32_t arg0, uint32_t arg1, uint32_t arg2)
{
    (void)arg1;

    g->eax = arg2;
    g->edx = arg0;

    const uint32_t ecx = rd32((uint32_t)(arg2 + 4u));
    g->ecx = ecx;

    const uint32_t eax = (arg2 & 0xFFFFFF00u) | 1u;
    g->eax = eax;

    wr32((uint32_t)(arg0 + 0x3AEACu), ecx);

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f95e0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t arg2 = rd32((uint32_t)(sp0 + 0xCu));
    const uint32_t arg0 = rd32((uint32_t)(sp0 + 4u));

    const uint32_t result = cow_fn_100f95e0(g, arg0, 0u, arg2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
