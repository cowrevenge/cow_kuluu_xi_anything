/* f_0x1010f680 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the pointer stored at self+8 with its low byte cleared if the fields at +4 and +8 are both nonzero, otherwise with its low byte set to 1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1010f680(Guest* g, uint32_t self)
{
    uint32_t obj;
    uint32_t upper;
    uint32_t first;
    uint32_t second;

    (void)g;

    obj = rd32(self + 8u);
    upper = obj & 0xFFFFFF00u;

    first = rd32(obj + 4u);
    if (first == 0u)
    {
        return upper | 1u;
    }

    second = rd32(obj + 8u);
    if (second == 0u)
    {
        return upper | 1u;
    }

    return upper;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010f680(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1010f680(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
