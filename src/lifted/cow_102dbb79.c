/* f_0x102dbb79 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies two fields from the object at [param+0x14] into its first two fields and returns that object pointer with its low byte forced to 1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102dbb79(Guest* g, uint32_t param)
{
    const uint32_t p = rd32(param + 0x14u);

    const uint32_t v1 = rd32(p + 0x1cu);
    g->ecx = v1;
    wr32(p, v1);

    const uint32_t v2 = rd32(p + 0x20u);
    g->ecx = v2;
    wr32(p + 4u, v2);

    /* edx is never written by the original, so leave g->edx alone. */
    return (p & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102dbb79(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_102dbb79(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
