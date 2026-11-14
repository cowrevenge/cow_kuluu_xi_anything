/* f_0x101da710 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the byte argument is nonzero and the global pointer at 0x10663428 is nonzero, clears the 16-bit field at offset 0x89e; returns the resulting eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_101da710(Guest* g, uint32_t param)
{
    if ((uint8_t)param == 0u)
    {
        return g->eax & 0xFFFFFF00u;
    }

    const uint32_t ptr = rd32(COW_IMG(0x10663428u));
    if (ptr != 0u)
    {
        wr16((uint32_t)(ptr + 0x89Eu), (uint16_t)0u);
    }

    return ptr;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101da710(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd8(sp0 + 4u);
    const uint32_t result = cow_fn_101da710(g, param);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
