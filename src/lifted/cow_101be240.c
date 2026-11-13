/* f_0x101be240 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns 0 in the low byte of the incoming EAX when the second stack argument's low byte is 1; otherwise returns 1 if the first stack argument's low word is 0x2e, else 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101be240(Guest* g, uint32_t eax_in, uint32_t arg1_low16, uint32_t arg2_low8)
{
    (void)g;

    if ((uint8_t)arg2_low8 == 1u)
    {
        return eax_in & 0xFFFFFF00u;
    }

    return ((uint16_t)arg1_low16 == 0x2eu) ? 1u : 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101be240(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t eax_in = g->eax;

    const uint32_t arg2_low8 = rd8(sp0 + 8u);
    uint32_t arg1_low16 = 0u;

    if ((uint8_t)arg2_low8 != 1u)
    {
        arg1_low16 = rd16(sp0 + 4u);
    }

    const uint32_t result = cow_fn_101be240(g, eax_in, arg1_low16, arg2_low8);

    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
