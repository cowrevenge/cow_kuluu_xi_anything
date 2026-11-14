/* f_0x102253c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns eax with its low byte set to 1 when the first 16-bit word at the non-null argument is in [0x4C, 0x61], otherwise with its low byte cleared, preserving the other bytes of eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102253c0(Guest* g, uint32_t param)
{
    uint32_t eax = param;
    uint16_t w;

    (void)g;

    if (eax != 0u)
    {
        w = (uint16_t)rd16(eax);
        eax = (eax & 0xFFFF0000u) | (uint32_t)w;

        if (w >= 0x4Cu && w <= 0x61u)
        {
            eax = (eax & 0xFFFFFF00u) | 1u;
        }
        else
        {
            eax = (eax & 0xFFFFFF00u);
        }
    }
    else
    {
        eax = (eax & 0xFFFFFF00u);
    }

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102253c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_102253c0(g, param);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
