/* f_0x101eb840 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the byte argument is nonzero, clears the byte at offset 0x5a of the object; preserves eax's upper bits and edx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_101eb840(Guest* g, uint32_t self, uint32_t param)
{
    uint32_t eax = (g->eax & 0xFFFFFF00u) | (uint8_t)param;

    if ((uint8_t)param != 0u)
    {
        wr8(self + 0x5au, 0u);
    }

    g->edx = g->edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101eb840(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t param = rd8(sp0 + 4u);
    const uint32_t result = cow_fn_101eb840(g, self, param);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
