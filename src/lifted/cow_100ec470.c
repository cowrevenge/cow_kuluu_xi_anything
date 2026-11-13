/* f_0x100ec470 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the global pointer with its low byte set to 1 if the byte at offset 0x19896 is >= 0x1e, otherwise with its low byte cleared; returns 0 if the global pointer is null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100ec470(Guest* g)
{
    (void)g;

    const uint32_t eax = rd32(COW_IMG(0x104dfd98u));

    if (eax == 0u)
    {
        return 0u;
    }

    if (rd8(eax + 0x19896u) < 0x1eu)
    {
        return eax & 0xFFFFFF00u;
    }

    return (eax & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ec470(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100ec470(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
