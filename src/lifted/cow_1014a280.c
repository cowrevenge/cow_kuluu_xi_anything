/* f_0x1014a280 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns the low bit of the byte at the global pointer plus 0x40db5, preserving the upper 24 bits of that pointer; returns 0 if the global pointer is null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1014a280(Guest* g)
{
    (void)g;

    const uint32_t eax = rd32(COW_IMG(0x104DFD98u));

    if (eax == 0u)
    {
        return 0u;
    }

    const uint32_t al = rd8((uint32_t)(eax + 0x40DB5u)) & 1u;
    return (eax & 0xFFFFFF00u) | al;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014a280(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1014a280(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
