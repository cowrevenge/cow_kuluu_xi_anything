/* f_0x102309b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   scans a fixed 30-dword table for an entry whose low 12 bits are zero, returning that address, or the table end with its low byte set to 1 if none is found.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102309b0(Guest* g)
{
    (void)g;

    const uint32_t limit = COW_IMG(0x10480558u);
    uint32_t eax = COW_IMG(0x104804E0u);

    for (;;)
    {
        if ((rd32(eax) & 0xFFFu) == 0u)
        {
            return eax & 0xFFFFFF00u;
        }

        eax += 4u;

        if ((int32_t)eax >= (int32_t)limit)
        {
            break;
        }
    }

    return (eax & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102309b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_102309b0(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
