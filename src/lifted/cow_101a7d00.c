/* f_0x101a7d00 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_100dc120, subtracts a global dword from its result, and returns that value with its low byte set to 1 if the unsigned result is above 0x2328, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101a7d00(Guest* g)
{
    uint32_t eax = cow_cdecl(g, COW_IMG(0x100dc120u), 0u);
    uint32_t v = (uint32_t)(eax - rd32(COW_IMG(0x106627e4u)));

    /* cmp eax, 0x2328 / seta al: unsigned above, preserving upper bits of eax */
    return (v & 0xFFFFFF00u) | (v > 0x2328u ? 1u : 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a7d00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101a7d00(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
