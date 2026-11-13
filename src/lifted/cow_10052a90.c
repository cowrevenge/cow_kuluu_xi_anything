/* f_0x10052a90 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 1 in AL (preserving EAX's upper bits) when bits 2 and 3 of the byte at [this+0x10C] are both set, otherwise returns 0 in AL.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10052a90(Guest* g, uint32_t self)
{
    (void)g;
    const uint32_t eax = rd32(self + 0x10Cu);
    const uint32_t al = eax & 0xFFu;

    if ((al & 4u) != 0u && (al & 8u) != 0u)
    {
        return (eax & 0xFFFFFF00u) | 1u;
    }

    return eax & 0xFFFFFF00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10052a90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10052a90(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
