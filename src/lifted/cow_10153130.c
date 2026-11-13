/* f_0x10153130 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 1 when the first byte sign-extends to -6 after being OR-combined with the shifted second byte; leaves edx as the sign-extended first byte.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10153130(Guest* g, uint32_t ptr)
{
    uint32_t b1 = rd8(ptr + 1u);
    uint32_t ecx = (uint32_t)(int32_t)(int8_t)b1;

    uint32_t b0 = rd8(ptr);
    uint32_t edx = (uint32_t)(int32_t)(int8_t)b0;

    ecx = (uint32_t)(ecx << 8);
    ecx = (uint32_t)(ecx | edx);

    g->ecx = ecx;
    g->edx = edx;

    return (ecx == 0xFFFFFFFAu) ? 1u : 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10153130(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t ptr = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_10153130(g, ptr);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
