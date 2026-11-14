/* f_0x1000d6a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the dword at 0x104566E8 with its low byte replaced by the byte at that dword plus 0xB.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1000d6a0(Guest* g)
{
    const uint32_t ptr = rd32(COW_IMG(0x104566E8u));
    const uint32_t result = (ptr & 0xFFFFFF00u) | (uint32_t)(uint8_t)rd8(ptr + 0xBu);

    /* edx is untouched by the original. */
    g->edx = g->edx;

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000d6a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1000d6a0(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
